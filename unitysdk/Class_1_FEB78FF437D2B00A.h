#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/EObjectFeature.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine { class SkinnedMeshRenderer; }
namespace UnityEngine { class Transform; }

#define CLASS_1_FEB78FF437D2B00A_DISPOSE_OFFSET UNITYSDK_OFFSET(0x173C0380)
#define CLASS_1_FEB78FF437D2B00A_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x173C0BD0)
#define CLASS_1_FEB78FF437D2B00A_METHOD_1_46C14BF43A3952E2_OFFSET UNITYSDK_OFFSET(0x173C0630)
#define CLASS_1_FEB78FF437D2B00A_METHOD_1_937F8473216A3162_OFFSET UNITYSDK_OFFSET(0x173C0930)
#define CLASS_1_FEB78FF437D2B00A_METHOD_1_9E38127F40B34F1F_OFFSET UNITYSDK_OFFSET(0x173C03E0)
#define CLASS_1_FEB78FF437D2B00A_METHOD_1_A234FCCAD6D2867B_OFFSET UNITYSDK_OFFSET(0x173C0890)
#define CLASS_1_FEB78FF437D2B00A__CTOR_OFFSET UNITYSDK_OFFSET(0x173C05D0)

inline static constexpr unsigned int Class_1_FEB78FF437D2B00A_TypeDefinitionIndex = 58037;

class Class_1_FEB78FF437D2B00A : public ::System::Object
{
public:
	::UnityEngine::GameObject* Field_1_0; // 0x10
	::UnityEngine::Transform* Field_1_1; // 0x18
	::UnityEngine::SkinnedMeshRenderer* Field_1_2; // 0x20
	::System::Boolean Field_1_3; // 0x28
	::RPG::CustomRP::EObjectFeature Field_1_4; // 0x2C

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

	::UnityEngine::SkinnedMeshRenderer* Method_1_46C14BF43A3952E2(::UnityEngine::GameObject* a1)
	{
		return ((::UnityEngine::SkinnedMeshRenderer*(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_FEB78FF437D2B00A_METHOD_1_46C14BF43A3952E2_OFFSET))(this, a1);
	}

	::UnityEngine::Transform* Method_1_A234FCCAD6D2867B(::UnityEngine::GameObject* a1, ::UnityEngine::SkinnedMeshRenderer* a2)
	{
		return ((::UnityEngine::Transform*(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::SkinnedMeshRenderer*))((::PBYTE)hIl2Cpp + CLASS_1_FEB78FF437D2B00A_METHOD_1_A234FCCAD6D2867B_OFFSET))(this, a1, a2);
	}
};
