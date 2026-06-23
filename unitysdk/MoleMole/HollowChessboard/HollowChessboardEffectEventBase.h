#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_001AE495A325C93B.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWCHESSBOARDEFFECTEVENTBASE_GET_CUSTOMEVENT_OFFSET UNITYSDK_OFFSET(0x18B3A2C0)
#define MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWCHESSBOARDEFFECTEVENTBASE_SET_CUSTOMEVENT_OFFSET UNITYSDK_OFFSET(0x18B3A2D0)
#define MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWCHESSBOARDEFFECTEVENTBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x18B3A2E0)

namespace MoleMole::HollowChessboard
{
	inline static constexpr unsigned int HollowChessboardEffectEventBase_TypeDefinitionIndex = 54184;

	class HollowChessboardEffectEventBase : public ::System::Object
	{
	public:
		::System::Single DelayTime; // 0x10
		::Enum_3_001AE495A325C93B _CustomEvent_k__BackingField; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWCHESSBOARDEFFECTEVENTBASE__CTOR_OFFSET))(this);
		}

		::Enum_3_001AE495A325C93B get_CustomEvent()
		{
			return ((::Enum_3_001AE495A325C93B(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWCHESSBOARDEFFECTEVENTBASE_GET_CUSTOMEVENT_OFFSET))(this);
		}

		::System::Void set_CustomEvent(::Enum_3_001AE495A325C93B value)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_001AE495A325C93B))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWCHESSBOARDEFFECTEVENTBASE_SET_CUSTOMEVENT_OFFSET))(this, value);
		}
	};
}
