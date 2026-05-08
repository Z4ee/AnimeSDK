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

#define CLASS_3_8318E4FCE5084CA4_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x1012ADA0)
#define CLASS_3_8318E4FCE5084CA4_METHOD_3_583C0CCDBC30A79C_OFFSET UNITYSDK_OFFSET(0x1012B010)
#define CLASS_3_8318E4FCE5084CA4_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x1012AF00)
#define CLASS_3_8318E4FCE5084CA4_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0x1012AF90)
#define CLASS_3_8318E4FCE5084CA4_METHOD_3_F73A90F086F5A538_OFFSET UNITYSDK_OFFSET(0x1012AEC0)
#define CLASS_3_8318E4FCE5084CA4_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x1012ABF0)
#define CLASS_3_8318E4FCE5084CA4__CCTOR_OFFSET UNITYSDK_OFFSET(0x1012ADF0)
#define CLASS_3_8318E4FCE5084CA4__CTOR_OFFSET UNITYSDK_OFFSET(0x1012AEB0)

inline static constexpr unsigned int Class_3_8318E4FCE5084CA4_TypeDefinitionIndex = 46496;

class Class_3_8318E4FCE5084CA4 : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	static ::System::Int32* StaticGet_Field_3_7()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_3_8318E4FCE5084CA4_TypeDefinitionIndex)->GetStaticField(0x10F40);
	}
	static ::System::Int32* StaticGet_Field_3_5()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_3_8318E4FCE5084CA4_TypeDefinitionIndex)->GetStaticField(0x10F44);
	}
	static ::System::Int32* StaticGet_Field_3_6()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_3_8318E4FCE5084CA4_TypeDefinitionIndex)->GetStaticField(0x10F48);
	}
	// static const ::System::Int32 Field_3_20 = 0xA5; // 0x0
	::Il2CppArray<::UnityEngine::Material*>* Field_3_1; // 0x48
	::System::Collections::Generic::Dictionary_2<::UnityEngine::Material*, ::Struct_2_7CA3167312439069>* Field_3_17; // 0x50
	::System::String* Field_3_19; // 0x58
	::MoleMole::Battle::Entity* Field_3_18; // 0x60
	::MoleMole::MonoEffectPluginClipPlane* Field_3_0; // 0x68
	::UnityEngine::Transform* Field_3_3; // 0x70
	::System::Collections::Generic::List_1<::UnityEngine::Material*>* Field_3_2; // 0x78
	::UnityEngine::Transform* Field_3_4; // 0x80
	::UnityEngine::Vector3 Field_3_15; // 0x88
	::Class_3_8318E4FCE5084CA4_Enum_3_FACFCB7FEED3E907 Field_3_8; // 0x94
	::UnityEngine::Vector3 Field_3_10; // 0x98
	::UnityEngine::Quaternion Field_3_12; // 0xA4
	::UnityEngine::Vector3 Field_3_11; // 0xB4
	::UnityEngine::Vector3 Field_3_14; // 0xC0
	::System::Boolean Field_3_16; // 0xCC
	::System::Boolean Field_3_9; // 0xCD
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

	::UnityEngine::Matrix4x4 Method_3_F73A90F086F5A538()
	{
		return ((::UnityEngine::Matrix4x4(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8318E4FCE5084CA4_METHOD_3_F73A90F086F5A538_OFFSET))(this);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8318E4FCE5084CA4_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	static ::Class_3_8318E4FCE5084CA4* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_8318E4FCE5084CA4*(*)())((::PBYTE)hIl2Cpp + CLASS_3_8318E4FCE5084CA4_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}

	::System::Void Method_3_583C0CCDBC30A79C(::MoleMole::MonoEffectPluginClipPlane* a1, ::MoleMole::MonoRenderHandlerForAvatar* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MonoEffectPluginClipPlane*, ::MoleMole::MonoRenderHandlerForAvatar*))((::PBYTE)hIl2Cpp + CLASS_3_8318E4FCE5084CA4_METHOD_3_583C0CCDBC30A79C_OFFSET))(this, a1, a2);
	}
};
