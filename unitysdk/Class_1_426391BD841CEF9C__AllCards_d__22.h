#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_426391BD841CEF9C;
class Class_1_B71FC14BA77C9F77;
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define CLASS_1_426391BD841CEF9C__ALLCARDS_D__22_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x15A630F0)
#define CLASS_1_426391BD841CEF9C__ALLCARDS_D__22_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_CLIENT_FATERIN_CARD_FATERINBATTLECARD__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x15A63340)
#define CLASS_1_426391BD841CEF9C__ALLCARDS_D__22_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_CLIENT_FATERIN_CARD_FATERINBATTLECARD__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x15A632D0)
#define CLASS_1_426391BD841CEF9C__ALLCARDS_D__22_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x15A633C0)
#define CLASS_1_426391BD841CEF9C__ALLCARDS_D__22_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x15A63330)
#define CLASS_1_426391BD841CEF9C__ALLCARDS_D__22_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x15A632E0)
#define CLASS_1_426391BD841CEF9C__ALLCARDS_D__22_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15A630E0)
#define CLASS_1_426391BD841CEF9C__ALLCARDS_D__22__CTOR_OFFSET UNITYSDK_OFFSET(0x15A62310)

inline static constexpr unsigned int Class_1_426391BD841CEF9C__AllCards_d__22_TypeDefinitionIndex = 79779;

class Class_1_426391BD841CEF9C__AllCards_d__22 : public ::System::Object
{
public:
	::Class_1_426391BD841CEF9C* __4__this; // 0x10
	::Class_1_B71FC14BA77C9F77* __2__current; // 0x18
	::System::Int32 __1__state; // 0x20
	::System::Int32 __l__initialThreadId; // 0x24
	::System::Int32 _i_5__2; // 0x28

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_426391BD841CEF9C__ALLCARDS_D__22__CTOR_OFFSET))(this, a1);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_426391BD841CEF9C__ALLCARDS_D__22_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_426391BD841CEF9C__ALLCARDS_D__22_MOVENEXT_OFFSET))(this);
	}

	::Class_1_B71FC14BA77C9F77* System_Collections_Generic_IEnumerator_RPG_Client_FateRin_Card_FateRinBattleCard__get_Current()
	{
		return ((::Class_1_B71FC14BA77C9F77*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_426391BD841CEF9C__ALLCARDS_D__22_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_CLIENT_FATERIN_CARD_FATERINBATTLECARD__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_426391BD841CEF9C__ALLCARDS_D__22_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_426391BD841CEF9C__ALLCARDS_D__22_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::Class_1_B71FC14BA77C9F77*>* System_Collections_Generic_IEnumerable_RPG_Client_FateRin_Card_FateRinBattleCard__GetEnumerator()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::Class_1_B71FC14BA77C9F77*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_426391BD841CEF9C__ALLCARDS_D__22_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_CLIENT_FATERIN_CARD_FATERINBATTLECARD__GETENUMERATOR_OFFSET))(this);
	}

	::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_426391BD841CEF9C__ALLCARDS_D__22_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
	}
};
