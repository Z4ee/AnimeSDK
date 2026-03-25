#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_ACTIVITYHIPPLEN_HIPPLENMOVINGGOODSINPUTDATA_GET_ISCOMPLETE_OFFSET UNITYSDK_OFFSET(0x8F38490)
#define RPG_CLIENT_ACTIVITYHIPPLEN_HIPPLENMOVINGGOODSINPUTDATA_GET_ISSUCCESS_OFFSET UNITYSDK_OFFSET(0x8F384B0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_HIPPLENMOVINGGOODSINPUTDATA_GET_REQUIREINPUT_OFFSET UNITYSDK_OFFSET(0x8F38470)
#define RPG_CLIENT_ACTIVITYHIPPLEN_HIPPLENMOVINGGOODSINPUTDATA_SET_ISCOMPLETE_OFFSET UNITYSDK_OFFSET(0x8F384A0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_HIPPLENMOVINGGOODSINPUTDATA_SET_ISSUCCESS_OFFSET UNITYSDK_OFFSET(0x8F384C0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_HIPPLENMOVINGGOODSINPUTDATA_SET_REQUIREINPUT_OFFSET UNITYSDK_OFFSET(0x8F38480)
#define RPG_CLIENT_ACTIVITYHIPPLEN_HIPPLENMOVINGGOODSINPUTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x8F384D0)

namespace RPG::Client::ActivityHipplen
{
	inline static constexpr unsigned int HipplenMovingGoodsInputData_TypeDefinitionIndex = 61737;

	class HipplenMovingGoodsInputData : public ::System::Object
	{
	public:
		::System::Boolean _IsSuccess_k__BackingField; // 0x10
		::System::Boolean _IsComplete_k__BackingField; // 0x11
		::System::UInt32 _RequireInput_k__BackingField; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_HIPPLENMOVINGGOODSINPUTDATA__CTOR_OFFSET))(this);
		}

		::System::UInt32 get_RequireInput()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_HIPPLENMOVINGGOODSINPUTDATA_GET_REQUIREINPUT_OFFSET))(this);
		}

		::System::Void set_RequireInput(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_HIPPLENMOVINGGOODSINPUTDATA_SET_REQUIREINPUT_OFFSET))(this, value);
		}

		::System::Boolean get_IsComplete()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_HIPPLENMOVINGGOODSINPUTDATA_GET_ISCOMPLETE_OFFSET))(this);
		}

		::System::Void set_IsComplete(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_HIPPLENMOVINGGOODSINPUTDATA_SET_ISCOMPLETE_OFFSET))(this, value);
		}

		::System::Boolean get_IsSuccess()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_HIPPLENMOVINGGOODSINPUTDATA_GET_ISSUCCESS_OFFSET))(this);
		}

		::System::Void set_IsSuccess(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_HIPPLENMOVINGGOODSINPUTDATA_SET_ISSUCCESS_OFFSET))(this, value);
		}
	};
}
