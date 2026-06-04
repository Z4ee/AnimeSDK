#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_ADVBYCHECKFARMELEMENTACTIVE_METHOD_4_23DE18DC73FD373A_OFFSET UNITYSDK_OFFSET(0x19415AB0)
#define RPG_GAMECORE_ADVBYCHECKFARMELEMENTACTIVE_METHOD_4_7D61F42E75174C96_OFFSET UNITYSDK_OFFSET(0x194158B0)
#define RPG_GAMECORE_ADVBYCHECKFARMELEMENTACTIVE_METHOD_4_A89502EA419E1368_OFFSET UNITYSDK_OFFSET(0x194157E0)
#define RPG_GAMECORE_ADVBYCHECKFARMELEMENTACTIVE_METHOD_4_E80A4C6CA2B81DDB_OFFSET UNITYSDK_OFFSET(0x19415A30)
#define RPG_GAMECORE_ADVBYCHECKFARMELEMENTACTIVE__CTOR_OFFSET UNITYSDK_OFFSET(0x19415860)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvByCheckFarmElementActive_TypeDefinitionIndex = 21036;

	class AdvByCheckFarmElementActive : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYCHECKFARMELEMENTACTIVE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_A89502EA419E1368(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvByCheckFarmElementActive*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvByCheckFarmElementActive*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYCHECKFARMELEMENTACTIVE_METHOD_4_A89502EA419E1368_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_7D61F42E75174C96(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvByCheckFarmElementActive* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvByCheckFarmElementActive*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYCHECKFARMELEMENTACTIVE_METHOD_4_7D61F42E75174C96_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_E80A4C6CA2B81DDB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByCheckFarmElementActive*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByCheckFarmElementActive*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYCHECKFARMELEMENTACTIVE_METHOD_4_E80A4C6CA2B81DDB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_23DE18DC73FD373A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByCheckFarmElementActive* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByCheckFarmElementActive*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYCHECKFARMELEMENTACTIVE_METHOD_4_23DE18DC73FD373A_OFFSET))(a1, a2);
		}
	};
}
