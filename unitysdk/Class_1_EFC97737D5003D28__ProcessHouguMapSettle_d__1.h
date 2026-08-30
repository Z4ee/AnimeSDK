#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BattleResultState.h"
#include "unitysdk/System/Object.h"

class Class_1_EFC97737D5003D28;

#define CLASS_1_EFC97737D5003D28__PROCESSHOUGUMAPSETTLE_D__1_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xDA96250)
#define CLASS_1_EFC97737D5003D28__PROCESSHOUGUMAPSETTLE_D__1_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xDA965A0)
#define CLASS_1_EFC97737D5003D28__PROCESSHOUGUMAPSETTLE_D__1_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xDA96600)
#define CLASS_1_EFC97737D5003D28__PROCESSHOUGUMAPSETTLE_D__1_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xDA965B0)
#define CLASS_1_EFC97737D5003D28__PROCESSHOUGUMAPSETTLE_D__1_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDA96240)
#define CLASS_1_EFC97737D5003D28__PROCESSHOUGUMAPSETTLE_D__1__CTOR_OFFSET UNITYSDK_OFFSET(0xDA95C40)

inline static constexpr unsigned int Class_1_EFC97737D5003D28__ProcessHouguMapSettle_d__1_TypeDefinitionIndex = 79433;

class Class_1_EFC97737D5003D28__ProcessHouguMapSettle_d__1 : public ::System::Object
{
public:
	::Class_1_EFC97737D5003D28* __4__this; // 0x10
	::System::Object* __2__current; // 0x18
	::System::Int32 __1__state; // 0x20
	::System::UInt32 stageID; // 0x24
	::RPG::GameCore::BattleResultState state; // 0x28

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_EFC97737D5003D28__PROCESSHOUGUMAPSETTLE_D__1__CTOR_OFFSET))(this, a1);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EFC97737D5003D28__PROCESSHOUGUMAPSETTLE_D__1_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EFC97737D5003D28__PROCESSHOUGUMAPSETTLE_D__1_MOVENEXT_OFFSET))(this);
	}

	::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EFC97737D5003D28__PROCESSHOUGUMAPSETTLE_D__1_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EFC97737D5003D28__PROCESSHOUGUMAPSETTLE_D__1_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EFC97737D5003D28__PROCESSHOUGUMAPSETTLE_D__1_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
