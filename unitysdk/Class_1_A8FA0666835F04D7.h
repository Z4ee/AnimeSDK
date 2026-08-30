#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7BFB07C3AB2D97E4_2;
class Class_1_D17272E82AE804C2_961;
namespace RPG::Client { class IRogueFormulaBuffCountItem; }
namespace RPG::Client { class RogueFormulaBuffCountServerItem; }
namespace RPG::GameCore { class RogueTournFormulaRow; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }

#define CLASS_1_A8FA0666835F04D7_GET_ISACTIVATED_OFFSET UNITYSDK_OFFSET(0x1916BAB0)
#define CLASS_1_A8FA0666835F04D7_GET_MAINITEM_OFFSET UNITYSDK_OFFSET(0x1916BA30)
#define CLASS_1_A8FA0666835F04D7_GET_SUBITEM_OFFSET UNITYSDK_OFFSET(0x1916BA70)
#define CLASS_1_A8FA0666835F04D7_METHOD_1_CEEA8717F1571454_OFFSET UNITYSDK_OFFSET(0x1916B7E0)
#define CLASS_1_A8FA0666835F04D7_METHOD_1_F04D85321FB07E11_OFFSET UNITYSDK_OFFSET(0x1916B9C0)
#define CLASS_1_A8FA0666835F04D7_SET_ISACTIVATED_OFFSET UNITYSDK_OFFSET(0x1916BAC0)
#define CLASS_1_A8FA0666835F04D7__CTOR_OFFSET UNITYSDK_OFFSET(0x1916B780)
#define CLASS_1_A8FA0666835F04D7__SYNC_B__1_0_OFFSET UNITYSDK_OFFSET(0x1916BAD0)
#define CLASS_1_A8FA0666835F04D7__SYNC_B__1_1_OFFSET UNITYSDK_OFFSET(0x1916BB00)

inline static constexpr unsigned int Class_1_A8FA0666835F04D7_TypeDefinitionIndex = 67209;

class Class_1_A8FA0666835F04D7 : public ::System::Object
{
public:
	::RPG::Client::RogueFormulaBuffCountServerItem* IELIDNPHFGE; // 0x10
	::RPG::Client::RogueFormulaBuffCountServerItem* KOIKEOMHJNG; // 0x18
	::System::Boolean _IsActivated_k__BackingField; // 0x20

	::System::Void _ctor(::RPG::GameCore::RogueTournFormulaRow* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueTournFormulaRow*))((::PBYTE)hIl2Cpp + CLASS_1_A8FA0666835F04D7__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_CEEA8717F1571454(::Class_1_7BFB07C3AB2D97E4_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7BFB07C3AB2D97E4_2*))((::PBYTE)hIl2Cpp + CLASS_1_A8FA0666835F04D7_METHOD_1_CEEA8717F1571454_OFFSET))(this, a1);
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

	::System::Void set_IsActivated(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A8FA0666835F04D7_SET_ISACTIVATED_OFFSET))(this, a1);
	}

	::System::Boolean _Sync_b__1_0(::Class_1_D17272E82AE804C2_961* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_D17272E82AE804C2_961*))((::PBYTE)hIl2Cpp + CLASS_1_A8FA0666835F04D7__SYNC_B__1_0_OFFSET))(this, a1);
	}

	::System::Boolean _Sync_b__1_1(::Class_1_D17272E82AE804C2_961* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_D17272E82AE804C2_961*))((::PBYTE)hIl2Cpp + CLASS_1_A8FA0666835F04D7__SYNC_B__1_1_OFFSET))(this, a1);
	}
};
