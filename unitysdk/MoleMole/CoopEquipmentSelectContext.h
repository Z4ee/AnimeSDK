#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { class Action; }

#define MOLEMOLE_COOPEQUIPMENTSELECTCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1C529070)

namespace MoleMole
{
	inline static constexpr unsigned int CoopEquipmentSelectContext_TypeDefinitionIndex = 65247;

	class CoopEquipmentSelectContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action* OnOnlyEquipJumpAction; // 0x28
		::System::Boolean IsOnlyEquipType; // 0x30
		::System::Boolean isAvatarType; // 0x31
		::System::Boolean IsHideJumpBtn; // 0x32
		::System::Int32 SelectRobotID; // 0x34
		::System::Int32 LevelATK; // 0x38
		::System::Int32 SelectAvatarID; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COOPEQUIPMENTSELECTCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
