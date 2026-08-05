#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { template <typename T1, typename T2> class Action_2; }
namespace UnityEngine { class RectTransform; }

#define CLASS_2_2804F6601FAF25E7_CLASS_1_D5D7E57BEB4E4627_1_METHOD_1_97529D4ED7AD3741_OFFSET UNITYSDK_OFFSET(0x176434D0)
#define CLASS_2_2804F6601FAF25E7_CLASS_1_D5D7E57BEB4E4627_1_METHOD_1_B65F40BD0782C031_OFFSET UNITYSDK_OFFSET(0x17643270)
#define CLASS_2_2804F6601FAF25E7_CLASS_1_D5D7E57BEB4E4627_1_METHOD_1_C21A7AC6282FB0D0_OFFSET UNITYSDK_OFFSET(0x176431A0)
#define CLASS_2_2804F6601FAF25E7_CLASS_1_D5D7E57BEB4E4627_1__CTOR_OFFSET UNITYSDK_OFFSET(0x17643190)

inline static constexpr unsigned int Class_2_2804F6601FAF25E7_Class_1_D5D7E57BEB4E4627_1_TypeDefinitionIndex = 69400;

class Class_2_2804F6601FAF25E7_Class_1_D5D7E57BEB4E4627_1 : public ::System::Object
{
public:
	::UnityEngine::RectTransform* Field_1_1; // 0x10
	::System::Action_2<::System::Boolean, ::System::Boolean>* Field_1_0; // 0x18
	::System::Boolean Field_1_7; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2804F6601FAF25E7_CLASS_1_D5D7E57BEB4E4627_1__CTOR_OFFSET))(this);
	}

	::UnityEngine::Vector2 Method_1_C21A7AC6282FB0D0()
	{
		return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2804F6601FAF25E7_CLASS_1_D5D7E57BEB4E4627_1_METHOD_1_C21A7AC6282FB0D0_OFFSET))(this);
	}

	::System::Void Method_1_B65F40BD0782C031(::UnityEngine::Vector2 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_2_2804F6601FAF25E7_CLASS_1_D5D7E57BEB4E4627_1_METHOD_1_B65F40BD0782C031_OFFSET))(this, a1);
	}

	::System::Void Method_1_97529D4ED7AD3741()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2804F6601FAF25E7_CLASS_1_D5D7E57BEB4E4627_1_METHOD_1_97529D4ED7AD3741_OFFSET))(this);
	}
};
