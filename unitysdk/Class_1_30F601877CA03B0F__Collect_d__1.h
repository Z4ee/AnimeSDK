#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RoadRash/MonoEffectConfig.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define CLASS_1_30F601877CA03B0F__COLLECT_D__1_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x17BE5E90)
#define CLASS_1_30F601877CA03B0F__COLLECT_D__1_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_STRING__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x17BE6340)
#define CLASS_1_30F601877CA03B0F__COLLECT_D__1_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_STRING__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x17BE62D0)
#define CLASS_1_30F601877CA03B0F__COLLECT_D__1_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x17BE63E0)
#define CLASS_1_30F601877CA03B0F__COLLECT_D__1_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x17BE6330)
#define CLASS_1_30F601877CA03B0F__COLLECT_D__1_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x17BE62E0)
#define CLASS_1_30F601877CA03B0F__COLLECT_D__1_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17BE5D50)
#define CLASS_1_30F601877CA03B0F__COLLECT_D__1__CTOR_OFFSET UNITYSDK_OFFSET(0x17BE54E0)
#define CLASS_1_30F601877CA03B0F__COLLECT_D__1___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x17BE5D90)

inline static constexpr unsigned int Class_1_30F601877CA03B0F__Collect_d__1_TypeDefinitionIndex = 75470;

class Class_1_30F601877CA03B0F__Collect_d__1 : public ::System::Object
{
public:
	::System::String* __2__current; // 0x10
	::System::Collections::Generic::IEnumerator_1<::System::String*>* __7__wrap1; // 0x18
	::RPG::Client::RoadRash::MonoEffectConfig config; // 0x20
	::RPG::Client::RoadRash::MonoEffectConfig __3__config; // 0x50
	::System::Int32 __l__initialThreadId; // 0x80
	::System::Int32 __1__state; // 0x84

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_30F601877CA03B0F__COLLECT_D__1__CTOR_OFFSET))(this, a1);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_30F601877CA03B0F__COLLECT_D__1_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_30F601877CA03B0F__COLLECT_D__1_MOVENEXT_OFFSET))(this);
	}

	::System::Void __m__Finally1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_30F601877CA03B0F__COLLECT_D__1___M__FINALLY1_OFFSET))(this);
	}

	::System::String* System_Collections_Generic_IEnumerator_System_String__get_Current()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_30F601877CA03B0F__COLLECT_D__1_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_STRING__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_30F601877CA03B0F__COLLECT_D__1_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_30F601877CA03B0F__COLLECT_D__1_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::System::String*>* System_Collections_Generic_IEnumerable_System_String__GetEnumerator()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_30F601877CA03B0F__COLLECT_D__1_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_STRING__GETENUMERATOR_OFFSET))(this);
	}

	::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_30F601877CA03B0F__COLLECT_D__1_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
	}
};
