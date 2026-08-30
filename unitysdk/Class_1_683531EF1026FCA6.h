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

#define CLASS_1_683531EF1026FCA6_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C4DD0A0)
#define CLASS_1_683531EF1026FCA6__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4DD150)

inline static constexpr unsigned int Class_1_683531EF1026FCA6_TypeDefinitionIndex = 40400;

class Class_1_683531EF1026FCA6 : public ::System::Object
{
public:
	::System::String* OGOCEHKOEGP; // 0x10
	::RPG::GameCore::ChimeraBattleConditionEvaluator* EKIJFPIPCKF; // 0x18
	::RPG::GameCore::ChimeraBattleExtraConditionEvaluator* JFKJFLLFEPJ; // 0x20
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::ChimeraAbilityModifier*, ::System::Collections::Generic::List_1<::System::Int32>*>* FMFPFOJNGIH; // 0x28
	::Class_2_C01BA129C3E40259* BKMIDNJKMBO; // 0x30
	::System::UInt32 LFKOCKPILLI; // 0x38
	::System::Int32 CCEGPIGBPKC; // 0x3C
	::System::Int32 LAMLAOOJAPO; // 0x40
	::System::UInt32 ILOHGDCGKFA; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_683531EF1026FCA6__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_683531EF1026FCA6_CLEAR_OFFSET))(this);
	}
};
