#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MonoUIAnimScroll;

#define MONOUIANIMSCROLL__GETUIELEMENTINFO_D__6_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x108ACB10)
#define MONOUIANIMSCROLL__GETUIELEMENTINFO_D__6_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x108AD5D0)
#define MONOUIANIMSCROLL__GETUIELEMENTINFO_D__6_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x108AD630)
#define MONOUIANIMSCROLL__GETUIELEMENTINFO_D__6_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x108AD5E0)
#define MONOUIANIMSCROLL__GETUIELEMENTINFO_D__6_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x108ACB00)
#define MONOUIANIMSCROLL__GETUIELEMENTINFO_D__6__CTOR_OFFSET UNITYSDK_OFFSET(0x108ACAF0)

inline static constexpr unsigned int MonoUIAnimScroll__GetUIElementInfo_d__6_TypeDefinitionIndex = 63781;

class MonoUIAnimScroll__GetUIElementInfo_d__6 : public ::System::Object
{
public:
	::MonoUIAnimScroll* __4__this; // 0x10
	::System::Int32 __1__state; // 0x18
	::System::Single __2__current; // 0x1C

	::System::Void _ctor(::System::Int32 __1__state)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MONOUIANIMSCROLL__GETUIELEMENTINFO_D__6__CTOR_OFFSET))(this, __1__state);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUIANIMSCROLL__GETUIELEMENTINFO_D__6_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUIANIMSCROLL__GETUIELEMENTINFO_D__6_MOVENEXT_OFFSET))(this);
	}

	::System::Single System_Collections_Generic_IEnumerator_System_Single__get_Current()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUIANIMSCROLL__GETUIELEMENTINFO_D__6_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUIANIMSCROLL__GETUIELEMENTINFO_D__6_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUIANIMSCROLL__GETUIELEMENTINFO_D__6_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
