#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_13FE4AAA1A281B42;
class Class_1_9C8BB23B0435A836;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_13FE4AAA1A281B42__ROLLDICE_COLLECTDICEFORSELECT_D__38_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x11B222B0)
#define CLASS_1_13FE4AAA1A281B42__ROLLDICE_COLLECTDICEFORSELECT_D__38_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x11B22EA0)
#define CLASS_1_13FE4AAA1A281B42__ROLLDICE_COLLECTDICEFORSELECT_D__38_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x11B22F00)
#define CLASS_1_13FE4AAA1A281B42__ROLLDICE_COLLECTDICEFORSELECT_D__38_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x11B22EB0)
#define CLASS_1_13FE4AAA1A281B42__ROLLDICE_COLLECTDICEFORSELECT_D__38_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11B22290)
#define CLASS_1_13FE4AAA1A281B42__ROLLDICE_COLLECTDICEFORSELECT_D__38__CTOR_OFFSET UNITYSDK_OFFSET(0x11B19F60)

inline static constexpr unsigned int Class_1_13FE4AAA1A281B42__RollDice_CollectDiceForSelect_d__38_TypeDefinitionIndex = 55628;

class Class_1_13FE4AAA1A281B42__RollDice_CollectDiceForSelect_d__38 : public ::System::Object
{
public:
	::System::Object* __2__current; // 0x10
	::System::Collections::Generic::List_1<::UnityEngine::Quaternion>* _originRotations_5__4; // 0x18
	::System::Collections::Generic::List_1<::UnityEngine::Quaternion>* _targetRotations_5__6; // 0x20
	::System::Collections::Generic::List_1<::UnityEngine::Vector3>* _targetPositions_5__5; // 0x28
	::Class_1_13FE4AAA1A281B42* __4__this; // 0x30
	::System::Collections::Generic::List_1<::Class_1_9C8BB23B0435A836*>* _diceToCollect_5__2; // 0x38
	::System::Collections::Generic::List_1<::UnityEngine::Vector3>* _originPositions_5__3; // 0x40
	::System::Boolean forceRefresh; // 0x48
	::System::Int32 __1__state; // 0x4C
	::System::Single _ratio_5__7; // 0x50

	::System::Void _ctor(::System::Int32 __1__state)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_13FE4AAA1A281B42__ROLLDICE_COLLECTDICEFORSELECT_D__38__CTOR_OFFSET))(this, __1__state);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_13FE4AAA1A281B42__ROLLDICE_COLLECTDICEFORSELECT_D__38_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_13FE4AAA1A281B42__ROLLDICE_COLLECTDICEFORSELECT_D__38_MOVENEXT_OFFSET))(this);
	}

	::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_13FE4AAA1A281B42__ROLLDICE_COLLECTDICEFORSELECT_D__38_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_13FE4AAA1A281B42__ROLLDICE_COLLECTDICEFORSELECT_D__38_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_13FE4AAA1A281B42__ROLLDICE_COLLECTDICEFORSELECT_D__38_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
