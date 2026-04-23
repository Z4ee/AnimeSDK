#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define RENDERITEMPOLYMERCONFIG_GET_ADDANIMATIONIRI_OFFSET UNITYSDK_OFFSET(0xB930F00)
#define RENDERITEMPOLYMERCONFIG_GET_ADDSYNCPOSITIONCHILDPATH_OFFSET UNITYSDK_OFFSET(0xB931840)
#define RENDERITEMPOLYMERCONFIG_GET_ADDSYNCPOSITIONROOTPATH_OFFSET UNITYSDK_OFFSET(0xB930660)
#define RENDERITEMPOLYMERCONFIG_METHOD_5_B44E223C58DE8E13_OFFSET UNITYSDK_OFFSET(0xB931040)
#define RENDERITEMPOLYMERCONFIG_METHOD_5_F4DD08A31BA3F883_OFFSET UNITYSDK_OFFSET(0xB930BC0)
#define RENDERITEMPOLYMERCONFIG_METHOD_5_FBE22211014B40D9_OFFSET UNITYSDK_OFFSET(0xB9306D0)
#define RENDERITEMPOLYMERCONFIG_SET_ADDANIMATIONIRI_OFFSET UNITYSDK_OFFSET(0xB930F10)
#define RENDERITEMPOLYMERCONFIG_SET_ADDSYNCPOSITIONCHILDPATH_OFFSET UNITYSDK_OFFSET(0xB931850)
#define RENDERITEMPOLYMERCONFIG_SET_ADDSYNCPOSITIONROOTPATH_OFFSET UNITYSDK_OFFSET(0xB930670)
#define RENDERITEMPOLYMERCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xB9319C0)

inline static constexpr unsigned int RenderItemPolymerConfig_TypeDefinitionIndex = 44120;

class RenderItemPolymerConfig : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Collections::Generic::List_1<::System::String*>* SyncPositionRoot; // 0x18
	::System::Collections::Generic::List_1<::System::String*>* SyncPositionChildPath; // 0x20
	::System::Collections::Generic::List_1<::System::String*>* AnimationIRI; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RENDERITEMPOLYMERCONFIG__CTOR_OFFSET))(this);
	}

	::UnityEngine::GameObject* get_AddSyncPositionRootPath()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RENDERITEMPOLYMERCONFIG_GET_ADDSYNCPOSITIONROOTPATH_OFFSET))(this);
	}

	::System::Void set_AddSyncPositionRootPath(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RENDERITEMPOLYMERCONFIG_SET_ADDSYNCPOSITIONROOTPATH_OFFSET))(this, a1);
	}

	::UnityEngine::GameObject* get_AddAnimationIRI()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RENDERITEMPOLYMERCONFIG_GET_ADDANIMATIONIRI_OFFSET))(this);
	}

	::System::Void set_AddAnimationIRI(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RENDERITEMPOLYMERCONFIG_SET_ADDANIMATIONIRI_OFFSET))(this, a1);
	}

	::System::Void Method_5_FBE22211014B40D9(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RENDERITEMPOLYMERCONFIG_METHOD_5_FBE22211014B40D9_OFFSET))(this, a1);
	}

	::UnityEngine::GameObject* get_AddSyncPositionChildPath()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RENDERITEMPOLYMERCONFIG_GET_ADDSYNCPOSITIONCHILDPATH_OFFSET))(this);
	}

	::System::Void set_AddSyncPositionChildPath(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RENDERITEMPOLYMERCONFIG_SET_ADDSYNCPOSITIONCHILDPATH_OFFSET))(this, a1);
	}

	::System::Void Method_5_F4DD08A31BA3F883()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RENDERITEMPOLYMERCONFIG_METHOD_5_F4DD08A31BA3F883_OFFSET))(this);
	}

	::System::Void Method_5_B44E223C58DE8E13(::UnityEngine::Transform* a1, ::UnityEngine::Transform* a2, ::System::String*& a3, ::System::String*& a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::System::String*&, ::System::String*&))((::PBYTE)hIl2Cpp + RENDERITEMPOLYMERCONFIG_METHOD_5_B44E223C58DE8E13_OFFSET))(this, a1, a2, a3, a4);
	}
};
