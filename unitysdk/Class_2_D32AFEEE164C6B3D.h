#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F3ED31AAEDA15B0.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_2_D32AFEEE164C6B3D_BEFORERECYCLE_OFFSET UNITYSDK_OFFSET(0x121E4030)
#define CLASS_2_D32AFEEE164C6B3D_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x121E3F80)
#define CLASS_2_D32AFEEE164C6B3D__CTOR_OFFSET UNITYSDK_OFFSET(0x121E3F90)

inline static constexpr unsigned int Class_2_D32AFEEE164C6B3D_TypeDefinitionIndex = 49297;

class Class_2_D32AFEEE164C6B3D : public ::Class_1_5F3ED31AAEDA15B0
{
public:
	::System::Void _ctor(::UnityEngine::GameObject* a1, ::System::String* a2, ::UnityEngine::Transform* a3, ::System::Action_2<::System::String*, ::UnityEngine::GameObject*>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::String*, ::UnityEngine::Transform*, ::System::Action_2<::System::String*, ::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + CLASS_2_D32AFEEE164C6B3D__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D32AFEEE164C6B3D_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void BeforeRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D32AFEEE164C6B3D_BEFORERECYCLE_OFFSET))(this);
	}
};
