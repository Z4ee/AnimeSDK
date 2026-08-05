#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace LitJson { class ExporterFunc; }
namespace LitJson { class IJsonWrapper; }
namespace LitJson { class ImporterFunc; }
namespace LitJson { class JsonWriter; }
namespace LitJson { class WrapperFactory; }
namespace System { class Type; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define LITJSON_JSONMAPPER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D5AA3D0)
#define LITJSON_JSONMAPPER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5AA410)
#define LITJSON_JSONMAPPER___C__READSKIP_B__27_0_OFFSET UNITYSDK_OFFSET(0x1D5AA490)
#define LITJSON_JSONMAPPER___C__READVALUE_B__25_0_OFFSET UNITYSDK_OFFSET(0x1D5AA420)
#define LITJSON_JSONMAPPER___C__REGISTERBASEEXPORTERS_B__28_0_OFFSET UNITYSDK_OFFSET(0x1D5AA4E0)
#define LITJSON_JSONMAPPER___C__REGISTERBASEEXPORTERS_B__28_1_OFFSET UNITYSDK_OFFSET(0x1D5AA590)
#define LITJSON_JSONMAPPER___C__REGISTERBASEEXPORTERS_B__28_2_OFFSET UNITYSDK_OFFSET(0x1D5AA6B0)
#define LITJSON_JSONMAPPER___C__REGISTERBASEEXPORTERS_B__28_3_OFFSET UNITYSDK_OFFSET(0x1D5AA830)
#define LITJSON_JSONMAPPER___C__REGISTERBASEEXPORTERS_B__28_4_OFFSET UNITYSDK_OFFSET(0x1D5AA900)
#define LITJSON_JSONMAPPER___C__REGISTERBASEEXPORTERS_B__28_5_OFFSET UNITYSDK_OFFSET(0x1D5AA9B0)
#define LITJSON_JSONMAPPER___C__REGISTERBASEEXPORTERS_B__28_6_OFFSET UNITYSDK_OFFSET(0x1D5AAA60)
#define LITJSON_JSONMAPPER___C__REGISTERBASEEXPORTERS_B__28_7_OFFSET UNITYSDK_OFFSET(0x1D5AAB10)
#define LITJSON_JSONMAPPER___C__REGISTERBASEEXPORTERS_B__28_8_OFFSET UNITYSDK_OFFSET(0x1D5AABC0)
#define LITJSON_JSONMAPPER___C__REGISTERBASEEXPORTERS_B__28_9_OFFSET UNITYSDK_OFFSET(0x1D5AAC80)
#define LITJSON_JSONMAPPER___C__REGISTERBASEIMPORTERS_B__29_0_OFFSET UNITYSDK_OFFSET(0x1D5AAD80)
#define LITJSON_JSONMAPPER___C__REGISTERBASEIMPORTERS_B__29_10_OFFSET UNITYSDK_OFFSET(0x1D5AB740)
#define LITJSON_JSONMAPPER___C__REGISTERBASEIMPORTERS_B__29_11_OFFSET UNITYSDK_OFFSET(0x1D5AB800)
#define LITJSON_JSONMAPPER___C__REGISTERBASEIMPORTERS_B__29_12_OFFSET UNITYSDK_OFFSET(0x1D5AB920)
#define LITJSON_JSONMAPPER___C__REGISTERBASEIMPORTERS_B__29_13_OFFSET UNITYSDK_OFFSET(0x1D5AB960)
#define LITJSON_JSONMAPPER___C__REGISTERBASEIMPORTERS_B__29_14_OFFSET UNITYSDK_OFFSET(0x1D5ABA10)
#define LITJSON_JSONMAPPER___C__REGISTERBASEIMPORTERS_B__29_1_OFFSET UNITYSDK_OFFSET(0x1D5AAE90)
#define LITJSON_JSONMAPPER___C__REGISTERBASEIMPORTERS_B__29_2_OFFSET UNITYSDK_OFFSET(0x1D5AAFA0)
#define LITJSON_JSONMAPPER___C__REGISTERBASEIMPORTERS_B__29_3_OFFSET UNITYSDK_OFFSET(0x1D5AB050)
#define LITJSON_JSONMAPPER___C__REGISTERBASEIMPORTERS_B__29_4_OFFSET UNITYSDK_OFFSET(0x1D5AB160)
#define LITJSON_JSONMAPPER___C__REGISTERBASEIMPORTERS_B__29_5_OFFSET UNITYSDK_OFFSET(0x1D5AB270)
#define LITJSON_JSONMAPPER___C__REGISTERBASEIMPORTERS_B__29_6_OFFSET UNITYSDK_OFFSET(0x1D5AB380)
#define LITJSON_JSONMAPPER___C__REGISTERBASEIMPORTERS_B__29_7_OFFSET UNITYSDK_OFFSET(0x1D5AB490)
#define LITJSON_JSONMAPPER___C__REGISTERBASEIMPORTERS_B__29_8_OFFSET UNITYSDK_OFFSET(0x1D5AB550)
#define LITJSON_JSONMAPPER___C__REGISTERBASEIMPORTERS_B__29_9_OFFSET UNITYSDK_OFFSET(0x1D5AB610)
#define LITJSON_JSONMAPPER___C__TOOBJECT_B__35_0_OFFSET UNITYSDK_OFFSET(0x1D5ABB40)
#define LITJSON_JSONMAPPER___C__TOOBJECT_B__36_0_OFFSET UNITYSDK_OFFSET(0x1D5ABB80)
#define LITJSON_JSONMAPPER___C__TOOBJECT_B__37_0_OFFSET UNITYSDK_OFFSET(0x1D5ABBC0)

namespace LitJson
{
	inline static constexpr unsigned int JsonMapper___c_TypeDefinitionIndex = 8012;

	class JsonMapper___c : public ::System::Object
	{
	public:
		static ::LitJson::ExporterFunc** StaticGet___9__28_6()
		{
			return (::LitJson::ExporterFunc**)Il2CppClass::FromTypeDefinitionIndex(JsonMapper___c_TypeDefinitionIndex)->GetStaticField(0x6C50);
		}
		static ::LitJson::ImporterFunc** StaticGet___9__29_1()
		{
			return (::LitJson::ImporterFunc**)Il2CppClass::FromTypeDefinitionIndex(JsonMapper___c_TypeDefinitionIndex)->GetStaticField(0x6C58);
		}
		static ::LitJson::ExporterFunc** StaticGet___9__28_7()
		{
			return (::LitJson::ExporterFunc**)Il2CppClass::FromTypeDefinitionIndex(JsonMapper___c_TypeDefinitionIndex)->GetStaticField(0x6C60);
		}
		static ::LitJson::ImporterFunc** StaticGet___9__29_3()
		{
			return (::LitJson::ImporterFunc**)Il2CppClass::FromTypeDefinitionIndex(JsonMapper___c_TypeDefinitionIndex)->GetStaticField(0x6C68);
		}
		static ::LitJson::WrapperFactory** StaticGet___9__27_0()
		{
			return (::LitJson::WrapperFactory**)Il2CppClass::FromTypeDefinitionIndex(JsonMapper___c_TypeDefinitionIndex)->GetStaticField(0x6C70);
		}
		static ::LitJson::ExporterFunc** StaticGet___9__28_3()
		{
			return (::LitJson::ExporterFunc**)Il2CppClass::FromTypeDefinitionIndex(JsonMapper___c_TypeDefinitionIndex)->GetStaticField(0x6C78);
		}
		static ::LitJson::ExporterFunc** StaticGet___9__28_0()
		{
			return (::LitJson::ExporterFunc**)Il2CppClass::FromTypeDefinitionIndex(JsonMapper___c_TypeDefinitionIndex)->GetStaticField(0x6C80);
		}
		static ::LitJson::ImporterFunc** StaticGet___9__29_6()
		{
			return (::LitJson::ImporterFunc**)Il2CppClass::FromTypeDefinitionIndex(JsonMapper___c_TypeDefinitionIndex)->GetStaticField(0x6C88);
		}
		static ::LitJson::ExporterFunc** StaticGet___9__28_8()
		{
			return (::LitJson::ExporterFunc**)Il2CppClass::FromTypeDefinitionIndex(JsonMapper___c_TypeDefinitionIndex)->GetStaticField(0x6C90);
		}
		static ::LitJson::ImporterFunc** StaticGet___9__29_4()
		{
			return (::LitJson::ImporterFunc**)Il2CppClass::FromTypeDefinitionIndex(JsonMapper___c_TypeDefinitionIndex)->GetStaticField(0x6C98);
		}
		static ::LitJson::ImporterFunc** StaticGet___9__29_14()
		{
			return (::LitJson::ImporterFunc**)Il2CppClass::FromTypeDefinitionIndex(JsonMapper___c_TypeDefinitionIndex)->GetStaticField(0x6CA0);
		}
		static ::LitJson::WrapperFactory** StaticGet___9__36_0()
		{
			return (::LitJson::WrapperFactory**)Il2CppClass::FromTypeDefinitionIndex(JsonMapper___c_TypeDefinitionIndex)->GetStaticField(0x6CA8);
		}
		static ::LitJson::ExporterFunc** StaticGet___9__28_2()
		{
			return (::LitJson::ExporterFunc**)Il2CppClass::FromTypeDefinitionIndex(JsonMapper___c_TypeDefinitionIndex)->GetStaticField(0x6CB0);
		}
		static ::LitJson::ExporterFunc** StaticGet___9__28_4()
		{
			return (::LitJson::ExporterFunc**)Il2CppClass::FromTypeDefinitionIndex(JsonMapper___c_TypeDefinitionIndex)->GetStaticField(0x6CB8);
		}
		static ::System::Func_2<::System::Type*, ::System::Boolean>** StaticGet___9__25_0()
		{
			return (::System::Func_2<::System::Type*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(JsonMapper___c_TypeDefinitionIndex)->GetStaticField(0x6CC0);
		}
		static ::LitJson::ImporterFunc** StaticGet___9__29_7()
		{
			return (::LitJson::ImporterFunc**)Il2CppClass::FromTypeDefinitionIndex(JsonMapper___c_TypeDefinitionIndex)->GetStaticField(0x6CC8);
		}
		static ::LitJson::ImporterFunc** StaticGet___9__29_0()
		{
			return (::LitJson::ImporterFunc**)Il2CppClass::FromTypeDefinitionIndex(JsonMapper___c_TypeDefinitionIndex)->GetStaticField(0x6CD0);
		}
		static ::LitJson::ImporterFunc** StaticGet___9__29_9()
		{
			return (::LitJson::ImporterFunc**)Il2CppClass::FromTypeDefinitionIndex(JsonMapper___c_TypeDefinitionIndex)->GetStaticField(0x6CD8);
		}
		static ::LitJson::ImporterFunc** StaticGet___9__29_10()
		{
			return (::LitJson::ImporterFunc**)Il2CppClass::FromTypeDefinitionIndex(JsonMapper___c_TypeDefinitionIndex)->GetStaticField(0x6CE0);
		}
		static ::LitJson::ImporterFunc** StaticGet___9__29_5()
		{
			return (::LitJson::ImporterFunc**)Il2CppClass::FromTypeDefinitionIndex(JsonMapper___c_TypeDefinitionIndex)->GetStaticField(0x6CE8);
		}
		static ::LitJson::WrapperFactory** StaticGet___9__35_0()
		{
			return (::LitJson::WrapperFactory**)Il2CppClass::FromTypeDefinitionIndex(JsonMapper___c_TypeDefinitionIndex)->GetStaticField(0x6CF0);
		}
		static ::LitJson::ExporterFunc** StaticGet___9__28_1()
		{
			return (::LitJson::ExporterFunc**)Il2CppClass::FromTypeDefinitionIndex(JsonMapper___c_TypeDefinitionIndex)->GetStaticField(0x6CF8);
		}
		static ::LitJson::ImporterFunc** StaticGet___9__29_2()
		{
			return (::LitJson::ImporterFunc**)Il2CppClass::FromTypeDefinitionIndex(JsonMapper___c_TypeDefinitionIndex)->GetStaticField(0x6D00);
		}
		static ::LitJson::ExporterFunc** StaticGet___9__28_9()
		{
			return (::LitJson::ExporterFunc**)Il2CppClass::FromTypeDefinitionIndex(JsonMapper___c_TypeDefinitionIndex)->GetStaticField(0x6D08);
		}
		static ::LitJson::ImporterFunc** StaticGet___9__29_12()
		{
			return (::LitJson::ImporterFunc**)Il2CppClass::FromTypeDefinitionIndex(JsonMapper___c_TypeDefinitionIndex)->GetStaticField(0x6D10);
		}
		static ::LitJson::ImporterFunc** StaticGet___9__29_8()
		{
			return (::LitJson::ImporterFunc**)Il2CppClass::FromTypeDefinitionIndex(JsonMapper___c_TypeDefinitionIndex)->GetStaticField(0x6D18);
		}
		static ::LitJson::ImporterFunc** StaticGet___9__29_11()
		{
			return (::LitJson::ImporterFunc**)Il2CppClass::FromTypeDefinitionIndex(JsonMapper___c_TypeDefinitionIndex)->GetStaticField(0x6D20);
		}
		static ::LitJson::JsonMapper___c** StaticGet___9()
		{
			return (::LitJson::JsonMapper___c**)Il2CppClass::FromTypeDefinitionIndex(JsonMapper___c_TypeDefinitionIndex)->GetStaticField(0x6D28);
		}
		static ::LitJson::ExporterFunc** StaticGet___9__28_5()
		{
			return (::LitJson::ExporterFunc**)Il2CppClass::FromTypeDefinitionIndex(JsonMapper___c_TypeDefinitionIndex)->GetStaticField(0x6D30);
		}
		static ::LitJson::ImporterFunc** StaticGet___9__29_13()
		{
			return (::LitJson::ImporterFunc**)Il2CppClass::FromTypeDefinitionIndex(JsonMapper___c_TypeDefinitionIndex)->GetStaticField(0x6D38);
		}
		static ::LitJson::WrapperFactory** StaticGet___9__37_0()
		{
			return (::LitJson::WrapperFactory**)Il2CppClass::FromTypeDefinitionIndex(JsonMapper___c_TypeDefinitionIndex)->GetStaticField(0x6D40);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LITJSON_JSONMAPPER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LITJSON_JSONMAPPER___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _ReadValue_b__25_0(::System::Type* interfaceType)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + LITJSON_JSONMAPPER___C__READVALUE_B__25_0_OFFSET))(this, interfaceType);
		}

		::LitJson::IJsonWrapper* _ReadSkip_b__27_0()
		{
			return ((::LitJson::IJsonWrapper*(*)(::PVOID))((::PBYTE)hIl2Cpp + LITJSON_JSONMAPPER___C__READSKIP_B__27_0_OFFSET))(this);
		}

		::System::Void _RegisterBaseExporters_b__28_0(::System::Object* obj, ::LitJson::JsonWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::LitJson::JsonWriter*))((::PBYTE)hIl2Cpp + LITJSON_JSONMAPPER___C__REGISTERBASEEXPORTERS_B__28_0_OFFSET))(this, obj, writer);
		}

		::System::Void _RegisterBaseExporters_b__28_1(::System::Object* obj, ::LitJson::JsonWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::LitJson::JsonWriter*))((::PBYTE)hIl2Cpp + LITJSON_JSONMAPPER___C__REGISTERBASEEXPORTERS_B__28_1_OFFSET))(this, obj, writer);
		}

		::System::Void _RegisterBaseExporters_b__28_2(::System::Object* obj, ::LitJson::JsonWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::LitJson::JsonWriter*))((::PBYTE)hIl2Cpp + LITJSON_JSONMAPPER___C__REGISTERBASEEXPORTERS_B__28_2_OFFSET))(this, obj, writer);
		}

		::System::Void _RegisterBaseExporters_b__28_3(::System::Object* obj, ::LitJson::JsonWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::LitJson::JsonWriter*))((::PBYTE)hIl2Cpp + LITJSON_JSONMAPPER___C__REGISTERBASEEXPORTERS_B__28_3_OFFSET))(this, obj, writer);
		}

		::System::Void _RegisterBaseExporters_b__28_4(::System::Object* obj, ::LitJson::JsonWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::LitJson::JsonWriter*))((::PBYTE)hIl2Cpp + LITJSON_JSONMAPPER___C__REGISTERBASEEXPORTERS_B__28_4_OFFSET))(this, obj, writer);
		}

		::System::Void _RegisterBaseExporters_b__28_5(::System::Object* obj, ::LitJson::JsonWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::LitJson::JsonWriter*))((::PBYTE)hIl2Cpp + LITJSON_JSONMAPPER___C__REGISTERBASEEXPORTERS_B__28_5_OFFSET))(this, obj, writer);
		}

		::System::Void _RegisterBaseExporters_b__28_6(::System::Object* obj, ::LitJson::JsonWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::LitJson::JsonWriter*))((::PBYTE)hIl2Cpp + LITJSON_JSONMAPPER___C__REGISTERBASEEXPORTERS_B__28_6_OFFSET))(this, obj, writer);
		}

		::System::Void _RegisterBaseExporters_b__28_7(::System::Object* obj, ::LitJson::JsonWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::LitJson::JsonWriter*))((::PBYTE)hIl2Cpp + LITJSON_JSONMAPPER___C__REGISTERBASEEXPORTERS_B__28_7_OFFSET))(this, obj, writer);
		}

		::System::Void _RegisterBaseExporters_b__28_8(::System::Object* obj, ::LitJson::JsonWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::LitJson::JsonWriter*))((::PBYTE)hIl2Cpp + LITJSON_JSONMAPPER___C__REGISTERBASEEXPORTERS_B__28_8_OFFSET))(this, obj, writer);
		}

		::System::Void _RegisterBaseExporters_b__28_9(::System::Object* obj, ::LitJson::JsonWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::LitJson::JsonWriter*))((::PBYTE)hIl2Cpp + LITJSON_JSONMAPPER___C__REGISTERBASEEXPORTERS_B__28_9_OFFSET))(this, obj, writer);
		}

		::System::Object* _RegisterBaseImporters_b__29_0(::System::Object* input)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LITJSON_JSONMAPPER___C__REGISTERBASEIMPORTERS_B__29_0_OFFSET))(this, input);
		}

		::System::Object* _RegisterBaseImporters_b__29_1(::System::Object* input)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LITJSON_JSONMAPPER___C__REGISTERBASEIMPORTERS_B__29_1_OFFSET))(this, input);
		}

		::System::Object* _RegisterBaseImporters_b__29_2(::System::Object* input)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LITJSON_JSONMAPPER___C__REGISTERBASEIMPORTERS_B__29_2_OFFSET))(this, input);
		}

		::System::Object* _RegisterBaseImporters_b__29_3(::System::Object* input)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LITJSON_JSONMAPPER___C__REGISTERBASEIMPORTERS_B__29_3_OFFSET))(this, input);
		}

		::System::Object* _RegisterBaseImporters_b__29_4(::System::Object* input)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LITJSON_JSONMAPPER___C__REGISTERBASEIMPORTERS_B__29_4_OFFSET))(this, input);
		}

		::System::Object* _RegisterBaseImporters_b__29_5(::System::Object* input)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LITJSON_JSONMAPPER___C__REGISTERBASEIMPORTERS_B__29_5_OFFSET))(this, input);
		}

		::System::Object* _RegisterBaseImporters_b__29_6(::System::Object* input)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LITJSON_JSONMAPPER___C__REGISTERBASEIMPORTERS_B__29_6_OFFSET))(this, input);
		}

		::System::Object* _RegisterBaseImporters_b__29_7(::System::Object* input)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LITJSON_JSONMAPPER___C__REGISTERBASEIMPORTERS_B__29_7_OFFSET))(this, input);
		}

		::System::Object* _RegisterBaseImporters_b__29_8(::System::Object* input)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LITJSON_JSONMAPPER___C__REGISTERBASEIMPORTERS_B__29_8_OFFSET))(this, input);
		}

		::System::Object* _RegisterBaseImporters_b__29_9(::System::Object* input)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LITJSON_JSONMAPPER___C__REGISTERBASEIMPORTERS_B__29_9_OFFSET))(this, input);
		}

		::System::Object* _RegisterBaseImporters_b__29_10(::System::Object* input)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LITJSON_JSONMAPPER___C__REGISTERBASEIMPORTERS_B__29_10_OFFSET))(this, input);
		}

		::System::Object* _RegisterBaseImporters_b__29_11(::System::Object* input)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LITJSON_JSONMAPPER___C__REGISTERBASEIMPORTERS_B__29_11_OFFSET))(this, input);
		}

		::System::Object* _RegisterBaseImporters_b__29_12(::System::Object* input)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LITJSON_JSONMAPPER___C__REGISTERBASEIMPORTERS_B__29_12_OFFSET))(this, input);
		}

		::System::Object* _RegisterBaseImporters_b__29_13(::System::Object* input)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LITJSON_JSONMAPPER___C__REGISTERBASEIMPORTERS_B__29_13_OFFSET))(this, input);
		}

		::System::Object* _RegisterBaseImporters_b__29_14(::System::Object* input)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LITJSON_JSONMAPPER___C__REGISTERBASEIMPORTERS_B__29_14_OFFSET))(this, input);
		}

		::LitJson::IJsonWrapper* _ToObject_b__35_0()
		{
			return ((::LitJson::IJsonWrapper*(*)(::PVOID))((::PBYTE)hIl2Cpp + LITJSON_JSONMAPPER___C__TOOBJECT_B__35_0_OFFSET))(this);
		}

		::LitJson::IJsonWrapper* _ToObject_b__36_0()
		{
			return ((::LitJson::IJsonWrapper*(*)(::PVOID))((::PBYTE)hIl2Cpp + LITJSON_JSONMAPPER___C__TOOBJECT_B__36_0_OFFSET))(this);
		}

		::LitJson::IJsonWrapper* _ToObject_b__37_0()
		{
			return ((::LitJson::IJsonWrapper*(*)(::PVOID))((::PBYTE)hIl2Cpp + LITJSON_JSONMAPPER___C__TOOBJECT_B__37_0_OFFSET))(this);
		}
	};
}
