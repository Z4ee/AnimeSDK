#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterConfig.h"
#include "unitysdk/RPG/GameCore/CharacterOverrideConfig_OverrideSkillConfigContext.h"

class Class_1_1C30CE192ABE4C54;
class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class SkillAbilityConfig; }
namespace RPG::GameCore { class SkillConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_CHARACTEROVERRIDECONFIG_METHOD_3_14EC74BA8FE5D0ED_OFFSET UNITYSDK_OFFSET(0x19611280)
#define RPG_GAMECORE_CHARACTEROVERRIDECONFIG_METHOD_3_2814500FC2096A12_OFFSET UNITYSDK_OFFSET(0x19612540)
#define RPG_GAMECORE_CHARACTEROVERRIDECONFIG_METHOD_3_53216CC327ED0939_OFFSET UNITYSDK_OFFSET(0x19611D60)
#define RPG_GAMECORE_CHARACTEROVERRIDECONFIG_METHOD_3_64D48032FAFF8ED5_OFFSET UNITYSDK_OFFSET(0x19611390)
#define RPG_GAMECORE_CHARACTEROVERRIDECONFIG_METHOD_3_929DB29232C80A02_OFFSET UNITYSDK_OFFSET(0x19612610)
#define RPG_GAMECORE_CHARACTEROVERRIDECONFIG_METHOD_3_B2525A63B6135506_OFFSET UNITYSDK_OFFSET(0x1960A370)
#define RPG_GAMECORE_CHARACTEROVERRIDECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1960A280)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterOverrideConfig_TypeDefinitionIndex = 15695;

	class CharacterOverrideConfig : public ::RPG::GameCore::CharacterConfig
	{
	public:
		::System::String* ParentConfigPath; // 0x210
		::Il2CppArray<::System::String*>* DLCPathList; // 0x218
		::Il2CppArray<::System::String*>* InheritSkillList; // 0x220
		::Il2CppArray<::System::String*>* ReplacedSkillList; // 0x228
		::Class_1_1C30CE192ABE4C54* AdditiveDynamicValues; // 0x230

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROVERRIDECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_14EC74BA8FE5D0ED(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CharacterOverrideConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CharacterOverrideConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROVERRIDECONFIG_METHOD_3_14EC74BA8FE5D0ED_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B2525A63B6135506(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CharacterOverrideConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CharacterOverrideConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROVERRIDECONFIG_METHOD_3_B2525A63B6135506_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_64D48032FAFF8ED5(::RPG::GameCore::CharacterOverrideConfig_OverrideSkillConfigContext a1, ::System::Collections::Generic::List_1<::RPG::GameCore::SkillConfig*>*& a2, ::System::Collections::Generic::List_1<::RPG::GameCore::SkillAbilityConfig*>*& a3)
		{
			return ((::System::Void(*)(::RPG::GameCore::CharacterOverrideConfig_OverrideSkillConfigContext, ::System::Collections::Generic::List_1<::RPG::GameCore::SkillConfig*>*&, ::System::Collections::Generic::List_1<::RPG::GameCore::SkillAbilityConfig*>*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROVERRIDECONFIG_METHOD_3_64D48032FAFF8ED5_OFFSET))(a1, a2, a3);
		}

		static ::System::Void Method_3_53216CC327ED0939(::RPG::GameCore::CharacterOverrideConfig_OverrideSkillConfigContext a1, ::System::Collections::Generic::List_1<::RPG::GameCore::SkillConfig*>*& a2, ::System::Collections::Generic::List_1<::RPG::GameCore::SkillAbilityConfig*>*& a3)
		{
			return ((::System::Void(*)(::RPG::GameCore::CharacterOverrideConfig_OverrideSkillConfigContext, ::System::Collections::Generic::List_1<::RPG::GameCore::SkillConfig*>*&, ::System::Collections::Generic::List_1<::RPG::GameCore::SkillAbilityConfig*>*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROVERRIDECONFIG_METHOD_3_53216CC327ED0939_OFFSET))(a1, a2, a3);
		}

		static ::System::Int32 Method_3_2814500FC2096A12(::Il2CppArray<::RPG::GameCore::SkillConfig*>* a1, ::System::String* a2)
		{
			return ((::System::Int32(*)(::Il2CppArray<::RPG::GameCore::SkillConfig*>*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROVERRIDECONFIG_METHOD_3_2814500FC2096A12_OFFSET))(a1, a2);
		}

		static ::System::Int32 Method_3_929DB29232C80A02(::Il2CppArray<::RPG::GameCore::SkillAbilityConfig*>* a1, ::System::String* a2)
		{
			return ((::System::Int32(*)(::Il2CppArray<::RPG::GameCore::SkillAbilityConfig*>*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROVERRIDECONFIG_METHOD_3_929DB29232C80A02_OFFSET))(a1, a2);
		}
	};
}
