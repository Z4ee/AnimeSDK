#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RelicType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_0_16E4307DCC419505_362;
class Class_1_D17272E82AE804C2_102;
class Class_1_F3CA30716D4FAF92_3;
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define CLASS_1_30E8F399BBCAC2EC___TORELICS_D__2_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1439A8B0)
#define CLASS_1_30E8F399BBCAC2EC___TORELICS_D__2_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_VALUETUPLE_RPG_GAMECORE_RELICTYPE_RPG_AVATARSYSTEM_IRELICPROXY___GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1439AC40)
#define CLASS_1_30E8F399BBCAC2EC___TORELICS_D__2_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_VALUETUPLE_RPG_GAMECORE_RELICTYPE_RPG_AVATARSYSTEM_IRELICPROXY___GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1439AB90)
#define CLASS_1_30E8F399BBCAC2EC___TORELICS_D__2_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1439ACA0)
#define CLASS_1_30E8F399BBCAC2EC___TORELICS_D__2_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1439ABF0)
#define CLASS_1_30E8F399BBCAC2EC___TORELICS_D__2_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1439ABA0)
#define CLASS_1_30E8F399BBCAC2EC___TORELICS_D__2_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1439A740)
#define CLASS_1_30E8F399BBCAC2EC___TORELICS_D__2__CTOR_OFFSET UNITYSDK_OFFSET(0x1439A6F0)
#define CLASS_1_30E8F399BBCAC2EC___TORELICS_D__2___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x1439A810)

inline static constexpr unsigned int Class_1_30E8F399BBCAC2EC___ToRelics_d__2_TypeDefinitionIndex = 58653;

class Class_1_30E8F399BBCAC2EC___ToRelics_d__2 : public ::System::Object
{
public:
	::System::ValueTuple_2<::RPG::GameCore::RelicType, ::Class_0_16E4307DCC419505_362*> __2__current; // 0x10
	::Class_1_F3CA30716D4FAF92_3* uniqueData; // 0x20
	::Class_1_F3CA30716D4FAF92_3* __3__uniqueData; // 0x28
	::System::Collections::Generic::IEnumerator_1<::Class_1_D17272E82AE804C2_102*>* __7__wrap1; // 0x30
	::System::Int32 __l__initialThreadId; // 0x38
	::System::Int32 __1__state; // 0x3C

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_30E8F399BBCAC2EC___TORELICS_D__2__CTOR_OFFSET))(this, a1);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_30E8F399BBCAC2EC___TORELICS_D__2_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_30E8F399BBCAC2EC___TORELICS_D__2_MOVENEXT_OFFSET))(this);
	}

	::System::Void __m__Finally1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_30E8F399BBCAC2EC___TORELICS_D__2___M__FINALLY1_OFFSET))(this);
	}

	::System::ValueTuple_2<::RPG::GameCore::RelicType, ::Class_0_16E4307DCC419505_362*> System_Collections_Generic_IEnumerator_System_ValueTuple_RPG_GameCore_RelicType_RPG_AvatarSystem_IRelicProxy___get_Current()
	{
		return ((::System::ValueTuple_2<::RPG::GameCore::RelicType, ::Class_0_16E4307DCC419505_362*>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_30E8F399BBCAC2EC___TORELICS_D__2_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_VALUETUPLE_RPG_GAMECORE_RELICTYPE_RPG_AVATARSYSTEM_IRELICPROXY___GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_30E8F399BBCAC2EC___TORELICS_D__2_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_30E8F399BBCAC2EC___TORELICS_D__2_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<::RPG::GameCore::RelicType, ::Class_0_16E4307DCC419505_362*>>* System_Collections_Generic_IEnumerable_System_ValueTuple_RPG_GameCore_RelicType_RPG_AvatarSystem_IRelicProxy___GetEnumerator()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<::RPG::GameCore::RelicType, ::Class_0_16E4307DCC419505_362*>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_30E8F399BBCAC2EC___TORELICS_D__2_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_VALUETUPLE_RPG_GAMECORE_RELICTYPE_RPG_AVATARSYSTEM_IRELICPROXY___GETENUMERATOR_OFFSET))(this);
	}

	::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_30E8F399BBCAC2EC___TORELICS_D__2_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
	}
};
