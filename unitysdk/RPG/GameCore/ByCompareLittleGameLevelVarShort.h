#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPARELITTLEGAMELEVELVARSHORT_METHOD_4_65C1D02A54B92CED_OFFSET UNITYSDK_OFFSET(0x1951D810)
#define RPG_GAMECORE_BYCOMPARELITTLEGAMELEVELVARSHORT_METHOD_4_7BFCBD0970A0C99F_OFFSET UNITYSDK_OFFSET(0x1951D540)
#define RPG_GAMECORE_BYCOMPARELITTLEGAMELEVELVARSHORT_METHOD_4_B51D9B35D8C7F8CD_OFFSET UNITYSDK_OFFSET(0x1951D460)
#define RPG_GAMECORE_BYCOMPARELITTLEGAMELEVELVARSHORT_METHOD_4_E9DC14F9621A59E4_OFFSET UNITYSDK_OFFSET(0x1951D790)
#define RPG_GAMECORE_BYCOMPARELITTLEGAMELEVELVARSHORT__CTOR_OFFSET UNITYSDK_OFFSET(0x1951D4E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareLittleGameLevelVarShort_TypeDefinitionIndex = 20236;

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

		static ::System::Void Method_4_B51D9B35D8C7F8CD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareLittleGameLevelVarShort*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareLittleGameLevelVarShort*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARELITTLEGAMELEVELVARSHORT_METHOD_4_B51D9B35D8C7F8CD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_7BFCBD0970A0C99F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareLittleGameLevelVarShort* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareLittleGameLevelVarShort*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARELITTLEGAMELEVELVARSHORT_METHOD_4_7BFCBD0970A0C99F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_E9DC14F9621A59E4(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareLittleGameLevelVarShort*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareLittleGameLevelVarShort*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARELITTLEGAMELEVELVARSHORT_METHOD_4_E9DC14F9621A59E4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_65C1D02A54B92CED(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareLittleGameLevelVarShort* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareLittleGameLevelVarShort*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARELITTLEGAMELEVELVARSHORT_METHOD_4_65C1D02A54B92CED_OFFSET))(a1, a2);
		}
	};
}
