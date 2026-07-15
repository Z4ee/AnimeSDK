#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_C01BA129C3E40259;
namespace RPG::GameCore { class ChimeraAbilityModifier; }
namespace RPG::GameCore { class ChimeraBattleConditionEvaluator; }
namespace RPG::GameCore { class ChimeraBattleExtraConditionEvaluator; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_683531EF1026FCA6_CLEAR_OFFSET UNITYSDK_OFFSET(0x1BF2F7D0)
#define CLASS_1_683531EF1026FCA6__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF2F880)

inline static constexpr unsigned int Class_1_683531EF1026FCA6_TypeDefinitionIndex = 39527;

class Class_1_683531EF1026FCA6 : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::RPG::GameCore::ChimeraBattleConditionEvaluator* Field_1_1; // 0x18
	::Class_2_C01BA129C3E40259* Field_1_2; // 0x20
	::RPG::GameCore::ChimeraBattleExtraConditionEvaluator* Field_1_3; // 0x28
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::ChimeraAbilityModifier*, ::System::Collections::Generic::List_1<::System::Int32>*>* Field_1_4; // 0x30
	::System::Int32 Field_1_5; // 0x38
	::System::UInt32 Field_1_6; // 0x3C
	::System::UInt32 Field_1_7; // 0x40
	::System::Int32 Field_1_8; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_683531EF1026FCA6__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_683531EF1026FCA6_CLEAR_OFFSET))(this);
	}
};
