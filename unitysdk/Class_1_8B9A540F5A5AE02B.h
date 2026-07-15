#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_1_8B9A540F5A5AE02B_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x14FF3FD0)
#define CLASS_1_8B9A540F5A5AE02B_METHOD_1_49081F7A93E73B4D_OFFSET UNITYSDK_OFFSET(0x14FF3BC0)
#define CLASS_1_8B9A540F5A5AE02B_METHOD_1_808A56A256840289_OFFSET UNITYSDK_OFFSET(0x14FF3D90)
#define CLASS_1_8B9A540F5A5AE02B_METHOD_1_AA169839CB93802A_OFFSET UNITYSDK_OFFSET(0x14FF3EE0)
#define CLASS_1_8B9A540F5A5AE02B__CTOR_OFFSET UNITYSDK_OFFSET(0x14FF3AB0)

inline static constexpr unsigned int Class_1_8B9A540F5A5AE02B_TypeDefinitionIndex = 67742;

class Class_1_8B9A540F5A5AE02B : public ::System::Object
{
public:
	::UnityEngine::GameObject* Field_1_0; // 0x10
	::System::Single Field_1_1; // 0x18

	::System::Void _ctor(::UnityEngine::GameObject* a1, ::UnityEngine::Transform* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_8B9A540F5A5AE02B__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_49081F7A93E73B4D(::UnityEngine::Vector3 a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_8B9A540F5A5AE02B_METHOD_1_49081F7A93E73B4D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_808A56A256840289(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_8B9A540F5A5AE02B_METHOD_1_808A56A256840289_OFFSET))(this, a1);
	}

	::System::Void Method_1_AA169839CB93802A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8B9A540F5A5AE02B_METHOD_1_AA169839CB93802A_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8B9A540F5A5AE02B_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}
};
