#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D17272E82AE804C2_962;
namespace RPG::Client { class IRogueFormulaBuffCountItem; }
namespace RPG::GameCore { class RogueTournFormulaRow; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }

#define CLASS_1_8C866450D309DC20_GET_ISACTIVATED_OFFSET UNITYSDK_OFFSET(0x1593CE50)
#define CLASS_1_8C866450D309DC20_GET_MAINITEM_OFFSET UNITYSDK_OFFSET(0x1593CE30)
#define CLASS_1_8C866450D309DC20_GET_SUBITEM_OFFSET UNITYSDK_OFFSET(0x1593CE40)
#define CLASS_1_8C866450D309DC20__CTOR_OFFSET UNITYSDK_OFFSET(0x1593CB60)

inline static constexpr unsigned int Class_1_8C866450D309DC20_TypeDefinitionIndex = 67205;

class Class_1_8C866450D309DC20 : public ::System::Object
{
public:
	::RPG::Client::IRogueFormulaBuffCountItem* _MainItem_k__BackingField; // 0x10
	::RPG::Client::IRogueFormulaBuffCountItem* _SubItem_k__BackingField; // 0x18

	::System::Void _ctor(::RPG::GameCore::RogueTournFormulaRow* a1, ::System::Collections::Generic::IDictionary_2<::System::UInt32, ::System::Int32>* a2, ::Class_1_D17272E82AE804C2_962* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueTournFormulaRow*, ::System::Collections::Generic::IDictionary_2<::System::UInt32, ::System::Int32>*, ::Class_1_D17272E82AE804C2_962*))((::PBYTE)hIl2Cpp + CLASS_1_8C866450D309DC20__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::RPG::Client::IRogueFormulaBuffCountItem* get_MainItem()
	{
		return ((::RPG::Client::IRogueFormulaBuffCountItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8C866450D309DC20_GET_MAINITEM_OFFSET))(this);
	}

	::RPG::Client::IRogueFormulaBuffCountItem* get_SubItem()
	{
		return ((::RPG::Client::IRogueFormulaBuffCountItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8C866450D309DC20_GET_SUBITEM_OFFSET))(this);
	}

	::System::Boolean get_IsActivated()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8C866450D309DC20_GET_ISACTIVATED_OFFSET))(this);
	}
};
