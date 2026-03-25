#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/OpenWorld/StreamingItemData.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_02E020BDBD29C169;
class Class_1_494BD190B553B399;
class Class_2_751108DFDC405F93;
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define CLASS_2_5A5C70F7A3C39C00_GETAPPLYSTREAMINGLAYER_OFFSET UNITYSDK_OFFSET(0x10A84770)
#define CLASS_2_5A5C70F7A3C39C00_GETBOUNDCENTER_OFFSET UNITYSDK_OFFSET(0x10A84410)
#define CLASS_2_5A5C70F7A3C39C00_GETBOUNDSIZE_OFFSET UNITYSDK_OFFSET(0x10A844A0)
#define CLASS_2_5A5C70F7A3C39C00_GETRECT_OFFSET UNITYSDK_OFFSET(0x10A84540)
#define CLASS_2_5A5C70F7A3C39C00_GET_TRANSFORMDIRTY_OFFSET UNITYSDK_OFFSET(0x10A84A80)
#define CLASS_2_5A5C70F7A3C39C00_METHOD_2_40E490E2772D5D75_OFFSET UNITYSDK_OFFSET(0x10A847D0)
#define CLASS_2_5A5C70F7A3C39C00_METHOD_2_4D0A4159EEC974D9_OFFSET UNITYSDK_OFFSET(0x10A84830)
#define CLASS_2_5A5C70F7A3C39C00_METHOD_2_4D4A0BA9A7BB9B54_OFFSET UNITYSDK_OFFSET(0x10A849F0)
#define CLASS_2_5A5C70F7A3C39C00_METHOD_2_655848934A326660_OFFSET UNITYSDK_OFFSET(0x10A84AA0)
#define CLASS_2_5A5C70F7A3C39C00_METHOD_2_975EF494C5CDCB0F_OFFSET UNITYSDK_OFFSET(0x10A84B00)
#define CLASS_2_5A5C70F7A3C39C00_METHOD_2_B3AE6F32204AC5DE_OFFSET UNITYSDK_OFFSET(0x10A84330)
#define CLASS_2_5A5C70F7A3C39C00_METHOD_2_EDCA216BAAE60E47_OFFSET UNITYSDK_OFFSET(0x10A848B0)
#define CLASS_2_5A5C70F7A3C39C00_ONTRANSFORMCHANGE_OFFSET UNITYSDK_OFFSET(0x10A843D0)
#define CLASS_2_5A5C70F7A3C39C00_SET_TRANSFORMDIRTY_OFFSET UNITYSDK_OFFSET(0x10A84A90)
#define CLASS_2_5A5C70F7A3C39C00__CTOR_OFFSET UNITYSDK_OFFSET(0x10A840F0)
#define CLASS_2_5A5C70F7A3C39C00___IFIXBASEPROXY_ONTRANSFORMCHANGE_OFFSET UNITYSDK_OFFSET(0x10A84B60)

inline static constexpr unsigned int Class_2_5A5C70F7A3C39C00_TypeDefinitionIndex = 60486;

class Class_2_5A5C70F7A3C39C00 : public ::RPG::Client::OpenWorld::StreamingItemData
{
public:
	::Class_1_02E020BDBD29C169* Field_2_9; // 0xA0
	::Class_2_751108DFDC405F93* Field_2_6; // 0xA8
	::UnityEngine::Rect Field_2_3; // 0xB0
	::UnityEngine::Rect Field_2_4; // 0xC0
	::System::Boolean Field_2_11; // 0xD0
	::System::Boolean _TransformDirty_k__BackingField; // 0xD1
	::System::Boolean Field_2_8; // 0xD2
	::System::Single Field_2_0; // 0xD4
	::System::Single Field_2_7; // 0xD8
	::System::Single Field_2_10; // 0xDC
	::UnityEngine::Bounds Field_2_5; // 0xE0
	::UnityEngine::Vector3 Field_2_2; // 0xF8

	::System::Void _ctor(::Class_2_751108DFDC405F93* a1, ::Class_1_494BD190B553B399* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_751108DFDC405F93*, ::Class_1_494BD190B553B399*))((::PBYTE)hIl2Cpp + CLASS_2_5A5C70F7A3C39C00__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_B3AE6F32204AC5DE(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_5A5C70F7A3C39C00_METHOD_2_B3AE6F32204AC5DE_OFFSET))(this, a1);
	}

	::System::Void OnTransformChange()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5A5C70F7A3C39C00_ONTRANSFORMCHANGE_OFFSET))(this);
	}

	::UnityEngine::Vector3 GetBoundCenter()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5A5C70F7A3C39C00_GETBOUNDCENTER_OFFSET))(this);
	}

	::UnityEngine::Vector3 GetBoundSize()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5A5C70F7A3C39C00_GETBOUNDSIZE_OFFSET))(this);
	}

	::UnityEngine::Rect GetRect()
	{
		return ((::UnityEngine::Rect(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5A5C70F7A3C39C00_GETRECT_OFFSET))(this);
	}

	::System::String* GetApplyStreamingLayer()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5A5C70F7A3C39C00_GETAPPLYSTREAMINGLAYER_OFFSET))(this);
	}

	::System::Void Method_2_40E490E2772D5D75(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_5A5C70F7A3C39C00_METHOD_2_40E490E2772D5D75_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_2_4D0A4159EEC974D9(::UnityEngine::GameObject* a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_5A5C70F7A3C39C00_METHOD_2_4D0A4159EEC974D9_OFFSET))(this, a1);
	}

	::System::Single Method_2_EDCA216BAAE60E47(::UnityEngine::Vector3 a1)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_5A5C70F7A3C39C00_METHOD_2_EDCA216BAAE60E47_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_4D4A0BA9A7BB9B54(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_5A5C70F7A3C39C00_METHOD_2_4D4A0BA9A7BB9B54_OFFSET))(this, a1, a2);
	}

	::System::Boolean get_TransformDirty()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5A5C70F7A3C39C00_GET_TRANSFORMDIRTY_OFFSET))(this);
	}

	::System::Void set_TransformDirty(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_5A5C70F7A3C39C00_SET_TRANSFORMDIRTY_OFFSET))(this, value);
	}

	::UnityEngine::Rect Method_2_655848934A326660()
	{
		return ((::UnityEngine::Rect(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5A5C70F7A3C39C00_METHOD_2_655848934A326660_OFFSET))(this);
	}

	::System::Void Method_2_975EF494C5CDCB0F(::UnityEngine::Rect a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + CLASS_2_5A5C70F7A3C39C00_METHOD_2_975EF494C5CDCB0F_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_OnTransformChange()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5A5C70F7A3C39C00___IFIXBASEPROXY_ONTRANSFORMCHANGE_OFFSET))(this);
	}
};
