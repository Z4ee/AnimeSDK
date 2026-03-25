#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BaseChimeraDuelEntitiesSelectorConfig; }
namespace RPG::GameCore { class ChimeraDuelEffectConfig; }

#define RPG_GAMECORE_CHIMERADUELMODIFIER_METHOD_2_34412B2EFCA27E8F_OFFSET UNITYSDK_OFFSET(0x170A08C0)
#define RPG_GAMECORE_CHIMERADUELMODIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0x170A0A30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelModifier_TypeDefinitionIndex = 14712;

	class ChimeraDuelModifier : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig*>* TargetSelector; // 0x10
		::Il2CppArray<::RPG::GameCore::ChimeraDuelEffectConfig*>* Effects; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELMODIFIER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_34412B2EFCA27E8F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelModifier*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelModifier*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELMODIFIER_METHOD_2_34412B2EFCA27E8F_OFFSET))(a1, a2);
		}
	};
}
