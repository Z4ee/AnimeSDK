#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_GACHATIMEDATA_GET_BEGINTIMESTAMP_OFFSET UNITYSDK_OFFSET(0xD0FD560)
#define RPG_CLIENT_GACHATIMEDATA_GET_ENDTIMESTAMP_OFFSET UNITYSDK_OFFSET(0xD0FD580)
#define RPG_CLIENT_GACHATIMEDATA_GET_GACHAID_OFFSET UNITYSDK_OFFSET(0xD0FD540)
#define RPG_CLIENT_GACHATIMEDATA_SET_BEGINTIMESTAMP_OFFSET UNITYSDK_OFFSET(0xD0FD570)
#define RPG_CLIENT_GACHATIMEDATA_SET_ENDTIMESTAMP_OFFSET UNITYSDK_OFFSET(0xD0FD590)
#define RPG_CLIENT_GACHATIMEDATA_SET_GACHAID_OFFSET UNITYSDK_OFFSET(0xD0FD550)
#define RPG_CLIENT_GACHATIMEDATA_UPDATE_OFFSET UNITYSDK_OFFSET(0xD0F4EA0)
#define RPG_CLIENT_GACHATIMEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xD0F4E90)

namespace RPG::Client
{
	inline static constexpr unsigned int GachaTimeData_TypeDefinitionIndex = 64383;

	class GachaTimeData : public ::System::Object
	{
	public:
		::System::UInt32 _GachaID_k__BackingField; // 0x10
		::System::UInt32 _EndTimeStamp_k__BackingField; // 0x14
		::System::UInt32 _BeginTimeStamp_k__BackingField; // 0x18

		::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHATIMEDATA__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Update(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHATIMEDATA_UPDATE_OFFSET))(this, a1, a2);
		}

		::System::UInt32 get_GachaID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHATIMEDATA_GET_GACHAID_OFFSET))(this);
		}

		::System::Void set_GachaID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHATIMEDATA_SET_GACHAID_OFFSET))(this, a1);
		}

		::System::UInt32 get_BeginTimeStamp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHATIMEDATA_GET_BEGINTIMESTAMP_OFFSET))(this);
		}

		::System::Void set_BeginTimeStamp(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHATIMEDATA_SET_BEGINTIMESTAMP_OFFSET))(this, a1);
		}

		::System::UInt32 get_EndTimeStamp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHATIMEDATA_GET_ENDTIMESTAMP_OFFSET))(this);
		}

		::System::Void set_EndTimeStamp(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHATIMEDATA_SET_ENDTIMESTAMP_OFFSET))(this, a1);
		}
	};
}
