#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_32770405D1E18A2A.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ServerListInfo; }
namespace System::Diagnostics { class Stopwatch; }
namespace UnityEngine::Networking { class UnityWebRequest; }
namespace UnityEngine::Networking { class UnityWebRequestAsyncOperation; }

#define CLASS_1_EFD1B99A3262983F_CLASS_1_FE346094C5F48F74_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1436C5E0)
#define CLASS_1_EFD1B99A3262983F_CLASS_1_FE346094C5F48F74_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1436CA70)
#define CLASS_1_EFD1B99A3262983F_CLASS_1_FE346094C5F48F74_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1436CAD0)
#define CLASS_1_EFD1B99A3262983F_CLASS_1_FE346094C5F48F74_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1436CA80)
#define CLASS_1_EFD1B99A3262983F_CLASS_1_FE346094C5F48F74_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1436C5D0)
#define CLASS_1_EFD1B99A3262983F_CLASS_1_FE346094C5F48F74__CTOR_OFFSET UNITYSDK_OFFSET(0x1436C5C0)

inline static constexpr unsigned int Class_1_EFD1B99A3262983F_Class_1_FE346094C5F48F74_TypeDefinitionIndex = 79248;

class Class_1_EFD1B99A3262983F_Class_1_FE346094C5F48F74 : public ::System::Object
{
public:
	::UnityEngine::Networking::UnityWebRequestAsyncOperation* Field_1_6; // 0x10
	::Struct_2_32770405D1E18A2A Field_1_3; // 0x18
	::MoleMole::ServerListInfo* Field_1_2; // 0x30
	::System::Diagnostics::Stopwatch* Field_1_7; // 0x38
	::UnityEngine::Networking::UnityWebRequest* Field_1_5; // 0x40
	::System::Object* Field_1_1; // 0x48
	::System::Int32 Field_1_4; // 0x50
	::System::Int32 Field_1_0; // 0x54

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_EFD1B99A3262983F_CLASS_1_FE346094C5F48F74__CTOR_OFFSET))(this, a1);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EFD1B99A3262983F_CLASS_1_FE346094C5F48F74_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EFD1B99A3262983F_CLASS_1_FE346094C5F48F74_MOVENEXT_OFFSET))(this);
	}

	::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EFD1B99A3262983F_CLASS_1_FE346094C5F48F74_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EFD1B99A3262983F_CLASS_1_FE346094C5F48F74_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EFD1B99A3262983F_CLASS_1_FE346094C5F48F74_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
