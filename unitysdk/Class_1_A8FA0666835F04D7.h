#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D17272E82AE804C2_791;
class Class_1_E30585F0EAEFDF1E_10;
namespace RPG::Client { class IRogueFormulaBuffCountItem; }
namespace RPG::Client { class RogueFormulaBuffCountServerItem; }
namespace RPG::GameCore { class RogueTournFormulaRow; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }

#define CLASS_1_A8FA0666835F04D7_GET_ISACTIVATED_OFFSET UNITYSDK_OFFSET(0x9278D90)
#define CLASS_1_A8FA0666835F04D7_GET_MAINITEM_OFFSET UNITYSDK_OFFSET(0x9278D70)
#define CLASS_1_A8FA0666835F04D7_GET_SUBITEM_OFFSET UNITYSDK_OFFSET(0x9278D80)
#define CLASS_1_A8FA0666835F04D7_METHOD_1_CEEA8717F1571454_OFFSET UNITYSDK_OFFSET(0x9278B50)
#define CLASS_1_A8FA0666835F04D7_METHOD_1_F04D85321FB07E11_OFFSET UNITYSDK_OFFSET(0x9278D00)
#define CLASS_1_A8FA0666835F04D7_SET_ISACTIVATED_OFFSET UNITYSDK_OFFSET(0x9278DA0)
#define CLASS_1_A8FA0666835F04D7__CTOR_OFFSET UNITYSDK_OFFSET(0x9278AF0)
#define CLASS_1_A8FA0666835F04D7__SYNC_B__1_0_OFFSET UNITYSDK_OFFSET(0x9278DB0)
#define CLASS_1_A8FA0666835F04D7__SYNC_B__1_1_OFFSET UNITYSDK_OFFSET(0x9278DE0)

inline static constexpr unsigned int Class_1_A8FA0666835F04D7_TypeDefinitionIndex = 61914;

class Class_1_A8FA0666835F04D7 : public ::System::Object
{
public:
	::RPG::Client::RogueFormulaBuffCountServerItem* Field_1_1; // 0x10
	::RPG::Client::RogueFormulaBuffCountServerItem* Field_1_2; // 0x18
	::System::Boolean _IsActivated_k__BackingField; // 0x20

	::System::Void _ctor(::RPG::GameCore::RogueTournFormulaRow* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueTournFormulaRow*))((::PBYTE)hIl2Cpp + CLASS_1_A8FA0666835F04D7__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_CEEA8717F1571454(::Class_1_E30585F0EAEFDF1E_10* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E30585F0EAEFDF1E_10*))((::PBYTE)hIl2Cpp + CLASS_1_A8FA0666835F04D7_METHOD_1_CEEA8717F1571454_OFFSET))(this, a1);
	}

	::System::Void Method_1_F04D85321FB07E11(::System::Collections::Generic::IDictionary_2<::System::UInt32, ::System::Int32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IDictionary_2<::System::UInt32, ::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_A8FA0666835F04D7_METHOD_1_F04D85321FB07E11_OFFSET))(this, a1);
	}

	::RPG::Client::IRogueFormulaBuffCountItem* get_MainItem()
	{
		return ((::RPG::Client::IRogueFormulaBuffCountItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A8FA0666835F04D7_GET_MAINITEM_OFFSET))(this);
	}

	::RPG::Client::IRogueFormulaBuffCountItem* get_SubItem()
	{
		return ((::RPG::Client::IRogueFormulaBuffCountItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A8FA0666835F04D7_GET_SUBITEM_OFFSET))(this);
	}

	::System::Boolean get_IsActivated()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A8FA0666835F04D7_GET_ISACTIVATED_OFFSET))(this);
	}

	::System::Void set_IsActivated(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A8FA0666835F04D7_SET_ISACTIVATED_OFFSET))(this, value);
	}

	::System::Boolean _Sync_b__1_0(::Class_1_D17272E82AE804C2_791* c)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_D17272E82AE804C2_791*))((::PBYTE)hIl2Cpp + CLASS_1_A8FA0666835F04D7__SYNC_B__1_0_OFFSET))(this, c);
	}

	::System::Boolean _Sync_b__1_1(::Class_1_D17272E82AE804C2_791* c)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_D17272E82AE804C2_791*))((::PBYTE)hIl2Cpp + CLASS_1_A8FA0666835F04D7__SYNC_B__1_1_OFFSET))(this, c);
	}
};
