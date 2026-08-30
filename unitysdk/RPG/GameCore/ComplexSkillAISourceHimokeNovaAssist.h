#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ComplexSkillAISource.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_COMPLEXSKILLAISOURCEHIMOKENOVAASSIST_METHOD_3_3E86CD747946789C_OFFSET UNITYSDK_OFFSET(0x1D9AB080)
#define RPG_GAMECORE_COMPLEXSKILLAISOURCEHIMOKENOVAASSIST_METHOD_3_6B687CD09FA1444B_OFFSET UNITYSDK_OFFSET(0x1D9AB0C0)
#define RPG_GAMECORE_COMPLEXSKILLAISOURCEHIMOKENOVAASSIST__CTOR_OFFSET UNITYSDK_OFFSET(0x1D9AB0B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ComplexSkillAISourceHimokeNovaAssist_TypeDefinitionIndex = 15381;

	class ComplexSkillAISourceHimokeNovaAssist : public ::RPG::GameCore::ComplexSkillAISource
	{
	public:
		::System::UInt32 HimokeCharacterID; // 0x10
		::System::String* HimokeModifier; // 0x18
		::System::String* HimokeRank2Modifier; // 0x20
		::System::String* HimokeRank2CheckKey; // 0x28
		::Il2CppArray<::System::String*>* AstralExpressGroups; // 0x30
		::System::String* YellowGroupName; // 0x38
		::System::String* OverrideGroupsKey; // 0x40
		::Il2CppArray<::System::String*>* CtrlExcludeModifierNames; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAISOURCEHIMOKENOVAASSIST__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_3E86CD747946789C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ComplexSkillAISourceHimokeNovaAssist*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ComplexSkillAISourceHimokeNovaAssist*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAISOURCEHIMOKENOVAASSIST_METHOD_3_3E86CD747946789C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_6B687CD09FA1444B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ComplexSkillAISourceHimokeNovaAssist* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ComplexSkillAISourceHimokeNovaAssist*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAISOURCEHIMOKENOVAASSIST_METHOD_3_6B687CD09FA1444B_OFFSET))(a1, a2);
		}
	};
}
