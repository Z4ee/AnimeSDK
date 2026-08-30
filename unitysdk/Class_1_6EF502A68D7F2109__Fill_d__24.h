#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_6EF502A68D7F2109_Struct_2_E7B8E3FDAA2A0F63.h"
#include "unitysdk/System/Object.h"

class Class_1_6EF502A68D7F2109;
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define CLASS_1_6EF502A68D7F2109__FILL_D__24_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x17069230)
#define CLASS_1_6EF502A68D7F2109__FILL_D__24_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_CLIENT_PEDESTRIANV2NPCEMITTER_EMITRUNTIMEINFO__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x17069580)
#define CLASS_1_6EF502A68D7F2109__FILL_D__24_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_CLIENT_PEDESTRIANV2NPCEMITTER_EMITRUNTIMEINFO__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x170694A0)
#define CLASS_1_6EF502A68D7F2109__FILL_D__24_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x17069610)
#define CLASS_1_6EF502A68D7F2109__FILL_D__24_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x17069520)
#define CLASS_1_6EF502A68D7F2109__FILL_D__24_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x170694D0)
#define CLASS_1_6EF502A68D7F2109__FILL_D__24_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17069220)
#define CLASS_1_6EF502A68D7F2109__FILL_D__24__CTOR_OFFSET UNITYSDK_OFFSET(0x17062230)

inline static constexpr unsigned int Class_1_6EF502A68D7F2109__Fill_d__24_TypeDefinitionIndex = 69264;

class Class_1_6EF502A68D7F2109__Fill_d__24 : public ::System::Object
{
public:
	::Class_1_6EF502A68D7F2109* __4__this; // 0x10
	::Class_1_6EF502A68D7F2109_Struct_2_E7B8E3FDAA2A0F63 __2__current; // 0x18
	::System::Int32 __l__initialThreadId; // 0x50
	::System::Single __3__startTimePass; // 0x54
	::System::Int32 _i_5__3; // 0x58
	::System::Single startTimePass; // 0x5C
	::System::Int32 __1__state; // 0x60
	::System::Single _timePass_5__2; // 0x64

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_6EF502A68D7F2109__FILL_D__24__CTOR_OFFSET))(this, a1);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6EF502A68D7F2109__FILL_D__24_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6EF502A68D7F2109__FILL_D__24_MOVENEXT_OFFSET))(this);
	}

	::Class_1_6EF502A68D7F2109_Struct_2_E7B8E3FDAA2A0F63 System_Collections_Generic_IEnumerator_RPG_Client_PedestrianV2NPCEmitter_EmitRuntimeInfo__get_Current()
	{
		return ((::Class_1_6EF502A68D7F2109_Struct_2_E7B8E3FDAA2A0F63(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6EF502A68D7F2109__FILL_D__24_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_CLIENT_PEDESTRIANV2NPCEMITTER_EMITRUNTIMEINFO__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6EF502A68D7F2109__FILL_D__24_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6EF502A68D7F2109__FILL_D__24_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::Class_1_6EF502A68D7F2109_Struct_2_E7B8E3FDAA2A0F63>* System_Collections_Generic_IEnumerable_RPG_Client_PedestrianV2NPCEmitter_EmitRuntimeInfo__GetEnumerator()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::Class_1_6EF502A68D7F2109_Struct_2_E7B8E3FDAA2A0F63>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6EF502A68D7F2109__FILL_D__24_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_CLIENT_PEDESTRIANV2NPCEMITTER_EMITRUNTIMEINFO__GETENUMERATOR_OFFSET))(this);
	}

	::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6EF502A68D7F2109__FILL_D__24_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
	}
};
