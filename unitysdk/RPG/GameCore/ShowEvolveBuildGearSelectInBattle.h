#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_SHOWEVOLVEBUILDGEARSELECTINBATTLE_METHOD_3_0E190ED7BAA459E2_OFFSET UNITYSDK_OFFSET(0x1D5271A0)
#define RPG_GAMECORE_SHOWEVOLVEBUILDGEARSELECTINBATTLE_METHOD_3_58CF6F557FA05C95_OFFSET UNITYSDK_OFFSET(0x1D5271E0)
#define RPG_GAMECORE_SHOWEVOLVEBUILDGEARSELECTINBATTLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5271D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowEvolveBuildGearSelectInBattle_TypeDefinitionIndex = 22263;

	class ShowEvolveBuildGearSelectInBattle : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::DynamicFloat*>* SpecifiedGearIDList; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnSelect; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWEVOLVEBUILDGEARSELECTINBATTLE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_0E190ED7BAA459E2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowEvolveBuildGearSelectInBattle*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowEvolveBuildGearSelectInBattle*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWEVOLVEBUILDGEARSELECTINBATTLE_METHOD_3_0E190ED7BAA459E2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_58CF6F557FA05C95(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowEvolveBuildGearSelectInBattle* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowEvolveBuildGearSelectInBattle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWEVOLVEBUILDGEARSELECTINBATTLE_METHOD_3_58CF6F557FA05C95_OFFSET))(a1, a2);
		}
	};
}
