#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D1E0AD3915BCCF29_104;
namespace RPG::Client { class IRogueFormulaBuffCountItem; }
namespace RPG::GameCore { class RogueTournFormulaRow; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }

#define CLASS_1_B0AC3B827E14971B_GET_ISACTIVATED_OFFSET UNITYSDK_OFFSET(0xCD1AD30)
#define CLASS_1_B0AC3B827E14971B_GET_MAINITEM_OFFSET UNITYSDK_OFFSET(0xCD1AD10)
#define CLASS_1_B0AC3B827E14971B_GET_SUBITEM_OFFSET UNITYSDK_OFFSET(0xCD1AD20)
#define CLASS_1_B0AC3B827E14971B__CTOR_OFFSET UNITYSDK_OFFSET(0xCD1AB00)

inline static constexpr unsigned int Class_1_B0AC3B827E14971B_TypeDefinitionIndex = 61910;

class Class_1_B0AC3B827E14971B : public ::System::Object
{
public:
	::RPG::Client::IRogueFormulaBuffCountItem* _MainItem_k__BackingField; // 0x10
	::RPG::Client::IRogueFormulaBuffCountItem* _SubItem_k__BackingField; // 0x18

	::System::Void _ctor(::RPG::GameCore::RogueTournFormulaRow* a1, ::System::Collections::Generic::IDictionary_2<::System::UInt32, ::System::Int32>* a2, ::Class_1_D1E0AD3915BCCF29_104* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueTournFormulaRow*, ::System::Collections::Generic::IDictionary_2<::System::UInt32, ::System::Int32>*, ::Class_1_D1E0AD3915BCCF29_104*))((::PBYTE)hIl2Cpp + CLASS_1_B0AC3B827E14971B__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::RPG::Client::IRogueFormulaBuffCountItem* get_MainItem()
	{
		return ((::RPG::Client::IRogueFormulaBuffCountItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B0AC3B827E14971B_GET_MAINITEM_OFFSET))(this);
	}

	::RPG::Client::IRogueFormulaBuffCountItem* get_SubItem()
	{
		return ((::RPG::Client::IRogueFormulaBuffCountItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B0AC3B827E14971B_GET_SUBITEM_OFFSET))(this);
	}

	::System::Boolean get_IsActivated()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B0AC3B827E14971B_GET_ISACTIVATED_OFFSET))(this);
	}
};
