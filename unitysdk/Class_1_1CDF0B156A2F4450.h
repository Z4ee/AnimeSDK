#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ChimeraEvaluationData; }
namespace RPG::Client { class ChimeraEvaluationDisplayData; }
namespace RPG::Client { class ChimeraEvaluationManager; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_1CDF0B156A2F4450_GET_CHIMERAEVALUATIONDICT_OFFSET UNITYSDK_OFFSET(0x97BEB20)
#define CLASS_1_1CDF0B156A2F4450_GET_CHIMERAEVALUATIONDISPLAYDATA_OFFSET UNITYSDK_OFFSET(0x97BEB60)
#define CLASS_1_1CDF0B156A2F4450_GET_CHIMERASATISFYEVALUATIONDICT_OFFSET UNITYSDK_OFFSET(0x97BEB40)
#define CLASS_1_1CDF0B156A2F4450_METHOD_1_0F858EBB0D16B2F0_OFFSET UNITYSDK_OFFSET(0x97BDC40)
#define CLASS_1_1CDF0B156A2F4450_METHOD_1_4067733E7C6F3E3E_OFFSET UNITYSDK_OFFSET(0x97BE430)
#define CLASS_1_1CDF0B156A2F4450_METHOD_1_44B6D21F424F6D73_OFFSET UNITYSDK_OFFSET(0x97BE140)
#define CLASS_1_1CDF0B156A2F4450_METHOD_1_895463E89781D2FC_OFFSET UNITYSDK_OFFSET(0x97BE5E0)
#define CLASS_1_1CDF0B156A2F4450_METHOD_1_9DEA1985878CCEE2_OFFSET UNITYSDK_OFFSET(0x97BDE80)
#define CLASS_1_1CDF0B156A2F4450_METHOD_1_C1D810783632A46A_OFFSET UNITYSDK_OFFSET(0x97BDCA0)
#define CLASS_1_1CDF0B156A2F4450_METHOD_1_D39A12A3794035BC_OFFSET UNITYSDK_OFFSET(0x97BDAD0)
#define CLASS_1_1CDF0B156A2F4450_SET_CHIMERAEVALUATIONDICT_OFFSET UNITYSDK_OFFSET(0x97BEB30)
#define CLASS_1_1CDF0B156A2F4450_SET_CHIMERAEVALUATIONDISPLAYDATA_OFFSET UNITYSDK_OFFSET(0x97BEB70)
#define CLASS_1_1CDF0B156A2F4450_SET_CHIMERASATISFYEVALUATIONDICT_OFFSET UNITYSDK_OFFSET(0x97BEB50)
#define CLASS_1_1CDF0B156A2F4450__CTOR_OFFSET UNITYSDK_OFFSET(0x97BDAC0)

inline static constexpr unsigned int Class_1_1CDF0B156A2F4450_TypeDefinitionIndex = 58502;

class Class_1_1CDF0B156A2F4450 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::ChimeraEvaluationData*>*>* _ChimeraEvaluationDict_k__BackingField; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* _ChimeraSatisfyEvaluationDict_k__BackingField; // 0x18
	::System::Collections::Generic::List_1<::RPG::Client::ChimeraEvaluationDisplayData*>* _ChimeraEvaluationDisplayData_k__BackingField; // 0x20
	::RPG::Client::ChimeraEvaluationManager* Field_1_3; // 0x28

	::System::Void _ctor(::RPG::Client::ChimeraEvaluationManager* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ChimeraEvaluationManager*))((::PBYTE)hIl2Cpp + CLASS_1_1CDF0B156A2F4450__CTOR_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::RPG::Client::ChimeraEvaluationDisplayData*>* Method_1_D39A12A3794035BC(::System::Collections::Generic::List_1<::System::UInt32>* a1)
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::ChimeraEvaluationDisplayData*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_1CDF0B156A2F4450_METHOD_1_D39A12A3794035BC_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_C1D810783632A46A(::System::UInt32 a1, ::RPG::Client::ChimeraEvaluationData* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::RPG::Client::ChimeraEvaluationData*))((::PBYTE)hIl2Cpp + CLASS_1_1CDF0B156A2F4450_METHOD_1_C1D810783632A46A_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::RPG::Client::ChimeraEvaluationDisplayData*>* Method_1_0F858EBB0D16B2F0(::System::Collections::Generic::List_1<::System::UInt32>* a1)
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::ChimeraEvaluationDisplayData*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_1CDF0B156A2F4450_METHOD_1_0F858EBB0D16B2F0_OFFSET))(this, a1);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::ChimeraEvaluationData*>*>* Method_1_9DEA1985878CCEE2(::System::Collections::Generic::List_1<::System::UInt32>* a1)
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::ChimeraEvaluationData*>*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_1CDF0B156A2F4450_METHOD_1_9DEA1985878CCEE2_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::RPG::Client::ChimeraEvaluationData*>* Method_1_4067733E7C6F3E3E(::System::UInt32 a1)
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::ChimeraEvaluationData*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1CDF0B156A2F4450_METHOD_1_4067733E7C6F3E3E_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::RPG::Client::ChimeraEvaluationDisplayData*>* Method_1_44B6D21F424F6D73(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::ChimeraEvaluationData*>*>* a1)
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::ChimeraEvaluationDisplayData*>*(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::ChimeraEvaluationData*>*>*))((::PBYTE)hIl2Cpp + CLASS_1_1CDF0B156A2F4450_METHOD_1_44B6D21F424F6D73_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_895463E89781D2FC(::System::Collections::Generic::List_1<::RPG::Client::ChimeraEvaluationData*>* a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ChimeraEvaluationData*>*))((::PBYTE)hIl2Cpp + CLASS_1_1CDF0B156A2F4450_METHOD_1_895463E89781D2FC_OFFSET))(this, a1);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::ChimeraEvaluationData*>*>* get_ChimeraEvaluationDict()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::ChimeraEvaluationData*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CDF0B156A2F4450_GET_CHIMERAEVALUATIONDICT_OFFSET))(this);
	}

	::System::Void set_ChimeraEvaluationDict(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::ChimeraEvaluationData*>*>* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::ChimeraEvaluationData*>*>*))((::PBYTE)hIl2Cpp + CLASS_1_1CDF0B156A2F4450_SET_CHIMERAEVALUATIONDICT_OFFSET))(this, value);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* get_ChimeraSatisfyEvaluationDict()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CDF0B156A2F4450_GET_CHIMERASATISFYEVALUATIONDICT_OFFSET))(this);
	}

	::System::Void set_ChimeraSatisfyEvaluationDict(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_1CDF0B156A2F4450_SET_CHIMERASATISFYEVALUATIONDICT_OFFSET))(this, value);
	}

	::System::Collections::Generic::List_1<::RPG::Client::ChimeraEvaluationDisplayData*>* get_ChimeraEvaluationDisplayData()
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::ChimeraEvaluationDisplayData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CDF0B156A2F4450_GET_CHIMERAEVALUATIONDISPLAYDATA_OFFSET))(this);
	}

	::System::Void set_ChimeraEvaluationDisplayData(::System::Collections::Generic::List_1<::RPG::Client::ChimeraEvaluationDisplayData*>* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ChimeraEvaluationDisplayData*>*))((::PBYTE)hIl2Cpp + CLASS_1_1CDF0B156A2F4450_SET_CHIMERAEVALUATIONDISPLAYDATA_OFFSET))(this, value);
	}
};
