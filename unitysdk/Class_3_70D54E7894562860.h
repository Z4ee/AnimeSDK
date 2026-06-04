#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"
#include "unitysdk/RPG/GameCore/StringHash.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class ModifyShield; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }

#define CLASS_3_70D54E7894562860_METHOD_3_78364E7B80AC6AFB_OFFSET UNITYSDK_OFFSET(0xB7690F0)
#define CLASS_3_70D54E7894562860_METHOD_3_8ECA1D01B63747EB_OFFSET UNITYSDK_OFFSET(0xB768EA0)
#define CLASS_3_70D54E7894562860_METHOD_3_A4F7C7DA26DD198B_OFFSET UNITYSDK_OFFSET(0xB768D90)
#define CLASS_3_70D54E7894562860_METHOD_3_F1B667460164B5A2_OFFSET UNITYSDK_OFFSET(0xB769460)
#define CLASS_3_70D54E7894562860_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB768840)
#define CLASS_3_70D54E7894562860__CTOR_OFFSET UNITYSDK_OFFSET(0xB7687D0)

inline static constexpr unsigned int Class_3_70D54E7894562860_TypeDefinitionIndex = 51571;

class Class_3_70D54E7894562860 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::ModifyShield*>
{
public:
	::RPG::GameCore::GameEntity* Field_3_0; // 0x28
	::RPG::GameCore::StringHash Field_3_1; // 0x30
	::RPG::GameCore::StringHash Field_3_2; // 0x34

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ModifyShield* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ModifyShield*))((::PBYTE)hIl2Cpp + CLASS_3_70D54E7894562860__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_70D54E7894562860_ONTASKBEGIN_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_3_A4F7C7DA26DD198B(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::TurnBasedModifierInstance* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::FixPoint, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_3_70D54E7894562860_METHOD_3_A4F7C7DA26DD198B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_8ECA1D01B63747EB(::RPG::GameCore::TurnBasedModifierInstance* a1, ::RPG::GameCore::FixPoint a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_3_70D54E7894562860_METHOD_3_8ECA1D01B63747EB_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_F1B667460164B5A2(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_3_70D54E7894562860_METHOD_3_F1B667460164B5A2_OFFSET))(this, a1);
	}

	::System::Void Method_3_78364E7B80AC6AFB(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::FixPoint a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_3_70D54E7894562860_METHOD_3_78364E7B80AC6AFB_OFFSET))(this, a1, a2);
	}
};
