#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_BCCF85E57593CA8D;
class Class_1_F0054AC3F0D34041;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_F0054AC3F0D34041__UPGRADEDICEPERFORMANCE_D__37_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x8995C90)
#define CLASS_1_F0054AC3F0D34041__UPGRADEDICEPERFORMANCE_D__37_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x89962F0)
#define CLASS_1_F0054AC3F0D34041__UPGRADEDICEPERFORMANCE_D__37_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x8996350)
#define CLASS_1_F0054AC3F0D34041__UPGRADEDICEPERFORMANCE_D__37_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x8996300)
#define CLASS_1_F0054AC3F0D34041__UPGRADEDICEPERFORMANCE_D__37_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8995C70)
#define CLASS_1_F0054AC3F0D34041__UPGRADEDICEPERFORMANCE_D__37__CTOR_OFFSET UNITYSDK_OFFSET(0x898F500)

inline static constexpr unsigned int Class_1_F0054AC3F0D34041__UpgradeDicePerformance_d__37_TypeDefinitionIndex = 48863;

class Class_1_F0054AC3F0D34041__UpgradeDicePerformance_d__37 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* _newDicePool_5__3; // 0x10
	::Class_1_F0054AC3F0D34041* __4__this; // 0x18
	::System::Object* __2__current; // 0x20
	::System::Collections::Generic::List_1<::System::Int32>* _oldDicePool_5__2; // 0x28
	::Class_1_BCCF85E57593CA8D* detail; // 0x30
	::System::Int32 __1__state; // 0x38
	::System::Boolean isLocalPlayer; // 0x3C

	::System::Void _ctor(::System::Int32 __1__state)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F0054AC3F0D34041__UPGRADEDICEPERFORMANCE_D__37__CTOR_OFFSET))(this, __1__state);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F0054AC3F0D34041__UPGRADEDICEPERFORMANCE_D__37_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F0054AC3F0D34041__UPGRADEDICEPERFORMANCE_D__37_MOVENEXT_OFFSET))(this);
	}

	::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F0054AC3F0D34041__UPGRADEDICEPERFORMANCE_D__37_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F0054AC3F0D34041__UPGRADEDICEPERFORMANCE_D__37_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F0054AC3F0D34041__UPGRADEDICEPERFORMANCE_D__37_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
