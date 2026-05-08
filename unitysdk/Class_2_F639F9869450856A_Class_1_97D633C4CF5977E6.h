#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Transform; }

#define CLASS_2_F639F9869450856A_CLASS_1_97D633C4CF5977E6_METHOD_1_626C719A884DEF9A_OFFSET UNITYSDK_OFFSET(0x11397070)
#define CLASS_2_F639F9869450856A_CLASS_1_97D633C4CF5977E6_METHOD_1_A03C765EBC5D1677_OFFSET UNITYSDK_OFFSET(0x11396FE0)
#define CLASS_2_F639F9869450856A_CLASS_1_97D633C4CF5977E6_METHOD_1_FA662896843C137A_OFFSET UNITYSDK_OFFSET(0x11396F80)
#define CLASS_2_F639F9869450856A_CLASS_1_97D633C4CF5977E6__CTOR_OFFSET UNITYSDK_OFFSET(0x11396E80)

inline static constexpr unsigned int Class_2_F639F9869450856A_Class_1_97D633C4CF5977E6_TypeDefinitionIndex = 42049;

class Class_2_F639F9869450856A_Class_1_97D633C4CF5977E6 : public ::System::Object
{
public:
	::UnityEngine::Transform* Field_1_0; // 0x10
	::UnityEngine::Vector3 Field_1_1; // 0x18

	::System::Void _ctor(::Foundation::ViewObject::ViewObjectHandle a1)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::ViewObjectHandle))((::PBYTE)hIl2Cpp + CLASS_2_F639F9869450856A_CLASS_1_97D633C4CF5977E6__CTOR_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_1_FA662896843C137A()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F639F9869450856A_CLASS_1_97D633C4CF5977E6_METHOD_1_FA662896843C137A_OFFSET))(this);
	}

	::System::Void Method_1_A03C765EBC5D1677(::System::Single a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_F639F9869450856A_CLASS_1_97D633C4CF5977E6_METHOD_1_A03C765EBC5D1677_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_626C719A884DEF9A(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_F639F9869450856A_CLASS_1_97D633C4CF5977E6_METHOD_1_626C719A884DEF9A_OFFSET))(this, a1);
	}
};
