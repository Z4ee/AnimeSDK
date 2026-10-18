#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/R3/Unit.h"
#include "unitysdk/Struct_2_5A70B04B36C288E4.h"
#include "unitysdk/Struct_2_BDFB1B98046CDD46.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueTuple_3.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

class Class_0_16E4307DCC419505_397;
class Class_1_5E2D533DC7C7E714;
class Class_1_D05699509194BF9B;
class Class_2_11547817CAC659C4;
namespace R3 { template <typename T> class Observable_1; }
namespace R3 { template <typename T> class ReactiveProperty_1; }
namespace R3 { template <typename T> class ReadOnlyReactiveProperty_1; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Immutable { template <typename T> class IImmutableSet_1; }

#define CLASS_1_3CFD07DFD0180CDE_ADD_HANDLEHINTPLACED_OFFSET UNITYSDK_OFFSET(0x15E11950)
#define CLASS_1_3CFD07DFD0180CDE_ADD_ONCLICKED_OFFSET UNITYSDK_OFFSET(0x15E11860)
#define CLASS_1_3CFD07DFD0180CDE_ADD_ONISEDITINGCHANGED_OFFSET UNITYSDK_OFFSET(0x15E112F0)
#define CLASS_1_3CFD07DFD0180CDE_ADD_ONISIMPROPERCHANGED_OFFSET UNITYSDK_OFFSET(0x15E116E0)
#define CLASS_1_3CFD07DFD0180CDE_ADD_ONTRANSFORMCHANGED_OFFSET UNITYSDK_OFFSET(0x15E10FE0)
#define CLASS_1_3CFD07DFD0180CDE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15E125C0)
#define CLASS_1_3CFD07DFD0180CDE_GET_BUFFAFFECTEDCELLS_OFFSET UNITYSDK_OFFSET(0x15E11940)
#define CLASS_1_3CFD07DFD0180CDE_GET_BUFFAFFECTEDLINES_OFFSET UNITYSDK_OFFSET(0x15E11930)
#define CLASS_1_3CFD07DFD0180CDE_GET_BUFFAFFECTINGCELLS_OFFSET UNITYSDK_OFFSET(0x15E11920)
#define CLASS_1_3CFD07DFD0180CDE_GET_MODEL_OFFSET UNITYSDK_OFFSET(0x15E10E40)
#define CLASS_1_3CFD07DFD0180CDE_METHOD_1_19B91D58E02869BC_OFFSET UNITYSDK_OFFSET(0x15E12860)
#define CLASS_1_3CFD07DFD0180CDE_METHOD_1_1B9CC121BDC8766D_1_OFFSET UNITYSDK_OFFSET(0x15E11670)
#define CLASS_1_3CFD07DFD0180CDE_METHOD_1_1B9CC121BDC8766D_OFFSET UNITYSDK_OFFSET(0x15E11130)
#define CLASS_1_3CFD07DFD0180CDE_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x15E110A0)
#define CLASS_1_3CFD07DFD0180CDE_METHOD_1_27A289AEC4A8FD95_OFFSET UNITYSDK_OFFSET(0x15E113C0)
#define CLASS_1_3CFD07DFD0180CDE_METHOD_1_391A84BCD9F51317_1_OFFSET UNITYSDK_OFFSET(0x15E11630)
#define CLASS_1_3CFD07DFD0180CDE_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x15E110F0)
#define CLASS_1_3CFD07DFD0180CDE_METHOD_1_4236852A9D9DE49C_OFFSET UNITYSDK_OFFSET(0x15E10E50)
#define CLASS_1_3CFD07DFD0180CDE_METHOD_1_4343F372F34C05BF_1_OFFSET UNITYSDK_OFFSET(0x15E12910)
#define CLASS_1_3CFD07DFD0180CDE_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x15E128B0)
#define CLASS_1_3CFD07DFD0180CDE_METHOD_1_502D0876DCEA64A0_OFFSET UNITYSDK_OFFSET(0x15E12DE0)
#define CLASS_1_3CFD07DFD0180CDE_METHOD_1_70589F89E4D22649_OFFSET UNITYSDK_OFFSET(0x15E111A0)
#define CLASS_1_3CFD07DFD0180CDE_METHOD_1_8AC4F50BB7DCDDCF_OFFSET UNITYSDK_OFFSET(0x15E127B0)
#define CLASS_1_3CFD07DFD0180CDE_METHOD_1_935A33C00E5672AA_OFFSET UNITYSDK_OFFSET(0x15E12970)
#define CLASS_1_3CFD07DFD0180CDE_METHOD_1_9B39F7D7C1FF70D6_OFFSET UNITYSDK_OFFSET(0x15E11490)
#define CLASS_1_3CFD07DFD0180CDE_METHOD_1_9B7B6CB0F6DF571B_OFFSET UNITYSDK_OFFSET(0x15E10EC0)
#define CLASS_1_3CFD07DFD0180CDE_METHOD_1_B213056103887067_OFFSET UNITYSDK_OFFSET(0x15E117A0)
#define CLASS_1_3CFD07DFD0180CDE_METHOD_1_D9A06097A368CF03_OFFSET UNITYSDK_OFFSET(0x15E10F30)
#define CLASS_1_3CFD07DFD0180CDE_METHOD_1_E03A6BA82B6A6F62_OFFSET UNITYSDK_OFFSET(0x15E114E0)
#define CLASS_1_3CFD07DFD0180CDE_REMOVE_HANDLEHINTPLACED_OFFSET UNITYSDK_OFFSET(0x15E119B0)
#define CLASS_1_3CFD07DFD0180CDE_REMOVE_ONCLICKED_OFFSET UNITYSDK_OFFSET(0x15E118C0)
#define CLASS_1_3CFD07DFD0180CDE_REMOVE_ONISEDITINGCHANGED_OFFSET UNITYSDK_OFFSET(0x15E11350)
#define CLASS_1_3CFD07DFD0180CDE_REMOVE_ONISIMPROPERCHANGED_OFFSET UNITYSDK_OFFSET(0x15E11740)
#define CLASS_1_3CFD07DFD0180CDE_REMOVE_ONTRANSFORMCHANGED_OFFSET UNITYSDK_OFFSET(0x15E11040)
#define CLASS_1_3CFD07DFD0180CDE_RPG_CLIENT_MECHCRAFT_VIEWMODEL_IMECHCRAFTCRAFTEDITSOURCEVIEWMODEL_GET_ISDRAGGED_OFFSET UNITYSDK_OFFSET(0x15E113B0)
#define CLASS_1_3CFD07DFD0180CDE__CTOR_OFFSET UNITYSDK_OFFSET(0x15E11A10)
#define CLASS_1_3CFD07DFD0180CDE__GET_CLICKCOMMAND_B__41_0_OFFSET UNITYSDK_OFFSET(0x15E12E70)
#define CLASS_1_3CFD07DFD0180CDE___CTOR_B__57_0_OFFSET UNITYSDK_OFFSET(0x15E12E90)
#define CLASS_1_3CFD07DFD0180CDE___CTOR_B__57_10_OFFSET UNITYSDK_OFFSET(0x15E131E0)
#define CLASS_1_3CFD07DFD0180CDE___CTOR_B__57_12_OFFSET UNITYSDK_OFFSET(0x15E13230)
#define CLASS_1_3CFD07DFD0180CDE___CTOR_B__57_13_OFFSET UNITYSDK_OFFSET(0x15E132D0)
#define CLASS_1_3CFD07DFD0180CDE___CTOR_B__57_14_OFFSET UNITYSDK_OFFSET(0x15E13340)
#define CLASS_1_3CFD07DFD0180CDE___CTOR_B__57_15_OFFSET UNITYSDK_OFFSET(0x15E133B0)
#define CLASS_1_3CFD07DFD0180CDE___CTOR_B__57_1_OFFSET UNITYSDK_OFFSET(0x15E12EF0)
#define CLASS_1_3CFD07DFD0180CDE___CTOR_B__57_2_OFFSET UNITYSDK_OFFSET(0x15E12F50)
#define CLASS_1_3CFD07DFD0180CDE___CTOR_B__57_4_OFFSET UNITYSDK_OFFSET(0x15E12FC0)
#define CLASS_1_3CFD07DFD0180CDE___CTOR_B__57_5_OFFSET UNITYSDK_OFFSET(0x15E12FD0)
#define CLASS_1_3CFD07DFD0180CDE___CTOR_B__57_6_OFFSET UNITYSDK_OFFSET(0x15E13030)
#define CLASS_1_3CFD07DFD0180CDE___CTOR_B__57_7_OFFSET UNITYSDK_OFFSET(0x15E13090)
#define CLASS_1_3CFD07DFD0180CDE___CTOR_B__57_8_OFFSET UNITYSDK_OFFSET(0x15E13100)
#define CLASS_1_3CFD07DFD0180CDE___CTOR_B__57_9_OFFSET UNITYSDK_OFFSET(0x15E13170)
#define CLASS_1_3CFD07DFD0180CDE___GETBUFFAFFECTINGCELLS_B__63_2_OFFSET UNITYSDK_OFFSET(0x15E13400)

inline static constexpr unsigned int Class_1_3CFD07DFD0180CDE_TypeDefinitionIndex = 79480;

class Class_1_3CFD07DFD0180CDE : public ::System::Object
{
public:
	::R3::ReadOnlyReactiveProperty_1<::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector2Int>*>* _BuffAffectedCells_k__BackingField; // 0x10
	::System::Action* OnIsEditingChanged; // 0x18
	::R3::ReadOnlyReactiveProperty_1<::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector2Int>*>* _BuffAffectingCells_k__BackingField; // 0x20
	::Class_0_16E4307DCC419505_397* EAGJDPFNCPF; // 0x28
	::System::Action* HandleHintPlaced; // 0x30
	::System::Action* OnClicked; // 0x38
	::System::Action* OnIsImproperChanged; // 0x40
	::Class_1_5E2D533DC7C7E714* _Model_k__BackingField; // 0x48
	::System::Action* OnTransformChanged; // 0x50
	::R3::ReadOnlyReactiveProperty_1<::System::Collections::Immutable::IImmutableSet_1<::Struct_2_5A70B04B36C288E4>*>* _BuffAffectedLines_k__BackingField; // 0x58
	::R3::ReactiveProperty_1<::System::Boolean>* _RPG_Client_MechCraft_ViewModel_IMechCraftCraftEditSourceViewModel_IsDragged_k__BackingField; // 0x60
	::System::Boolean JONOLDFCHOG; // 0x68
	::System::Boolean IOFCLKCHOCH; // 0x69

	::System::Void _ctor(::Class_1_5E2D533DC7C7E714* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5E2D533DC7C7E714*))((::PBYTE)hIl2Cpp + CLASS_1_3CFD07DFD0180CDE__CTOR_OFFSET))(this, a1);
	}

	::Class_1_5E2D533DC7C7E714* get_Model()
	{
		return ((::Class_1_5E2D533DC7C7E714*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3CFD07DFD0180CDE_GET_MODEL_OFFSET))(this);
	}

	::System::String* Method_1_4236852A9D9DE49C()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3CFD07DFD0180CDE_METHOD_1_4236852A9D9DE49C_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector2Int>* Method_1_9B7B6CB0F6DF571B()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector2Int>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3CFD07DFD0180CDE_METHOD_1_9B7B6CB0F6DF571B_OFFSET))(this);
	}

	::Struct_2_BDFB1B98046CDD46 Method_1_D9A06097A368CF03()
	{
		return ((::Struct_2_BDFB1B98046CDD46(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3CFD07DFD0180CDE_METHOD_1_D9A06097A368CF03_OFFSET))(this);
	}

	::System::Void add_OnTransformChanged(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_3CFD07DFD0180CDE_ADD_ONTRANSFORMCHANGED_OFFSET))(this, a1);
	}

	::System::Void remove_OnTransformChanged(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_3CFD07DFD0180CDE_REMOVE_ONTRANSFORMCHANGED_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3CFD07DFD0180CDE_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3CFD07DFD0180CDE_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_1_1B9CC121BDC8766D(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3CFD07DFD0180CDE_METHOD_1_1B9CC121BDC8766D_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_70589F89E4D22649()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3CFD07DFD0180CDE_METHOD_1_70589F89E4D22649_OFFSET))(this);
	}

	::System::Void add_OnIsEditingChanged(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_3CFD07DFD0180CDE_ADD_ONISEDITINGCHANGED_OFFSET))(this, a1);
	}

	::System::Void remove_OnIsEditingChanged(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_3CFD07DFD0180CDE_REMOVE_ONISEDITINGCHANGED_OFFSET))(this, a1);
	}

	::R3::ReactiveProperty_1<::System::Boolean>* RPG_Client_MechCraft_ViewModel_IMechCraftCraftEditSourceViewModel_get_IsDragged()
	{
		return ((::R3::ReactiveProperty_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3CFD07DFD0180CDE_RPG_CLIENT_MECHCRAFT_VIEWMODEL_IMECHCRAFTCRAFTEDITSOURCEVIEWMODEL_GET_ISDRAGGED_OFFSET))(this);
	}

	::System::Nullable_1<::Struct_2_BDFB1B98046CDD46> Method_1_27A289AEC4A8FD95()
	{
		return ((::System::Nullable_1<::Struct_2_BDFB1B98046CDD46>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3CFD07DFD0180CDE_METHOD_1_27A289AEC4A8FD95_OFFSET))(this);
	}

	::Class_1_D05699509194BF9B* Method_1_9B39F7D7C1FF70D6()
	{
		return ((::Class_1_D05699509194BF9B*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3CFD07DFD0180CDE_METHOD_1_9B39F7D7C1FF70D6_OFFSET))(this);
	}

	::R3::Observable_1<::System::Boolean>* Method_1_E03A6BA82B6A6F62()
	{
		return ((::R3::Observable_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3CFD07DFD0180CDE_METHOD_1_E03A6BA82B6A6F62_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3CFD07DFD0180CDE_METHOD_1_391A84BCD9F51317_1_OFFSET))(this);
	}

	::System::Void Method_1_1B9CC121BDC8766D_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3CFD07DFD0180CDE_METHOD_1_1B9CC121BDC8766D_1_OFFSET))(this, a1);
	}

	::System::Void add_OnIsImproperChanged(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_3CFD07DFD0180CDE_ADD_ONISIMPROPERCHANGED_OFFSET))(this, a1);
	}

	::System::Void remove_OnIsImproperChanged(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_3CFD07DFD0180CDE_REMOVE_ONISIMPROPERCHANGED_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_397* Method_1_B213056103887067()
	{
		return ((::Class_0_16E4307DCC419505_397*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3CFD07DFD0180CDE_METHOD_1_B213056103887067_OFFSET))(this);
	}

	::System::Void add_OnClicked(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_3CFD07DFD0180CDE_ADD_ONCLICKED_OFFSET))(this, a1);
	}

	::System::Void remove_OnClicked(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_3CFD07DFD0180CDE_REMOVE_ONCLICKED_OFFSET))(this, a1);
	}

	::R3::ReadOnlyReactiveProperty_1<::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector2Int>*>* get_BuffAffectingCells()
	{
		return ((::R3::ReadOnlyReactiveProperty_1<::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector2Int>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3CFD07DFD0180CDE_GET_BUFFAFFECTINGCELLS_OFFSET))(this);
	}

	::R3::ReadOnlyReactiveProperty_1<::System::Collections::Immutable::IImmutableSet_1<::Struct_2_5A70B04B36C288E4>*>* get_BuffAffectedLines()
	{
		return ((::R3::ReadOnlyReactiveProperty_1<::System::Collections::Immutable::IImmutableSet_1<::Struct_2_5A70B04B36C288E4>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3CFD07DFD0180CDE_GET_BUFFAFFECTEDLINES_OFFSET))(this);
	}

	::R3::ReadOnlyReactiveProperty_1<::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector2Int>*>* get_BuffAffectedCells()
	{
		return ((::R3::ReadOnlyReactiveProperty_1<::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector2Int>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3CFD07DFD0180CDE_GET_BUFFAFFECTEDCELLS_OFFSET))(this);
	}

	::System::Void add_HandleHintPlaced(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_3CFD07DFD0180CDE_ADD_HANDLEHINTPLACED_OFFSET))(this, a1);
	}

	::System::Void remove_HandleHintPlaced(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_3CFD07DFD0180CDE_REMOVE_HANDLEHINTPLACED_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3CFD07DFD0180CDE_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_8AC4F50BB7DCDDCF(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3CFD07DFD0180CDE_METHOD_1_8AC4F50BB7DCDDCF_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_19B91D58E02869BC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3CFD07DFD0180CDE_METHOD_1_19B91D58E02869BC_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3CFD07DFD0180CDE_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3CFD07DFD0180CDE_METHOD_1_4343F372F34C05BF_1_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector2Int>* Method_1_935A33C00E5672AA(::System::Boolean a1)
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector2Int>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3CFD07DFD0180CDE_METHOD_1_935A33C00E5672AA_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector2Int>* Method_1_502D0876DCEA64A0(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector2Int>*(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3CFD07DFD0180CDE_METHOD_1_502D0876DCEA64A0_OFFSET))(this, a1, a2);
	}

	::System::Void _get_ClickCommand_b__41_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3CFD07DFD0180CDE__GET_CLICKCOMMAND_B__41_0_OFFSET))(this);
	}

	::System::Void __ctor_b__57_0(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_3CFD07DFD0180CDE___CTOR_B__57_0_OFFSET))(this, a1);
	}

	::System::Void __ctor_b__57_1(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_3CFD07DFD0180CDE___CTOR_B__57_1_OFFSET))(this, a1);
	}

	::Struct_2_BDFB1B98046CDD46 __ctor_b__57_2(::R3::Unit a1)
	{
		return ((::Struct_2_BDFB1B98046CDD46(*)(::PVOID, ::R3::Unit))((::PBYTE)hIl2Cpp + CLASS_1_3CFD07DFD0180CDE___CTOR_B__57_2_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector2Int>* __ctor_b__57_4(::System::ValueTuple_2<::Struct_2_BDFB1B98046CDD46, ::System::Boolean> a1, ::System::Int32 a2)
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector2Int>*(*)(::PVOID, ::System::ValueTuple_2<::Struct_2_BDFB1B98046CDD46, ::System::Boolean>, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_3CFD07DFD0180CDE___CTOR_B__57_4_OFFSET))(this, a1, a2);
	}

	::System::Void __ctor_b__57_5(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_3CFD07DFD0180CDE___CTOR_B__57_5_OFFSET))(this, a1);
	}

	::System::Void __ctor_b__57_6(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_3CFD07DFD0180CDE___CTOR_B__57_6_OFFSET))(this, a1);
	}

	::Struct_2_BDFB1B98046CDD46 __ctor_b__57_7(::R3::Unit a1)
	{
		return ((::Struct_2_BDFB1B98046CDD46(*)(::PVOID, ::R3::Unit))((::PBYTE)hIl2Cpp + CLASS_1_3CFD07DFD0180CDE___CTOR_B__57_7_OFFSET))(this, a1);
	}

	::System::Void __ctor_b__57_8(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_3CFD07DFD0180CDE___CTOR_B__57_8_OFFSET))(this, a1);
	}

	::System::Void __ctor_b__57_9(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_3CFD07DFD0180CDE___CTOR_B__57_9_OFFSET))(this, a1);
	}

	::System::Boolean __ctor_b__57_10(::R3::Unit a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::R3::Unit))((::PBYTE)hIl2Cpp + CLASS_1_3CFD07DFD0180CDE___CTOR_B__57_10_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector2Int>* __ctor_b__57_12(::System::ValueTuple_3<::Struct_2_BDFB1B98046CDD46, ::System::Boolean, ::System::Boolean> a1, ::System::Int32 a2)
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector2Int>*(*)(::PVOID, ::System::ValueTuple_3<::Struct_2_BDFB1B98046CDD46, ::System::Boolean, ::System::Boolean>, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_3CFD07DFD0180CDE___CTOR_B__57_12_OFFSET))(this, a1, a2);
	}

	::System::Void __ctor_b__57_13(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_3CFD07DFD0180CDE___CTOR_B__57_13_OFFSET))(this, a1);
	}

	::System::Void __ctor_b__57_14(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_3CFD07DFD0180CDE___CTOR_B__57_14_OFFSET))(this, a1);
	}

	::System::Collections::Immutable::IImmutableSet_1<::Struct_2_5A70B04B36C288E4>* __ctor_b__57_15(::R3::Unit a1)
	{
		return ((::System::Collections::Immutable::IImmutableSet_1<::Struct_2_5A70B04B36C288E4>*(*)(::PVOID, ::R3::Unit))((::PBYTE)hIl2Cpp + CLASS_1_3CFD07DFD0180CDE___CTOR_B__57_15_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2Int>* __GetBuffAffectingCells_b__63_2(::Class_2_11547817CAC659C4* a1)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2Int>*(*)(::PVOID, ::Class_2_11547817CAC659C4*))((::PBYTE)hIl2Cpp + CLASS_1_3CFD07DFD0180CDE___GETBUFFAFFECTINGCELLS_B__63_2_OFFSET))(this, a1);
	}
};
