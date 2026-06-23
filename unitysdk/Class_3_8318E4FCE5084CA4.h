#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/Class_3_8318E4FCE5084CA4_Enum_3_FACFCB7FEED3E907.h"
#include "unitysdk/Struct_2_7CA3167312439069.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole { class MonoEffectPluginClipPlane; }
namespace MoleMole { class MonoRenderHandlerForAvatar; }
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Transform; }

#define CLASS_3_8318E4FCE5084CA4_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x1236D570)
#define CLASS_3_8318E4FCE5084CA4_METHOD_3_583C0CCDBC30A79C_OFFSET UNITYSDK_OFFSET(0x1236D690)
#define CLASS_3_8318E4FCE5084CA4_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x1236D8B0)
#define CLASS_3_8318E4FCE5084CA4_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0x1236D7F0)
#define CLASS_3_8318E4FCE5084CA4_METHOD_3_F73A90F086F5A538_OFFSET UNITYSDK_OFFSET(0x1236D870)
#define CLASS_3_8318E4FCE5084CA4_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x1236D3C0)
#define CLASS_3_8318E4FCE5084CA4__CCTOR_OFFSET UNITYSDK_OFFSET(0x1236D5C0)
#define CLASS_3_8318E4FCE5084CA4__CTOR_OFFSET UNITYSDK_OFFSET(0x1236D680)

inline static constexpr unsigned int Class_3_8318E4FCE5084CA4_TypeDefinitionIndex = 56814;

class Class_3_8318E4FCE5084CA4 : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	static ::System::Int32* StaticGet_Field_3_6()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_3_8318E4FCE5084CA4_TypeDefinitionIndex)->GetStaticField(0xE700);
	}
	static ::System::Int32* StaticGet_Field_3_7()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_3_8318E4FCE5084CA4_TypeDefinitionIndex)->GetStaticField(0xE704);
	}
	static ::System::Int32* StaticGet_Field_3_5()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_3_8318E4FCE5084CA4_TypeDefinitionIndex)->GetStaticField(0xE708);
	}
	// static const ::System::Int32 Field_3_20 = 0xB0; // 0x0
	::System::String* Field_3_19; // 0x48
	::System::Collections::Generic::List_1<::UnityEngine::Material*>* Field_3_2; // 0x50
	::MoleMole::MonoEffectPluginClipPlane* Field_3_0; // 0x58
	::System::Collections::Generic::Dictionary_2<::UnityEngine::Material*, ::Struct_2_7CA3167312439069>* Field_3_17; // 0x60
	::Il2CppArray<::UnityEngine::Material*>* Field_3_1; // 0x68
	::MoleMole::Battle::Entity* Field_3_18; // 0x70
	::UnityEngine::Transform* Field_3_3; // 0x78
	::UnityEngine::Transform* Field_3_4; // 0x80
	::UnityEngine::Vector3 Field_3_15; // 0x88
	::Class_3_8318E4FCE5084CA4_Enum_3_FACFCB7FEED3E907 Field_3_8; // 0x94
	::UnityEngine::Vector3 Field_3_11; // 0x98
	::System::Boolean Field_3_9; // 0xA4
	::System::Boolean Field_3_16; // 0xA5
	::UnityEngine::Quaternion Field_3_12; // 0xA8
	::UnityEngine::Vector3 Field_3_10; // 0xB8
	::UnityEngine::Vector3 Field_3_14; // 0xC4
	::UnityEngine::Quaternion Field_3_13; // 0xD0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_8318E4FCE5084CA4__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8318E4FCE5084CA4__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8318E4FCE5084CA4_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8318E4FCE5084CA4_GETCLASSID_OFFSET))(this);
	}

	::System::Void Method_3_583C0CCDBC30A79C(::MoleMole::MonoEffectPluginClipPlane* a1, ::MoleMole::MonoRenderHandlerForAvatar* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MonoEffectPluginClipPlane*, ::MoleMole::MonoRenderHandlerForAvatar*))((::PBYTE)hIl2Cpp + CLASS_3_8318E4FCE5084CA4_METHOD_3_583C0CCDBC30A79C_OFFSET))(this, a1, a2);
	}

	static ::Class_3_8318E4FCE5084CA4* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_8318E4FCE5084CA4*(*)())((::PBYTE)hIl2Cpp + CLASS_3_8318E4FCE5084CA4_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}

	::UnityEngine::Matrix4x4 Method_3_F73A90F086F5A538()
	{
		return ((::UnityEngine::Matrix4x4(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8318E4FCE5084CA4_METHOD_3_F73A90F086F5A538_OFFSET))(this);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8318E4FCE5084CA4_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}
};
