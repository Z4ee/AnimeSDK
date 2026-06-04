#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCHECKCHARACTERFLY_METHOD_4_469BBCAB52AD721B_OFFSET UNITYSDK_OFFSET(0x194F9360)
#define RPG_GAMECORE_BYCHECKCHARACTERFLY_METHOD_4_64379C35FAB3885E_OFFSET UNITYSDK_OFFSET(0x194F9020)
#define RPG_GAMECORE_BYCHECKCHARACTERFLY_METHOD_4_73486363B3F9D0F1_OFFSET UNITYSDK_OFFSET(0x194F9140)
#define RPG_GAMECORE_BYCHECKCHARACTERFLY_METHOD_4_ED2ADCDFAC3AB4EE_OFFSET UNITYSDK_OFFSET(0x194F92C0)
#define RPG_GAMECORE_BYCHECKCHARACTERFLY__CTOR_OFFSET UNITYSDK_OFFSET(0x194F90C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCheckCharacterFly_TypeDefinitionIndex = 22234;

	class ByCheckCharacterFly : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKCHARACTERFLY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_64379C35FAB3885E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCheckCharacterFly*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCheckCharacterFly*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKCHARACTERFLY_METHOD_4_64379C35FAB3885E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_73486363B3F9D0F1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCheckCharacterFly* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCheckCharacterFly*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKCHARACTERFLY_METHOD_4_73486363B3F9D0F1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_ED2ADCDFAC3AB4EE(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckCharacterFly*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckCharacterFly*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKCHARACTERFLY_METHOD_4_ED2ADCDFAC3AB4EE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_469BBCAB52AD721B(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckCharacterFly* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckCharacterFly*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKCHARACTERFLY_METHOD_4_469BBCAB52AD721B_OFFSET))(a1, a2);
		}
	};
}
