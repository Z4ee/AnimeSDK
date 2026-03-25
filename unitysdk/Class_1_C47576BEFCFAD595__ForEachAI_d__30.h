#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_C47576BEFCFAD595;
class Class_3_2BE5039CEA912003;
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define CLASS_1_C47576BEFCFAD595__FOREACHAI_D__30_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x887D8F0)
#define CLASS_1_C47576BEFCFAD595__FOREACHAI_D__30_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_CLIENT_PARKOURGAME_PARKOURAICHARACTER__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x887DA50)
#define CLASS_1_C47576BEFCFAD595__FOREACHAI_D__30_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_CLIENT_PARKOURGAME_PARKOURAICHARACTER__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x887D9E0)
#define CLASS_1_C47576BEFCFAD595__FOREACHAI_D__30_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x887E830)
#define CLASS_1_C47576BEFCFAD595__FOREACHAI_D__30_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x887DA40)
#define CLASS_1_C47576BEFCFAD595__FOREACHAI_D__30_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x887D9F0)
#define CLASS_1_C47576BEFCFAD595__FOREACHAI_D__30_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x887D8E0)
#define CLASS_1_C47576BEFCFAD595__FOREACHAI_D__30__CTOR_OFFSET UNITYSDK_OFFSET(0x887B640)

inline static constexpr unsigned int Class_1_C47576BEFCFAD595__ForEachAI_d__30_TypeDefinitionIndex = 60881;

class Class_1_C47576BEFCFAD595__ForEachAI_d__30 : public ::System::Object
{
public:
	::Class_1_C47576BEFCFAD595* __4__this; // 0x10
	::Class_3_2BE5039CEA912003* __2__current; // 0x18
	::System::Int32 _i_5__2; // 0x20
	::System::Int32 __1__state; // 0x24
	::System::Int32 __l__initialThreadId; // 0x28

	::System::Void _ctor(::System::Int32 __1__state)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_C47576BEFCFAD595__FOREACHAI_D__30__CTOR_OFFSET))(this, __1__state);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C47576BEFCFAD595__FOREACHAI_D__30_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C47576BEFCFAD595__FOREACHAI_D__30_MOVENEXT_OFFSET))(this);
	}

	::Class_3_2BE5039CEA912003* System_Collections_Generic_IEnumerator_RPG_Client_ParkourGame_ParkourAICharacter__get_Current()
	{
		return ((::Class_3_2BE5039CEA912003*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C47576BEFCFAD595__FOREACHAI_D__30_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_CLIENT_PARKOURGAME_PARKOURAICHARACTER__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C47576BEFCFAD595__FOREACHAI_D__30_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C47576BEFCFAD595__FOREACHAI_D__30_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::Class_3_2BE5039CEA912003*>* System_Collections_Generic_IEnumerable_RPG_Client_ParkourGame_ParkourAICharacter__GetEnumerator()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::Class_3_2BE5039CEA912003*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C47576BEFCFAD595__FOREACHAI_D__30_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_CLIENT_PARKOURGAME_PARKOURAICHARACTER__GETENUMERATOR_OFFSET))(this);
	}

	::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C47576BEFCFAD595__FOREACHAI_D__30_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
	}
};
