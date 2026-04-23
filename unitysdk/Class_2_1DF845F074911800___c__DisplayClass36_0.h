#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_1DF845F074911800;
namespace RPG::Client::OpenWorld { class StreamingItemData; }
namespace UnityEngine { class Object; }

#define CLASS_2_1DF845F074911800___C__DISPLAYCLASS36_0__CTOR_OFFSET UNITYSDK_OFFSET(0x12B358A0)
#define CLASS_2_1DF845F074911800___C__DISPLAYCLASS36_0___PERSISTENTASYNCLOAD_B__0_OFFSET UNITYSDK_OFFSET(0x12B39A40)

inline static constexpr unsigned int Class_2_1DF845F074911800___c__DisplayClass36_0_TypeDefinitionIndex = 68000;

class Class_2_1DF845F074911800___c__DisplayClass36_0 : public ::System::Object
{
public:
	::RPG::Client::OpenWorld::StreamingItemData* renderItem; // 0x10
	::Class_2_1DF845F074911800* __4__this; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1DF845F074911800___C__DISPLAYCLASS36_0__CTOR_OFFSET))(this);
	}

	::System::Void __PersistentAsyncLoad_b__0(::UnityEngine::Object* goPrefab)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + CLASS_2_1DF845F074911800___C__DISPLAYCLASS36_0___PERSISTENTASYNCLOAD_B__0_OFFSET))(this, goPrefab);
	}
};
