#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define RENDERITEMPOLYMERCONFIG_GET_ADDANIMATIONIRI_OFFSET UNITYSDK_OFFSET(0x1BF3D7B0)
#define RENDERITEMPOLYMERCONFIG_GET_ADDSYNCPOSITIONCHILDPATH_OFFSET UNITYSDK_OFFSET(0x1BF3E550)
#define RENDERITEMPOLYMERCONFIG_GET_ADDSYNCPOSITIONROOTPATH_OFFSET UNITYSDK_OFFSET(0x1BF3CCE0)
#define RENDERITEMPOLYMERCONFIG_METHOD_5_0869E1192F8E01DF_OFFSET UNITYSDK_OFFSET(0x1BF3D440)
#define RENDERITEMPOLYMERCONFIG_METHOD_5_560ABD6EDDE4D0DB_OFFSET UNITYSDK_OFFSET(0x1BF3CD50)
#define RENDERITEMPOLYMERCONFIG_METHOD_5_65BECD5F98452910_OFFSET UNITYSDK_OFFSET(0x1BF3D940)
#define RENDERITEMPOLYMERCONFIG_SET_ADDANIMATIONIRI_OFFSET UNITYSDK_OFFSET(0x1BF3D7C0)
#define RENDERITEMPOLYMERCONFIG_SET_ADDSYNCPOSITIONCHILDPATH_OFFSET UNITYSDK_OFFSET(0x1BF3E560)
#define RENDERITEMPOLYMERCONFIG_SET_ADDSYNCPOSITIONROOTPATH_OFFSET UNITYSDK_OFFSET(0x1BF3CCF0)
#define RENDERITEMPOLYMERCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF3E790)

inline static constexpr unsigned int RenderItemPolymerConfig_TypeDefinitionIndex = 47796;

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

	::System::Void Method_5_560ABD6EDDE4D0DB(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RENDERITEMPOLYMERCONFIG_METHOD_5_560ABD6EDDE4D0DB_OFFSET))(this, a1);
	}

	::UnityEngine::GameObject* get_AddSyncPositionChildPath()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RENDERITEMPOLYMERCONFIG_GET_ADDSYNCPOSITIONCHILDPATH_OFFSET))(this);
	}

	::System::Void set_AddSyncPositionChildPath(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RENDERITEMPOLYMERCONFIG_SET_ADDSYNCPOSITIONCHILDPATH_OFFSET))(this, a1);
	}

	::System::Void Method_5_0869E1192F8E01DF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RENDERITEMPOLYMERCONFIG_METHOD_5_0869E1192F8E01DF_OFFSET))(this);
	}

	::System::Void Method_5_65BECD5F98452910(::UnityEngine::Transform* a1, ::UnityEngine::Transform* a2, ::System::String*& a3, ::System::String*& a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::System::String*&, ::System::String*&))((::PBYTE)hIl2Cpp + RENDERITEMPOLYMERCONFIG_METHOD_5_65BECD5F98452910_OFFSET))(this, a1, a2, a3, a4);
	}
};
