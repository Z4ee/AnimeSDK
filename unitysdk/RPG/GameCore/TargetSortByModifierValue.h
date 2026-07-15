#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ModifierValueType.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_TARGETSORTBYMODIFIERVALUE_METHOD_3_6026AA4DAA3C1AC2_OFFSET UNITYSDK_OFFSET(0x1D0C8AC0)
#define RPG_GAMECORE_TARGETSORTBYMODIFIERVALUE_METHOD_3_63BDE955035B743C_OFFSET UNITYSDK_OFFSET(0x1D0C8A70)
#define RPG_GAMECORE_TARGETSORTBYMODIFIERVALUE_METHOD_3_C51DEEAF9F01D3F9_OFFSET UNITYSDK_OFFSET(0x1D0C8900)
#define RPG_GAMECORE_TARGETSORTBYMODIFIERVALUE_METHOD_3_E3714B04A8EE1B1F_OFFSET UNITYSDK_OFFSET(0x1D0C88A0)
#define RPG_GAMECORE_TARGETSORTBYMODIFIERVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0C88F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetSortByModifierValue_TypeDefinitionIndex = 23133;

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

		static ::System::Void Method_3_E3714B04A8EE1B1F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetSortByModifierValue*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetSortByModifierValue*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYMODIFIERVALUE_METHOD_3_E3714B04A8EE1B1F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C51DEEAF9F01D3F9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetSortByModifierValue* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetSortByModifierValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYMODIFIERVALUE_METHOD_3_C51DEEAF9F01D3F9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_63BDE955035B743C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSortByModifierValue*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSortByModifierValue*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYMODIFIERVALUE_METHOD_3_63BDE955035B743C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_6026AA4DAA3C1AC2(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSortByModifierValue* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSortByModifierValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYMODIFIERVALUE_METHOD_3_6026AA4DAA3C1AC2_OFFSET))(a1, a2);
		}
	};
}
