#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/OpenWorld/StreamingItemData.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_02E020BDBD29C169;
class Class_1_414BCDCDAD47B487;
class Class_2_00007E9796694121;
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define CLASS_2_5A5C70F7A3C39C00_GETAPPLYSTREAMINGLAYER_OFFSET UNITYSDK_OFFSET(0xED86240)
#define CLASS_2_5A5C70F7A3C39C00_GETBOUNDCENTER_OFFSET UNITYSDK_OFFSET(0xED85EE0)
#define CLASS_2_5A5C70F7A3C39C00_GETBOUNDSIZE_OFFSET UNITYSDK_OFFSET(0xED85F70)
#define CLASS_2_5A5C70F7A3C39C00_GETRECT_OFFSET UNITYSDK_OFFSET(0xED86010)
#define CLASS_2_5A5C70F7A3C39C00_GET_TRANSFORMDIRTY_OFFSET UNITYSDK_OFFSET(0xED86550)
#define CLASS_2_5A5C70F7A3C39C00_METHOD_2_40E490E2772D5D75_OFFSET UNITYSDK_OFFSET(0xED862A0)
#define CLASS_2_5A5C70F7A3C39C00_METHOD_2_4D0A4159EEC974D9_OFFSET UNITYSDK_OFFSET(0xED86300)
#define CLASS_2_5A5C70F7A3C39C00_METHOD_2_4D4A0BA9A7BB9B54_OFFSET UNITYSDK_OFFSET(0xED864C0)
#define CLASS_2_5A5C70F7A3C39C00_METHOD_2_655848934A326660_OFFSET UNITYSDK_OFFSET(0xED86570)
#define CLASS_2_5A5C70F7A3C39C00_METHOD_2_975EF494C5CDCB0F_OFFSET UNITYSDK_OFFSET(0xED865D0)
#define CLASS_2_5A5C70F7A3C39C00_METHOD_2_B3AE6F32204AC5DE_OFFSET UNITYSDK_OFFSET(0xED85E00)
#define CLASS_2_5A5C70F7A3C39C00_METHOD_2_EDCA216BAAE60E47_OFFSET UNITYSDK_OFFSET(0xED86380)
#define CLASS_2_5A5C70F7A3C39C00_ONTRANSFORMCHANGE_OFFSET UNITYSDK_OFFSET(0xED85EA0)
#define CLASS_2_5A5C70F7A3C39C00_SET_TRANSFORMDIRTY_OFFSET UNITYSDK_OFFSET(0xED86560)
#define CLASS_2_5A5C70F7A3C39C00__CTOR_OFFSET UNITYSDK_OFFSET(0xED85BC0)

inline static constexpr unsigned int Class_2_5A5C70F7A3C39C00_TypeDefinitionIndex = 73677;

class Class_2_5A5C70F7A3C39C00 : public ::RPG::Client::OpenWorld::StreamingItemData
{
public:
	::Class_2_00007E9796694121* PLIPKBAJHAB; // 0xB8
	::Class_1_02E020BDBD29C169* CJIDIOHCOAG; // 0xC0
	::UnityEngine::Bounds JNNHPMIKLKI; // 0xC8
	::System::Single FBGLPEJHODM; // 0xE0
	::UnityEngine::Vector3 DIKOCDCMDON; // 0xE4
	::UnityEngine::Rect CJHPOKFPFIO; // 0xF0
	::System::Single GFODIIKONLG; // 0x100
	::System::Single KDHOCBKHAJF; // 0x104
	::UnityEngine::Rect MCCMJGBJBKD; // 0x108
	::System::Boolean AOCKKNBBKPB; // 0x118
	::System::Boolean NLMEONOHLML; // 0x119
	::System::Boolean _TransformDirty_k__BackingField; // 0x11A

	::System::Void _ctor(::Class_2_00007E9796694121* a1, ::Class_1_414BCDCDAD47B487* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_00007E9796694121*, ::Class_1_414BCDCDAD47B487*))((::PBYTE)hIl2Cpp + CLASS_2_5A5C70F7A3C39C00__CTOR_OFFSET))(this, a1, a2);
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

	::System::Void set_TransformDirty(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_5A5C70F7A3C39C00_SET_TRANSFORMDIRTY_OFFSET))(this, a1);
	}

	::UnityEngine::Rect Method_2_655848934A326660()
	{
		return ((::UnityEngine::Rect(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5A5C70F7A3C39C00_METHOD_2_655848934A326660_OFFSET))(this);
	}

	::System::Void Method_2_975EF494C5CDCB0F(::UnityEngine::Rect a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + CLASS_2_5A5C70F7A3C39C00_METHOD_2_975EF494C5CDCB0F_OFFSET))(this, a1);
	}
};
