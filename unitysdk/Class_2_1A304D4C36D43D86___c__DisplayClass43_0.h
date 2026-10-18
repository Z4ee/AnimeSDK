#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_1A304D4C36D43D86;
namespace RPG::Client::OpenWorld { class StreamingItemData; }
namespace UnityEngine { class Object; }

#define CLASS_2_1A304D4C36D43D86___C__DISPLAYCLASS43_0__CTOR_OFFSET UNITYSDK_OFFSET(0xBDB4430)
#define CLASS_2_1A304D4C36D43D86___C__DISPLAYCLASS43_0___PERSISTENTASYNCLOAD_B__0_OFFSET UNITYSDK_OFFSET(0xBDB8930)

inline static constexpr unsigned int Class_2_1A304D4C36D43D86___c__DisplayClass43_0_TypeDefinitionIndex = 73879;

class Class_2_1A304D4C36D43D86___c__DisplayClass43_0 : public ::System::Object
{
public:
	::Class_2_1A304D4C36D43D86* __4__this; // 0x10
	::RPG::Client::OpenWorld::StreamingItemData* renderItem; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1A304D4C36D43D86___C__DISPLAYCLASS43_0__CTOR_OFFSET))(this);
	}

	::System::Void __PersistentAsyncLoad_b__0(::UnityEngine::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + CLASS_2_1A304D4C36D43D86___C__DISPLAYCLASS43_0___PERSISTENTASYNCLOAD_B__0_OFFSET))(this, a1);
	}
};
