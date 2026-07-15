#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCHECKTRIALCHARACTERDIE_METHOD_4_C32A6210AA1A9142_OFFSET UNITYSDK_OFFSET(0x19CCD1D0)
#define RPG_GAMECORE_BYCHECKTRIALCHARACTERDIE_METHOD_4_C9C7F6F8193444C9_OFFSET UNITYSDK_OFFSET(0x19CCD020)
#define RPG_GAMECORE_BYCHECKTRIALCHARACTERDIE_METHOD_4_D2DC705C7257DFD8_OFFSET UNITYSDK_OFFSET(0x19CCD060)
#define RPG_GAMECORE_BYCHECKTRIALCHARACTERDIE_METHOD_4_DD0C1B4F379D0215_OFFSET UNITYSDK_OFFSET(0x19CCD200)
#define RPG_GAMECORE_BYCHECKTRIALCHARACTERDIE__CTOR_OFFSET UNITYSDK_OFFSET(0x19CCD050)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCheckTrialCharacterDie_TypeDefinitionIndex = 22598;

	class ByCheckTrialCharacterDie : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::UInt32 CharacterID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKTRIALCHARACTERDIE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_C9C7F6F8193444C9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCheckTrialCharacterDie*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCheckTrialCharacterDie*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKTRIALCHARACTERDIE_METHOD_4_C9C7F6F8193444C9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_D2DC705C7257DFD8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCheckTrialCharacterDie* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCheckTrialCharacterDie*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKTRIALCHARACTERDIE_METHOD_4_D2DC705C7257DFD8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_C32A6210AA1A9142(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckTrialCharacterDie*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckTrialCharacterDie*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKTRIALCHARACTERDIE_METHOD_4_C32A6210AA1A9142_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_DD0C1B4F379D0215(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckTrialCharacterDie* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckTrialCharacterDie*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKTRIALCHARACTERDIE_METHOD_4_DD0C1B4F379D0215_OFFSET))(a1, a2);
		}
	};
}
