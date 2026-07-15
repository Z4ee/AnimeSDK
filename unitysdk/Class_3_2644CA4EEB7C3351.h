#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_7CF36DB1DCE43BAF.h"
#include "unitysdk/Struct_2_E31305FAF4D542A3.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_414BCDCDAD47B487;
class Class_1_B5A9DA083406A268;
namespace RPG::Client::OpenWorld { class StreamingItemData; }
namespace RPG::GameCore { class BlockNodeConfig; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define CLASS_3_2644CA4EEB7C3351_GETAPPLYSTREAMINGLAYER_OFFSET UNITYSDK_OFFSET(0x17ACFE20)
#define CLASS_3_2644CA4EEB7C3351_GETBOUNDCENTER_OFFSET UNITYSDK_OFFSET(0x17ACFCD0)
#define CLASS_3_2644CA4EEB7C3351_GETBOUNDSIZE_OFFSET UNITYSDK_OFFSET(0x17ACFD40)
#define CLASS_3_2644CA4EEB7C3351_GETRECT_OFFSET UNITYSDK_OFFSET(0x17ACFDC0)
#define CLASS_3_2644CA4EEB7C3351_GET_TRANSFORMDIRTY_OFFSET UNITYSDK_OFFSET(0x17AD03A0)
#define CLASS_3_2644CA4EEB7C3351_METHOD_3_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x17AD0180)
#define CLASS_3_2644CA4EEB7C3351_METHOD_3_40E490E2772D5D75_OFFSET UNITYSDK_OFFSET(0x17ACFF00)
#define CLASS_3_2644CA4EEB7C3351_METHOD_3_4D4A0BA9A7BB9B54_OFFSET UNITYSDK_OFFSET(0x17AD01E0)
#define CLASS_3_2644CA4EEB7C3351_METHOD_3_655848934A326660_OFFSET UNITYSDK_OFFSET(0x17AD02E0)
#define CLASS_3_2644CA4EEB7C3351_METHOD_3_975EF494C5CDCB0F_OFFSET UNITYSDK_OFFSET(0x17AD0340)
#define CLASS_3_2644CA4EEB7C3351_METHOD_3_9E0A56377B0CA690_OFFSET UNITYSDK_OFFSET(0x17ACFF70)
#define CLASS_3_2644CA4EEB7C3351_METHOD_3_B4D8211180DC3A20_OFFSET UNITYSDK_OFFSET(0x17AD0270)
#define CLASS_3_2644CA4EEB7C3351_METHOD_3_EDCA216BAAE60E47_OFFSET UNITYSDK_OFFSET(0x17AD0050)
#define CLASS_3_2644CA4EEB7C3351_SET_TRANSFORMDIRTY_OFFSET UNITYSDK_OFFSET(0x17AD03B0)
#define CLASS_3_2644CA4EEB7C3351__CCTOR_OFFSET UNITYSDK_OFFSET(0x17AD03C0)
#define CLASS_3_2644CA4EEB7C3351__CTOR_OFFSET UNITYSDK_OFFSET(0x17ACFC00)

inline static constexpr unsigned int Class_3_2644CA4EEB7C3351_TypeDefinitionIndex = 70470;

class Class_3_2644CA4EEB7C3351 : public ::Class_2_7CF36DB1DCE43BAF
{
public:
	static ::RPG::GameCore::BlockNodeConfig** StaticGet_Field_3_0()
	{
		return (::RPG::GameCore::BlockNodeConfig**)Il2CppClass::FromTypeDefinitionIndex(Class_3_2644CA4EEB7C3351_TypeDefinitionIndex)->GetStaticField(0x55640);
	}
	::System::Boolean _TransformDirty_k__BackingField; // 0xD8
	::UnityEngine::Vector3 Field_3_2; // 0xDC
	::System::Single Field_3_3; // 0xE8
	::UnityEngine::Vector3 Field_3_4; // 0xEC
	::UnityEngine::Rect Field_3_5; // 0xF8

	::System::Void _ctor(::Struct_2_E31305FAF4D542A3 a1, ::Class_1_414BCDCDAD47B487* a2, ::Class_1_B5A9DA083406A268* a3, ::System::String* a4, ::RPG::Client::OpenWorld::StreamingItemData* a5)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_E31305FAF4D542A3, ::Class_1_414BCDCDAD47B487*, ::Class_1_B5A9DA083406A268*, ::System::String*, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_3_2644CA4EEB7C3351__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_2644CA4EEB7C3351__CCTOR_OFFSET))();
	}

	::UnityEngine::Vector3 GetBoundCenter()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2644CA4EEB7C3351_GETBOUNDCENTER_OFFSET))(this);
	}

	::UnityEngine::Vector3 GetBoundSize()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2644CA4EEB7C3351_GETBOUNDSIZE_OFFSET))(this);
	}

	::UnityEngine::Rect GetRect()
	{
		return ((::UnityEngine::Rect(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2644CA4EEB7C3351_GETRECT_OFFSET))(this);
	}

	::System::String* GetApplyStreamingLayer()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2644CA4EEB7C3351_GETAPPLYSTREAMINGLAYER_OFFSET))(this);
	}

	::System::Void Method_3_40E490E2772D5D75(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_3_2644CA4EEB7C3351_METHOD_3_40E490E2772D5D75_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_3_9E0A56377B0CA690(::UnityEngine::GameObject* a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_3_2644CA4EEB7C3351_METHOD_3_9E0A56377B0CA690_OFFSET))(this, a1);
	}

	::System::Single Method_3_EDCA216BAAE60E47(::UnityEngine::Vector3 a1)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_3_2644CA4EEB7C3351_METHOD_3_EDCA216BAAE60E47_OFFSET))(this, a1);
	}

	::System::Void Method_3_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_2644CA4EEB7C3351_METHOD_3_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_4D4A0BA9A7BB9B54(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_2644CA4EEB7C3351_METHOD_3_4D4A0BA9A7BB9B54_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_B4D8211180DC3A20(::UnityEngine::Rect a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + CLASS_3_2644CA4EEB7C3351_METHOD_3_B4D8211180DC3A20_OFFSET))(this, a1);
	}

	::UnityEngine::Rect Method_3_655848934A326660()
	{
		return ((::UnityEngine::Rect(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2644CA4EEB7C3351_METHOD_3_655848934A326660_OFFSET))(this);
	}

	::System::Void Method_3_975EF494C5CDCB0F(::UnityEngine::Rect a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + CLASS_3_2644CA4EEB7C3351_METHOD_3_975EF494C5CDCB0F_OFFSET))(this, a1);
	}

	::System::Boolean get_TransformDirty()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2644CA4EEB7C3351_GET_TRANSFORMDIRTY_OFFSET))(this);
	}

	::System::Void set_TransformDirty(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_2644CA4EEB7C3351_SET_TRANSFORMDIRTY_OFFSET))(this, a1);
	}
};
