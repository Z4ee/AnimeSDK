#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_0B2EE8871CB57344;
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define CLASS_1_EA02253D0421B05A_METHOD_1_FA845D4A135DA69D_OFFSET UNITYSDK_OFFSET(0x111E5840)
#define CLASS_1_EA02253D0421B05A__CTOR_OFFSET UNITYSDK_OFFSET(0x111E5830)

inline static constexpr unsigned int Class_1_EA02253D0421B05A_TypeDefinitionIndex = 56518;

class Class_1_EA02253D0421B05A : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA02253D0421B05A__CTOR_OFFSET))(this);
	}

	static ::Class_1_0B2EE8871CB57344* Method_1_FA845D4A135DA69D(::System::String* a1, ::UnityEngine::Transform* a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Quaternion a4, ::UnityEngine::LayerMask a5)
	{
		return ((::Class_1_0B2EE8871CB57344*(*)(::System::String*, ::UnityEngine::Transform*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::LayerMask))((::PBYTE)hIl2Cpp + CLASS_1_EA02253D0421B05A_METHOD_1_FA845D4A135DA69D_OFFSET))(a1, a2, a3, a4, a5);
	}
};
