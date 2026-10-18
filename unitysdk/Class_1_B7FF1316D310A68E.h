#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_BDFB1B98046CDD46.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

class Class_1_D05699509194BF9B;
class Class_2_D550E2FE83D255EF;
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define CLASS_1_B7FF1316D310A68E_ADD_ONBUFFEDCELLSMAYBECHANGED_OFFSET UNITYSDK_OFFSET(0x15673330)
#define CLASS_1_B7FF1316D310A68E_ADD_ONCHIPCHANGED_OFFSET UNITYSDK_OFFSET(0x15672FC0)
#define CLASS_1_B7FF1316D310A68E_ADD_ONTRANSFORMCHANGED_OFFSET UNITYSDK_OFFSET(0x15673270)
#define CLASS_1_B7FF1316D310A68E_METHOD_1_5ED655A622B0DBD9_OFFSET UNITYSDK_OFFSET(0x156729E0)
#define CLASS_1_B7FF1316D310A68E_METHOD_1_67DA101D237F8662_OFFSET UNITYSDK_OFFSET(0x156730E0)
#define CLASS_1_B7FF1316D310A68E_METHOD_1_6916CB2AB9451DD7_OFFSET UNITYSDK_OFFSET(0x15672A60)
#define CLASS_1_B7FF1316D310A68E_METHOD_1_ED5AFB1274EF827E_OFFSET UNITYSDK_OFFSET(0x15673080)
#define CLASS_1_B7FF1316D310A68E_METHOD_1_F8B73ECE7F883AC1_OFFSET UNITYSDK_OFFSET(0x156729A0)
#define CLASS_1_B7FF1316D310A68E_REMOVE_ONBUFFEDCELLSMAYBECHANGED_OFFSET UNITYSDK_OFFSET(0x156733B0)
#define CLASS_1_B7FF1316D310A68E_REMOVE_ONCHIPCHANGED_OFFSET UNITYSDK_OFFSET(0x15673020)
#define CLASS_1_B7FF1316D310A68E_REMOVE_ONTRANSFORMCHANGED_OFFSET UNITYSDK_OFFSET(0x156732D0)
#define CLASS_1_B7FF1316D310A68E__CTOR_OFFSET UNITYSDK_OFFSET(0x15673430)
#define CLASS_1_B7FF1316D310A68E___NOTIFYBUFFEDCELLSMAYBECHANGED_B__17_3_OFFSET UNITYSDK_OFFSET(0x15673440)

inline static constexpr unsigned int Class_1_B7FF1316D310A68E_TypeDefinitionIndex = 79498;

class Class_1_B7FF1316D310A68E : public ::System::Object
{
public:
	::Class_1_D05699509194BF9B* GIEPEGOALHN; // 0x10
	::System::Action* OnChipChanged; // 0x18
	::System::Action_1<::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector2Int>*>* OnBuffedCellsMaybeChanged; // 0x20
	::System::Action* OnTransformChanged; // 0x28
	::System::Nullable_1<::Struct_2_BDFB1B98046CDD46> PDJGEDNLBKJ; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B7FF1316D310A68E__CTOR_OFFSET))(this);
	}

	::Class_1_D05699509194BF9B* Method_1_F8B73ECE7F883AC1()
	{
		return ((::Class_1_D05699509194BF9B*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B7FF1316D310A68E_METHOD_1_F8B73ECE7F883AC1_OFFSET))(this);
	}

	::System::Void Method_1_5ED655A622B0DBD9(::Class_1_D05699509194BF9B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D05699509194BF9B*))((::PBYTE)hIl2Cpp + CLASS_1_B7FF1316D310A68E_METHOD_1_5ED655A622B0DBD9_OFFSET))(this, a1);
	}

	::System::Void add_OnChipChanged(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_B7FF1316D310A68E_ADD_ONCHIPCHANGED_OFFSET))(this, a1);
	}

	::System::Void remove_OnChipChanged(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_B7FF1316D310A68E_REMOVE_ONCHIPCHANGED_OFFSET))(this, a1);
	}

	::System::Nullable_1<::Struct_2_BDFB1B98046CDD46> Method_1_ED5AFB1274EF827E()
	{
		return ((::System::Nullable_1<::Struct_2_BDFB1B98046CDD46>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B7FF1316D310A68E_METHOD_1_ED5AFB1274EF827E_OFFSET))(this);
	}

	::System::Void Method_1_67DA101D237F8662(::System::Nullable_1<::Struct_2_BDFB1B98046CDD46> a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Struct_2_BDFB1B98046CDD46>))((::PBYTE)hIl2Cpp + CLASS_1_B7FF1316D310A68E_METHOD_1_67DA101D237F8662_OFFSET))(this, a1);
	}

	::System::Void add_OnTransformChanged(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_B7FF1316D310A68E_ADD_ONTRANSFORMCHANGED_OFFSET))(this, a1);
	}

	::System::Void remove_OnTransformChanged(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_B7FF1316D310A68E_REMOVE_ONTRANSFORMCHANGED_OFFSET))(this, a1);
	}

	::System::Void add_OnBuffedCellsMaybeChanged(::System::Action_1<::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector2Int>*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector2Int>*>*))((::PBYTE)hIl2Cpp + CLASS_1_B7FF1316D310A68E_ADD_ONBUFFEDCELLSMAYBECHANGED_OFFSET))(this, a1);
	}

	::System::Void remove_OnBuffedCellsMaybeChanged(::System::Action_1<::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector2Int>*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector2Int>*>*))((::PBYTE)hIl2Cpp + CLASS_1_B7FF1316D310A68E_REMOVE_ONBUFFEDCELLSMAYBECHANGED_OFFSET))(this, a1);
	}

	::System::Void Method_1_6916CB2AB9451DD7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B7FF1316D310A68E_METHOD_1_6916CB2AB9451DD7_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2Int>* __NotifyBuffedCellsMaybeChanged_b__17_3(::Class_2_D550E2FE83D255EF* a1)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2Int>*(*)(::PVOID, ::Class_2_D550E2FE83D255EF*))((::PBYTE)hIl2Cpp + CLASS_1_B7FF1316D310A68E___NOTIFYBUFFEDCELLSMAYBECHANGED_B__17_3_OFFSET))(this, a1);
	}
};
