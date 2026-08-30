#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/RoadRash/ProjectileHitEffectConfig.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define CLASS_1_30F601877CA03B0F__COLLECT_D__5_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x180CFE80)
#define CLASS_1_30F601877CA03B0F__COLLECT_D__5_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_STRING__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x180D0330)
#define CLASS_1_30F601877CA03B0F__COLLECT_D__5_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_STRING__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x180D02C0)
#define CLASS_1_30F601877CA03B0F__COLLECT_D__5_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x180D03B0)
#define CLASS_1_30F601877CA03B0F__COLLECT_D__5_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x180D0320)
#define CLASS_1_30F601877CA03B0F__COLLECT_D__5_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x180D02D0)
#define CLASS_1_30F601877CA03B0F__COLLECT_D__5_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x180CFD40)
#define CLASS_1_30F601877CA03B0F__COLLECT_D__5__CTOR_OFFSET UNITYSDK_OFFSET(0x180CFD20)
#define CLASS_1_30F601877CA03B0F__COLLECT_D__5___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x180CFD80)

inline static constexpr unsigned int Class_1_30F601877CA03B0F__Collect_d__5_TypeDefinitionIndex = 75474;

class Class_1_30F601877CA03B0F__Collect_d__5 : public ::System::Object
{
public:
	::System::Collections::Generic::IEnumerator_1<::System::String*>* __7__wrap1; // 0x10
	::System::String* __2__current; // 0x18
	::RPG::Client::LittleGame::RoadRash::ProjectileHitEffectConfig __3__config; // 0x20
	::RPG::Client::LittleGame::RoadRash::ProjectileHitEffectConfig config; // 0x40
	::System::Int32 __l__initialThreadId; // 0x60
	::System::Int32 __1__state; // 0x64

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_30F601877CA03B0F__COLLECT_D__5__CTOR_OFFSET))(this, a1);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_30F601877CA03B0F__COLLECT_D__5_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_30F601877CA03B0F__COLLECT_D__5_MOVENEXT_OFFSET))(this);
	}

	::System::Void __m__Finally1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_30F601877CA03B0F__COLLECT_D__5___M__FINALLY1_OFFSET))(this);
	}

	::System::String* System_Collections_Generic_IEnumerator_System_String__get_Current()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_30F601877CA03B0F__COLLECT_D__5_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_STRING__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_30F601877CA03B0F__COLLECT_D__5_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_30F601877CA03B0F__COLLECT_D__5_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::System::String*>* System_Collections_Generic_IEnumerable_System_String__GetEnumerator()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_30F601877CA03B0F__COLLECT_D__5_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_STRING__GETENUMERATOR_OFFSET))(this);
	}

	::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_30F601877CA03B0F__COLLECT_D__5_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
	}
};
