#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_7AF1D57CA4301272;
namespace RPG::GameCore { class ChimeraAbilityModifier; }
namespace RPG::GameCore { class ChimeraBattleConditionEvaluator; }
namespace RPG::GameCore { class ChimeraBattleExtraConditionEvaluator; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_7370FAEB2C64106B_CLEAR_OFFSET UNITYSDK_OFFSET(0x17F979C0)
#define CLASS_1_7370FAEB2C64106B__CTOR_OFFSET UNITYSDK_OFFSET(0x17F97A80)

inline static constexpr unsigned int Class_1_7370FAEB2C64106B_TypeDefinitionIndex = 37982;

class Class_1_7370FAEB2C64106B : public ::System::Object
{
public:
	::System::String* Field_1_6; // 0x10
	::Class_2_7AF1D57CA4301272* Field_1_3; // 0x18
	::RPG::GameCore::ChimeraBattleConditionEvaluator* Field_1_7; // 0x20
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::ChimeraAbilityModifier*, ::System::Collections::Generic::List_1<::System::Int32>*>* Field_1_0; // 0x28
	::RPG::GameCore::ChimeraBattleExtraConditionEvaluator* Field_1_8; // 0x30
	::System::Int32 Field_1_1; // 0x38
	::System::UInt32 Field_1_5; // 0x3C
	::System::Int32 Field_1_4; // 0x40
	::System::UInt32 Field_1_2; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7370FAEB2C64106B__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7370FAEB2C64106B_CLEAR_OFFSET))(this);
	}
};
