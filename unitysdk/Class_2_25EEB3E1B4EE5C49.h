#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class RectTransform; }

#define CLASS_2_25EEB3E1B4EE5C49_METHOD_2_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0xE0027C0)
#define CLASS_2_25EEB3E1B4EE5C49_METHOD_2_289F28027FF47717_OFFSET UNITYSDK_OFFSET(0xE002BF0)
#define CLASS_2_25EEB3E1B4EE5C49_METHOD_2_2C42E9E5ED099427_OFFSET UNITYSDK_OFFSET(0xE002820)
#define CLASS_2_25EEB3E1B4EE5C49_METHOD_2_2C95AFAD0256302F_OFFSET UNITYSDK_OFFSET(0xE002900)
#define CLASS_2_25EEB3E1B4EE5C49_METHOD_2_8FAD57395F26ACC4_1_OFFSET UNITYSDK_OFFSET(0xE002B40)
#define CLASS_2_25EEB3E1B4EE5C49_METHOD_2_8FAD57395F26ACC4_OFFSET UNITYSDK_OFFSET(0xE002A80)
#define CLASS_2_25EEB3E1B4EE5C49_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xE0026C0)
#define CLASS_2_25EEB3E1B4EE5C49_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0xE0025E0)
#define CLASS_2_25EEB3E1B4EE5C49_ONRETURN_OFFSET UNITYSDK_OFFSET(0xE002630)
#define CLASS_2_25EEB3E1B4EE5C49__CTOR_OFFSET UNITYSDK_OFFSET(0xE002C50)
#define CLASS_2_25EEB3E1B4EE5C49__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0xE002730)
#define CLASS_2_25EEB3E1B4EE5C49___IFIXBASEPROXY__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0xE002C80)

inline static constexpr unsigned int Class_2_25EEB3E1B4EE5C49_TypeDefinitionIndex = 66189;

class Class_2_25EEB3E1B4EE5C49 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_3; // 0x0
	// static const ::System::String* Field_2_4; // 0x0
	::UnityEngine::Animation* Field_2_1; // 0x60
	::UnityEngine::RectTransform* Field_2_0; // 0x68
	::System::Single Field_2_2; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_25EEB3E1B4EE5C49__CTOR_OFFSET))(this);
	}

	::System::Void OnAcquire(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_25EEB3E1B4EE5C49_ONACQUIRE_OFFSET))(this, a1);
	}

	::System::Void OnReturn()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_25EEB3E1B4EE5C49_ONRETURN_OFFSET))(this);
	}

	::System::Void _OnDispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_25EEB3E1B4EE5C49__ONDISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_25EEB3E1B4EE5C49_METHOD_2_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Void Method_2_2C42E9E5ED099427(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_25EEB3E1B4EE5C49_METHOD_2_2C42E9E5ED099427_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_289F28027FF47717()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_25EEB3E1B4EE5C49_METHOD_2_289F28027FF47717_OFFSET))(this);
	}

	::System::Void Method_2_8FAD57395F26ACC4(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_25EEB3E1B4EE5C49_METHOD_2_8FAD57395F26ACC4_OFFSET))(this, a1);
	}

	::System::Void Method_2_8FAD57395F26ACC4_1(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_25EEB3E1B4EE5C49_METHOD_2_8FAD57395F26ACC4_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_2C95AFAD0256302F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_25EEB3E1B4EE5C49_METHOD_2_2C95AFAD0256302F_OFFSET))(this);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_25EEB3E1B4EE5C49_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnDispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_25EEB3E1B4EE5C49___IFIXBASEPROXY__ONDISPOSE_OFFSET))(this);
	}
};
