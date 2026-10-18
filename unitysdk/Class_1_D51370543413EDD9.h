#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_5A70B04B36C288E4.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

class Class_1_3CFD07DFD0180CDE;
namespace System { class IDisposable; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Immutable { template <typename T> class IImmutableSet_1; }

#define CLASS_1_D51370543413EDD9_ADD_HANDLEFORCEHINTBUFFAFFECTED_OFFSET UNITYSDK_OFFSET(0x15A3FFA0)
#define CLASS_1_D51370543413EDD9_ADD_ONBUFFAFFECTEDCELLSMAYBECHANGED_OFFSET UNITYSDK_OFFSET(0x15A3FEA0)
#define CLASS_1_D51370543413EDD9_ADD_ONBUFFAFFECTINGCELLSMAYBECHANGED_OFFSET UNITYSDK_OFFSET(0x15A3F910)
#define CLASS_1_D51370543413EDD9_ADD_ONBUFFEDLINESMAYBECHANGED_OFFSET UNITYSDK_OFFSET(0x15A3FA10)
#define CLASS_1_D51370543413EDD9_METHOD_1_1576E1CE6A5A6899_OFFSET UNITYSDK_OFFSET(0x15A3F6D0)
#define CLASS_1_D51370543413EDD9_METHOD_1_1994748E813083D7_OFFSET UNITYSDK_OFFSET(0x15A3F000)
#define CLASS_1_D51370543413EDD9_METHOD_1_390623AF74E8C979_1_OFFSET UNITYSDK_OFFSET(0x15A3F240)
#define CLASS_1_D51370543413EDD9_METHOD_1_390623AF74E8C979_2_OFFSET UNITYSDK_OFFSET(0x15A3F290)
#define CLASS_1_D51370543413EDD9_METHOD_1_390623AF74E8C979_OFFSET UNITYSDK_OFFSET(0x15A3E9C0)
#define CLASS_1_D51370543413EDD9_METHOD_1_3B10EBB5408EF02E_OFFSET UNITYSDK_OFFSET(0x15A3EE80)
#define CLASS_1_D51370543413EDD9_METHOD_1_51CFFE2AF748ECD7_1_OFFSET UNITYSDK_OFFSET(0x15A400A0)
#define CLASS_1_D51370543413EDD9_METHOD_1_51CFFE2AF748ECD7_OFFSET UNITYSDK_OFFSET(0x15A3FB10)
#define CLASS_1_D51370543413EDD9_METHOD_1_8DA3FEE3379AFF0E_OFFSET UNITYSDK_OFFSET(0x15A3F340)
#define CLASS_1_D51370543413EDD9_METHOD_1_B39416EBE5B2947C_OFFSET UNITYSDK_OFFSET(0x15A3EA30)
#define CLASS_1_D51370543413EDD9_METHOD_1_D7B57D4A6E55D8F9_OFFSET UNITYSDK_OFFSET(0x15A3F2E0)
#define CLASS_1_D51370543413EDD9_METHOD_1_E7EF6BC52B28648C_OFFSET UNITYSDK_OFFSET(0x15A3FD10)
#define CLASS_1_D51370543413EDD9_REMOVE_HANDLEFORCEHINTBUFFAFFECTED_OFFSET UNITYSDK_OFFSET(0x15A40020)
#define CLASS_1_D51370543413EDD9_REMOVE_ONBUFFAFFECTEDCELLSMAYBECHANGED_OFFSET UNITYSDK_OFFSET(0x15A3FF20)
#define CLASS_1_D51370543413EDD9_REMOVE_ONBUFFAFFECTINGCELLSMAYBECHANGED_OFFSET UNITYSDK_OFFSET(0x15A3F990)
#define CLASS_1_D51370543413EDD9_REMOVE_ONBUFFEDLINESMAYBECHANGED_OFFSET UNITYSDK_OFFSET(0x15A3FA90)
#define CLASS_1_D51370543413EDD9__CTOR_OFFSET UNITYSDK_OFFSET(0x15A402A0)
#define CLASS_1_D51370543413EDD9___SUBSCRIBEPIECEBUFFED_B__25_0_OFFSET UNITYSDK_OFFSET(0x15A40520)
#define CLASS_1_D51370543413EDD9___TRYSUBSCRIBEPIECEBUFFING_B__12_0_OFFSET UNITYSDK_OFFSET(0x15A40500)
#define CLASS_1_D51370543413EDD9___TRYSUBSCRIBEPIECEBUFFING_B__12_1_OFFSET UNITYSDK_OFFSET(0x15A40510)

inline static constexpr unsigned int Class_1_D51370543413EDD9_TypeDefinitionIndex = 79452;

class Class_1_D51370543413EDD9 : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::Class_1_3CFD07DFD0180CDE*>* APMOGNLKICD; // 0x10
	::System::Action_1<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2Int>*>* HandleForceHintBuffAffected; // 0x18
	::System::Collections::Generic::Dictionary_2<::Class_1_3CFD07DFD0180CDE*, ::System::IDisposable*>* AIGAKKDNIBD; // 0x20
	::System::Collections::Generic::Dictionary_2<::Class_1_3CFD07DFD0180CDE*, ::System::IDisposable*>* DPLONCBOBBI; // 0x28
	::System::Collections::Generic::HashSet_1<::Class_1_3CFD07DFD0180CDE*>* BCPHCKGKDEB; // 0x30
	::System::Action_1<::System::Collections::Generic::HashSet_1<::UnityEngine::Vector2Int>*>* OnBuffAffectedCellsMaybeChanged; // 0x38
	::System::Action_1<::System::Collections::Immutable::IImmutableSet_1<::Struct_2_5A70B04B36C288E4>*>* OnBuffedLinesMaybeChanged; // 0x40
	::System::Collections::Generic::HashSet_1<::UnityEngine::Vector2Int>* MKHKBFHPEOO; // 0x48
	::System::Action_1<::System::Collections::Generic::HashSet_1<::UnityEngine::Vector2Int>*>* OnBuffAffectingCellsMaybeChanged; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D51370543413EDD9__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_390623AF74E8C979(::Class_1_3CFD07DFD0180CDE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3CFD07DFD0180CDE*))((::PBYTE)hIl2Cpp + CLASS_1_D51370543413EDD9_METHOD_1_390623AF74E8C979_OFFSET))(this, a1);
	}

	::System::Void Method_1_390623AF74E8C979_1(::Class_1_3CFD07DFD0180CDE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3CFD07DFD0180CDE*))((::PBYTE)hIl2Cpp + CLASS_1_D51370543413EDD9_METHOD_1_390623AF74E8C979_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_390623AF74E8C979_2(::Class_1_3CFD07DFD0180CDE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3CFD07DFD0180CDE*))((::PBYTE)hIl2Cpp + CLASS_1_D51370543413EDD9_METHOD_1_390623AF74E8C979_2_OFFSET))(this, a1);
	}

	::System::Void Method_1_D7B57D4A6E55D8F9(::Class_1_3CFD07DFD0180CDE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3CFD07DFD0180CDE*))((::PBYTE)hIl2Cpp + CLASS_1_D51370543413EDD9_METHOD_1_D7B57D4A6E55D8F9_OFFSET))(this, a1);
	}

	::System::Void add_OnBuffAffectingCellsMaybeChanged(::System::Action_1<::System::Collections::Generic::HashSet_1<::UnityEngine::Vector2Int>*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Collections::Generic::HashSet_1<::UnityEngine::Vector2Int>*>*))((::PBYTE)hIl2Cpp + CLASS_1_D51370543413EDD9_ADD_ONBUFFAFFECTINGCELLSMAYBECHANGED_OFFSET))(this, a1);
	}

	::System::Void remove_OnBuffAffectingCellsMaybeChanged(::System::Action_1<::System::Collections::Generic::HashSet_1<::UnityEngine::Vector2Int>*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Collections::Generic::HashSet_1<::UnityEngine::Vector2Int>*>*))((::PBYTE)hIl2Cpp + CLASS_1_D51370543413EDD9_REMOVE_ONBUFFAFFECTINGCELLSMAYBECHANGED_OFFSET))(this, a1);
	}

	::System::Void add_OnBuffedLinesMaybeChanged(::System::Action_1<::System::Collections::Immutable::IImmutableSet_1<::Struct_2_5A70B04B36C288E4>*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Collections::Immutable::IImmutableSet_1<::Struct_2_5A70B04B36C288E4>*>*))((::PBYTE)hIl2Cpp + CLASS_1_D51370543413EDD9_ADD_ONBUFFEDLINESMAYBECHANGED_OFFSET))(this, a1);
	}

	::System::Void remove_OnBuffedLinesMaybeChanged(::System::Action_1<::System::Collections::Immutable::IImmutableSet_1<::Struct_2_5A70B04B36C288E4>*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Collections::Immutable::IImmutableSet_1<::Struct_2_5A70B04B36C288E4>*>*))((::PBYTE)hIl2Cpp + CLASS_1_D51370543413EDD9_REMOVE_ONBUFFEDLINESMAYBECHANGED_OFFSET))(this, a1);
	}

	::System::Void Method_1_B39416EBE5B2947C(::Class_1_3CFD07DFD0180CDE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3CFD07DFD0180CDE*))((::PBYTE)hIl2Cpp + CLASS_1_D51370543413EDD9_METHOD_1_B39416EBE5B2947C_OFFSET))(this, a1);
	}

	::System::Void Method_1_8DA3FEE3379AFF0E(::Class_1_3CFD07DFD0180CDE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3CFD07DFD0180CDE*))((::PBYTE)hIl2Cpp + CLASS_1_D51370543413EDD9_METHOD_1_8DA3FEE3379AFF0E_OFFSET))(this, a1);
	}

	::System::Void Method_1_51CFFE2AF748ECD7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D51370543413EDD9_METHOD_1_51CFFE2AF748ECD7_OFFSET))(this);
	}

	::System::Void Method_1_E7EF6BC52B28648C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D51370543413EDD9_METHOD_1_E7EF6BC52B28648C_OFFSET))(this);
	}

	::System::Void add_OnBuffAffectedCellsMaybeChanged(::System::Action_1<::System::Collections::Generic::HashSet_1<::UnityEngine::Vector2Int>*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Collections::Generic::HashSet_1<::UnityEngine::Vector2Int>*>*))((::PBYTE)hIl2Cpp + CLASS_1_D51370543413EDD9_ADD_ONBUFFAFFECTEDCELLSMAYBECHANGED_OFFSET))(this, a1);
	}

	::System::Void remove_OnBuffAffectedCellsMaybeChanged(::System::Action_1<::System::Collections::Generic::HashSet_1<::UnityEngine::Vector2Int>*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Collections::Generic::HashSet_1<::UnityEngine::Vector2Int>*>*))((::PBYTE)hIl2Cpp + CLASS_1_D51370543413EDD9_REMOVE_ONBUFFAFFECTEDCELLSMAYBECHANGED_OFFSET))(this, a1);
	}

	::System::Void add_HandleForceHintBuffAffected(::System::Action_1<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2Int>*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2Int>*>*))((::PBYTE)hIl2Cpp + CLASS_1_D51370543413EDD9_ADD_HANDLEFORCEHINTBUFFAFFECTED_OFFSET))(this, a1);
	}

	::System::Void remove_HandleForceHintBuffAffected(::System::Action_1<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2Int>*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2Int>*>*))((::PBYTE)hIl2Cpp + CLASS_1_D51370543413EDD9_REMOVE_HANDLEFORCEHINTBUFFAFFECTED_OFFSET))(this, a1);
	}

	::System::Void Method_1_3B10EBB5408EF02E(::Class_1_3CFD07DFD0180CDE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3CFD07DFD0180CDE*))((::PBYTE)hIl2Cpp + CLASS_1_D51370543413EDD9_METHOD_1_3B10EBB5408EF02E_OFFSET))(this, a1);
	}

	::System::Void Method_1_1576E1CE6A5A6899(::Class_1_3CFD07DFD0180CDE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3CFD07DFD0180CDE*))((::PBYTE)hIl2Cpp + CLASS_1_D51370543413EDD9_METHOD_1_1576E1CE6A5A6899_OFFSET))(this, a1);
	}

	::System::Void Method_1_51CFFE2AF748ECD7_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D51370543413EDD9_METHOD_1_51CFFE2AF748ECD7_1_OFFSET))(this);
	}

	::System::Void Method_1_1994748E813083D7(::Class_1_3CFD07DFD0180CDE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3CFD07DFD0180CDE*))((::PBYTE)hIl2Cpp + CLASS_1_D51370543413EDD9_METHOD_1_1994748E813083D7_OFFSET))(this, a1);
	}

	::System::Void __TrySubscribePieceBuffing_b__12_0(::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector2Int>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector2Int>*))((::PBYTE)hIl2Cpp + CLASS_1_D51370543413EDD9___TRYSUBSCRIBEPIECEBUFFING_B__12_0_OFFSET))(this, a1);
	}

	::System::Void __TrySubscribePieceBuffing_b__12_1(::System::Collections::Immutable::IImmutableSet_1<::Struct_2_5A70B04B36C288E4>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Immutable::IImmutableSet_1<::Struct_2_5A70B04B36C288E4>*))((::PBYTE)hIl2Cpp + CLASS_1_D51370543413EDD9___TRYSUBSCRIBEPIECEBUFFING_B__12_1_OFFSET))(this, a1);
	}

	::System::Void __SubscribePieceBuffed_b__25_0(::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector2Int>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector2Int>*))((::PBYTE)hIl2Cpp + CLASS_1_D51370543413EDD9___SUBSCRIBEPIECEBUFFED_B__25_0_OFFSET))(this, a1);
	}
};
