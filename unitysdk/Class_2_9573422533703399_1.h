#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F3ED31AAEDA15B0.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_2_9573422533703399_1_BEFORERECYCLE_OFFSET UNITYSDK_OFFSET(0x16DFF340)
#define CLASS_2_9573422533703399_1_METHOD_2_98CC2C3EFF9B2AB5_OFFSET UNITYSDK_OFFSET(0x16DFF390)
#define CLASS_2_9573422533703399_1_METHOD_2_CF6EEB0206D60DE3_OFFSET UNITYSDK_OFFSET(0x16DFF610)
#define CLASS_2_9573422533703399_1_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x16DFF2C0)
#define CLASS_2_9573422533703399_1__CTOR_OFFSET UNITYSDK_OFFSET(0x16DFF2D0)

inline static constexpr unsigned int Class_2_9573422533703399_1_TypeDefinitionIndex = 61841;

class Class_2_9573422533703399_1 : public ::Class_1_5F3ED31AAEDA15B0
{
public:
	::System::Void _ctor(::UnityEngine::GameObject* a1, ::System::String* a2, ::UnityEngine::Transform* a3, ::System::Action_2<::System::String*, ::UnityEngine::GameObject*>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::String*, ::UnityEngine::Transform*, ::System::Action_2<::System::String*, ::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + CLASS_2_9573422533703399_1__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9573422533703399_1_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void BeforeRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9573422533703399_1_BEFORERECYCLE_OFFSET))(this);
	}

	::System::Void Method_2_98CC2C3EFF9B2AB5(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_2_9573422533703399_1_METHOD_2_98CC2C3EFF9B2AB5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_CF6EEB0206D60DE3(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_2_9573422533703399_1_METHOD_2_CF6EEB0206D60DE3_OFFSET))(this, a1, a2);
	}
};
