#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_1_BADE65034284623D_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13B3BD90)
#define CLASS_1_BADE65034284623D_GET_ASSETPATH_OFFSET UNITYSDK_OFFSET(0x13B3C030)
#define CLASS_1_BADE65034284623D_GET_PARENT_OFFSET UNITYSDK_OFFSET(0x13B3C050)
#define CLASS_1_BADE65034284623D_METHOD_1_48D844B20A8C3D3D_OFFSET UNITYSDK_OFFSET(0x13B3BD30)
#define CLASS_1_BADE65034284623D_METHOD_1_9CDBE8C36BC3E9A2_OFFSET UNITYSDK_OFFSET(0x13B3BF80)
#define CLASS_1_BADE65034284623D_METHOD_1_ABA9FEAB38395BC4_OFFSET UNITYSDK_OFFSET(0x13B3BDE0)
#define CLASS_1_BADE65034284623D_SET_ASSETPATH_OFFSET UNITYSDK_OFFSET(0x13B3C040)
#define CLASS_1_BADE65034284623D_SET_PARENT_OFFSET UNITYSDK_OFFSET(0x13B3C060)
#define CLASS_1_BADE65034284623D__CTOR_OFFSET UNITYSDK_OFFSET(0x13B3C070)

inline static constexpr unsigned int Class_1_BADE65034284623D_TypeDefinitionIndex = 64470;

class Class_1_BADE65034284623D : public ::System::Object
{
public:
	::System::String* _AssetPath_k__BackingField; // 0x10
	::UnityEngine::Transform* _Parent_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BADE65034284623D__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_48D844B20A8C3D3D(::System::String* a1, ::UnityEngine::Transform* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_BADE65034284623D_METHOD_1_48D844B20A8C3D3D_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BADE65034284623D_DISPOSE_OFFSET))(this);
	}

	::UnityEngine::GameObject* Method_1_ABA9FEAB38395BC4()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BADE65034284623D_METHOD_1_ABA9FEAB38395BC4_OFFSET))(this);
	}

	::System::Void Method_1_9CDBE8C36BC3E9A2(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_BADE65034284623D_METHOD_1_9CDBE8C36BC3E9A2_OFFSET))(this, a1);
	}

	::System::String* get_AssetPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BADE65034284623D_GET_ASSETPATH_OFFSET))(this);
	}

	::System::Void set_AssetPath(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_BADE65034284623D_SET_ASSETPATH_OFFSET))(this, a1);
	}

	::UnityEngine::Transform* get_Parent()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BADE65034284623D_GET_PARENT_OFFSET))(this);
	}

	::System::Void set_Parent(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_BADE65034284623D_SET_PARENT_OFFSET))(this, a1);
	}
};
