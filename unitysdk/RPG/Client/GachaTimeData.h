#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_GACHATIMEDATA_GET_BEGINTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x9758610)
#define RPG_CLIENT_GACHATIMEDATA_GET_ENDTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x9758630)
#define RPG_CLIENT_GACHATIMEDATA_GET_GACHAID_OFFSET UNITYSDK_OFFSET(0x97585F0)
#define RPG_CLIENT_GACHATIMEDATA_SET_BEGINTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x9758620)
#define RPG_CLIENT_GACHATIMEDATA_SET_ENDTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x9758640)
#define RPG_CLIENT_GACHATIMEDATA_SET_GACHAID_OFFSET UNITYSDK_OFFSET(0x9758600)
#define RPG_CLIENT_GACHATIMEDATA_UPDATE_OFFSET UNITYSDK_OFFSET(0x9752730)
#define RPG_CLIENT_GACHATIMEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9752720)

namespace RPG::Client
{
	inline static constexpr unsigned int GachaTimeData_TypeDefinitionIndex = 52226;

	class GachaTimeData : public ::System::Object
	{
	public:
		::System::UInt32 _EndTimeStamp_k__BackingField; // 0x10
		::System::UInt32 _GachaID_k__BackingField; // 0x14
		::System::UInt32 _BeginTimeStamp_k__BackingField; // 0x18

		::System::Void _ctor(::System::UInt32 id, ::System::UInt32 beginTimeStamp, ::System::UInt32 endTimeStamp)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHATIMEDATA__CTOR_OFFSET))(this, id, beginTimeStamp, endTimeStamp);
		}

		::System::Void Update(::System::UInt32 beginTimeStamp, ::System::UInt32 endTimeStamp)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHATIMEDATA_UPDATE_OFFSET))(this, beginTimeStamp, endTimeStamp);
		}

		::System::UInt32 get_GachaID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHATIMEDATA_GET_GACHAID_OFFSET))(this);
		}

		::System::Void set_GachaID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHATIMEDATA_SET_GACHAID_OFFSET))(this, value);
		}

		::System::UInt32 get_BeginTimeStamp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHATIMEDATA_GET_BEGINTIMESTAMP_OFFSET))(this);
		}

		::System::Void set_BeginTimeStamp(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHATIMEDATA_SET_BEGINTIMESTAMP_OFFSET))(this, value);
		}

		::System::UInt32 get_EndTimeStamp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHATIMEDATA_GET_ENDTIMESTAMP_OFFSET))(this);
		}

		::System::Void set_EndTimeStamp(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHATIMEDATA_SET_ENDTIMESTAMP_OFFSET))(this, value);
		}
	};
}
