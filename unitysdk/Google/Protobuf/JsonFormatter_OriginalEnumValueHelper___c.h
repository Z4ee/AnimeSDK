#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Reflection { class FieldInfo; }

#define GOOGLE_PROTOBUF_JSONFORMATTER_ORIGINALENUMVALUEHELPER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x170E3A30)
#define GOOGLE_PROTOBUF_JSONFORMATTER_ORIGINALENUMVALUEHELPER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x170E3A70)
#define GOOGLE_PROTOBUF_JSONFORMATTER_ORIGINALENUMVALUEHELPER___C__GETNAMEMAPPING_B__2_0_OFFSET UNITYSDK_OFFSET(0x170E3A80)
#define GOOGLE_PROTOBUF_JSONFORMATTER_ORIGINALENUMVALUEHELPER___C__GETNAMEMAPPING_B__2_1_OFFSET UNITYSDK_OFFSET(0x170E3AB0)
#define GOOGLE_PROTOBUF_JSONFORMATTER_ORIGINALENUMVALUEHELPER___C__GETNAMEMAPPING_B__2_2_OFFSET UNITYSDK_OFFSET(0x170E3B10)
#define GOOGLE_PROTOBUF_JSONFORMATTER_ORIGINALENUMVALUEHELPER___C__GETNAMEMAPPING_B__2_3_OFFSET UNITYSDK_OFFSET(0x170E3B40)

namespace Google::Protobuf
{
	inline static constexpr unsigned int JsonFormatter_OriginalEnumValueHelper___c_TypeDefinitionIndex = 6202;

	class JsonFormatter_OriginalEnumValueHelper___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Reflection::FieldInfo*, ::System::Boolean>** StaticGet___9__2_0()
		{
			return (::System::Func_2<::System::Reflection::FieldInfo*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(JsonFormatter_OriginalEnumValueHelper___c_TypeDefinitionIndex)->GetStaticField(0x4170);
		}
		static ::System::Func_2<::System::Reflection::FieldInfo*, ::System::Object*>** StaticGet___9__2_2()
		{
			return (::System::Func_2<::System::Reflection::FieldInfo*, ::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(JsonFormatter_OriginalEnumValueHelper___c_TypeDefinitionIndex)->GetStaticField(0x4178);
		}
		static ::Google::Protobuf::JsonFormatter_OriginalEnumValueHelper___c** StaticGet___9()
		{
			return (::Google::Protobuf::JsonFormatter_OriginalEnumValueHelper___c**)Il2CppClass::FromTypeDefinitionIndex(JsonFormatter_OriginalEnumValueHelper___c_TypeDefinitionIndex)->GetStaticField(0x4180);
		}
		static ::System::Func_2<::System::Reflection::FieldInfo*, ::System::Boolean>** StaticGet___9__2_1()
		{
			return (::System::Func_2<::System::Reflection::FieldInfo*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(JsonFormatter_OriginalEnumValueHelper___c_TypeDefinitionIndex)->GetStaticField(0x4188);
		}
		static ::System::Func_2<::System::Reflection::FieldInfo*, ::System::String*>** StaticGet___9__2_3()
		{
			return (::System::Func_2<::System::Reflection::FieldInfo*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(JsonFormatter_OriginalEnumValueHelper___c_TypeDefinitionIndex)->GetStaticField(0x4190);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_JSONFORMATTER_ORIGINALENUMVALUEHELPER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_JSONFORMATTER_ORIGINALENUMVALUEHELPER___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetNameMapping_b__2_0(::System::Reflection::FieldInfo* f)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Reflection::FieldInfo*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_JSONFORMATTER_ORIGINALENUMVALUEHELPER___C__GETNAMEMAPPING_B__2_0_OFFSET))(this, f);
		}

		::System::Boolean _GetNameMapping_b__2_1(::System::Reflection::FieldInfo* f)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Reflection::FieldInfo*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_JSONFORMATTER_ORIGINALENUMVALUEHELPER___C__GETNAMEMAPPING_B__2_1_OFFSET))(this, f);
		}

		::System::Object* _GetNameMapping_b__2_2(::System::Reflection::FieldInfo* f)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Reflection::FieldInfo*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_JSONFORMATTER_ORIGINALENUMVALUEHELPER___C__GETNAMEMAPPING_B__2_2_OFFSET))(this, f);
		}

		::System::String* _GetNameMapping_b__2_3(::System::Reflection::FieldInfo* f)
		{
			return ((::System::String*(*)(::PVOID, ::System::Reflection::FieldInfo*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_JSONFORMATTER_ORIGINALENUMVALUEHELPER___C__GETNAMEMAPPING_B__2_3_OFFSET))(this, f);
		}
	};
}
