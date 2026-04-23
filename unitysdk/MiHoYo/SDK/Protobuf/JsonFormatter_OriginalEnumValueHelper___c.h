#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Reflection { class FieldInfo; }

#define MIHOYO_SDK_PROTOBUF_JSONFORMATTER_ORIGINALENUMVALUEHELPER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1739B030)
#define MIHOYO_SDK_PROTOBUF_JSONFORMATTER_ORIGINALENUMVALUEHELPER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1739B070)
#define MIHOYO_SDK_PROTOBUF_JSONFORMATTER_ORIGINALENUMVALUEHELPER___C__GETNAMEMAPPING_B__2_0_OFFSET UNITYSDK_OFFSET(0x1739B080)
#define MIHOYO_SDK_PROTOBUF_JSONFORMATTER_ORIGINALENUMVALUEHELPER___C__GETNAMEMAPPING_B__2_1_OFFSET UNITYSDK_OFFSET(0x1739B0B0)

namespace MiHoYo::SDK::Protobuf
{
	inline static constexpr unsigned int JsonFormatter_OriginalEnumValueHelper___c_TypeDefinitionIndex = 33639;

	class JsonFormatter_OriginalEnumValueHelper___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Reflection::FieldInfo*, ::System::String*>** StaticGet___9__2_1()
		{
			return (::System::Func_2<::System::Reflection::FieldInfo*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(JsonFormatter_OriginalEnumValueHelper___c_TypeDefinitionIndex)->GetStaticField(0x68A10);
		}
		static ::System::Func_2<::System::Reflection::FieldInfo*, ::System::Object*>** StaticGet___9__2_0()
		{
			return (::System::Func_2<::System::Reflection::FieldInfo*, ::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(JsonFormatter_OriginalEnumValueHelper___c_TypeDefinitionIndex)->GetStaticField(0x68A18);
		}
		static ::MiHoYo::SDK::Protobuf::JsonFormatter_OriginalEnumValueHelper___c** StaticGet___9()
		{
			return (::MiHoYo::SDK::Protobuf::JsonFormatter_OriginalEnumValueHelper___c**)Il2CppClass::FromTypeDefinitionIndex(JsonFormatter_OriginalEnumValueHelper___c_TypeDefinitionIndex)->GetStaticField(0x68A20);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_JSONFORMATTER_ORIGINALENUMVALUEHELPER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_JSONFORMATTER_ORIGINALENUMVALUEHELPER___C__CTOR_OFFSET))(this);
		}

		::System::Object* _GetNameMapping_b__2_0(::System::Reflection::FieldInfo* f)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Reflection::FieldInfo*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_JSONFORMATTER_ORIGINALENUMVALUEHELPER___C__GETNAMEMAPPING_B__2_0_OFFSET))(this, f);
		}

		::System::String* _GetNameMapping_b__2_1(::System::Reflection::FieldInfo* f)
		{
			return ((::System::String*(*)(::PVOID, ::System::Reflection::FieldInfo*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_JSONFORMATTER_ORIGINALENUMVALUEHELPER___C__GETNAMEMAPPING_B__2_1_OFFSET))(this, f);
		}
	};
}
