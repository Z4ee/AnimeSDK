#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_019938BC9C50B169_2.h"
#include "unitysdk/Struct_2_BC950E36747FB4C9.h"
#include "unitysdk/System/Collections/Generic/Dictionary_2_Enumerator.h"
#include "unitysdk/System/Object.h"

class Class_1_855C52860E843240;
namespace RPG::AvatarSystem { class Avatar; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define CLASS_1_855C52860E843240__GETOBTAINEDAVATARSFORSYNC_D__16_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x11502120)
#define CLASS_1_855C52860E843240__GETOBTAINEDAVATARSFORSYNC_D__16_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_AVATARSYSTEM_AVATAR__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x11502360)
#define CLASS_1_855C52860E843240__GETOBTAINEDAVATARSFORSYNC_D__16_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_AVATARSYSTEM_AVATAR__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x115022F0)
#define CLASS_1_855C52860E843240__GETOBTAINEDAVATARSFORSYNC_D__16_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x115023C0)
#define CLASS_1_855C52860E843240__GETOBTAINEDAVATARSFORSYNC_D__16_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x11502350)
#define CLASS_1_855C52860E843240__GETOBTAINEDAVATARSFORSYNC_D__16_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x11502300)
#define CLASS_1_855C52860E843240__GETOBTAINEDAVATARSFORSYNC_D__16_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11502100)
#define CLASS_1_855C52860E843240__GETOBTAINEDAVATARSFORSYNC_D__16__CTOR_OFFSET UNITYSDK_OFFSET(0x11501130)
#define CLASS_1_855C52860E843240__GETOBTAINEDAVATARSFORSYNC_D__16___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x11502110)

inline static constexpr unsigned int Class_1_855C52860E843240__GetObtainedAvatarsForSync_d__16_TypeDefinitionIndex = 50961;

class Class_1_855C52860E843240__GetObtainedAvatarsForSync_d__16 : public ::System::Object
{
public:
	::RPG::AvatarSystem::Avatar* __2__current; // 0x10
	::Class_1_855C52860E843240* __4__this; // 0x18
	::System::Collections::Generic::Dictionary_2_Enumerator<::Struct_2_BC950E36747FB4C9, ::RPG::AvatarSystem::Avatar*> __7__wrap1; // 0x20
	::Struct_2_019938BC9C50B169_2 identifier; // 0x48
	::System::Int32 __l__initialThreadId; // 0x4C
	::Struct_2_019938BC9C50B169_2 __3__identifier; // 0x50
	::System::Int32 __1__state; // 0x54

	::System::Void _ctor(::System::Int32 __1__state)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_855C52860E843240__GETOBTAINEDAVATARSFORSYNC_D__16__CTOR_OFFSET))(this, __1__state);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_855C52860E843240__GETOBTAINEDAVATARSFORSYNC_D__16_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_855C52860E843240__GETOBTAINEDAVATARSFORSYNC_D__16_MOVENEXT_OFFSET))(this);
	}

	::System::Void __m__Finally1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_855C52860E843240__GETOBTAINEDAVATARSFORSYNC_D__16___M__FINALLY1_OFFSET))(this);
	}

	::RPG::AvatarSystem::Avatar* System_Collections_Generic_IEnumerator_RPG_AvatarSystem_Avatar__get_Current()
	{
		return ((::RPG::AvatarSystem::Avatar*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_855C52860E843240__GETOBTAINEDAVATARSFORSYNC_D__16_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_AVATARSYSTEM_AVATAR__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_855C52860E843240__GETOBTAINEDAVATARSFORSYNC_D__16_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_855C52860E843240__GETOBTAINEDAVATARSFORSYNC_D__16_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::RPG::AvatarSystem::Avatar*>* System_Collections_Generic_IEnumerable_RPG_AvatarSystem_Avatar__GetEnumerator()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::RPG::AvatarSystem::Avatar*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_855C52860E843240__GETOBTAINEDAVATARSFORSYNC_D__16_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_AVATARSYSTEM_AVATAR__GETENUMERATOR_OFFSET))(this);
	}

	::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_855C52860E843240__GETOBTAINEDAVATARSFORSYNC_D__16_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
	}
};
