#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPARELITTLEGAMELEVELVARSHORT_METHOD_4_7BFCBD0970A0C99F_OFFSET UNITYSDK_OFFSET(0x19CF1540)
#define RPG_GAMECORE_BYCOMPARELITTLEGAMELEVELVARSHORT_METHOD_4_BD71F1EB9403DED5_OFFSET UNITYSDK_OFFSET(0x19CF1790)
#define RPG_GAMECORE_BYCOMPARELITTLEGAMELEVELVARSHORT_METHOD_4_D7081725556D2222_OFFSET UNITYSDK_OFFSET(0x19CF14F0)
#define RPG_GAMECORE_BYCOMPARELITTLEGAMELEVELVARSHORT_METHOD_4_D9965CAC10239352_OFFSET UNITYSDK_OFFSET(0x19CF17D0)
#define RPG_GAMECORE_BYCOMPARELITTLEGAMELEVELVARSHORT__CTOR_OFFSET UNITYSDK_OFFSET(0x19CF1530)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareLittleGameLevelVarShort_TypeDefinitionIndex = 20629;

	class ByCompareLittleGameLevelVarShort : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* Value; // 0x20
		::RPG::GameCore::CompareType CompareType; // 0x28
		::RPG::GameCore::DynamicFloat* CompareValue; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARELITTLEGAMELEVELVARSHORT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_D7081725556D2222(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareLittleGameLevelVarShort*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareLittleGameLevelVarShort*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARELITTLEGAMELEVELVARSHORT_METHOD_4_D7081725556D2222_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_7BFCBD0970A0C99F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareLittleGameLevelVarShort* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareLittleGameLevelVarShort*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARELITTLEGAMELEVELVARSHORT_METHOD_4_7BFCBD0970A0C99F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_BD71F1EB9403DED5(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareLittleGameLevelVarShort*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareLittleGameLevelVarShort*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARELITTLEGAMELEVELVARSHORT_METHOD_4_BD71F1EB9403DED5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_D9965CAC10239352(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareLittleGameLevelVarShort* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareLittleGameLevelVarShort*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARELITTLEGAMELEVELVARSHORT_METHOD_4_D9965CAC10239352_OFFSET))(a1, a2);
		}
	};
}
