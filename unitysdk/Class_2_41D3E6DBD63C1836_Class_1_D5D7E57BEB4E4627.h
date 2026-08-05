#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { template <typename T1, typename T2> class Action_2; }
namespace UnityEngine { class RectTransform; }

#define CLASS_2_41D3E6DBD63C1836_CLASS_1_D5D7E57BEB4E4627_METHOD_1_97529D4ED7AD3741_OFFSET UNITYSDK_OFFSET(0x15EE8B00)
#define CLASS_2_41D3E6DBD63C1836_CLASS_1_D5D7E57BEB4E4627_METHOD_1_B65F40BD0782C031_OFFSET UNITYSDK_OFFSET(0x15EE8C30)
#define CLASS_2_41D3E6DBD63C1836_CLASS_1_D5D7E57BEB4E4627_METHOD_1_C21A7AC6282FB0D0_OFFSET UNITYSDK_OFFSET(0x15EE8B60)
#define CLASS_2_41D3E6DBD63C1836_CLASS_1_D5D7E57BEB4E4627__CTOR_OFFSET UNITYSDK_OFFSET(0x15EE8AF0)

inline static constexpr unsigned int Class_2_41D3E6DBD63C1836_Class_1_D5D7E57BEB4E4627_TypeDefinitionIndex = 41458;

class Class_2_41D3E6DBD63C1836_Class_1_D5D7E57BEB4E4627 : public ::System::Object
{
public:
	::UnityEngine::RectTransform* Field_1_1; // 0x10
	::System::Action_2<::System::Boolean, ::System::Boolean>* Field_1_0; // 0x18
	::System::Boolean Field_1_7; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_41D3E6DBD63C1836_CLASS_1_D5D7E57BEB4E4627__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_97529D4ED7AD3741()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_41D3E6DBD63C1836_CLASS_1_D5D7E57BEB4E4627_METHOD_1_97529D4ED7AD3741_OFFSET))(this);
	}

	::UnityEngine::Vector2 Method_1_C21A7AC6282FB0D0()
	{
		return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_41D3E6DBD63C1836_CLASS_1_D5D7E57BEB4E4627_METHOD_1_C21A7AC6282FB0D0_OFFSET))(this);
	}

	::System::Void Method_1_B65F40BD0782C031(::UnityEngine::Vector2 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_2_41D3E6DBD63C1836_CLASS_1_D5D7E57BEB4E4627_METHOD_1_B65F40BD0782C031_OFFSET))(this, a1);
	}
};
