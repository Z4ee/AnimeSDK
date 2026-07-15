#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_D645B4E0B73852B6.h"
#include "unitysdk/System/Collections/Generic/Dictionary_2_Enumerator.h"
#include "unitysdk/System/Object.h"

class Class_1_F730CFFB290B1944;
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class AvatarProxy; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define CLASS_1_F730CFFB290B1944__ENUMERATEACTIVEPATHAVATARS_D__16_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x17994260)
#define CLASS_1_F730CFFB290B1944__ENUMERATEACTIVEPATHAVATARS_D__16_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_AVATARSYSTEM_IAVATAR__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x17994410)
#define CLASS_1_F730CFFB290B1944__ENUMERATEACTIVEPATHAVATARS_D__16_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_AVATARSYSTEM_IAVATAR__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x179943A0)
#define CLASS_1_F730CFFB290B1944__ENUMERATEACTIVEPATHAVATARS_D__16_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x17994470)
#define CLASS_1_F730CFFB290B1944__ENUMERATEACTIVEPATHAVATARS_D__16_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x17994400)
#define CLASS_1_F730CFFB290B1944__ENUMERATEACTIVEPATHAVATARS_D__16_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x179943B0)
#define CLASS_1_F730CFFB290B1944__ENUMERATEACTIVEPATHAVATARS_D__16_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17994240)
#define CLASS_1_F730CFFB290B1944__ENUMERATEACTIVEPATHAVATARS_D__16__CTOR_OFFSET UNITYSDK_OFFSET(0x17993690)
#define CLASS_1_F730CFFB290B1944__ENUMERATEACTIVEPATHAVATARS_D__16___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x17994250)

inline static constexpr unsigned int Class_1_F730CFFB290B1944__EnumerateActivePathAvatars_d__16_TypeDefinitionIndex = 59905;

class Class_1_F730CFFB290B1944__EnumerateActivePathAvatars_d__16 : public ::System::Object
{
public:
	::Class_1_F730CFFB290B1944* __4__this; // 0x10
	::RPG::AvatarSystem::IAvatar* __2__current; // 0x18
	::System::Collections::Generic::Dictionary_2_Enumerator<::Struct_2_D645B4E0B73852B6, ::RPG::Client::AvatarProxy*> __7__wrap1; // 0x20
	::System::Int32 __1__state; // 0x48
	::System::Int32 __l__initialThreadId; // 0x4C

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F730CFFB290B1944__ENUMERATEACTIVEPATHAVATARS_D__16__CTOR_OFFSET))(this, a1);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F730CFFB290B1944__ENUMERATEACTIVEPATHAVATARS_D__16_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F730CFFB290B1944__ENUMERATEACTIVEPATHAVATARS_D__16_MOVENEXT_OFFSET))(this);
	}

	::System::Void __m__Finally1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F730CFFB290B1944__ENUMERATEACTIVEPATHAVATARS_D__16___M__FINALLY1_OFFSET))(this);
	}

	::RPG::AvatarSystem::IAvatar* System_Collections_Generic_IEnumerator_RPG_AvatarSystem_IAvatar__get_Current()
	{
		return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F730CFFB290B1944__ENUMERATEACTIVEPATHAVATARS_D__16_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_AVATARSYSTEM_IAVATAR__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F730CFFB290B1944__ENUMERATEACTIVEPATHAVATARS_D__16_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F730CFFB290B1944__ENUMERATEACTIVEPATHAVATARS_D__16_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::RPG::AvatarSystem::IAvatar*>* System_Collections_Generic_IEnumerable_RPG_AvatarSystem_IAvatar__GetEnumerator()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::RPG::AvatarSystem::IAvatar*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F730CFFB290B1944__ENUMERATEACTIVEPATHAVATARS_D__16_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_AVATARSYSTEM_IAVATAR__GETENUMERATOR_OFFSET))(this);
	}

	::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F730CFFB290B1944__ENUMERATEACTIVEPATHAVATARS_D__16_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
	}
};
