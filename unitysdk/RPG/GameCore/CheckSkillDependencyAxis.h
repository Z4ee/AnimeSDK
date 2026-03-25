#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ConsiderationAxisConfig.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AISkillDependencyConfig; }
namespace System { class String; }

#define RPG_GAMECORE_CHECKSKILLDEPENDENCYAXIS_METHOD_3_4D2BC474D012BC49_OFFSET UNITYSDK_OFFSET(0x170764E0)
#define RPG_GAMECORE_CHECKSKILLDEPENDENCYAXIS_METHOD_3_5280C96B4DD5AA08_OFFSET UNITYSDK_OFFSET(0x17076520)
#define RPG_GAMECORE_CHECKSKILLDEPENDENCYAXIS__CTOR_OFFSET UNITYSDK_OFFSET(0x17076510)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CheckSkillDependencyAxis_TypeDefinitionIndex = 14205;

	class CheckSkillDependencyAxis : public ::RPG::GameCore::ConsiderationAxisConfig
	{
	public:
		::System::String* SkillName; // 0x10
		::Il2CppArray<::RPG::GameCore::AISkillDependencyConfig*>* DependencyConfigList; // 0x18
		::RPG::GameCore::FixPoint CheckScore; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHECKSKILLDEPENDENCYAXIS__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_4D2BC474D012BC49(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CheckSkillDependencyAxis*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CheckSkillDependencyAxis*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHECKSKILLDEPENDENCYAXIS_METHOD_3_4D2BC474D012BC49_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_5280C96B4DD5AA08(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CheckSkillDependencyAxis* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CheckSkillDependencyAxis*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHECKSKILLDEPENDENCYAXIS_METHOD_3_5280C96B4DD5AA08_OFFSET))(a1, a2);
		}
	};
}
