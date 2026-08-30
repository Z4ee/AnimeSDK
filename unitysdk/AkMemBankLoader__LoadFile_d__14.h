#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AkMemBankLoader;

#define AKMEMBANKLOADER__LOADFILE_D__14_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1EEDE710)
#define AKMEMBANKLOADER__LOADFILE_D__14_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1EEDEB80)
#define AKMEMBANKLOADER__LOADFILE_D__14_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1EEDEBE0)
#define AKMEMBANKLOADER__LOADFILE_D__14_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1EEDEB90)
#define AKMEMBANKLOADER__LOADFILE_D__14_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1EEDE700)
#define AKMEMBANKLOADER__LOADFILE_D__14__CTOR_OFFSET UNITYSDK_OFFSET(0x1EEDE4A0)

inline static constexpr unsigned int AkMemBankLoader__LoadFile_d__14_TypeDefinitionIndex = 43745;

class AkMemBankLoader__LoadFile_d__14 : public ::System::Object
{
public:
	::AkMemBankLoader* __4__this; // 0x10
	::System::Object* __2__current; // 0x18
	::System::Int32 __1__state; // 0x20

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AKMEMBANKLOADER__LOADFILE_D__14__CTOR_OFFSET))(this, a1);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMEMBANKLOADER__LOADFILE_D__14_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMEMBANKLOADER__LOADFILE_D__14_MOVENEXT_OFFSET))(this);
	}

	::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMEMBANKLOADER__LOADFILE_D__14_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMEMBANKLOADER__LOADFILE_D__14_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMEMBANKLOADER__LOADFILE_D__14_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
