#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_SHOWEVOLVEBUILDGEARSELECTINBATTLE_METHOD_3_3097F67FF7FCF859_OFFSET UNITYSDK_OFFSET(0x176F9A90)
#define RPG_GAMECORE_SHOWEVOLVEBUILDGEARSELECTINBATTLE_METHOD_3_3E587C535A578BF7_OFFSET UNITYSDK_OFFSET(0x176F9B10)
#define RPG_GAMECORE_SHOWEVOLVEBUILDGEARSELECTINBATTLE__CTOR_OFFSET UNITYSDK_OFFSET(0x176F9AE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowEvolveBuildGearSelectInBattle_TypeDefinitionIndex = 20698;

	class ShowEvolveBuildGearSelectInBattle : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::DynamicFloat*>* SpecifiedGearIDList; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnSelect; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWEVOLVEBUILDGEARSELECTINBATTLE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_3097F67FF7FCF859(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowEvolveBuildGearSelectInBattle*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowEvolveBuildGearSelectInBattle*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWEVOLVEBUILDGEARSELECTINBATTLE_METHOD_3_3097F67FF7FCF859_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_3E587C535A578BF7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowEvolveBuildGearSelectInBattle* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowEvolveBuildGearSelectInBattle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWEVOLVEBUILDGEARSELECTINBATTLE_METHOD_3_3E587C535A578BF7_OFFSET))(a1, a2);
		}
	};
}
