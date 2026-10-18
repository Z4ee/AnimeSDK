#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/EventSystems/MoveDirection.h"

#define RPG_CLIENT_HEXROGUEMOVEINPUTDATA_GET_LEFTSTICTX_OFFSET UNITYSDK_OFFSET(0xD31BCE0)
#define RPG_CLIENT_HEXROGUEMOVEINPUTDATA_GET_LEFTSTICTY_OFFSET UNITYSDK_OFFSET(0xD31BD00)
#define RPG_CLIENT_HEXROGUEMOVEINPUTDATA_GET_MOVEDIRECTION_OFFSET UNITYSDK_OFFSET(0xD31BCC0)
#define RPG_CLIENT_HEXROGUEMOVEINPUTDATA_SET_LEFTSTICTX_OFFSET UNITYSDK_OFFSET(0xD31BCF0)
#define RPG_CLIENT_HEXROGUEMOVEINPUTDATA_SET_LEFTSTICTY_OFFSET UNITYSDK_OFFSET(0xD31BD10)
#define RPG_CLIENT_HEXROGUEMOVEINPUTDATA_SET_MOVEDIRECTION_OFFSET UNITYSDK_OFFSET(0xD31BCD0)
#define RPG_CLIENT_HEXROGUEMOVEINPUTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xD31BD20)

namespace RPG::Client
{
	inline static constexpr unsigned int HexRogueMoveInputData_TypeDefinitionIndex = 68923;

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

		::System::Void set_MoveDirection(::UnityEngine::EventSystems::MoveDirection a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::MoveDirection))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEXROGUEMOVEINPUTDATA_SET_MOVEDIRECTION_OFFSET))(this, a1);
		}

		::System::Single get_LeftStictX()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEXROGUEMOVEINPUTDATA_GET_LEFTSTICTX_OFFSET))(this);
		}

		::System::Void set_LeftStictX(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEXROGUEMOVEINPUTDATA_SET_LEFTSTICTX_OFFSET))(this, a1);
		}

		::System::Single get_LeftStictY()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEXROGUEMOVEINPUTDATA_GET_LEFTSTICTY_OFFSET))(this);
		}

		::System::Void set_LeftStictY(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEXROGUEMOVEINPUTDATA_SET_LEFTSTICTY_OFFSET))(this, a1);
		}
	};
}
