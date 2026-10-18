#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AkMemBankLoader;

#define AKMEMBANKLOADER__LOADFILE_D__14_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1F5A62C0)
#define AKMEMBANKLOADER__LOADFILE_D__14_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1F5A6730)
#define AKMEMBANKLOADER__LOADFILE_D__14_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1F5A6790)
#define AKMEMBANKLOADER__LOADFILE_D__14_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1F5A6740)
#define AKMEMBANKLOADER__LOADFILE_D__14_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1F5A62B0)
#define AKMEMBANKLOADER__LOADFILE_D__14__CTOR_OFFSET UNITYSDK_OFFSET(0x1F5A6050)

inline static constexpr unsigned int AkMemBankLoader__LoadFile_d__14_TypeDefinitionIndex = 44937;

class AkMemBankLoader__LoadFile_d__14 : public ::System::Object
{
public:
	::System::Object* __2__current; // 0x10
	::AkMemBankLoader* __4__this; // 0x18
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
