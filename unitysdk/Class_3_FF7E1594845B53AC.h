#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_CBDF63BA2C3715C3.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_494BD190B553B399;
class Class_1_563415D37D4EDE07;
namespace RPG::Client::OpenWorld { class StreamingItemData; }
namespace RPG::GameCore { class BlockNodeConfig; }
namespace RPG::GameCore { class StagePrefabInfo; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define CLASS_3_FF7E1594845B53AC_GETBOUNDCENTER_OFFSET UNITYSDK_OFFSET(0x11580B30)
#define CLASS_3_FF7E1594845B53AC_GETBOUNDSIZE_OFFSET UNITYSDK_OFFSET(0x11580BA0)
#define CLASS_3_FF7E1594845B53AC_GETRECT_OFFSET UNITYSDK_OFFSET(0x11580C20)
#define CLASS_3_FF7E1594845B53AC_GET_TRANSFORMDIRTY_OFFSET UNITYSDK_OFFSET(0x11581120)
#define CLASS_3_FF7E1594845B53AC_METHOD_3_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x11580F00)
#define CLASS_3_FF7E1594845B53AC_METHOD_3_40E490E2772D5D75_OFFSET UNITYSDK_OFFSET(0x11580C80)
#define CLASS_3_FF7E1594845B53AC_METHOD_3_4D4A0BA9A7BB9B54_OFFSET UNITYSDK_OFFSET(0x11580F60)
#define CLASS_3_FF7E1594845B53AC_METHOD_3_655848934A326660_OFFSET UNITYSDK_OFFSET(0x11581060)
#define CLASS_3_FF7E1594845B53AC_METHOD_3_975EF494C5CDCB0F_OFFSET UNITYSDK_OFFSET(0x115810C0)
#define CLASS_3_FF7E1594845B53AC_METHOD_3_9E0A56377B0CA690_OFFSET UNITYSDK_OFFSET(0x11580CF0)
#define CLASS_3_FF7E1594845B53AC_METHOD_3_B4D8211180DC3A20_OFFSET UNITYSDK_OFFSET(0x11580FF0)
#define CLASS_3_FF7E1594845B53AC_METHOD_3_EDCA216BAAE60E47_OFFSET UNITYSDK_OFFSET(0x11580DD0)
#define CLASS_3_FF7E1594845B53AC_SET_TRANSFORMDIRTY_OFFSET UNITYSDK_OFFSET(0x11581130)
#define CLASS_3_FF7E1594845B53AC__CCTOR_OFFSET UNITYSDK_OFFSET(0x11581140)
#define CLASS_3_FF7E1594845B53AC__CTOR_OFFSET UNITYSDK_OFFSET(0x11580A50)
#define CLASS_3_FF7E1594845B53AC___IFIXBASEPROXY_GETBOUNDCENTER_OFFSET UNITYSDK_OFFSET(0x11581180)
#define CLASS_3_FF7E1594845B53AC___IFIXBASEPROXY_GETBOUNDSIZE_OFFSET UNITYSDK_OFFSET(0x11581220)
#define CLASS_3_FF7E1594845B53AC___IFIXBASEPROXY_GETRECT_OFFSET UNITYSDK_OFFSET(0x115812D0)

inline static constexpr unsigned int Class_3_FF7E1594845B53AC_TypeDefinitionIndex = 60544;

class Class_3_FF7E1594845B53AC : public ::Class_2_CBDF63BA2C3715C3
{
public:
	static ::RPG::GameCore::BlockNodeConfig** StaticGet_Field_3_0()
	{
		return (::RPG::GameCore::BlockNodeConfig**)Il2CppClass::FromTypeDefinitionIndex(Class_3_FF7E1594845B53AC_TypeDefinitionIndex)->GetStaticField(0x440F0);
	}
	::System::Single Field_3_2; // 0xC0
	::UnityEngine::Vector3 Field_3_4; // 0xC4
	::UnityEngine::Rect Field_3_1; // 0xD0
	::UnityEngine::Vector3 Field_3_5; // 0xE0
	::System::Boolean _TransformDirty_k__BackingField; // 0xEC

	::System::Void _ctor(::RPG::GameCore::StagePrefabInfo* a1, ::Class_1_494BD190B553B399* a2, ::Class_1_563415D37D4EDE07* a3, ::System::String* a4, ::RPG::Client::OpenWorld::StreamingItemData* a5)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StagePrefabInfo*, ::Class_1_494BD190B553B399*, ::Class_1_563415D37D4EDE07*, ::System::String*, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_3_FF7E1594845B53AC__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_FF7E1594845B53AC__CCTOR_OFFSET))();
	}

	::UnityEngine::Vector3 GetBoundCenter()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FF7E1594845B53AC_GETBOUNDCENTER_OFFSET))(this);
	}

	::UnityEngine::Vector3 GetBoundSize()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FF7E1594845B53AC_GETBOUNDSIZE_OFFSET))(this);
	}

	::UnityEngine::Rect GetRect()
	{
		return ((::UnityEngine::Rect(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FF7E1594845B53AC_GETRECT_OFFSET))(this);
	}

	::System::Void Method_3_40E490E2772D5D75(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_3_FF7E1594845B53AC_METHOD_3_40E490E2772D5D75_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_3_9E0A56377B0CA690(::UnityEngine::GameObject* a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_3_FF7E1594845B53AC_METHOD_3_9E0A56377B0CA690_OFFSET))(this, a1);
	}

	::System::Single Method_3_EDCA216BAAE60E47(::UnityEngine::Vector3 a1)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_3_FF7E1594845B53AC_METHOD_3_EDCA216BAAE60E47_OFFSET))(this, a1);
	}

	::System::Void Method_3_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_FF7E1594845B53AC_METHOD_3_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_4D4A0BA9A7BB9B54(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_FF7E1594845B53AC_METHOD_3_4D4A0BA9A7BB9B54_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_B4D8211180DC3A20(::UnityEngine::Rect a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + CLASS_3_FF7E1594845B53AC_METHOD_3_B4D8211180DC3A20_OFFSET))(this, a1);
	}

	::UnityEngine::Rect Method_3_655848934A326660()
	{
		return ((::UnityEngine::Rect(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FF7E1594845B53AC_METHOD_3_655848934A326660_OFFSET))(this);
	}

	::System::Void Method_3_975EF494C5CDCB0F(::UnityEngine::Rect a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + CLASS_3_FF7E1594845B53AC_METHOD_3_975EF494C5CDCB0F_OFFSET))(this, a1);
	}

	::System::Boolean get_TransformDirty()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FF7E1594845B53AC_GET_TRANSFORMDIRTY_OFFSET))(this);
	}

	::System::Void set_TransformDirty(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_FF7E1594845B53AC_SET_TRANSFORMDIRTY_OFFSET))(this, value);
	}

	::UnityEngine::Vector3 __iFixBaseProxy_GetBoundCenter()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FF7E1594845B53AC___IFIXBASEPROXY_GETBOUNDCENTER_OFFSET))(this);
	}

	::UnityEngine::Vector3 __iFixBaseProxy_GetBoundSize()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FF7E1594845B53AC___IFIXBASEPROXY_GETBOUNDSIZE_OFFSET))(this);
	}

	::UnityEngine::Rect __iFixBaseProxy_GetRect()
	{
		return ((::UnityEngine::Rect(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FF7E1594845B53AC___IFIXBASEPROXY_GETRECT_OFFSET))(this);
	}
};
