#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_ADVBYPLAYERHIDE_METHOD_4_199F62C376732C92_OFFSET UNITYSDK_OFFSET(0x1941CA70)
#define RPG_GAMECORE_ADVBYPLAYERHIDE_METHOD_4_45AA98E02D24C9B8_OFFSET UNITYSDK_OFFSET(0x1941C9A0)
#define RPG_GAMECORE_ADVBYPLAYERHIDE_METHOD_4_6A8236C8C08CBC8D_OFFSET UNITYSDK_OFFSET(0x1941CBB0)
#define RPG_GAMECORE_ADVBYPLAYERHIDE_METHOD_4_A20BAA1E6B5CFE41_OFFSET UNITYSDK_OFFSET(0x1941CC30)
#define RPG_GAMECORE_ADVBYPLAYERHIDE__CTOR_OFFSET UNITYSDK_OFFSET(0x1941CA20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvByPlayerHide_TypeDefinitionIndex = 18896;

	class AdvByPlayerHide : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYPLAYERHIDE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_45AA98E02D24C9B8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvByPlayerHide*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvByPlayerHide*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYPLAYERHIDE_METHOD_4_45AA98E02D24C9B8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_199F62C376732C92(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvByPlayerHide* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvByPlayerHide*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYPLAYERHIDE_METHOD_4_199F62C376732C92_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_6A8236C8C08CBC8D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByPlayerHide*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByPlayerHide*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYPLAYERHIDE_METHOD_4_6A8236C8C08CBC8D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_A20BAA1E6B5CFE41(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByPlayerHide* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByPlayerHide*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYPLAYERHIDE_METHOD_4_A20BAA1E6B5CFE41_OFFSET))(a1, a2);
		}
	};
}
