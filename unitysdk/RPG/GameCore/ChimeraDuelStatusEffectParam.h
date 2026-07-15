#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChimeraDuelEffectParam.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ChimeraDuelStatusConfig; }

#define RPG_GAMECORE_CHIMERADUELSTATUSEFFECTPARAM_METHOD_3_1B9DED232613887E_OFFSET UNITYSDK_OFFSET(0x1C2486D0)
#define RPG_GAMECORE_CHIMERADUELSTATUSEFFECTPARAM_METHOD_3_BD65E4F31A9D2E06_OFFSET UNITYSDK_OFFSET(0x1C248670)
#define RPG_GAMECORE_CHIMERADUELSTATUSEFFECTPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2486C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelStatusEffectParam_TypeDefinitionIndex = 15401;

	class ChimeraDuelStatusEffectParam : public ::RPG::GameCore::BaseChimeraDuelEffectParam
	{
	public:
		::Il2CppArray<::RPG::GameCore::ChimeraDuelStatusConfig*>* StatusConfig; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELSTATUSEFFECTPARAM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_BD65E4F31A9D2E06(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelStatusEffectParam*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelStatusEffectParam*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELSTATUSEFFECTPARAM_METHOD_3_BD65E4F31A9D2E06_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_1B9DED232613887E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelStatusEffectParam* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelStatusEffectParam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELSTATUSEFFECTPARAM_METHOD_3_1B9DED232613887E_OFFSET))(a1, a2);
		}
	};
}
