#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Color32.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace LitJson { class JsonWriter; }
namespace LitJson { template <typename T1, typename T2> class ImporterFunc_2; }
namespace LitJson { template <typename T> class ExporterFunc_1; }
namespace System { class String; }
namespace System { class Type; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace UnityEngine { class RectOffset; }

#define LITJSON_UNITYTYPEBINDINGS___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE3D380)
#define LITJSON_UNITYTYPEBINDINGS___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1DE3D3C0)
#define LITJSON_UNITYTYPEBINDINGS___C__REGISTER_B__1_0_OFFSET UNITYSDK_OFFSET(0x1DE3D3D0)
#define LITJSON_UNITYTYPEBINDINGS___C__REGISTER_B__1_11_OFFSET UNITYSDK_OFFSET(0x1DE3DA60)
#define LITJSON_UNITYTYPEBINDINGS___C__REGISTER_B__1_12_OFFSET UNITYSDK_OFFSET(0x1DE3DB70)
#define LITJSON_UNITYTYPEBINDINGS___C__REGISTER_B__1_1_OFFSET UNITYSDK_OFFSET(0x1DE3D410)
#define LITJSON_UNITYTYPEBINDINGS___C__REGISTER_B__1_2_OFFSET UNITYSDK_OFFSET(0x1DE3D4A0)
#define LITJSON_UNITYTYPEBINDINGS___C__REGISTER_B__1_4_OFFSET UNITYSDK_OFFSET(0x1DE3D560)
#define LITJSON_UNITYTYPEBINDINGS___C__REGISTER_B__1_6_OFFSET UNITYSDK_OFFSET(0x1DE3D640)
#define LITJSON_UNITYTYPEBINDINGS___C__REGISTER_B__1_7_OFFSET UNITYSDK_OFFSET(0x1DE3D750)
#define LITJSON_UNITYTYPEBINDINGS___C__REGISTER_B__1_8_OFFSET UNITYSDK_OFFSET(0x1DE3D860)
#define LITJSON_UNITYTYPEBINDINGS___C__REGISTER_B__1_9_OFFSET UNITYSDK_OFFSET(0x1DE3D970)

namespace LitJson
{
	inline static constexpr unsigned int UnityTypeBindings___c_TypeDefinitionIndex = 8171;

	class UnityTypeBindings___c : public ::System::Object
	{
	public:
		static ::LitJson::ImporterFunc_2<::System::String*, ::System::Type*>** StaticGet___9__1_1()
		{
			return (::LitJson::ImporterFunc_2<::System::String*, ::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(UnityTypeBindings___c_TypeDefinitionIndex)->GetStaticField(0x7150);
		}
		static ::LitJson::ExporterFunc_1<::UnityEngine::Color32>** StaticGet___9__1_9()
		{
			return (::LitJson::ExporterFunc_1<::UnityEngine::Color32>**)Il2CppClass::FromTypeDefinitionIndex(UnityTypeBindings___c_TypeDefinitionIndex)->GetStaticField(0x7158);
		}
		static ::LitJson::ExporterFunc_1<::UnityEngine::Vector4>** StaticGet___9__1_6()
		{
			return (::LitJson::ExporterFunc_1<::UnityEngine::Vector4>**)Il2CppClass::FromTypeDefinitionIndex(UnityTypeBindings___c_TypeDefinitionIndex)->GetStaticField(0x7160);
		}
		static ::System::Action_2<::UnityEngine::Vector2, ::LitJson::JsonWriter*>** StaticGet___9__1_2()
		{
			return (::System::Action_2<::UnityEngine::Vector2, ::LitJson::JsonWriter*>**)Il2CppClass::FromTypeDefinitionIndex(UnityTypeBindings___c_TypeDefinitionIndex)->GetStaticField(0x7168);
		}
		static ::LitJson::ExporterFunc_1<::UnityEngine::Quaternion>** StaticGet___9__1_7()
		{
			return (::LitJson::ExporterFunc_1<::UnityEngine::Quaternion>**)Il2CppClass::FromTypeDefinitionIndex(UnityTypeBindings___c_TypeDefinitionIndex)->GetStaticField(0x7170);
		}
		static ::LitJson::ExporterFunc_1<::UnityEngine::Color>** StaticGet___9__1_8()
		{
			return (::LitJson::ExporterFunc_1<::UnityEngine::Color>**)Il2CppClass::FromTypeDefinitionIndex(UnityTypeBindings___c_TypeDefinitionIndex)->GetStaticField(0x7178);
		}
		static ::LitJson::ExporterFunc_1<::UnityEngine::Rect>** StaticGet___9__1_11()
		{
			return (::LitJson::ExporterFunc_1<::UnityEngine::Rect>**)Il2CppClass::FromTypeDefinitionIndex(UnityTypeBindings___c_TypeDefinitionIndex)->GetStaticField(0x7180);
		}
		static ::LitJson::ExporterFunc_1<::UnityEngine::RectOffset*>** StaticGet___9__1_12()
		{
			return (::LitJson::ExporterFunc_1<::UnityEngine::RectOffset*>**)Il2CppClass::FromTypeDefinitionIndex(UnityTypeBindings___c_TypeDefinitionIndex)->GetStaticField(0x7188);
		}
		static ::LitJson::ExporterFunc_1<::System::Type*>** StaticGet___9__1_0()
		{
			return (::LitJson::ExporterFunc_1<::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(UnityTypeBindings___c_TypeDefinitionIndex)->GetStaticField(0x7190);
		}
		static ::LitJson::UnityTypeBindings___c** StaticGet___9()
		{
			return (::LitJson::UnityTypeBindings___c**)Il2CppClass::FromTypeDefinitionIndex(UnityTypeBindings___c_TypeDefinitionIndex)->GetStaticField(0x7198);
		}
		static ::System::Action_2<::UnityEngine::Vector3, ::LitJson::JsonWriter*>** StaticGet___9__1_4()
		{
			return (::System::Action_2<::UnityEngine::Vector3, ::LitJson::JsonWriter*>**)Il2CppClass::FromTypeDefinitionIndex(UnityTypeBindings___c_TypeDefinitionIndex)->GetStaticField(0x71A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LITJSON_UNITYTYPEBINDINGS___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LITJSON_UNITYTYPEBINDINGS___C__CTOR_OFFSET))(this);
		}

		::System::Void _Register_b__1_0(::System::Type* v, ::LitJson::JsonWriter* w)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::LitJson::JsonWriter*))((::PBYTE)hIl2Cpp + LITJSON_UNITYTYPEBINDINGS___C__REGISTER_B__1_0_OFFSET))(this, v, w);
		}

		::System::Type* _Register_b__1_1(::System::String* s)
		{
			return ((::System::Type*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + LITJSON_UNITYTYPEBINDINGS___C__REGISTER_B__1_1_OFFSET))(this, s);
		}

		::System::Void _Register_b__1_2(::UnityEngine::Vector2 v, ::LitJson::JsonWriter* w)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::LitJson::JsonWriter*))((::PBYTE)hIl2Cpp + LITJSON_UNITYTYPEBINDINGS___C__REGISTER_B__1_2_OFFSET))(this, v, w);
		}

		::System::Void _Register_b__1_4(::UnityEngine::Vector3 v, ::LitJson::JsonWriter* w)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::LitJson::JsonWriter*))((::PBYTE)hIl2Cpp + LITJSON_UNITYTYPEBINDINGS___C__REGISTER_B__1_4_OFFSET))(this, v, w);
		}

		::System::Void _Register_b__1_6(::UnityEngine::Vector4 v, ::LitJson::JsonWriter* w)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4, ::LitJson::JsonWriter*))((::PBYTE)hIl2Cpp + LITJSON_UNITYTYPEBINDINGS___C__REGISTER_B__1_6_OFFSET))(this, v, w);
		}

		::System::Void _Register_b__1_7(::UnityEngine::Quaternion v, ::LitJson::JsonWriter* w)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion, ::LitJson::JsonWriter*))((::PBYTE)hIl2Cpp + LITJSON_UNITYTYPEBINDINGS___C__REGISTER_B__1_7_OFFSET))(this, v, w);
		}

		::System::Void _Register_b__1_8(::UnityEngine::Color v, ::LitJson::JsonWriter* w)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color, ::LitJson::JsonWriter*))((::PBYTE)hIl2Cpp + LITJSON_UNITYTYPEBINDINGS___C__REGISTER_B__1_8_OFFSET))(this, v, w);
		}

		::System::Void _Register_b__1_9(::UnityEngine::Color32 v, ::LitJson::JsonWriter* w)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color32, ::LitJson::JsonWriter*))((::PBYTE)hIl2Cpp + LITJSON_UNITYTYPEBINDINGS___C__REGISTER_B__1_9_OFFSET))(this, v, w);
		}

		::System::Void _Register_b__1_11(::UnityEngine::Rect v, ::LitJson::JsonWriter* w)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect, ::LitJson::JsonWriter*))((::PBYTE)hIl2Cpp + LITJSON_UNITYTYPEBINDINGS___C__REGISTER_B__1_11_OFFSET))(this, v, w);
		}

		::System::Void _Register_b__1_12(::UnityEngine::RectOffset* v, ::LitJson::JsonWriter* w)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectOffset*, ::LitJson::JsonWriter*))((::PBYTE)hIl2Cpp + LITJSON_UNITYTYPEBINDINGS___C__REGISTER_B__1_12_OFFSET))(this, v, w);
		}
	};
}
