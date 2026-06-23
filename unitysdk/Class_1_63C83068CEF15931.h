#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/MoleMole/SECTR/SECTR_LayerSizeType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::SECTR { class SECTR_SceneSplitterConfig; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_63C83068CEF15931_METHOD_1_2E012DA2DA2CD66C_OFFSET UNITYSDK_OFFSET(0x16C4F3C0)
#define CLASS_1_63C83068CEF15931_METHOD_1_A10C23B2E4650FC4_OFFSET UNITYSDK_OFFSET(0x16C4FE20)
#define CLASS_1_63C83068CEF15931_METHOD_1_B88C0144C39C7FBD_OFFSET UNITYSDK_OFFSET(0x16C50600)
#define CLASS_1_63C83068CEF15931_METHOD_1_C9D0B32B09B44770_OFFSET UNITYSDK_OFFSET(0x16C50050)
#define CLASS_1_63C83068CEF15931_METHOD_1_D90635B116162C14_OFFSET UNITYSDK_OFFSET(0x16C50550)
#define CLASS_1_63C83068CEF15931_METHOD_1_E33D8B19C5DC642D_OFFSET UNITYSDK_OFFSET(0x16C50690)
#define CLASS_1_63C83068CEF15931_METHOD_1_F24A112B56A2E4B4_1_OFFSET UNITYSDK_OFFSET(0x16C504F0)
#define CLASS_1_63C83068CEF15931_METHOD_1_F24A112B56A2E4B4_2_OFFSET UNITYSDK_OFFSET(0x16C505A0)
#define CLASS_1_63C83068CEF15931_METHOD_1_F24A112B56A2E4B4_OFFSET UNITYSDK_OFFSET(0x16C4FDC0)
#define CLASS_1_63C83068CEF15931__CCTOR_OFFSET UNITYSDK_OFFSET(0x16C4F370)

inline static constexpr unsigned int Class_1_63C83068CEF15931_TypeDefinitionIndex = 73534;

class Class_1_63C83068CEF15931 : public ::System::Object
{
public:
	static ::System::String** StaticGet_Field_1_8()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_63C83068CEF15931_TypeDefinitionIndex)->GetStaticField(0x4A810);
	}
	static ::MoleMole::SECTR::SECTR_SceneSplitterConfig** StaticGet_Field_1_11()
	{
		return (::MoleMole::SECTR::SECTR_SceneSplitterConfig**)Il2CppClass::FromTypeDefinitionIndex(Class_1_63C83068CEF15931_TypeDefinitionIndex)->GetStaticField(0x4A818);
	}
	static ::MoleMole::SECTR::SECTR_SceneSplitterConfig** StaticGet_Field_1_10()
	{
		return (::MoleMole::SECTR::SECTR_SceneSplitterConfig**)Il2CppClass::FromTypeDefinitionIndex(Class_1_63C83068CEF15931_TypeDefinitionIndex)->GetStaticField(0x4A820);
	}
	static ::Foundation::AssetRequestHandle* StaticGet_Field_1_9()
	{
		return (::Foundation::AssetRequestHandle*)Il2CppClass::FromTypeDefinitionIndex(Class_1_63C83068CEF15931_TypeDefinitionIndex)->GetStaticField(0x4A828);
	}
	// static const ::System::String* Field_1_0; // 0x0
	// static const ::System::String* Field_1_1; // 0x0
	// static const ::System::String* Field_1_2; // 0x0
	// static const ::System::String* Field_1_3; // 0x0
	// static const ::System::String* Field_1_4; // 0x0
	// static const ::System::String* Field_1_5; // 0x0
	// static const ::System::String* Field_1_6; // 0x0
	// static const ::System::String* Field_1_7; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_63C83068CEF15931__CCTOR_OFFSET))();
	}

	static ::UnityEngine::Bounds Method_1_2E012DA2DA2CD66C(::UnityEngine::GameObject* a1, ::System::Boolean a2)
	{
		return ((::UnityEngine::Bounds(*)(::UnityEngine::GameObject*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_63C83068CEF15931_METHOD_1_2E012DA2DA2CD66C_OFFSET))(a1, a2);
	}

	static ::System::String* Method_1_F24A112B56A2E4B4()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + CLASS_1_63C83068CEF15931_METHOD_1_F24A112B56A2E4B4_OFFSET))();
	}

	static ::MoleMole::SECTR::SECTR_SceneSplitterConfig* Method_1_A10C23B2E4650FC4()
	{
		return ((::MoleMole::SECTR::SECTR_SceneSplitterConfig*(*)())((::PBYTE)hIl2Cpp + CLASS_1_63C83068CEF15931_METHOD_1_A10C23B2E4650FC4_OFFSET))();
	}

	static ::System::String* Method_1_F24A112B56A2E4B4_1()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + CLASS_1_63C83068CEF15931_METHOD_1_F24A112B56A2E4B4_1_OFFSET))();
	}

	static ::System::Void Method_1_C9D0B32B09B44770(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_63C83068CEF15931_METHOD_1_C9D0B32B09B44770_OFFSET))(a1);
	}

	static ::System::Int32 Method_1_D90635B116162C14(::MoleMole::SECTR::SECTR_LayerSizeType a1)
	{
		return ((::System::Int32(*)(::MoleMole::SECTR::SECTR_LayerSizeType))((::PBYTE)hIl2Cpp + CLASS_1_63C83068CEF15931_METHOD_1_D90635B116162C14_OFFSET))(a1);
	}

	static ::System::String* Method_1_F24A112B56A2E4B4_2()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + CLASS_1_63C83068CEF15931_METHOD_1_F24A112B56A2E4B4_2_OFFSET))();
	}

	static ::UnityEngine::Vector3 Method_1_B88C0144C39C7FBD(::System::Single a1, ::System::Single a2)
	{
		return ((::UnityEngine::Vector3(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_63C83068CEF15931_METHOD_1_B88C0144C39C7FBD_OFFSET))(a1, a2);
	}

	static ::System::String* Method_1_E33D8B19C5DC642D(::System::String* a1)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_63C83068CEF15931_METHOD_1_E33D8B19C5DC642D_OFFSET))(a1);
	}
};
