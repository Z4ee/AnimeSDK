#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/Dictionary_2_Enumerator.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

class Class_1_42FEB2F35536B983;
namespace RPG::GameCore { class GameEntity; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define CLASS_1_42FEB2F35536B983__ENUMERATEGUESTENTITIES_D__20_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xCF35110)
#define CLASS_1_42FEB2F35536B983__ENUMERATEGUESTENTITIES_D__20_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_COLLECTIONS_GENERIC_KEYVALUEPAIR_SYSTEM_UINT32_RPG_GAMECORE_GAMEENTITY___GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xCF35310)
#define CLASS_1_42FEB2F35536B983__ENUMERATEGUESTENTITIES_D__20_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_COLLECTIONS_GENERIC_KEYVALUEPAIR_SYSTEM_UINT32_RPG_GAMECORE_GAMEENTITY___GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xCF35260)
#define CLASS_1_42FEB2F35536B983__ENUMERATEGUESTENTITIES_D__20_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xCF35390)
#define CLASS_1_42FEB2F35536B983__ENUMERATEGUESTENTITIES_D__20_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xCF352C0)
#define CLASS_1_42FEB2F35536B983__ENUMERATEGUESTENTITIES_D__20_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xCF35270)
#define CLASS_1_42FEB2F35536B983__ENUMERATEGUESTENTITIES_D__20_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCF350F0)
#define CLASS_1_42FEB2F35536B983__ENUMERATEGUESTENTITIES_D__20__CTOR_OFFSET UNITYSDK_OFFSET(0xCF33880)
#define CLASS_1_42FEB2F35536B983__ENUMERATEGUESTENTITIES_D__20___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0xCF35100)

inline static constexpr unsigned int Class_1_42FEB2F35536B983__EnumerateGuestEntities_d__20_TypeDefinitionIndex = 66411;

class Class_1_42FEB2F35536B983__EnumerateGuestEntities_d__20 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2_Enumerator<::System::UInt32, ::RPG::GameCore::GameEntity*> __7__wrap1; // 0x10
	::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::GameCore::GameEntity*> __2__current; // 0x38
	::Class_1_42FEB2F35536B983* __4__this; // 0x48
	::System::Int32 __l__initialThreadId; // 0x50
	::System::Int32 __1__state; // 0x54

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_42FEB2F35536B983__ENUMERATEGUESTENTITIES_D__20__CTOR_OFFSET))(this, a1);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_42FEB2F35536B983__ENUMERATEGUESTENTITIES_D__20_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_42FEB2F35536B983__ENUMERATEGUESTENTITIES_D__20_MOVENEXT_OFFSET))(this);
	}

	::System::Void __m__Finally1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_42FEB2F35536B983__ENUMERATEGUESTENTITIES_D__20___M__FINALLY1_OFFSET))(this);
	}

	::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::GameCore::GameEntity*> System_Collections_Generic_IEnumerator_System_Collections_Generic_KeyValuePair_System_UInt32_RPG_GameCore_GameEntity___get_Current()
	{
		return ((::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::GameCore::GameEntity*>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_42FEB2F35536B983__ENUMERATEGUESTENTITIES_D__20_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_COLLECTIONS_GENERIC_KEYVALUEPAIR_SYSTEM_UINT32_RPG_GAMECORE_GAMEENTITY___GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_42FEB2F35536B983__ENUMERATEGUESTENTITIES_D__20_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_42FEB2F35536B983__ENUMERATEGUESTENTITIES_D__20_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::GameCore::GameEntity*>>* System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_UInt32_RPG_GameCore_GameEntity___GetEnumerator()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::GameCore::GameEntity*>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_42FEB2F35536B983__ENUMERATEGUESTENTITIES_D__20_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_COLLECTIONS_GENERIC_KEYVALUEPAIR_SYSTEM_UINT32_RPG_GAMECORE_GAMEENTITY___GETENUMERATOR_OFFSET))(this);
	}

	::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_42FEB2F35536B983__ENUMERATEGUESTENTITIES_D__20_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
	}
};
