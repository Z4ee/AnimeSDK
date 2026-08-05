#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/CodeDom/CodeExpression.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::CodeDom { class CodeExpressionCollection; }
namespace System::CodeDom { class CodeTypeReference; }

#define SYSTEM_CODEDOM_CODEARRAYCREATEEXPRESSION_GET_CREATETYPE_OFFSET UNITYSDK_OFFSET(0x1D69FBD0)
#define SYSTEM_CODEDOM_CODEARRAYCREATEEXPRESSION_GET_INITIALIZERS_OFFSET UNITYSDK_OFFSET(0x1D69FC50)
#define SYSTEM_CODEDOM_CODEARRAYCREATEEXPRESSION_GET_SIZEEXPRESSION_OFFSET UNITYSDK_OFFSET(0x1D69FD10)
#define SYSTEM_CODEDOM_CODEARRAYCREATEEXPRESSION_GET_SIZE_OFFSET UNITYSDK_OFFSET(0x1D69FC90)
#define SYSTEM_CODEDOM_CODEARRAYCREATEEXPRESSION_SET_CREATETYPE_OFFSET UNITYSDK_OFFSET(0x1D69FC10)
#define SYSTEM_CODEDOM_CODEARRAYCREATEEXPRESSION_SET_SIZEEXPRESSION_OFFSET UNITYSDK_OFFSET(0x1D69FD50)
#define SYSTEM_CODEDOM_CODEARRAYCREATEEXPRESSION_SET_SIZE_OFFSET UNITYSDK_OFFSET(0x1D69FCD0)
#define SYSTEM_CODEDOM_CODEARRAYCREATEEXPRESSION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D69F990)
#define SYSTEM_CODEDOM_CODEARRAYCREATEEXPRESSION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1D69F9D0)
#define SYSTEM_CODEDOM_CODEARRAYCREATEEXPRESSION__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1D69FA10)
#define SYSTEM_CODEDOM_CODEARRAYCREATEEXPRESSION__CTOR_4_OFFSET UNITYSDK_OFFSET(0x1D69FA50)
#define SYSTEM_CODEDOM_CODEARRAYCREATEEXPRESSION__CTOR_5_OFFSET UNITYSDK_OFFSET(0x1D69FA90)
#define SYSTEM_CODEDOM_CODEARRAYCREATEEXPRESSION__CTOR_6_OFFSET UNITYSDK_OFFSET(0x1D69FAD0)
#define SYSTEM_CODEDOM_CODEARRAYCREATEEXPRESSION__CTOR_7_OFFSET UNITYSDK_OFFSET(0x1D69FB10)
#define SYSTEM_CODEDOM_CODEARRAYCREATEEXPRESSION__CTOR_8_OFFSET UNITYSDK_OFFSET(0x1D69FB50)
#define SYSTEM_CODEDOM_CODEARRAYCREATEEXPRESSION__CTOR_9_OFFSET UNITYSDK_OFFSET(0x1D69FB90)
#define SYSTEM_CODEDOM_CODEARRAYCREATEEXPRESSION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D69F950)

namespace System::CodeDom
{
	inline static constexpr unsigned int CodeArrayCreateExpression_TypeDefinitionIndex = 4236;

	class CodeArrayCreateExpression : public ::System::CodeDom::CodeExpression
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEARRAYCREATEEXPRESSION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::CodeDom::CodeTypeReference* createType, ::System::CodeDom::CodeExpression* size)
		{
			return ((::System::Void(*)(::PVOID, ::System::CodeDom::CodeTypeReference*, ::System::CodeDom::CodeExpression*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEARRAYCREATEEXPRESSION__CTOR_1_OFFSET))(this, createType, size);
		}

		::System::Void _ctor_2(::System::CodeDom::CodeTypeReference* createType, ::Il2CppArray<::System::CodeDom::CodeExpression*>* initializers)
		{
			return ((::System::Void(*)(::PVOID, ::System::CodeDom::CodeTypeReference*, ::Il2CppArray<::System::CodeDom::CodeExpression*>*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEARRAYCREATEEXPRESSION__CTOR_2_OFFSET))(this, createType, initializers);
		}

		::System::Void _ctor_3(::System::CodeDom::CodeTypeReference* createType, ::System::Int32 size)
		{
			return ((::System::Void(*)(::PVOID, ::System::CodeDom::CodeTypeReference*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEARRAYCREATEEXPRESSION__CTOR_3_OFFSET))(this, createType, size);
		}

		::System::Void _ctor_4(::System::String* createType, ::System::CodeDom::CodeExpression* size)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::CodeDom::CodeExpression*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEARRAYCREATEEXPRESSION__CTOR_4_OFFSET))(this, createType, size);
		}

		::System::Void _ctor_5(::System::String* createType, ::Il2CppArray<::System::CodeDom::CodeExpression*>* initializers)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::CodeDom::CodeExpression*>*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEARRAYCREATEEXPRESSION__CTOR_5_OFFSET))(this, createType, initializers);
		}

		::System::Void _ctor_6(::System::String* createType, ::System::Int32 size)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEARRAYCREATEEXPRESSION__CTOR_6_OFFSET))(this, createType, size);
		}

		::System::Void _ctor_7(::System::Type* createType, ::System::CodeDom::CodeExpression* size)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::CodeDom::CodeExpression*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEARRAYCREATEEXPRESSION__CTOR_7_OFFSET))(this, createType, size);
		}

		::System::Void _ctor_8(::System::Type* createType, ::Il2CppArray<::System::CodeDom::CodeExpression*>* initializers)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::Il2CppArray<::System::CodeDom::CodeExpression*>*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEARRAYCREATEEXPRESSION__CTOR_8_OFFSET))(this, createType, initializers);
		}

		::System::Void _ctor_9(::System::Type* createType, ::System::Int32 size)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEARRAYCREATEEXPRESSION__CTOR_9_OFFSET))(this, createType, size);
		}

		::System::CodeDom::CodeTypeReference* get_CreateType()
		{
			return ((::System::CodeDom::CodeTypeReference*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEARRAYCREATEEXPRESSION_GET_CREATETYPE_OFFSET))(this);
		}

		::System::Void set_CreateType(::System::CodeDom::CodeTypeReference* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::CodeDom::CodeTypeReference*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEARRAYCREATEEXPRESSION_SET_CREATETYPE_OFFSET))(this, value);
		}

		::System::CodeDom::CodeExpressionCollection* get_Initializers()
		{
			return ((::System::CodeDom::CodeExpressionCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEARRAYCREATEEXPRESSION_GET_INITIALIZERS_OFFSET))(this);
		}

		::System::Int32 get_Size()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEARRAYCREATEEXPRESSION_GET_SIZE_OFFSET))(this);
		}

		::System::Void set_Size(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEARRAYCREATEEXPRESSION_SET_SIZE_OFFSET))(this, value);
		}

		::System::CodeDom::CodeExpression* get_SizeExpression()
		{
			return ((::System::CodeDom::CodeExpression*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEARRAYCREATEEXPRESSION_GET_SIZEEXPRESSION_OFFSET))(this);
		}

		::System::Void set_SizeExpression(::System::CodeDom::CodeExpression* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::CodeDom::CodeExpression*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEARRAYCREATEEXPRESSION_SET_SIZEEXPRESSION_OFFSET))(this, value);
		}
	};
}
