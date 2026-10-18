#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_A143022D1701BC76.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_446;
class Class_3_AF789A8CD8421D4F;

#define CLASS_3_AF789A8CD8421D4F__MAINASYNC_D__0_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xBE2D910)
#define CLASS_3_AF789A8CD8421D4F__MAINASYNC_D__0_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_BOOLEAN___GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xBE2D9A0)
#define CLASS_3_AF789A8CD8421D4F__MAINASYNC_D__0_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xBE2DA00)
#define CLASS_3_AF789A8CD8421D4F__MAINASYNC_D__0_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xBE2D9B0)
#define CLASS_3_AF789A8CD8421D4F__MAINASYNC_D__0_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBE2D900)
#define CLASS_3_AF789A8CD8421D4F__MAINASYNC_D__0__CTOR_OFFSET UNITYSDK_OFFSET(0xBE2CF40)

inline static constexpr unsigned int Class_3_AF789A8CD8421D4F__MainAsync_d__0_TypeDefinitionIndex = 48914;

class Class_3_AF789A8CD8421D4F__MainAsync_d__0 : public ::System::Object
{
public:
	::Struct_2_A143022D1701BC76 goalNode; // 0x10
	::Struct_2_A143022D1701BC76 startNode; // 0x20
	::Class_0_16E4307DCC419505_446* container; // 0x30
	::Class_3_AF789A8CD8421D4F* __4__this; // 0x38
	::System::Single G; // 0x40
	::System::Int32 __1__state; // 0x44
	::System::Nullable_1<::System::Boolean> __2__current; // 0x48

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_AF789A8CD8421D4F__MAINASYNC_D__0__CTOR_OFFSET))(this, a1);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AF789A8CD8421D4F__MAINASYNC_D__0_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AF789A8CD8421D4F__MAINASYNC_D__0_MOVENEXT_OFFSET))(this);
	}

	::System::Nullable_1<::System::Boolean> System_Collections_Generic_IEnumerator_System_Boolean___get_Current()
	{
		return ((::System::Nullable_1<::System::Boolean>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AF789A8CD8421D4F__MAINASYNC_D__0_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_BOOLEAN___GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AF789A8CD8421D4F__MAINASYNC_D__0_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AF789A8CD8421D4F__MAINASYNC_D__0_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
