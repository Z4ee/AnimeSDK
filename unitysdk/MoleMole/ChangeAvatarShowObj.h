#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_016039B84BEA53F4.h"
#include "unitysdk/MoleMole/DisplayMessageBase.h"

class Class_1_0D6706375CDAAE8C;
class Class_2_03F4D9B3111E6159;
class Class_2_C03EC65F99EF4B16;

#define MOLEMOLE_CHANGEAVATARSHOWOBJ_EXIT_OFFSET UNITYSDK_OFFSET(0x13FF2B10)
#define MOLEMOLE_CHANGEAVATARSHOWOBJ_ONPROCESS_OFFSET UNITYSDK_OFFSET(0x13FF1A50)
#define MOLEMOLE_CHANGEAVATARSHOWOBJ_SHOWCHANGEANIM_OFFSET UNITYSDK_OFFSET(0x13FF2D30)
#define MOLEMOLE_CHANGEAVATARSHOWOBJ__CTOR_OFFSET UNITYSDK_OFFSET(0x13FF1880)

namespace MoleMole
{
	inline static constexpr unsigned int ChangeAvatarShowObj_TypeDefinitionIndex = 77662;

	class ChangeAvatarShowObj : public ::MoleMole::DisplayMessageBase
	{
	public:
		::Class_2_03F4D9B3111E6159* itemModel; // 0x28
		::Class_2_C03EC65F99EF4B16* eventModel; // 0x30
		::System::UInt64 newUid; // 0x38
		::System::Boolean notip; // 0x40
		::System::Boolean bottomPerform; // 0x41
		::System::Boolean hasJoin; // 0x42
		::System::Boolean hasShow; // 0x43
		::System::Int32 slot; // 0x44
		::System::UInt64 lastUid; // 0x48
		::Enum_3_016039B84BEA53F4 changeType; // 0x50

		::System::Void _ctor(::System::UInt64 lastUid, ::System::UInt64 newUid, ::System::Boolean notip, ::System::Boolean bottomPerform, ::System::Int32 slot, ::Enum_3_016039B84BEA53F4 changeType)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::UInt64, ::System::Boolean, ::System::Boolean, ::System::Int32, ::Enum_3_016039B84BEA53F4))((::PBYTE)hIl2Cpp + MOLEMOLE_CHANGEAVATARSHOWOBJ__CTOR_OFFSET))(this, lastUid, newUid, notip, bottomPerform, slot, changeType);
		}

		::System::Void OnProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHANGEAVATARSHOWOBJ_ONPROCESS_OFFSET))(this);
		}

		::System::Void Exit(::Class_1_0D6706375CDAAE8C* itemDataNew)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_0D6706375CDAAE8C*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHANGEAVATARSHOWOBJ_EXIT_OFFSET))(this, itemDataNew);
		}

		::System::Void ShowChangeAnim()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHANGEAVATARSHOWOBJ_SHOWCHANGEANIM_OFFSET))(this);
		}
	};
}
