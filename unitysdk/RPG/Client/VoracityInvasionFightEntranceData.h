#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_VORACITYINVASIONFIGHTENTRANCEDATA_GET_GOTOID_OFFSET UNITYSDK_OFFSET(0xE450340)
#define RPG_CLIENT_VORACITYINVASIONFIGHTENTRANCEDATA_GET_ISOPEN_OFFSET UNITYSDK_OFFSET(0xE450360)
#define RPG_CLIENT_VORACITYINVASIONFIGHTENTRANCEDATA_SET_GOTOID_OFFSET UNITYSDK_OFFSET(0xE450350)
#define RPG_CLIENT_VORACITYINVASIONFIGHTENTRANCEDATA_SET_ISOPEN_OFFSET UNITYSDK_OFFSET(0xE450370)
#define RPG_CLIENT_VORACITYINVASIONFIGHTENTRANCEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xE450380)

namespace RPG::Client
{
	inline static constexpr unsigned int VoracityInvasionFightEntranceData_TypeDefinitionIndex = 68261;

	class VoracityInvasionFightEntranceData : public ::System::Object
	{
	public:
		::System::UInt32 _GotoID_k__BackingField; // 0x10
		::System::Boolean _IsOpen_k__BackingField; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VORACITYINVASIONFIGHTENTRANCEDATA__CTOR_OFFSET))(this);
		}

		::System::UInt32 get_GotoID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VORACITYINVASIONFIGHTENTRANCEDATA_GET_GOTOID_OFFSET))(this);
		}

		::System::Void set_GotoID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_VORACITYINVASIONFIGHTENTRANCEDATA_SET_GOTOID_OFFSET))(this, a1);
		}

		::System::Boolean get_IsOpen()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VORACITYINVASIONFIGHTENTRANCEDATA_GET_ISOPEN_OFFSET))(this);
		}

		::System::Void set_IsOpen(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_VORACITYINVASIONFIGHTENTRANCEDATA_SET_ISOPEN_OFFSET))(this, a1);
		}
	};
}
