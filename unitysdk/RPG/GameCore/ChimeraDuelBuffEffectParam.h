#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChimeraDuelEffectParam.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ChimeraDuelBuffConfig; }

#define RPG_GAMECORE_CHIMERADUELBUFFEFFECTPARAM_METHOD_3_0BD20A5DD06B82D7_OFFSET UNITYSDK_OFFSET(0x19637EF0)
#define RPG_GAMECORE_CHIMERADUELBUFFEFFECTPARAM_METHOD_3_211EE1A4B761F317_OFFSET UNITYSDK_OFFSET(0x19637F50)
#define RPG_GAMECORE_CHIMERADUELBUFFEFFECTPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x19637F40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelBuffEffectParam_TypeDefinitionIndex = 15240;

	class ChimeraDuelBuffEffectParam : public ::RPG::GameCore::BaseChimeraDuelEffectParam
	{
	public:
		::Il2CppArray<::RPG::GameCore::ChimeraDuelBuffConfig*>* Buffs; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELBUFFEFFECTPARAM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_0BD20A5DD06B82D7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelBuffEffectParam*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelBuffEffectParam*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELBUFFEFFECTPARAM_METHOD_3_0BD20A5DD06B82D7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_211EE1A4B761F317(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelBuffEffectParam* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelBuffEffectParam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELBUFFEFFECTPARAM_METHOD_3_211EE1A4B761F317_OFFSET))(a1, a2);
		}
	};
}
