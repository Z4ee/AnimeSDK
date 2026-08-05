#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Action_2; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class Transform; }

#define CLASS_1_3AA6D6AFB7EF244D_CLASS_1_0874DECF907833C4_METHOD_1_6D49184C39F850E6_OFFSET UNITYSDK_OFFSET(0x11226220)
#define CLASS_1_3AA6D6AFB7EF244D_CLASS_1_0874DECF907833C4__CTOR_OFFSET UNITYSDK_OFFSET(0x11226210)

inline static constexpr unsigned int Class_1_3AA6D6AFB7EF244D_Class_1_0874DECF907833C4_TypeDefinitionIndex = 68668;

class Class_1_3AA6D6AFB7EF244D_Class_1_0874DECF907833C4 : public ::System::Object
{
public:
	::System::Action_2<::Foundation::AssetPath, ::UnityEngine::GameObject*>* Field_1_7; // 0x10
	::UnityEngine::Transform* Field_1_0; // 0x18
	::Foundation::AssetPath Field_1_6; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3AA6D6AFB7EF244D_CLASS_1_0874DECF907833C4__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_6D49184C39F850E6(::UnityEngine::Object* a1, ::Foundation::AssetRequestHandle a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*, ::Foundation::AssetRequestHandle))((::PBYTE)hIl2Cpp + CLASS_1_3AA6D6AFB7EF244D_CLASS_1_0874DECF907833C4_METHOD_1_6D49184C39F850E6_OFFSET))(this, a1, a2);
	}
};
