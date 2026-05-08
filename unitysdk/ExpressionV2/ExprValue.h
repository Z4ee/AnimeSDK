#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define EXPRESSIONV2_EXPRVALUE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x7637B0)
#define EXPRESSIONV2_EXPRVALUE__CCTOR_OFFSET UNITYSDK_OFFSET(0x13247970)
#define EXPRESSIONV2_EXPRVALUE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x763750)
#define EXPRESSIONV2_EXPRVALUE__CTOR_2_OFFSET UNITYSDK_OFFSET(0x763770)
#define EXPRESSIONV2_EXPRVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x763730)
#define EXPRESSIONV2_EXPRVALUE___BASE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x763830)

namespace ExpressionV2
{
	inline static constexpr unsigned int ExprValue_TypeDefinitionIndex = 55675;

	struct alignas(8) ExprValue
	{
		static ::ExpressionV2::ExprValue* StaticGet_Empty()
		{
			return (::ExpressionV2::ExprValue*)Il2CppClass::FromTypeDefinitionIndex(ExprValue_TypeDefinitionIndex)->GetStaticField(0x39710);
		}
		static ::ExpressionV2::ExprValue* StaticGet_Zero()
		{
			return (::ExpressionV2::ExprValue*)Il2CppClass::FromTypeDefinitionIndex(ExprValue_TypeDefinitionIndex)->GetStaticField(0x39728);
		}
		::System::Double Number; // 0x10
		::System::String* Str; // 0x18
		::System::Boolean IsNumber; // 0x20

		::System::Void _ctor(::System::Double num)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + EXPRESSIONV2_EXPRVALUE__CTOR_OFFSET))(this, num);
		}

		::System::Void _ctor_1(::System::String* str)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EXPRESSIONV2_EXPRVALUE__CTOR_1_OFFSET))(this, str);
		}

		::System::Void _ctor_2(::System::Boolean flag)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EXPRESSIONV2_EXPRVALUE__CTOR_2_OFFSET))(this, flag);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EXPRESSIONV2_EXPRVALUE__CCTOR_OFFSET))();
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EXPRESSIONV2_EXPRVALUE_TOSTRING_OFFSET))(this);
		}

		::System::String* __base_ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EXPRESSIONV2_EXPRVALUE___BASE_TOSTRING_OFFSET))(this);
		}
	};
}
