#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_019938BC9C50B169_2.h"
#include "unitysdk/Struct_2_BC950E36747FB4C9.h"
#include "unitysdk/System/Collections/Generic/Dictionary_2_Enumerator.h"
#include "unitysdk/System/Object.h"

class Class_1_F730CFFB290B1944;
namespace RPG::AvatarSystem { class Avatar; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define CLASS_1_F730CFFB290B1944__GETOBTAINEDAVATARSFORSYNC_D__11_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x13B16F70)
#define CLASS_1_F730CFFB290B1944__GETOBTAINEDAVATARSFORSYNC_D__11_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_AVATARSYSTEM_AVATAR__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x13B171F0)
#define CLASS_1_F730CFFB290B1944__GETOBTAINEDAVATARSFORSYNC_D__11_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_AVATARSYSTEM_AVATAR__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x13B17180)
#define CLASS_1_F730CFFB290B1944__GETOBTAINEDAVATARSFORSYNC_D__11_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x13B17250)
#define CLASS_1_F730CFFB290B1944__GETOBTAINEDAVATARSFORSYNC_D__11_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x13B171E0)
#define CLASS_1_F730CFFB290B1944__GETOBTAINEDAVATARSFORSYNC_D__11_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x13B17190)
#define CLASS_1_F730CFFB290B1944__GETOBTAINEDAVATARSFORSYNC_D__11_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13B16F50)
#define CLASS_1_F730CFFB290B1944__GETOBTAINEDAVATARSFORSYNC_D__11__CTOR_OFFSET UNITYSDK_OFFSET(0x13B15330)
#define CLASS_1_F730CFFB290B1944__GETOBTAINEDAVATARSFORSYNC_D__11___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x13B16F60)

inline static constexpr unsigned int Class_1_F730CFFB290B1944__GetObtainedAvatarsForSync_d__11_TypeDefinitionIndex = 58636;

class Class_1_F730CFFB290B1944__GetObtainedAvatarsForSync_d__11 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2_Enumerator<::Struct_2_BC950E36747FB4C9, ::RPG::AvatarSystem::Avatar*> __7__wrap1; // 0x10
	::RPG::AvatarSystem::Avatar* __2__current; // 0x38
	::Class_1_F730CFFB290B1944* __4__this; // 0x40
	::Struct_2_019938BC9C50B169_2 identifier; // 0x48
	::System::Int32 __1__state; // 0x4C
	::Struct_2_019938BC9C50B169_2 __3__identifier; // 0x50
	::System::Int32 __l__initialThreadId; // 0x54

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F730CFFB290B1944__GETOBTAINEDAVATARSFORSYNC_D__11__CTOR_OFFSET))(this, a1);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F730CFFB290B1944__GETOBTAINEDAVATARSFORSYNC_D__11_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F730CFFB290B1944__GETOBTAINEDAVATARSFORSYNC_D__11_MOVENEXT_OFFSET))(this);
	}

	::System::Void __m__Finally1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F730CFFB290B1944__GETOBTAINEDAVATARSFORSYNC_D__11___M__FINALLY1_OFFSET))(this);
	}

	::RPG::AvatarSystem::Avatar* System_Collections_Generic_IEnumerator_RPG_AvatarSystem_Avatar__get_Current()
	{
		return ((::RPG::AvatarSystem::Avatar*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F730CFFB290B1944__GETOBTAINEDAVATARSFORSYNC_D__11_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_AVATARSYSTEM_AVATAR__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F730CFFB290B1944__GETOBTAINEDAVATARSFORSYNC_D__11_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F730CFFB290B1944__GETOBTAINEDAVATARSFORSYNC_D__11_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::RPG::AvatarSystem::Avatar*>* System_Collections_Generic_IEnumerable_RPG_AvatarSystem_Avatar__GetEnumerator()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::RPG::AvatarSystem::Avatar*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F730CFFB290B1944__GETOBTAINEDAVATARSFORSYNC_D__11_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_AVATARSYSTEM_AVATAR__GETENUMERATOR_OFFSET))(this);
	}

	::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F730CFFB290B1944__GETOBTAINEDAVATARSFORSYNC_D__11_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
	}
};
