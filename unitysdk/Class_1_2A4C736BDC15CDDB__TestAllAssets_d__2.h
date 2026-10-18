#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_2A4C736BDC15CDDB__TESTALLASSETS_D__2_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xB5BEB30)
#define CLASS_1_2A4C736BDC15CDDB__TESTALLASSETS_D__2_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xB5BEBE0)
#define CLASS_1_2A4C736BDC15CDDB__TESTALLASSETS_D__2_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xB5BEC40)
#define CLASS_1_2A4C736BDC15CDDB__TESTALLASSETS_D__2_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xB5BEBF0)
#define CLASS_1_2A4C736BDC15CDDB__TESTALLASSETS_D__2_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB5BEB20)
#define CLASS_1_2A4C736BDC15CDDB__TESTALLASSETS_D__2__CTOR_OFFSET UNITYSDK_OFFSET(0xB5BC4F0)

inline static constexpr unsigned int Class_1_2A4C736BDC15CDDB__TestAllAssets_d__2_TypeDefinitionIndex = 69490;

class Class_1_2A4C736BDC15CDDB__TestAllAssets_d__2 : public ::System::Object
{
public:
	::System::Object* __2__current; // 0x10
	::System::Int32 __1__state; // 0x18

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_2A4C736BDC15CDDB__TESTALLASSETS_D__2__CTOR_OFFSET))(this, a1);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2A4C736BDC15CDDB__TESTALLASSETS_D__2_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2A4C736BDC15CDDB__TESTALLASSETS_D__2_MOVENEXT_OFFSET))(this);
	}

	::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2A4C736BDC15CDDB__TESTALLASSETS_D__2_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2A4C736BDC15CDDB__TESTALLASSETS_D__2_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2A4C736BDC15CDDB__TESTALLASSETS_D__2_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
