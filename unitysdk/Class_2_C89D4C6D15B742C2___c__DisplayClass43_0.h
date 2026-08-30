#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_C89D4C6D15B742C2;
namespace RPG::Client::OpenWorld { class StreamingItemData; }
namespace UnityEngine { class Object; }

#define CLASS_2_C89D4C6D15B742C2___C__DISPLAYCLASS43_0__CTOR_OFFSET UNITYSDK_OFFSET(0xBE0C490)
#define CLASS_2_C89D4C6D15B742C2___C__DISPLAYCLASS43_0___PERSISTENTASYNCLOAD_B__0_OFFSET UNITYSDK_OFFSET(0xBE10950)

inline static constexpr unsigned int Class_2_C89D4C6D15B742C2___c__DisplayClass43_0_TypeDefinitionIndex = 73773;

class Class_2_C89D4C6D15B742C2___c__DisplayClass43_0 : public ::System::Object
{
public:
	::RPG::Client::OpenWorld::StreamingItemData* renderItem; // 0x10
	::Class_2_C89D4C6D15B742C2* __4__this; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C89D4C6D15B742C2___C__DISPLAYCLASS43_0__CTOR_OFFSET))(this);
	}

	::System::Void __PersistentAsyncLoad_b__0(::UnityEngine::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + CLASS_2_C89D4C6D15B742C2___C__DISPLAYCLASS43_0___PERSISTENTASYNCLOAD_B__0_OFFSET))(this, a1);
	}
};
