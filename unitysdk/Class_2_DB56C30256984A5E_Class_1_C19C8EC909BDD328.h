#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_2_DB56C30256984A5E;
namespace UnityEngine { class Camera; }
namespace UnityEngine { class RectTransform; }

#define CLASS_2_DB56C30256984A5E_CLASS_1_C19C8EC909BDD328_METHOD_1_E325569BD525B0A1_OFFSET UNITYSDK_OFFSET(0x1068F5F0)
#define CLASS_2_DB56C30256984A5E_CLASS_1_C19C8EC909BDD328__CTOR_OFFSET UNITYSDK_OFFSET(0x1068F5E0)

inline static constexpr unsigned int Class_2_DB56C30256984A5E_Class_1_C19C8EC909BDD328_TypeDefinitionIndex = 70155;

class Class_2_DB56C30256984A5E_Class_1_C19C8EC909BDD328 : public ::System::Object
{
public:
	::Class_2_DB56C30256984A5E* Field_1_3; // 0x10
	::UnityEngine::Camera* Field_1_1; // 0x18
	::UnityEngine::RectTransform* Field_1_0; // 0x20
	::System::Int32 Field_1_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DB56C30256984A5E_CLASS_1_C19C8EC909BDD328__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_E325569BD525B0A1(::UnityEngine::Vector2 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_2_DB56C30256984A5E_CLASS_1_C19C8EC909BDD328_METHOD_1_E325569BD525B0A1_OFFSET))(this, a1);
	}
};
