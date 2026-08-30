#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_CEF86C33D203CEB1;
namespace RPG::Client::OpenWorld { class StreamingItemData; }
namespace UnityEngine { class Object; }

#define CLASS_3_CEF86C33D203CEB1___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0x17A5B4C0)
#define CLASS_3_CEF86C33D203CEB1___C__DISPLAYCLASS5_0___PERSISTENTASYNCLOAD_B__0_OFFSET UNITYSDK_OFFSET(0x17A5B550)

inline static constexpr unsigned int Class_3_CEF86C33D203CEB1___c__DisplayClass5_0_TypeDefinitionIndex = 73777;

class Class_3_CEF86C33D203CEB1___c__DisplayClass5_0 : public ::System::Object
{
public:
	::Class_3_CEF86C33D203CEB1* __4__this; // 0x10
	::RPG::Client::OpenWorld::StreamingItemData* renderItem; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CEF86C33D203CEB1___C__DISPLAYCLASS5_0__CTOR_OFFSET))(this);
	}

	::System::Void __PersistentAsyncLoad_b__0(::UnityEngine::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + CLASS_3_CEF86C33D203CEB1___C__DISPLAYCLASS5_0___PERSISTENTASYNCLOAD_B__0_OFFSET))(this, a1);
	}
};
