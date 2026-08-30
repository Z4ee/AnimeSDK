#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Reflection { class FieldInfo; }

#define GOOGLE_PROTOBUF_JSONFORMATTER_ORIGINALENUMVALUEHELPER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AA86B10)
#define GOOGLE_PROTOBUF_JSONFORMATTER_ORIGINALENUMVALUEHELPER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1AA86B50)
#define GOOGLE_PROTOBUF_JSONFORMATTER_ORIGINALENUMVALUEHELPER___C__GETNAMEMAPPING_B__2_0_OFFSET UNITYSDK_OFFSET(0x1AA86B60)
#define GOOGLE_PROTOBUF_JSONFORMATTER_ORIGINALENUMVALUEHELPER___C__GETNAMEMAPPING_B__2_1_OFFSET UNITYSDK_OFFSET(0x1AA86BF0)
#define GOOGLE_PROTOBUF_JSONFORMATTER_ORIGINALENUMVALUEHELPER___C__GETNAMEMAPPING_B__2_2_OFFSET UNITYSDK_OFFSET(0x1AA86C50)
#define GOOGLE_PROTOBUF_JSONFORMATTER_ORIGINALENUMVALUEHELPER___C__GETNAMEMAPPING_B__2_3_OFFSET UNITYSDK_OFFSET(0x1AA86CE0)

namespace Google::Protobuf
{
	inline static constexpr unsigned int JsonFormatter_OriginalEnumValueHelper___c_TypeDefinitionIndex = 5398;

	class JsonFormatter_OriginalEnumValueHelper___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Reflection::FieldInfo*, ::System::Boolean>** StaticGet___9__2_0()
		{
			return (::System::Func_2<::System::Reflection::FieldInfo*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(JsonFormatter_OriginalEnumValueHelper___c_TypeDefinitionIndex)->GetStaticField(0x1E300);
		}
		static ::System::Func_2<::System::Reflection::FieldInfo*, ::System::Boolean>** StaticGet___9__2_1()
		{
			return (::System::Func_2<::System::Reflection::FieldInfo*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(JsonFormatter_OriginalEnumValueHelper___c_TypeDefinitionIndex)->GetStaticField(0x1E308);
		}
		static ::Google::Protobuf::JsonFormatter_OriginalEnumValueHelper___c** StaticGet___9()
		{
			return (::Google::Protobuf::JsonFormatter_OriginalEnumValueHelper___c**)Il2CppClass::FromTypeDefinitionIndex(JsonFormatter_OriginalEnumValueHelper___c_TypeDefinitionIndex)->GetStaticField(0x1E310);
		}
		static ::System::Func_2<::System::Reflection::FieldInfo*, ::System::String*>** StaticGet___9__2_3()
		{
			return (::System::Func_2<::System::Reflection::FieldInfo*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(JsonFormatter_OriginalEnumValueHelper___c_TypeDefinitionIndex)->GetStaticField(0x1E318);
		}
		static ::System::Func_2<::System::Reflection::FieldInfo*, ::System::Object*>** StaticGet___9__2_2()
		{
			return (::System::Func_2<::System::Reflection::FieldInfo*, ::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(JsonFormatter_OriginalEnumValueHelper___c_TypeDefinitionIndex)->GetStaticField(0x1E320);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_JSONFORMATTER_ORIGINALENUMVALUEHELPER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_JSONFORMATTER_ORIGINALENUMVALUEHELPER___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetNameMapping_b__2_0(::System::Reflection::FieldInfo* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Reflection::FieldInfo*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_JSONFORMATTER_ORIGINALENUMVALUEHELPER___C__GETNAMEMAPPING_B__2_0_OFFSET))(this, a1);
		}

		::System::Boolean _GetNameMapping_b__2_1(::System::Reflection::FieldInfo* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Reflection::FieldInfo*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_JSONFORMATTER_ORIGINALENUMVALUEHELPER___C__GETNAMEMAPPING_B__2_1_OFFSET))(this, a1);
		}

		::System::Object* _GetNameMapping_b__2_2(::System::Reflection::FieldInfo* a1)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Reflection::FieldInfo*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_JSONFORMATTER_ORIGINALENUMVALUEHELPER___C__GETNAMEMAPPING_B__2_2_OFFSET))(this, a1);
		}

		::System::String* _GetNameMapping_b__2_3(::System::Reflection::FieldInfo* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Reflection::FieldInfo*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_JSONFORMATTER_ORIGINALENUMVALUEHELPER___C__GETNAMEMAPPING_B__2_3_OFFSET))(this, a1);
		}
	};
}
