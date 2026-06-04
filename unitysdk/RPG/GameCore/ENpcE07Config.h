#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_1C30CE192ABE4C54;
class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class CharacterConfig; }
namespace RPG::GameCore { class ENpcE07AnimClipOverrideConfig; }
namespace RPG::GameCore { class SkillAbilityConfig; }
namespace RPG::GameCore { class SkillConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ENPCE07CONFIG_METHOD_2_244455AF3EDE21FA_OFFSET UNITYSDK_OFFSET(0x196D2C50)
#define RPG_GAMECORE_ENPCE07CONFIG_METHOD_2_603BA52744C1049D_OFFSET UNITYSDK_OFFSET(0x196D3020)
#define RPG_GAMECORE_ENPCE07CONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x196D3010)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ENpcE07Config_TypeDefinitionIndex = 15697;

	class ENpcE07Config : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::SkillConfig*>* AddSkillList; // 0x10
		::Il2CppArray<::System::String*>* AddAnimEventConfigList; // 0x18
		::Il2CppArray<::System::String*>* AddExtraPreloadSearchList; // 0x20
		::Il2CppArray<::System::String*>* AddAbilityList; // 0x28
		::Il2CppArray<::RPG::GameCore::SkillAbilityConfig*>* AddSkillAbilityList; // 0x30
		::Class_1_1C30CE192ABE4C54* AddDynamicValues; // 0x38
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* AddDynamicStrings; // 0x40
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* AddCustomValues; // 0x48
		::Il2CppArray<::RPG::GameCore::ENpcE07AnimClipOverrideConfig*>* AnimClipOverrideList; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENPCE07CONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_244455AF3EDE21FA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ENpcE07Config*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ENpcE07Config*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENPCE07CONFIG_METHOD_2_244455AF3EDE21FA_OFFSET))(a1, a2);
		}

		::System::Void Method_2_603BA52744C1049D(::RPG::GameCore::CharacterConfig* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterConfig*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENPCE07CONFIG_METHOD_2_603BA52744C1049D_OFFSET))(this, a1, a2);
		}
	};
}
