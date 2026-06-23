#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Action_2; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class Transform; }

#define CLASS_1_3AA6D6AFB7EF244D_CLASS_1_85704A48A5D15828_METHOD_1_CA64DF27FC7D69EF_OFFSET UNITYSDK_OFFSET(0x10F377B0)
#define CLASS_1_3AA6D6AFB7EF244D_CLASS_1_85704A48A5D15828__CTOR_OFFSET UNITYSDK_OFFSET(0x10F377A0)

inline static constexpr unsigned int Class_1_3AA6D6AFB7EF244D_Class_1_85704A48A5D15828_TypeDefinitionIndex = 78495;

class Class_1_3AA6D6AFB7EF244D_Class_1_85704A48A5D15828 : public ::System::Object
{
public:
	::UnityEngine::Transform* Field_1_0; // 0x10
	::System::Action_2<::Foundation::AssetPath, ::UnityEngine::GameObject*>* Field_1_1; // 0x18
	::Foundation::AssetPath Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3AA6D6AFB7EF244D_CLASS_1_85704A48A5D15828__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CA64DF27FC7D69EF(::UnityEngine::Object* a1, ::Foundation::AssetRequestHandle a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*, ::Foundation::AssetRequestHandle))((::PBYTE)hIl2Cpp + CLASS_1_3AA6D6AFB7EF244D_CLASS_1_85704A48A5D15828_METHOD_1_CA64DF27FC7D69EF_OFFSET))(this, a1, a2);
	}
};
