#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Transform; }

#define CLASS_3_8FDF110BA93DB06A_CLASS_1_97D633C4CF5977E6_METHOD_1_626C719A884DEF9A_OFFSET UNITYSDK_OFFSET(0x14805310)
#define CLASS_3_8FDF110BA93DB06A_CLASS_1_97D633C4CF5977E6_METHOD_1_A03C765EBC5D1677_OFFSET UNITYSDK_OFFSET(0x14805280)
#define CLASS_3_8FDF110BA93DB06A_CLASS_1_97D633C4CF5977E6_METHOD_1_FA662896843C137A_OFFSET UNITYSDK_OFFSET(0x14805220)
#define CLASS_3_8FDF110BA93DB06A_CLASS_1_97D633C4CF5977E6__CTOR_OFFSET UNITYSDK_OFFSET(0x14805120)

inline static constexpr unsigned int Class_3_8FDF110BA93DB06A_Class_1_97D633C4CF5977E6_TypeDefinitionIndex = 91238;

class Class_3_8FDF110BA93DB06A_Class_1_97D633C4CF5977E6 : public ::System::Object
{
public:
	::UnityEngine::Transform* Field_1_1; // 0x10
	::UnityEngine::Vector3 Field_1_0; // 0x18

	::System::Void _ctor(::Foundation::ViewObject::ViewObjectHandle a1)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::ViewObjectHandle))((::PBYTE)hIl2Cpp + CLASS_3_8FDF110BA93DB06A_CLASS_1_97D633C4CF5977E6__CTOR_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_1_FA662896843C137A()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8FDF110BA93DB06A_CLASS_1_97D633C4CF5977E6_METHOD_1_FA662896843C137A_OFFSET))(this);
	}

	::System::Void Method_1_A03C765EBC5D1677(::System::Single a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_3_8FDF110BA93DB06A_CLASS_1_97D633C4CF5977E6_METHOD_1_A03C765EBC5D1677_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_626C719A884DEF9A(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_3_8FDF110BA93DB06A_CLASS_1_97D633C4CF5977E6_METHOD_1_626C719A884DEF9A_OFFSET))(this, a1);
	}
};
