#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/EObjectFeature.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine { class SkinnedMeshRenderer; }
namespace UnityEngine { class Transform; }

#define CLASS_1_FEB78FF437D2B00A_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10631B70)
#define CLASS_1_FEB78FF437D2B00A_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x106323A0)
#define CLASS_1_FEB78FF437D2B00A_METHOD_1_6577AED8AAF02628_OFFSET UNITYSDK_OFFSET(0x10631E20)
#define CLASS_1_FEB78FF437D2B00A_METHOD_1_937F8473216A3162_OFFSET UNITYSDK_OFFSET(0x10632100)
#define CLASS_1_FEB78FF437D2B00A_METHOD_1_9E38127F40B34F1F_OFFSET UNITYSDK_OFFSET(0x10631BD0)
#define CLASS_1_FEB78FF437D2B00A_METHOD_1_A234FCCAD6D2867B_OFFSET UNITYSDK_OFFSET(0x10632060)
#define CLASS_1_FEB78FF437D2B00A__CTOR_OFFSET UNITYSDK_OFFSET(0x10631DC0)

inline static constexpr unsigned int Class_1_FEB78FF437D2B00A_TypeDefinitionIndex = 49231;

class Class_1_FEB78FF437D2B00A : public ::System::Object
{
public:
	::UnityEngine::Transform* Field_1_2; // 0x10
	::UnityEngine::SkinnedMeshRenderer* Field_1_1; // 0x18
	::UnityEngine::GameObject* Field_1_0; // 0x20
	::RPG::CustomRP::EObjectFeature Field_1_3; // 0x28
	::System::Boolean Field_1_4; // 0x2C

	::System::Void _ctor(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_FEB78FF437D2B00A__CTOR_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FEB78FF437D2B00A_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FEB78FF437D2B00A_METHOD_1_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void Method_1_937F8473216A3162()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FEB78FF437D2B00A_METHOD_1_937F8473216A3162_OFFSET))(this);
	}

	::System::Void Method_1_9E38127F40B34F1F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FEB78FF437D2B00A_METHOD_1_9E38127F40B34F1F_OFFSET))(this);
	}

	::UnityEngine::SkinnedMeshRenderer* Method_1_6577AED8AAF02628(::UnityEngine::GameObject* a1)
	{
		return ((::UnityEngine::SkinnedMeshRenderer*(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_FEB78FF437D2B00A_METHOD_1_6577AED8AAF02628_OFFSET))(this, a1);
	}

	::UnityEngine::Transform* Method_1_A234FCCAD6D2867B(::UnityEngine::GameObject* a1, ::UnityEngine::SkinnedMeshRenderer* a2)
	{
		return ((::UnityEngine::Transform*(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::SkinnedMeshRenderer*))((::PBYTE)hIl2Cpp + CLASS_1_FEB78FF437D2B00A_METHOD_1_A234FCCAD6D2867B_OFFSET))(this, a1, a2);
	}
};
