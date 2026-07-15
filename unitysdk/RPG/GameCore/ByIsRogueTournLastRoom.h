#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYISROGUETOURNLASTROOM_METHOD_4_1F88346E1C7B5904_OFFSET UNITYSDK_OFFSET(0x1B2A3440)
#define RPG_GAMECORE_BYISROGUETOURNLASTROOM_METHOD_4_274E0E36572365ED_OFFSET UNITYSDK_OFFSET(0x1B2A3410)
#define RPG_GAMECORE_BYISROGUETOURNLASTROOM_METHOD_4_4BBC8DE543B4992C_OFFSET UNITYSDK_OFFSET(0x1B2A3290)
#define RPG_GAMECORE_BYISROGUETOURNLASTROOM_METHOD_4_C90D4D370D8EBA67_OFFSET UNITYSDK_OFFSET(0x1B2A32D0)
#define RPG_GAMECORE_BYISROGUETOURNLASTROOM__CTOR_OFFSET UNITYSDK_OFFSET(0x1B2A32C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsRogueTournLastRoom_TypeDefinitionIndex = 21312;

	class ByIsRogueTournLastRoom : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISROGUETOURNLASTROOM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_4BBC8DE543B4992C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsRogueTournLastRoom*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsRogueTournLastRoom*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISROGUETOURNLASTROOM_METHOD_4_4BBC8DE543B4992C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_C90D4D370D8EBA67(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsRogueTournLastRoom* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsRogueTournLastRoom*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISROGUETOURNLASTROOM_METHOD_4_C90D4D370D8EBA67_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_274E0E36572365ED(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsRogueTournLastRoom*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsRogueTournLastRoom*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISROGUETOURNLASTROOM_METHOD_4_274E0E36572365ED_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_1F88346E1C7B5904(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsRogueTournLastRoom* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsRogueTournLastRoom*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISROGUETOURNLASTROOM_METHOD_4_1F88346E1C7B5904_OFFSET))(a1, a2);
		}
	};
}
