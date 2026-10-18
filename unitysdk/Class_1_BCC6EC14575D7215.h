#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

class Class_0_16E4307DCC419505_127;
class Class_0_16E4307DCC419505_397;
class Class_0_16E4307DCC419505_409;
class Class_1_1294FEF8E985635C;
class Class_1_45CA56C59C8BBBC0;
class Class_1_BCC6EC14575D7215_Class_1_9A90CD018E72DF20_26;
class Class_1_DD57899CB8704013;
namespace R3 { template <typename T> class Observable_1; }
namespace R3 { template <typename T> class ReadOnlyReactiveProperty_1; }
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_1_BCC6EC14575D7215_ADD_HANDLEDESELECT_OFFSET UNITYSDK_OFFSET(0x1648FE90)
#define CLASS_1_BCC6EC14575D7215_ADD_HANDLEHINTASYMMETRICCELLS_OFFSET UNITYSDK_OFFSET(0x1648FF50)
#define CLASS_1_BCC6EC14575D7215_ADD_HANDLEHINTATTRTRAITTARGETNOTMET_OFFSET UNITYSDK_OFFSET(0x1648FD10)
#define CLASS_1_BCC6EC14575D7215_ADD_HANDLEHINTIMPROPERPLACEMENT_OFFSET UNITYSDK_OFFSET(0x1648FC50)
#define CLASS_1_BCC6EC14575D7215_ADD_HANDLEHINTREQUIREDCONSTRAINTSNOTMET_OFFSET UNITYSDK_OFFSET(0x1648FDD0)
#define CLASS_1_BCC6EC14575D7215_ADD_HANDLESETEXITAFTERTRANSITION_OFFSET UNITYSDK_OFFSET(0x1648FB90)
#define CLASS_1_BCC6EC14575D7215_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16490120)
#define CLASS_1_BCC6EC14575D7215_GET__CANSUBMIT_OFFSET UNITYSDK_OFFSET(0x1648FA80)
#define CLASS_1_BCC6EC14575D7215_METHOD_1_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0x164901F0)
#define CLASS_1_BCC6EC14575D7215_METHOD_1_19CCC07C980409E4_OFFSET UNITYSDK_OFFSET(0x16490390)
#define CLASS_1_BCC6EC14575D7215_METHOD_1_38B9FDDE9C153A1E_OFFSET UNITYSDK_OFFSET(0x16490400)
#define CLASS_1_BCC6EC14575D7215_METHOD_1_5506F850887C79B5_OFFSET UNITYSDK_OFFSET(0x16490190)
#define CLASS_1_BCC6EC14575D7215_METHOD_1_B213056103887067_OFFSET UNITYSDK_OFFSET(0x1648FAD0)
#define CLASS_1_BCC6EC14575D7215_METHOD_1_E240D159E3150659_OFFSET UNITYSDK_OFFSET(0x16490C70)
#define CLASS_1_BCC6EC14575D7215_METHOD_1_FB5550CC734284FC_OFFSET UNITYSDK_OFFSET(0x1648FA90)
#define CLASS_1_BCC6EC14575D7215_REMOVE_HANDLEDESELECT_OFFSET UNITYSDK_OFFSET(0x1648FEF0)
#define CLASS_1_BCC6EC14575D7215_REMOVE_HANDLEHINTASYMMETRICCELLS_OFFSET UNITYSDK_OFFSET(0x1648FFD0)
#define CLASS_1_BCC6EC14575D7215_REMOVE_HANDLEHINTATTRTRAITTARGETNOTMET_OFFSET UNITYSDK_OFFSET(0x1648FD70)
#define CLASS_1_BCC6EC14575D7215_REMOVE_HANDLEHINTIMPROPERPLACEMENT_OFFSET UNITYSDK_OFFSET(0x1648FCB0)
#define CLASS_1_BCC6EC14575D7215_REMOVE_HANDLEHINTREQUIREDCONSTRAINTSNOTMET_OFFSET UNITYSDK_OFFSET(0x1648FE30)
#define CLASS_1_BCC6EC14575D7215_REMOVE_HANDLESETEXITAFTERTRANSITION_OFFSET UNITYSDK_OFFSET(0x1648FBF0)
#define CLASS_1_BCC6EC14575D7215__CTOR_OFFSET UNITYSDK_OFFSET(0x16490050)
#define CLASS_1_BCC6EC14575D7215__GET_SUBMITCOMMAND_B__10_0_OFFSET UNITYSDK_OFFSET(0x16491990)
#define CLASS_1_BCC6EC14575D7215___SUBMIT_B__33_0_OFFSET UNITYSDK_OFFSET(0x16491B20)

inline static constexpr unsigned int Class_1_BCC6EC14575D7215_TypeDefinitionIndex = 79587;

class Class_1_BCC6EC14575D7215 : public ::System::Object
{
public:
	::System::Action* HandleHintRequiredConstraintsNotMet; // 0x10
	::Class_0_16E4307DCC419505_127* KAKBLCLNGAO; // 0x18
	::Class_1_45CA56C59C8BBBC0* JOKBAPFCJFM; // 0x20
	::System::Action* HandleDeselect; // 0x28
	::Class_0_16E4307DCC419505_397* DIGPBKLALJE; // 0x30
	::System::Action* HandleHintImproperPlacement; // 0x38
	::System::Action* HandleHintAttrTraitTargetNotMet; // 0x40
	::R3::ReadOnlyReactiveProperty_1<::System::Boolean>* __CanSubmit_k__BackingField; // 0x48
	::System::Action_1<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2Int>*>* HandleHintAsymmetricCells; // 0x50
	::Class_0_16E4307DCC419505_409* GJALMBBNNOF; // 0x58
	::System::Action_1<::System::Boolean>* HandleSetExitAfterTransition; // 0x60

	::System::Void _ctor(::Class_1_45CA56C59C8BBBC0* a1, ::Class_0_16E4307DCC419505_127* a2, ::Class_1_1294FEF8E985635C* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_45CA56C59C8BBBC0*, ::Class_0_16E4307DCC419505_127*, ::Class_1_1294FEF8E985635C*))((::PBYTE)hIl2Cpp + CLASS_1_BCC6EC14575D7215__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::R3::ReadOnlyReactiveProperty_1<::System::Boolean>* get__CanSubmit()
	{
		return ((::R3::ReadOnlyReactiveProperty_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BCC6EC14575D7215_GET__CANSUBMIT_OFFSET))(this);
	}

	::R3::Observable_1<::System::Boolean>* Method_1_FB5550CC734284FC()
	{
		return ((::R3::Observable_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BCC6EC14575D7215_METHOD_1_FB5550CC734284FC_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_397* Method_1_B213056103887067()
	{
		return ((::Class_0_16E4307DCC419505_397*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BCC6EC14575D7215_METHOD_1_B213056103887067_OFFSET))(this);
	}

	::System::Void add_HandleSetExitAfterTransition(::System::Action_1<::System::Boolean>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_1_BCC6EC14575D7215_ADD_HANDLESETEXITAFTERTRANSITION_OFFSET))(this, a1);
	}

	::System::Void remove_HandleSetExitAfterTransition(::System::Action_1<::System::Boolean>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_1_BCC6EC14575D7215_REMOVE_HANDLESETEXITAFTERTRANSITION_OFFSET))(this, a1);
	}

	::System::Void add_HandleHintImproperPlacement(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_BCC6EC14575D7215_ADD_HANDLEHINTIMPROPERPLACEMENT_OFFSET))(this, a1);
	}

	::System::Void remove_HandleHintImproperPlacement(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_BCC6EC14575D7215_REMOVE_HANDLEHINTIMPROPERPLACEMENT_OFFSET))(this, a1);
	}

	::System::Void add_HandleHintAttrTraitTargetNotMet(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_BCC6EC14575D7215_ADD_HANDLEHINTATTRTRAITTARGETNOTMET_OFFSET))(this, a1);
	}

	::System::Void remove_HandleHintAttrTraitTargetNotMet(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_BCC6EC14575D7215_REMOVE_HANDLEHINTATTRTRAITTARGETNOTMET_OFFSET))(this, a1);
	}

	::System::Void add_HandleHintRequiredConstraintsNotMet(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_BCC6EC14575D7215_ADD_HANDLEHINTREQUIREDCONSTRAINTSNOTMET_OFFSET))(this, a1);
	}

	::System::Void remove_HandleHintRequiredConstraintsNotMet(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_BCC6EC14575D7215_REMOVE_HANDLEHINTREQUIREDCONSTRAINTSNOTMET_OFFSET))(this, a1);
	}

	::System::Void add_HandleDeselect(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_BCC6EC14575D7215_ADD_HANDLEDESELECT_OFFSET))(this, a1);
	}

	::System::Void remove_HandleDeselect(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_BCC6EC14575D7215_REMOVE_HANDLEDESELECT_OFFSET))(this, a1);
	}

	::System::Void add_HandleHintAsymmetricCells(::System::Action_1<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2Int>*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2Int>*>*))((::PBYTE)hIl2Cpp + CLASS_1_BCC6EC14575D7215_ADD_HANDLEHINTASYMMETRICCELLS_OFFSET))(this, a1);
	}

	::System::Void remove_HandleHintAsymmetricCells(::System::Action_1<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2Int>*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2Int>*>*))((::PBYTE)hIl2Cpp + CLASS_1_BCC6EC14575D7215_REMOVE_HANDLEHINTASYMMETRICCELLS_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BCC6EC14575D7215_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_5506F850887C79B5(::System::Object* a1, ::Class_1_BCC6EC14575D7215_Class_1_9A90CD018E72DF20_26* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::Class_1_BCC6EC14575D7215_Class_1_9A90CD018E72DF20_26*))((::PBYTE)hIl2Cpp + CLASS_1_BCC6EC14575D7215_METHOD_1_5506F850887C79B5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_151E25A63D14DDB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BCC6EC14575D7215_METHOD_1_151E25A63D14DDB0_OFFSET))(this);
	}

	::Class_1_DD57899CB8704013* Method_1_38B9FDDE9C153A1E()
	{
		return ((::Class_1_DD57899CB8704013*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BCC6EC14575D7215_METHOD_1_38B9FDDE9C153A1E_OFFSET))(this);
	}

	::System::Void Method_1_19CCC07C980409E4(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_BCC6EC14575D7215_METHOD_1_19CCC07C980409E4_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_E240D159E3150659()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BCC6EC14575D7215_METHOD_1_E240D159E3150659_OFFSET))(this);
	}

	::System::Void _get_SubmitCommand_b__10_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BCC6EC14575D7215__GET_SUBMITCOMMAND_B__10_0_OFFSET))(this);
	}

	::System::Void __Submit_b__33_0(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_BCC6EC14575D7215___SUBMIT_B__33_0_OFFSET))(this, a1);
	}
};
