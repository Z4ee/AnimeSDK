#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_647;

#define RPG_CLIENT_BASEGROWTHGUIDEITEM_GET_ISGROWABLE_OFFSET UNITYSDK_OFFSET(0x9172980)
#define RPG_CLIENT_BASEGROWTHGUIDEITEM_GOGROWTH_OFFSET UNITYSDK_OFFSET(0x91729A0)
#define RPG_CLIENT_BASEGROWTHGUIDEITEM_HASGROWTHCOMMAND_OFFSET UNITYSDK_OFFSET(0x9172B40)
#define RPG_CLIENT_BASEGROWTHGUIDEITEM_SETGROWABLE_OFFSET UNITYSDK_OFFSET(0x9172AA0)
#define RPG_CLIENT_BASEGROWTHGUIDEITEM_SETGROWTHCOMMAND_OFFSET UNITYSDK_OFFSET(0x9172AF0)
#define RPG_CLIENT_BASEGROWTHGUIDEITEM_SET_ISGROWABLE_OFFSET UNITYSDK_OFFSET(0x9172990)
#define RPG_CLIENT_BASEGROWTHGUIDEITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x9172B90)

namespace RPG::Client
{
	inline static constexpr unsigned int BaseGrowthGuideItem_TypeDefinitionIndex = 53219;

	class BaseGrowthGuideItem : public ::System::Object
	{
	public:
		::Class_0_16E4307DCC419505_647* _GrowthCommand; // 0x10
		::System::Boolean _IsGrowable_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGROWTHGUIDEITEM__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsGrowable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGROWTHGUIDEITEM_GET_ISGROWABLE_OFFSET))(this);
		}

		::System::Void set_IsGrowable(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGROWTHGUIDEITEM_SET_ISGROWABLE_OFFSET))(this, value);
		}

		::System::Void GoGrowth()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGROWTHGUIDEITEM_GOGROWTH_OFFSET))(this);
		}

		::System::Void SetGrowable(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGROWTHGUIDEITEM_SETGROWABLE_OFFSET))(this, value);
		}

		::System::Void SetGrowthCommand(::Class_0_16E4307DCC419505_647* command)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_647*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGROWTHGUIDEITEM_SETGROWTHCOMMAND_OFFSET))(this, command);
		}

		::System::Boolean HasGrowthCommand()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGROWTHGUIDEITEM_HASGROWTHCOMMAND_OFFSET))(this);
		}
	};
}
