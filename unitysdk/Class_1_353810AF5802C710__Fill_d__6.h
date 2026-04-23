#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_353810AF5802C710_Struct_2_E821FD00D05A2DED.h"
#include "unitysdk/System/Object.h"

class Class_1_353810AF5802C710;
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define CLASS_1_353810AF5802C710__FILL_D__6_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x976FC60)
#define CLASS_1_353810AF5802C710__FILL_D__6_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_CLIENT_PEDESTRIANV2NPCEMITTER_EMITRUNTIMEINFO__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x9770050)
#define CLASS_1_353810AF5802C710__FILL_D__6_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_CLIENT_PEDESTRIANV2NPCEMITTER_EMITRUNTIMEINFO__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x976FF80)
#define CLASS_1_353810AF5802C710__FILL_D__6_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x97700E0)
#define CLASS_1_353810AF5802C710__FILL_D__6_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x976FFF0)
#define CLASS_1_353810AF5802C710__FILL_D__6_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x976FFA0)
#define CLASS_1_353810AF5802C710__FILL_D__6_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x976FC50)
#define CLASS_1_353810AF5802C710__FILL_D__6__CTOR_OFFSET UNITYSDK_OFFSET(0x976D680)

inline static constexpr unsigned int Class_1_353810AF5802C710__Fill_d__6_TypeDefinitionIndex = 63882;

class Class_1_353810AF5802C710__Fill_d__6 : public ::System::Object
{
public:
	::Class_1_353810AF5802C710* __4__this; // 0x10
	::Class_1_353810AF5802C710_Struct_2_E821FD00D05A2DED __2__current; // 0x18
	::System::Single __3__startTimePass; // 0x40
	::System::Int32 __l__initialThreadId; // 0x44
	::System::Single startTimePass; // 0x48
	::System::Single _timePass_5__2; // 0x4C
	::System::Int32 __1__state; // 0x50
	::System::Int32 _i_5__3; // 0x54

	::System::Void _ctor(::System::Int32 __1__state)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_353810AF5802C710__FILL_D__6__CTOR_OFFSET))(this, __1__state);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_353810AF5802C710__FILL_D__6_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_353810AF5802C710__FILL_D__6_MOVENEXT_OFFSET))(this);
	}

	::Class_1_353810AF5802C710_Struct_2_E821FD00D05A2DED System_Collections_Generic_IEnumerator_RPG_Client_PedestrianV2NPCEmitter_EmitRuntimeInfo__get_Current()
	{
		return ((::Class_1_353810AF5802C710_Struct_2_E821FD00D05A2DED(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_353810AF5802C710__FILL_D__6_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_CLIENT_PEDESTRIANV2NPCEMITTER_EMITRUNTIMEINFO__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_353810AF5802C710__FILL_D__6_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_353810AF5802C710__FILL_D__6_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::Class_1_353810AF5802C710_Struct_2_E821FD00D05A2DED>* System_Collections_Generic_IEnumerable_RPG_Client_PedestrianV2NPCEmitter_EmitRuntimeInfo__GetEnumerator()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::Class_1_353810AF5802C710_Struct_2_E821FD00D05A2DED>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_353810AF5802C710__FILL_D__6_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_CLIENT_PEDESTRIANV2NPCEMITTER_EMITRUNTIMEINFO__GETENUMERATOR_OFFSET))(this);
	}

	::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_353810AF5802C710__FILL_D__6_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
	}
};
