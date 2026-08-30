#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_7CF36DB1DCE43BAF.h"
#include "unitysdk/Struct_2_A77148D52D516E55.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_414BCDCDAD47B487;
class Class_1_B5A9DA083406A268;
namespace RPG::Client::OpenWorld { class StreamingItemData; }
namespace RPG::GameCore { class BlockNodeConfig; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define CLASS_3_2644CA4EEB7C3351_GETAPPLYSTREAMINGLAYER_OFFSET UNITYSDK_OFFSET(0xB8204B0)
#define CLASS_3_2644CA4EEB7C3351_GETBOUNDCENTER_OFFSET UNITYSDK_OFFSET(0xB820360)
#define CLASS_3_2644CA4EEB7C3351_GETBOUNDSIZE_OFFSET UNITYSDK_OFFSET(0xB8203D0)
#define CLASS_3_2644CA4EEB7C3351_GETRECT_OFFSET UNITYSDK_OFFSET(0xB820450)
#define CLASS_3_2644CA4EEB7C3351_GET_TRANSFORMDIRTY_OFFSET UNITYSDK_OFFSET(0xB820A00)
#define CLASS_3_2644CA4EEB7C3351_METHOD_3_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0xB8207E0)
#define CLASS_3_2644CA4EEB7C3351_METHOD_3_40E490E2772D5D75_OFFSET UNITYSDK_OFFSET(0xB820560)
#define CLASS_3_2644CA4EEB7C3351_METHOD_3_4D4A0BA9A7BB9B54_OFFSET UNITYSDK_OFFSET(0xB820840)
#define CLASS_3_2644CA4EEB7C3351_METHOD_3_975EF494C5CDCB0F_OFFSET UNITYSDK_OFFSET(0xB8209A0)
#define CLASS_3_2644CA4EEB7C3351_METHOD_3_9E0A56377B0CA690_OFFSET UNITYSDK_OFFSET(0xB8205D0)
#define CLASS_3_2644CA4EEB7C3351_METHOD_3_B4D8211180DC3A20_OFFSET UNITYSDK_OFFSET(0xB8208D0)
#define CLASS_3_2644CA4EEB7C3351_METHOD_3_B66F3196172D9FA5_OFFSET UNITYSDK_OFFSET(0xB820940)
#define CLASS_3_2644CA4EEB7C3351_METHOD_3_EDCA216BAAE60E47_OFFSET UNITYSDK_OFFSET(0xB8206B0)
#define CLASS_3_2644CA4EEB7C3351_SET_TRANSFORMDIRTY_OFFSET UNITYSDK_OFFSET(0xB820A10)
#define CLASS_3_2644CA4EEB7C3351__CCTOR_OFFSET UNITYSDK_OFFSET(0xB820A20)
#define CLASS_3_2644CA4EEB7C3351__CTOR_OFFSET UNITYSDK_OFFSET(0xB820290)

inline static constexpr unsigned int Class_3_2644CA4EEB7C3351_TypeDefinitionIndex = 73748;

class Class_3_2644CA4EEB7C3351 : public ::Class_2_7CF36DB1DCE43BAF
{
public:
	static ::RPG::GameCore::BlockNodeConfig** StaticGet_IAHPNMJMPEJ()
	{
		return (::RPG::GameCore::BlockNodeConfig**)Il2CppClass::FromTypeDefinitionIndex(Class_3_2644CA4EEB7C3351_TypeDefinitionIndex)->GetStaticField(0xD140);
	}
	::UnityEngine::Vector3 LKBCLLCFEAL; // 0xD8
	::UnityEngine::Rect MCCMJGBJBKD; // 0xE4
	::System::Single GFODIIKONLG; // 0xF4
	::System::Boolean _TransformDirty_k__BackingField; // 0xF8
	::UnityEngine::Vector3 DIKOCDCMDON; // 0xFC

	::System::Void _ctor(::Struct_2_A77148D52D516E55 a1, ::Class_1_414BCDCDAD47B487* a2, ::Class_1_B5A9DA083406A268* a3, ::System::String* a4, ::RPG::Client::OpenWorld::StreamingItemData* a5)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_A77148D52D516E55, ::Class_1_414BCDCDAD47B487*, ::Class_1_B5A9DA083406A268*, ::System::String*, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_3_2644CA4EEB7C3351__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
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

	::UnityEngine::Rect Method_3_B66F3196172D9FA5()
	{
		return ((::UnityEngine::Rect(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2644CA4EEB7C3351_METHOD_3_B66F3196172D9FA5_OFFSET))(this);
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
