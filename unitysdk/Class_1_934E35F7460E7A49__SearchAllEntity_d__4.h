#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EParkourEventEntityType.h"
#include "unitysdk/System/Object.h"

class Class_1_934E35F7460E7A49;
class Class_2_F3F43255EC92B83B;
class Class_3_2BE5039CEA912003;
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define CLASS_1_934E35F7460E7A49__SEARCHALLENTITY_D__4_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x15CE8A00)
#define CLASS_1_934E35F7460E7A49__SEARCHALLENTITY_D__4_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_CLIENT_PARKOURGAME_PARKOURCHARACTER__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x15CE93E0)
#define CLASS_1_934E35F7460E7A49__SEARCHALLENTITY_D__4_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_CLIENT_PARKOURGAME_PARKOURCHARACTER__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x15CE9370)
#define CLASS_1_934E35F7460E7A49__SEARCHALLENTITY_D__4_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x15CE9470)
#define CLASS_1_934E35F7460E7A49__SEARCHALLENTITY_D__4_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x15CE93D0)
#define CLASS_1_934E35F7460E7A49__SEARCHALLENTITY_D__4_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x15CE9380)
#define CLASS_1_934E35F7460E7A49__SEARCHALLENTITY_D__4_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15CE87B0)
#define CLASS_1_934E35F7460E7A49__SEARCHALLENTITY_D__4__CTOR_OFFSET UNITYSDK_OFFSET(0x15CE8460)
#define CLASS_1_934E35F7460E7A49__SEARCHALLENTITY_D__4___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x15CE8800)
#define CLASS_1_934E35F7460E7A49__SEARCHALLENTITY_D__4___M__FINALLY2_OFFSET UNITYSDK_OFFSET(0x15CE8900)

inline static constexpr unsigned int Class_1_934E35F7460E7A49__SearchAllEntity_d__4_TypeDefinitionIndex = 74097;

class Class_1_934E35F7460E7A49__SearchAllEntity_d__4 : public ::System::Object
{
public:
	::System::Collections::Generic::IEnumerator_1<::Class_3_2BE5039CEA912003*>* __7__wrap1; // 0x10
	::Class_1_934E35F7460E7A49* __4__this; // 0x18
	::Class_2_F3F43255EC92B83B* __2__current; // 0x20
	::RPG::GameCore::EParkourEventEntityType entityType; // 0x28
	::RPG::GameCore::EParkourEventEntityType __3__entityType; // 0x2C
	::System::Int32 __l__initialThreadId; // 0x30
	::System::UInt32 entityID; // 0x34
	::System::UInt32 __3__entityID; // 0x38
	::System::Int32 __1__state; // 0x3C

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_934E35F7460E7A49__SEARCHALLENTITY_D__4__CTOR_OFFSET))(this, a1);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_934E35F7460E7A49__SEARCHALLENTITY_D__4_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_934E35F7460E7A49__SEARCHALLENTITY_D__4_MOVENEXT_OFFSET))(this);
	}

	::System::Void __m__Finally1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_934E35F7460E7A49__SEARCHALLENTITY_D__4___M__FINALLY1_OFFSET))(this);
	}

	::System::Void __m__Finally2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_934E35F7460E7A49__SEARCHALLENTITY_D__4___M__FINALLY2_OFFSET))(this);
	}

	::Class_2_F3F43255EC92B83B* System_Collections_Generic_IEnumerator_RPG_Client_ParkourGame_ParkourCharacter__get_Current()
	{
		return ((::Class_2_F3F43255EC92B83B*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_934E35F7460E7A49__SEARCHALLENTITY_D__4_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_CLIENT_PARKOURGAME_PARKOURCHARACTER__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_934E35F7460E7A49__SEARCHALLENTITY_D__4_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_934E35F7460E7A49__SEARCHALLENTITY_D__4_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::Class_2_F3F43255EC92B83B*>* System_Collections_Generic_IEnumerable_RPG_Client_ParkourGame_ParkourCharacter__GetEnumerator()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::Class_2_F3F43255EC92B83B*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_934E35F7460E7A49__SEARCHALLENTITY_D__4_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_CLIENT_PARKOURGAME_PARKOURCHARACTER__GETENUMERATOR_OFFSET))(this);
	}

	::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_934E35F7460E7A49__SEARCHALLENTITY_D__4_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
	}
};
