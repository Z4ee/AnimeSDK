#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_F0054AC3F0D34041;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_F0054AC3F0D34041__ROLLDICE_PLACEHOLDSTATEDICE_D__13_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x8994C70)
#define CLASS_1_F0054AC3F0D34041__ROLLDICE_PLACEHOLDSTATEDICE_D__13_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x8995C00)
#define CLASS_1_F0054AC3F0D34041__ROLLDICE_PLACEHOLDSTATEDICE_D__13_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x8995C60)
#define CLASS_1_F0054AC3F0D34041__ROLLDICE_PLACEHOLDSTATEDICE_D__13_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x8995C10)
#define CLASS_1_F0054AC3F0D34041__ROLLDICE_PLACEHOLDSTATEDICE_D__13_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8994C50)
#define CLASS_1_F0054AC3F0D34041__ROLLDICE_PLACEHOLDSTATEDICE_D__13__CTOR_OFFSET UNITYSDK_OFFSET(0x898BC00)

inline static constexpr unsigned int Class_1_F0054AC3F0D34041__RollDice_PlaceHoldStateDice_d__13_TypeDefinitionIndex = 48862;

class Class_1_F0054AC3F0D34041__RollDice_PlaceHoldStateDice_d__13 : public ::System::Object
{
public:
	::System::Object* __2__current; // 0x10
	::Class_1_F0054AC3F0D34041* __4__this; // 0x18
	::System::Collections::Generic::List_1<::UnityEngine::Quaternion>* _targetRotations_5__5; // 0x20
	::System::Collections::Generic::List_1<::UnityEngine::Quaternion>* _originRotations_5__4; // 0x28
	::System::Collections::Generic::List_1<::UnityEngine::Vector3>* _originPositions_5__2; // 0x30
	::System::Collections::Generic::List_1<::UnityEngine::Vector3>* _targetPositions_5__3; // 0x38
	::System::Int32 __1__state; // 0x40
	::System::Boolean forceRefresh; // 0x44
	::System::Single _ratio_5__6; // 0x48

	::System::Void _ctor(::System::Int32 __1__state)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F0054AC3F0D34041__ROLLDICE_PLACEHOLDSTATEDICE_D__13__CTOR_OFFSET))(this, __1__state);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F0054AC3F0D34041__ROLLDICE_PLACEHOLDSTATEDICE_D__13_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F0054AC3F0D34041__ROLLDICE_PLACEHOLDSTATEDICE_D__13_MOVENEXT_OFFSET))(this);
	}

	::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F0054AC3F0D34041__ROLLDICE_PLACEHOLDSTATEDICE_D__13_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F0054AC3F0D34041__ROLLDICE_PLACEHOLDSTATEDICE_D__13_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F0054AC3F0D34041__ROLLDICE_PLACEHOLDSTATEDICE_D__13_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
