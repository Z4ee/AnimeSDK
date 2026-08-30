#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ChimeraEvaluationData; }
namespace RPG::Client { class ChimeraEvaluationDisplayData; }
namespace RPG::Client { class ChimeraEvaluationManager; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_1CDF0B156A2F4450_GET_CHIMERAEVALUATIONDICT_OFFSET UNITYSDK_OFFSET(0xB9C3870)
#define CLASS_1_1CDF0B156A2F4450_GET_CHIMERAEVALUATIONDISPLAYDATA_OFFSET UNITYSDK_OFFSET(0xB9C38B0)
#define CLASS_1_1CDF0B156A2F4450_GET_CHIMERASATISFYEVALUATIONDICT_OFFSET UNITYSDK_OFFSET(0xB9C3890)
#define CLASS_1_1CDF0B156A2F4450_METHOD_1_47960CFE31062E2B_OFFSET UNITYSDK_OFFSET(0xB9C2B70)
#define CLASS_1_1CDF0B156A2F4450_METHOD_1_4A1FD541E4BD4FF7_OFFSET UNITYSDK_OFFSET(0xB9C3160)
#define CLASS_1_1CDF0B156A2F4450_METHOD_1_6520104B02B23717_OFFSET UNITYSDK_OFFSET(0xB9C3380)
#define CLASS_1_1CDF0B156A2F4450_METHOD_1_BBDB7E089BB1C9B9_OFFSET UNITYSDK_OFFSET(0xB9C28E0)
#define CLASS_1_1CDF0B156A2F4450_METHOD_1_C1D810783632A46A_OFFSET UNITYSDK_OFFSET(0xB9C2940)
#define CLASS_1_1CDF0B156A2F4450_METHOD_1_D39A12A3794035BC_OFFSET UNITYSDK_OFFSET(0xB9C2770)
#define CLASS_1_1CDF0B156A2F4450_METHOD_1_E95CC464914305D1_OFFSET UNITYSDK_OFFSET(0xB9C2E00)
#define CLASS_1_1CDF0B156A2F4450_SET_CHIMERAEVALUATIONDICT_OFFSET UNITYSDK_OFFSET(0xB9C3880)
#define CLASS_1_1CDF0B156A2F4450_SET_CHIMERAEVALUATIONDISPLAYDATA_OFFSET UNITYSDK_OFFSET(0xB9C38C0)
#define CLASS_1_1CDF0B156A2F4450_SET_CHIMERASATISFYEVALUATIONDICT_OFFSET UNITYSDK_OFFSET(0xB9C38A0)
#define CLASS_1_1CDF0B156A2F4450__CTOR_OFFSET UNITYSDK_OFFSET(0xB9C2760)

inline static constexpr unsigned int Class_1_1CDF0B156A2F4450_TypeDefinitionIndex = 63556;

class Class_1_1CDF0B156A2F4450 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::RPG::Client::ChimeraEvaluationDisplayData*>* _ChimeraEvaluationDisplayData_k__BackingField; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* _ChimeraSatisfyEvaluationDict_k__BackingField; // 0x18
	::RPG::Client::ChimeraEvaluationManager* CFKHNPGEAJA; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::ChimeraEvaluationData*>*>* _ChimeraEvaluationDict_k__BackingField; // 0x28

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

	::System::Collections::Generic::List_1<::RPG::Client::ChimeraEvaluationDisplayData*>* Method_1_BBDB7E089BB1C9B9(::System::Collections::Generic::List_1<::System::UInt32>* a1)
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::ChimeraEvaluationDisplayData*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_1CDF0B156A2F4450_METHOD_1_BBDB7E089BB1C9B9_OFFSET))(this, a1);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::ChimeraEvaluationData*>*>* Method_1_47960CFE31062E2B(::System::Collections::Generic::List_1<::System::UInt32>* a1)
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::ChimeraEvaluationData*>*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_1CDF0B156A2F4450_METHOD_1_47960CFE31062E2B_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::RPG::Client::ChimeraEvaluationData*>* Method_1_4A1FD541E4BD4FF7(::System::UInt32 a1)
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::ChimeraEvaluationData*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1CDF0B156A2F4450_METHOD_1_4A1FD541E4BD4FF7_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::RPG::Client::ChimeraEvaluationDisplayData*>* Method_1_E95CC464914305D1(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::ChimeraEvaluationData*>*>* a1)
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::ChimeraEvaluationDisplayData*>*(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::ChimeraEvaluationData*>*>*))((::PBYTE)hIl2Cpp + CLASS_1_1CDF0B156A2F4450_METHOD_1_E95CC464914305D1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_6520104B02B23717(::System::Collections::Generic::List_1<::RPG::Client::ChimeraEvaluationData*>* a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ChimeraEvaluationData*>*))((::PBYTE)hIl2Cpp + CLASS_1_1CDF0B156A2F4450_METHOD_1_6520104B02B23717_OFFSET))(this, a1);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::ChimeraEvaluationData*>*>* get_ChimeraEvaluationDict()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::ChimeraEvaluationData*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CDF0B156A2F4450_GET_CHIMERAEVALUATIONDICT_OFFSET))(this);
	}

	::System::Void set_ChimeraEvaluationDict(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::ChimeraEvaluationData*>*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::ChimeraEvaluationData*>*>*))((::PBYTE)hIl2Cpp + CLASS_1_1CDF0B156A2F4450_SET_CHIMERAEVALUATIONDICT_OFFSET))(this, a1);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* get_ChimeraSatisfyEvaluationDict()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CDF0B156A2F4450_GET_CHIMERASATISFYEVALUATIONDICT_OFFSET))(this);
	}

	::System::Void set_ChimeraSatisfyEvaluationDict(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_1CDF0B156A2F4450_SET_CHIMERASATISFYEVALUATIONDICT_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::RPG::Client::ChimeraEvaluationDisplayData*>* get_ChimeraEvaluationDisplayData()
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::ChimeraEvaluationDisplayData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CDF0B156A2F4450_GET_CHIMERAEVALUATIONDISPLAYDATA_OFFSET))(this);
	}

	::System::Void set_ChimeraEvaluationDisplayData(::System::Collections::Generic::List_1<::RPG::Client::ChimeraEvaluationDisplayData*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ChimeraEvaluationDisplayData*>*))((::PBYTE)hIl2Cpp + CLASS_1_1CDF0B156A2F4450_SET_CHIMERAEVALUATIONDISPLAYDATA_OFFSET))(this, a1);
	}
};
