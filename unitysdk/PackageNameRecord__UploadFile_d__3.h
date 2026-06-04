#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine::Networking { class UnityWebRequest; }

#define PACKAGENAMERECORD__UPLOADFILE_D__3_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xB06A630)
#define PACKAGENAMERECORD__UPLOADFILE_D__3_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xB06AA60)
#define PACKAGENAMERECORD__UPLOADFILE_D__3_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xB06AAC0)
#define PACKAGENAMERECORD__UPLOADFILE_D__3_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xB06AA70)
#define PACKAGENAMERECORD__UPLOADFILE_D__3_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB06A620)
#define PACKAGENAMERECORD__UPLOADFILE_D__3__CTOR_OFFSET UNITYSDK_OFFSET(0xB06A600)

inline static constexpr unsigned int PackageNameRecord__UploadFile_d__3_TypeDefinitionIndex = 44872;

class PackageNameRecord__UploadFile_d__3 : public ::System::Object
{
public:
	::System::String* filePath; // 0x10
	::System::String* url; // 0x18
	::UnityEngine::Networking::UnityWebRequest* _req_5__2; // 0x20
	::System::Object* __2__current; // 0x28
	::System::Int32 __1__state; // 0x30

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PACKAGENAMERECORD__UPLOADFILE_D__3__CTOR_OFFSET))(this, a1);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PACKAGENAMERECORD__UPLOADFILE_D__3_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PACKAGENAMERECORD__UPLOADFILE_D__3_MOVENEXT_OFFSET))(this);
	}

	::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + PACKAGENAMERECORD__UPLOADFILE_D__3_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PACKAGENAMERECORD__UPLOADFILE_D__3_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + PACKAGENAMERECORD__UPLOADFILE_D__3_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
