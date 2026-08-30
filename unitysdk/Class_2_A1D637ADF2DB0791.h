#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9CEAB4C068D9D9DB.h"
#include "unitysdk/RPG/GameCore/AdventureFeatureNormalActiveReason.h"
#include "unitysdk/RPG/GameCore/AdventureModifierBehaviorFlag.h"

namespace RPG::GameCore { class GameEntity; }

#define CLASS_2_A1D637ADF2DB0791_GET_FLAG_OFFSET UNITYSDK_OFFSET(0x17F3D860)
#define CLASS_2_A1D637ADF2DB0791_METHOD_2_A72673A79DCC4200_OFFSET UNITYSDK_OFFSET(0x17F3D740)
#define CLASS_2_A1D637ADF2DB0791__CTOR_OFFSET UNITYSDK_OFFSET(0x17F3D730)

inline static constexpr unsigned int Class_2_A1D637ADF2DB0791_TypeDefinitionIndex = 57193;

class Class_2_A1D637ADF2DB0791 : public ::Class_1_9CEAB4C068D9D9DB
{
public:
	::RPG::GameCore::AdventureModifierBehaviorFlag _Flag_k__BackingField; // 0x68

	::System::Void _ctor(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_A1D637ADF2DB0791__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_A72673A79DCC4200(::System::Boolean a1, ::System::Boolean a2, ::RPG::GameCore::AdventureFeatureNormalActiveReason a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::RPG::GameCore::AdventureFeatureNormalActiveReason))((::PBYTE)hIl2Cpp + CLASS_2_A1D637ADF2DB0791_METHOD_2_A72673A79DCC4200_OFFSET))(this, a1, a2, a3);
	}

	::RPG::GameCore::AdventureModifierBehaviorFlag get_Flag()
	{
		return ((::RPG::GameCore::AdventureModifierBehaviorFlag(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A1D637ADF2DB0791_GET_FLAG_OFFSET))(this);
	}
};
