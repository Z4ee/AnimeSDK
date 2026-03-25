#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_8595EBB95116F4B2.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class GameObject; }

#define CLASS_2_5FA7B3EE05377F5F_GET_GAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x117A9FD0)
#define CLASS_2_5FA7B3EE05377F5F_METHOD_2_0865E94460F11643_OFFSET UNITYSDK_OFFSET(0x117AA1A0)
#define CLASS_2_5FA7B3EE05377F5F_METHOD_2_7C0B23662E549DD2_OFFSET UNITYSDK_OFFSET(0x117AA320)
#define CLASS_2_5FA7B3EE05377F5F_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x117AA2C0)
#define CLASS_2_5FA7B3EE05377F5F_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x117AA390)
#define CLASS_2_5FA7B3EE05377F5F_SET_GAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x117A9FE0)
#define CLASS_2_5FA7B3EE05377F5F__CTOR_OFFSET UNITYSDK_OFFSET(0x117A9FF0)

inline static constexpr unsigned int Class_2_5FA7B3EE05377F5F_TypeDefinitionIndex = 38633;

class Class_2_5FA7B3EE05377F5F : public ::Class_1_8595EBB95116F4B2
{
public:
	::UnityEngine::GameObject* _GameObject_k__BackingField; // 0x30

	::System::Void _ctor(::UnityEngine::Vector3 a1, ::UnityEngine::GameObject* a2, ::UnityEngine::GameObject* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::GameObject*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_5FA7B3EE05377F5F__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::UnityEngine::GameObject* get_GameObject()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5FA7B3EE05377F5F_GET_GAMEOBJECT_OFFSET))(this);
	}

	::System::Void set_GameObject(::UnityEngine::GameObject* value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_5FA7B3EE05377F5F_SET_GAMEOBJECT_OFFSET))(this, value);
	}

	::System::Void Method_2_0865E94460F11643()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5FA7B3EE05377F5F_METHOD_2_0865E94460F11643_OFFSET))(this);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5FA7B3EE05377F5F_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_2_7C0B23662E549DD2(::System::Int32 a1, ::UnityEngine::Color a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Color, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_5FA7B3EE05377F5F_METHOD_2_7C0B23662E549DD2_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5FA7B3EE05377F5F_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
