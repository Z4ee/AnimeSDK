#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/EventSystems/MoveDirection.h"

#define RPG_CLIENT_HEXROGUEMOVEINPUTDATA_GET_LEFTSTICTX_OFFSET UNITYSDK_OFFSET(0xA619770)
#define RPG_CLIENT_HEXROGUEMOVEINPUTDATA_GET_LEFTSTICTY_OFFSET UNITYSDK_OFFSET(0xA619790)
#define RPG_CLIENT_HEXROGUEMOVEINPUTDATA_GET_MOVEDIRECTION_OFFSET UNITYSDK_OFFSET(0xA619750)
#define RPG_CLIENT_HEXROGUEMOVEINPUTDATA_SET_LEFTSTICTX_OFFSET UNITYSDK_OFFSET(0xA619780)
#define RPG_CLIENT_HEXROGUEMOVEINPUTDATA_SET_LEFTSTICTY_OFFSET UNITYSDK_OFFSET(0xA6197A0)
#define RPG_CLIENT_HEXROGUEMOVEINPUTDATA_SET_MOVEDIRECTION_OFFSET UNITYSDK_OFFSET(0xA619760)
#define RPG_CLIENT_HEXROGUEMOVEINPUTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA6197B0)

namespace RPG::Client
{
	inline static constexpr unsigned int HexRogueMoveInputData_TypeDefinitionIndex = 63557;

	class HexRogueMoveInputData : public ::System::Object
	{
	public:
		::System::Single _LeftStictY_k__BackingField; // 0x10
		::UnityEngine::EventSystems::MoveDirection _MoveDirection_k__BackingField; // 0x14
		::System::Single _LeftStictX_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEXROGUEMOVEINPUTDATA__CTOR_OFFSET))(this);
		}

		::UnityEngine::EventSystems::MoveDirection get_MoveDirection()
		{
			return ((::UnityEngine::EventSystems::MoveDirection(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEXROGUEMOVEINPUTDATA_GET_MOVEDIRECTION_OFFSET))(this);
		}

		::System::Void set_MoveDirection(::UnityEngine::EventSystems::MoveDirection value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::MoveDirection))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEXROGUEMOVEINPUTDATA_SET_MOVEDIRECTION_OFFSET))(this, value);
		}

		::System::Single get_LeftStictX()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEXROGUEMOVEINPUTDATA_GET_LEFTSTICTX_OFFSET))(this);
		}

		::System::Void set_LeftStictX(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEXROGUEMOVEINPUTDATA_SET_LEFTSTICTX_OFFSET))(this, value);
		}

		::System::Single get_LeftStictY()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEXROGUEMOVEINPUTDATA_GET_LEFTSTICTY_OFFSET))(this);
		}

		::System::Void set_LeftStictY(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEXROGUEMOVEINPUTDATA_SET_LEFTSTICTY_OFFSET))(this, value);
		}
	};
}
