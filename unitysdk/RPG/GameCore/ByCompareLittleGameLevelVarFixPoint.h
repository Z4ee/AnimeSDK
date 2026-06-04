#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPARELITTLEGAMELEVELVARFIXPOINT_METHOD_4_132A68968330707A_OFFSET UNITYSDK_OFFSET(0x1951D120)
#define RPG_GAMECORE_BYCOMPARELITTLEGAMELEVELVARFIXPOINT_METHOD_4_34F8EF56B991941B_OFFSET UNITYSDK_OFFSET(0x1951D0A0)
#define RPG_GAMECORE_BYCOMPARELITTLEGAMELEVELVARFIXPOINT_METHOD_4_47CFD305C79EFB5E_OFFSET UNITYSDK_OFFSET(0x1951CE50)
#define RPG_GAMECORE_BYCOMPARELITTLEGAMELEVELVARFIXPOINT_METHOD_4_F00361732887FAE8_OFFSET UNITYSDK_OFFSET(0x1951CD70)
#define RPG_GAMECORE_BYCOMPARELITTLEGAMELEVELVARFIXPOINT__CTOR_OFFSET UNITYSDK_OFFSET(0x1951CDF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareLittleGameLevelVarFixPoint_TypeDefinitionIndex = 20237;

	class ByCompareLittleGameLevelVarFixPoint : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* Value; // 0x20
		::RPG::GameCore::CompareType CompareType; // 0x28
		::RPG::GameCore::DynamicFloat* CompareValue; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARELITTLEGAMELEVELVARFIXPOINT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_F00361732887FAE8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareLittleGameLevelVarFixPoint*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareLittleGameLevelVarFixPoint*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARELITTLEGAMELEVELVARFIXPOINT_METHOD_4_F00361732887FAE8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_47CFD305C79EFB5E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareLittleGameLevelVarFixPoint* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareLittleGameLevelVarFixPoint*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARELITTLEGAMELEVELVARFIXPOINT_METHOD_4_47CFD305C79EFB5E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_34F8EF56B991941B(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareLittleGameLevelVarFixPoint*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareLittleGameLevelVarFixPoint*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARELITTLEGAMELEVELVARFIXPOINT_METHOD_4_34F8EF56B991941B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_132A68968330707A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareLittleGameLevelVarFixPoint* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareLittleGameLevelVarFixPoint*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARELITTLEGAMELEVELVARFIXPOINT_METHOD_4_132A68968330707A_OFFSET))(a1, a2);
		}
	};
}
