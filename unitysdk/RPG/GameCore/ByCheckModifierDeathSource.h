#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ModifierDeathSource.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCHECKMODIFIERDEATHSOURCE_METHOD_4_B31C504FCF3370DE_OFFSET UNITYSDK_OFFSET(0x19CCA070)
#define RPG_GAMECORE_BYCHECKMODIFIERDEATHSOURCE_METHOD_4_D85D3C7C7CC536EF_OFFSET UNITYSDK_OFFSET(0x19CCA030)
#define RPG_GAMECORE_BYCHECKMODIFIERDEATHSOURCE_METHOD_4_E364DC349EAA7FFD_OFFSET UNITYSDK_OFFSET(0x19CCA220)
#define RPG_GAMECORE_BYCHECKMODIFIERDEATHSOURCE_METHOD_4_EEA67D247032D7CA_OFFSET UNITYSDK_OFFSET(0x19CCA250)
#define RPG_GAMECORE_BYCHECKMODIFIERDEATHSOURCE__CTOR_OFFSET UNITYSDK_OFFSET(0x19CCA060)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCheckModifierDeathSource_TypeDefinitionIndex = 22222;

	class ByCheckModifierDeathSource : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::ModifierDeathSource DeathSource; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKMODIFIERDEATHSOURCE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_D85D3C7C7CC536EF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCheckModifierDeathSource*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCheckModifierDeathSource*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKMODIFIERDEATHSOURCE_METHOD_4_D85D3C7C7CC536EF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_B31C504FCF3370DE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCheckModifierDeathSource* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCheckModifierDeathSource*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKMODIFIERDEATHSOURCE_METHOD_4_B31C504FCF3370DE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_E364DC349EAA7FFD(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckModifierDeathSource*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckModifierDeathSource*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKMODIFIERDEATHSOURCE_METHOD_4_E364DC349EAA7FFD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_EEA67D247032D7CA(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckModifierDeathSource* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckModifierDeathSource*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKMODIFIERDEATHSOURCE_METHOD_4_EEA67D247032D7CA_OFFSET))(a1, a2);
		}
	};
}
