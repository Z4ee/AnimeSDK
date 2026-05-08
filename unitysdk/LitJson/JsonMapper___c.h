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

#define LITJSON_JSONMAPPER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x19DBB4C0)
#define LITJSON_JSONMAPPER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x19DBB500)
#define LITJSON_JSONMAPPER___C__READSKIP_B__27_0_OFFSET UNITYSDK_OFFSET(0x19DBB580)
#define LITJSON_JSONMAPPER___C__READVALUE_B__25_0_OFFSET UNITYSDK_OFFSET(0x19DBB510)
#define LITJSON_JSONMAPPER___C__REGISTERBASEEXPORTERS_B__28_0_OFFSET UNITYSDK_OFFSET(0x19DBB5D0)
#define LITJSON_JSONMAPPER___C__REGISTERBASEEXPORTERS_B__28_1_OFFSET UNITYSDK_OFFSET(0x19DBB690)
#define LITJSON_JSONMAPPER___C__REGISTERBASEEXPORTERS_B__28_2_OFFSET UNITYSDK_OFFSET(0x19DBB7B0)
#define LITJSON_JSONMAPPER___C__REGISTERBASEEXPORTERS_B__28_3_OFFSET UNITYSDK_OFFSET(0x19DBB930)
#define LITJSON_JSONMAPPER___C__REGISTERBASEEXPORTERS_B__28_4_OFFSET UNITYSDK_OFFSET(0x19DBBA00)
#define LITJSON_JSONMAPPER___C__REGISTERBASEEXPORTERS_B__28_5_OFFSET UNITYSDK_OFFSET(0x19DBBAC0)
#define LITJSON_JSONMAPPER___C__REGISTERBASEEXPORTERS_B__28_6_OFFSET UNITYSDK_OFFSET(0x19DBBB80)
#define LITJSON_JSONMAPPER___C__REGISTERBASEEXPORTERS_B__28_7_OFFSET UNITYSDK_OFFSET(0x19DBBC40)
#define LITJSON_JSONMAPPER___C__REGISTERBASEEXPORTERS_B__28_8_OFFSET UNITYSDK_OFFSET(0x19DBBCF0)
#define LITJSON_JSONMAPPER___C__REGISTERBASEEXPORTERS_B__28_9_OFFSET UNITYSDK_OFFSET(0x19DBBDB0)
#define LITJSON_JSONMAPPER___C__REGISTERBASEIMPORTERS_B__29_0_OFFSET UNITYSDK_OFFSET(0x19DBBEB0)
#define LITJSON_JSONMAPPER___C__REGISTERBASEIMPORTERS_B__29_10_OFFSET UNITYSDK_OFFSET(0x19DBC880)
#define LITJSON_JSONMAPPER___C__REGISTERBASEIMPORTERS_B__29_11_OFFSET UNITYSDK_OFFSET(0x19DBC940)
#define LITJSON_JSONMAPPER___C__REGISTERBASEIMPORTERS_B__29_12_OFFSET UNITYSDK_OFFSET(0x19DBCA60)
#define LITJSON_JSONMAPPER___C__REGISTERBASEIMPORTERS_B__29_13_OFFSET UNITYSDK_OFFSET(0x19DBCAF0)
#define LITJSON_JSONMAPPER___C__REGISTERBASEIMPORTERS_B__29_14_OFFSET UNITYSDK_OFFSET(0x19DBCC50)
#define LITJSON_JSONMAPPER___C__REGISTERBASEIMPORTERS_B__29_1_OFFSET UNITYSDK_OFFSET(0x19DBBFC0)
#define LITJSON_JSONMAPPER___C__REGISTERBASEIMPORTERS_B__29_2_OFFSET UNITYSDK_OFFSET(0x19DBC0D0)
#define LITJSON_JSONMAPPER___C__REGISTERBASEIMPORTERS_B__29_3_OFFSET UNITYSDK_OFFSET(0x19DBC190)
#define LITJSON_JSONMAPPER___C__REGISTERBASEIMPORTERS_B__29_4_OFFSET UNITYSDK_OFFSET(0x19DBC2A0)
#define LITJSON_JSONMAPPER___C__REGISTERBASEIMPORTERS_B__29_5_OFFSET UNITYSDK_OFFSET(0x19DBC3B0)
#define LITJSON_JSONMAPPER___C__REGISTERBASEIMPORTERS_B__29_6_OFFSET UNITYSDK_OFFSET(0x19DBC4C0)
#define LITJSON_JSONMAPPER___C__REGISTERBASEIMPORTERS_B__29_7_OFFSET UNITYSDK_OFFSET(0x19DBC5D0)
#define LITJSON_JSONMAPPER___C__REGISTERBASEIMPORTERS_B__29_8_OFFSET UNITYSDK_OFFSET(0x19DBC690)
#define LITJSON_JSONMAPPER___C__REGISTERBASEIMPORTERS_B__29_9_OFFSET UNITYSDK_OFFSET(0x19DBC750)
#define LITJSON_JSONMAPPER___C__TOOBJECT_B__35_0_OFFSET UNITYSDK_OFFSET(0x19DBCDD0)
#define LITJSON_JSONMAPPER___C__TOOBJECT_B__36_0_OFFSET UNITYSDK_OFFSET(0x19DBCE10)
#define LITJSON_JSONMAPPER___C__TOOBJECT_B__37_0_OFFSET UNITYSDK_OFFSET(0x19DBCE50)

namespace LitJson
{
	inline static constexpr unsigned int JsonMapper___c_TypeDefinitionIndex = 8012;

	class JsonMapper___c : public ::System::Object
	{
	public:
		static ::LitJson::ExporterFunc** StaticGet___9__28_9()
		{
			return (::LitJson::ExporterFunc**)Il2CppClass::FromTypeDefinitionIndex(JsonMapper___c_TypeDefinitionIndex)->GetStaticField(0x6B90);
		}
		static ::LitJson::WrapperFactory** StaticGet___9__36_0()
		{
			return (::LitJson::WrapperFactory**)Il2CppClass::FromTypeDefinitionIndex(JsonMapper___c_TypeDefinitionIndex)->GetStaticField(0x6B98);
		}
		static ::LitJson::ExporterFunc** StaticGet___9__28_5()
		{
			return (::LitJson::ExporterFunc**)Il2CppClass::FromTypeDefinitionIndex(JsonMapper___c_TypeDefinitionIndex)->GetStaticField(0x6BA0);
		}
		static ::LitJson::JsonMapper___c** StaticGet___9()
		{
			return (::LitJson::JsonMapper___c**)Il2CppClass::FromTypeDefinitionIndex(JsonMapper___c_TypeDefinitionIndex)->GetStaticField(0x6BA8);
		}
		static ::LitJson::ImporterFunc** StaticGet___9__29_10()
		{
			return (::LitJson::ImporterFunc**)Il2CppClass::FromTypeDefinitionIndex(JsonMapper___c_TypeDefinitionIndex)->GetStaticField(0x6BB0);
		}
		static ::LitJson::ImporterFunc** StaticGet___9__29_8()
		{
			return (::LitJson::ImporterFunc**)Il2CppClass::FromTypeDefinitionIndex(JsonMapper___c_TypeDefinitionIndex)->GetStaticField(0x6BB8);
		}
		static ::LitJson::ExporterFunc** StaticGet___9__28_6()
		{
			return (::LitJson::ExporterFunc**)Il2CppClass::FromTypeDefinitionIndex(JsonMapper___c_TypeDefinitionIndex)->GetStaticField(0x6BC0);
		}
		static ::LitJson::ImporterFunc** StaticGet___9__29_4()
		{
			return (::LitJson::ImporterFunc**)Il2CppClass::FromTypeDefinitionIndex(JsonMapper___c_TypeDefinitionIndex)->GetStaticField(0x6BC8);
		}
		static ::LitJson::ImporterFunc** StaticGet___9__29_5()
		{
			return (::LitJson::ImporterFunc**)Il2CppClass::FromTypeDefinitionIndex(JsonMapper___c_TypeDefinitionIndex)->GetStaticField(0x6BD0);
		}
		static ::LitJson::ImporterFunc** StaticGet___9__29_1()
		{
			return (::LitJson::ImporterFunc**)Il2CppClass::FromTypeDefinitionIndex(JsonMapper___c_TypeDefinitionIndex)->GetStaticField(0x6BD8);
		}
		static ::LitJson::ImporterFunc** StaticGet___9__29_12()
		{
			return (::LitJson::ImporterFunc**)Il2CppClass::FromTypeDefinitionIndex(JsonMapper___c_TypeDefinitionIndex)->GetStaticField(0x6BE0);
		}
		static ::LitJson::ImporterFunc** StaticGet___9__29_11()
		{
			return (::LitJson::ImporterFunc**)Il2CppClass::FromTypeDefinitionIndex(JsonMapper___c_TypeDefinitionIndex)->GetStaticField(0x6BE8);
		}
		static ::System::Func_2<::System::Type*, ::System::Boolean>** StaticGet___9__25_0()
		{
			return (::System::Func_2<::System::Type*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(JsonMapper___c_TypeDefinitionIndex)->GetStaticField(0x6BF0);
		}
		static ::LitJson::ImporterFunc** StaticGet___9__29_13()
		{
			return (::LitJson::ImporterFunc**)Il2CppClass::FromTypeDefinitionIndex(JsonMapper___c_TypeDefinitionIndex)->GetStaticField(0x6BF8);
		}
		static ::LitJson::ExporterFunc** StaticGet___9__28_2()
		{
			return (::LitJson::ExporterFunc**)Il2CppClass::FromTypeDefinitionIndex(JsonMapper___c_TypeDefinitionIndex)->GetStaticField(0x6C00);
		}
		static ::LitJson::ExporterFunc** StaticGet___9__28_8()
		{
			return (::LitJson::ExporterFunc**)Il2CppClass::FromTypeDefinitionIndex(JsonMapper___c_TypeDefinitionIndex)->GetStaticField(0x6C08);
		}
		static ::LitJson::ExporterFunc** StaticGet___9__28_4()
		{
			return (::LitJson::ExporterFunc**)Il2CppClass::FromTypeDefinitionIndex(JsonMapper___c_TypeDefinitionIndex)->GetStaticField(0x6C10);
		}
		static ::LitJson::ExporterFunc** StaticGet___9__28_7()
		{
			return (::LitJson::ExporterFunc**)Il2CppClass::FromTypeDefinitionIndex(JsonMapper___c_TypeDefinitionIndex)->GetStaticField(0x6C18);
		}
		static ::LitJson::ImporterFunc** StaticGet___9__29_6()
		{
			return (::LitJson::ImporterFunc**)Il2CppClass::FromTypeDefinitionIndex(JsonMapper___c_TypeDefinitionIndex)->GetStaticField(0x6C20);
		}
		static ::LitJson::ImporterFunc** StaticGet___9__29_9()
		{
			return (::LitJson::ImporterFunc**)Il2CppClass::FromTypeDefinitionIndex(JsonMapper___c_TypeDefinitionIndex)->GetStaticField(0x6C28);
		}
		static ::LitJson::WrapperFactory** StaticGet___9__37_0()
		{
			return (::LitJson::WrapperFactory**)Il2CppClass::FromTypeDefinitionIndex(JsonMapper___c_TypeDefinitionIndex)->GetStaticField(0x6C30);
		}
		static ::LitJson::ExporterFunc** StaticGet___9__28_1()
		{
			return (::LitJson::ExporterFunc**)Il2CppClass::FromTypeDefinitionIndex(JsonMapper___c_TypeDefinitionIndex)->GetStaticField(0x6C38);
		}
		static ::LitJson::WrapperFactory** StaticGet___9__35_0()
		{
			return (::LitJson::WrapperFactory**)Il2CppClass::FromTypeDefinitionIndex(JsonMapper___c_TypeDefinitionIndex)->GetStaticField(0x6C40);
		}
		static ::LitJson::ImporterFunc** StaticGet___9__29_7()
		{
			return (::LitJson::ImporterFunc**)Il2CppClass::FromTypeDefinitionIndex(JsonMapper___c_TypeDefinitionIndex)->GetStaticField(0x6C48);
		}
		static ::LitJson::WrapperFactory** StaticGet___9__27_0()
		{
			return (::LitJson::WrapperFactory**)Il2CppClass::FromTypeDefinitionIndex(JsonMapper___c_TypeDefinitionIndex)->GetStaticField(0x6C50);
		}
		static ::LitJson::ImporterFunc** StaticGet___9__29_2()
		{
			return (::LitJson::ImporterFunc**)Il2CppClass::FromTypeDefinitionIndex(JsonMapper___c_TypeDefinitionIndex)->GetStaticField(0x6C58);
		}
		static ::LitJson::ExporterFunc** StaticGet___9__28_3()
		{
			return (::LitJson::ExporterFunc**)Il2CppClass::FromTypeDefinitionIndex(JsonMapper___c_TypeDefinitionIndex)->GetStaticField(0x6C60);
		}
		static ::LitJson::ImporterFunc** StaticGet___9__29_14()
		{
			return (::LitJson::ImporterFunc**)Il2CppClass::FromTypeDefinitionIndex(JsonMapper___c_TypeDefinitionIndex)->GetStaticField(0x6C68);
		}
		static ::LitJson::ImporterFunc** StaticGet___9__29_0()
		{
			return (::LitJson::ImporterFunc**)Il2CppClass::FromTypeDefinitionIndex(JsonMapper___c_TypeDefinitionIndex)->GetStaticField(0x6C70);
		}
		static ::LitJson::ImporterFunc** StaticGet___9__29_3()
		{
			return (::LitJson::ImporterFunc**)Il2CppClass::FromTypeDefinitionIndex(JsonMapper___c_TypeDefinitionIndex)->GetStaticField(0x6C78);
		}
		static ::LitJson::ExporterFunc** StaticGet___9__28_0()
		{
			return (::LitJson::ExporterFunc**)Il2CppClass::FromTypeDefinitionIndex(JsonMapper___c_TypeDefinitionIndex)->GetStaticField(0x6C80);
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
