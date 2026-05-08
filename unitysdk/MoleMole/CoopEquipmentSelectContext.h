#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { class Action; }

#define MOLEMOLE_COOPEQUIPMENTSELECTCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x18F3A6D0)

namespace MoleMole
{
	inline static constexpr unsigned int CoopEquipmentSelectContext_TypeDefinitionIndex = 56205;

	class CoopEquipmentSelectContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action* OnOnlyEquipJumpAction; // 0x28
		::System::Int32 SelectAvatarID; // 0x30
		::System::Int32 SelectRobotID; // 0x34
		::System::Int32 LevelATK; // 0x38
		::System::Boolean IsHideJumpBtn; // 0x3C
		::System::Boolean IsOnlyEquipType; // 0x3D
		::System::Boolean isAvatarType; // 0x3E

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COOPEQUIPMENTSELECTCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
