#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ModifierValueType.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_TARGETSORTBYMODIFIERVALUE_METHOD_3_100D021698AEDBDD_OFFSET UNITYSDK_OFFSET(0x19D2DD80)
#define RPG_GAMECORE_TARGETSORTBYMODIFIERVALUE_METHOD_3_36F88CC3BF5C32B2_OFFSET UNITYSDK_OFFSET(0x19D2DD30)
#define RPG_GAMECORE_TARGETSORTBYMODIFIERVALUE_METHOD_3_A566342C80E78C54_OFFSET UNITYSDK_OFFSET(0x19D2BFB0)
#define RPG_GAMECORE_TARGETSORTBYMODIFIERVALUE_METHOD_3_C51DEEAF9F01D3F9_OFFSET UNITYSDK_OFFSET(0x19D1E4D0)
#define RPG_GAMECORE_TARGETSORTBYMODIFIERVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x19D1E4B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetSortByModifierValue_TypeDefinitionIndex = 22670;

	class TargetSortByModifierValue : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::System::String* ModifierName; // 0x10
		::RPG::GameCore::ModifierValueType ValueType; // 0x18
		::System::Boolean HighestFirst; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYMODIFIERVALUE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_36F88CC3BF5C32B2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetSortByModifierValue*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetSortByModifierValue*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYMODIFIERVALUE_METHOD_3_36F88CC3BF5C32B2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C51DEEAF9F01D3F9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetSortByModifierValue* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetSortByModifierValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYMODIFIERVALUE_METHOD_3_C51DEEAF9F01D3F9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_A566342C80E78C54(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSortByModifierValue*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSortByModifierValue*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYMODIFIERVALUE_METHOD_3_A566342C80E78C54_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_100D021698AEDBDD(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSortByModifierValue* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSortByModifierValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYMODIFIERVALUE_METHOD_3_100D021698AEDBDD_OFFSET))(a1, a2);
		}
	};
}
