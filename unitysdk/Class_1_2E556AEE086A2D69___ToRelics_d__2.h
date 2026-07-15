#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RelicType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_0_16E4307DCC419505_385;
class Class_1_D17272E82AE804C2_112;
class Class_1_E14A0A1A8B1F847C_2;
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define CLASS_1_2E556AEE086A2D69___TORELICS_D__2_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x14A4E3B0)
#define CLASS_1_2E556AEE086A2D69___TORELICS_D__2_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_VALUETUPLE_RPG_GAMECORE_RELICTYPE_RPG_AVATARSYSTEM_IRELICPROXY___GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x14A4E780)
#define CLASS_1_2E556AEE086A2D69___TORELICS_D__2_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_VALUETUPLE_RPG_GAMECORE_RELICTYPE_RPG_AVATARSYSTEM_IRELICPROXY___GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x14A4E6D0)
#define CLASS_1_2E556AEE086A2D69___TORELICS_D__2_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x14A4E7E0)
#define CLASS_1_2E556AEE086A2D69___TORELICS_D__2_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x14A4E730)
#define CLASS_1_2E556AEE086A2D69___TORELICS_D__2_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x14A4E6E0)
#define CLASS_1_2E556AEE086A2D69___TORELICS_D__2_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x14A4E270)
#define CLASS_1_2E556AEE086A2D69___TORELICS_D__2__CTOR_OFFSET UNITYSDK_OFFSET(0x14A4E220)
#define CLASS_1_2E556AEE086A2D69___TORELICS_D__2___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x14A4E2B0)

inline static constexpr unsigned int Class_1_2E556AEE086A2D69___ToRelics_d__2_TypeDefinitionIndex = 59924;

class Class_1_2E556AEE086A2D69___ToRelics_d__2 : public ::System::Object
{
public:
	::Class_1_E14A0A1A8B1F847C_2* uniqueData; // 0x10
	::Class_1_E14A0A1A8B1F847C_2* __3__uniqueData; // 0x18
	::System::ValueTuple_2<::RPG::GameCore::RelicType, ::Class_0_16E4307DCC419505_385*> __2__current; // 0x20
	::System::Collections::Generic::IEnumerator_1<::Class_1_D17272E82AE804C2_112*>* __7__wrap1; // 0x30
	::System::Int32 __l__initialThreadId; // 0x38
	::System::Int32 __1__state; // 0x3C

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_2E556AEE086A2D69___TORELICS_D__2__CTOR_OFFSET))(this, a1);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2E556AEE086A2D69___TORELICS_D__2_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2E556AEE086A2D69___TORELICS_D__2_MOVENEXT_OFFSET))(this);
	}

	::System::Void __m__Finally1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2E556AEE086A2D69___TORELICS_D__2___M__FINALLY1_OFFSET))(this);
	}

	::System::ValueTuple_2<::RPG::GameCore::RelicType, ::Class_0_16E4307DCC419505_385*> System_Collections_Generic_IEnumerator_System_ValueTuple_RPG_GameCore_RelicType_RPG_AvatarSystem_IRelicProxy___get_Current()
	{
		return ((::System::ValueTuple_2<::RPG::GameCore::RelicType, ::Class_0_16E4307DCC419505_385*>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2E556AEE086A2D69___TORELICS_D__2_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_VALUETUPLE_RPG_GAMECORE_RELICTYPE_RPG_AVATARSYSTEM_IRELICPROXY___GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2E556AEE086A2D69___TORELICS_D__2_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2E556AEE086A2D69___TORELICS_D__2_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<::RPG::GameCore::RelicType, ::Class_0_16E4307DCC419505_385*>>* System_Collections_Generic_IEnumerable_System_ValueTuple_RPG_GameCore_RelicType_RPG_AvatarSystem_IRelicProxy___GetEnumerator()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<::RPG::GameCore::RelicType, ::Class_0_16E4307DCC419505_385*>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2E556AEE086A2D69___TORELICS_D__2_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_VALUETUPLE_RPG_GAMECORE_RELICTYPE_RPG_AVATARSYSTEM_IRELICPROXY___GETENUMERATOR_OFFSET))(this);
	}

	::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2E556AEE086A2D69___TORELICS_D__2_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
	}
};
