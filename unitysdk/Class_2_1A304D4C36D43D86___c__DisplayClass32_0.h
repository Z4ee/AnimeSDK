#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_1A304D4C36D43D86;
namespace RPG::Client::OpenWorld { class StreamingItemData; }
namespace UnityEngine { class GameObject; }

#define CLASS_2_1A304D4C36D43D86___C__DISPLAYCLASS32_0__CTOR_OFFSET UNITYSDK_OFFSET(0x16DCF7D0)
#define CLASS_2_1A304D4C36D43D86___C__DISPLAYCLASS32_0___INITINSTOBJ_B__0_OFFSET UNITYSDK_OFFSET(0x16DD5050)

inline static constexpr unsigned int Class_2_1A304D4C36D43D86___c__DisplayClass32_0_TypeDefinitionIndex = 70484;

class Class_2_1A304D4C36D43D86___c__DisplayClass32_0 : public ::System::Object
{
public:
	::UnityEngine::GameObject* instObject; // 0x10
	::Class_2_1A304D4C36D43D86* __4__this; // 0x18
	::RPG::Client::OpenWorld::StreamingItemData* renderItem; // 0x20
	::System::Boolean isLoadedBySync; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1A304D4C36D43D86___C__DISPLAYCLASS32_0__CTOR_OFFSET))(this);
	}

	::System::Void __InitInstObj_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1A304D4C36D43D86___C__DISPLAYCLASS32_0___INITINSTOBJ_B__0_OFFSET))(this);
	}
};
