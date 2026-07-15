#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Object; }

#define CLASS_2_B3BCC9AA95120603___C__DISPLAYCLASS61_0__CTOR_OFFSET UNITYSDK_OFFSET(0x16A2F1D0)
#define CLASS_2_B3BCC9AA95120603___C__DISPLAYCLASS61_0__PRELOADPROPERTYRESOURCES_B__0_OFFSET UNITYSDK_OFFSET(0x16A32A10)

inline static constexpr unsigned int Class_2_B3BCC9AA95120603___c__DisplayClass61_0_TypeDefinitionIndex = 47581;

class Class_2_B3BCC9AA95120603___c__DisplayClass61_0 : public ::System::Object
{
public:
	::System::Action_1<::UnityEngine::Object*>* __9__0; // 0x10
	::System::Int32 h; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B3BCC9AA95120603___C__DISPLAYCLASS61_0__CTOR_OFFSET))(this);
	}

	::System::Void _PreloadPropertyResources_b__0(::UnityEngine::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + CLASS_2_B3BCC9AA95120603___C__DISPLAYCLASS61_0__PRELOADPROPERTYRESOURCES_B__0_OFFSET))(this, a1);
	}
};
