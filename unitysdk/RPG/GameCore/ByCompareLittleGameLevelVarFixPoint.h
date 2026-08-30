#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPARELITTLEGAMELEVELVARFIXPOINT_METHOD_4_1440599890D57353_OFFSET UNITYSDK_OFFSET(0x1CED1C00)
#define RPG_GAMECORE_BYCOMPARELITTLEGAMELEVELVARFIXPOINT_METHOD_4_466A214834A357D5_OFFSET UNITYSDK_OFFSET(0x1CED1EE0)
#define RPG_GAMECORE_BYCOMPARELITTLEGAMELEVELVARFIXPOINT_METHOD_4_47CFD305C79EFB5E_OFFSET UNITYSDK_OFFSET(0x1CED1C50)
#define RPG_GAMECORE_BYCOMPARELITTLEGAMELEVELVARFIXPOINT_METHOD_4_B8068360B13D4002_OFFSET UNITYSDK_OFFSET(0x1CED1EA0)
#define RPG_GAMECORE_BYCOMPARELITTLEGAMELEVELVARFIXPOINT__CTOR_OFFSET UNITYSDK_OFFSET(0x1CED1C40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareLittleGameLevelVarFixPoint_TypeDefinitionIndex = 21182;

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

		static ::System::Void Method_4_1440599890D57353(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareLittleGameLevelVarFixPoint*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareLittleGameLevelVarFixPoint*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARELITTLEGAMELEVELVARFIXPOINT_METHOD_4_1440599890D57353_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_47CFD305C79EFB5E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareLittleGameLevelVarFixPoint* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareLittleGameLevelVarFixPoint*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARELITTLEGAMELEVELVARFIXPOINT_METHOD_4_47CFD305C79EFB5E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_B8068360B13D4002(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareLittleGameLevelVarFixPoint*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareLittleGameLevelVarFixPoint*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARELITTLEGAMELEVELVARFIXPOINT_METHOD_4_B8068360B13D4002_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_466A214834A357D5(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareLittleGameLevelVarFixPoint* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareLittleGameLevelVarFixPoint*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARELITTLEGAMELEVELVARFIXPOINT_METHOD_4_466A214834A357D5_OFFSET))(a1, a2);
		}
	};
}
