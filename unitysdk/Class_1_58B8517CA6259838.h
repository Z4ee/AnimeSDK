#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_58B8517CA6259838_METHOD_1_1A425C083DDF2BB1_OFFSET UNITYSDK_OFFSET(0x1273D5C0)
#define CLASS_1_58B8517CA6259838_METHOD_1_5AEC8C9EE262F230_OFFSET UNITYSDK_OFFSET(0x1273D510)
#define CLASS_1_58B8517CA6259838_METHOD_1_D7FE3FCFB1E0B054_OFFSET UNITYSDK_OFFSET(0x1273D300)
#define CLASS_1_58B8517CA6259838__CCTOR_OFFSET UNITYSDK_OFFSET(0x1273D250)

inline static constexpr unsigned int Class_1_58B8517CA6259838_TypeDefinitionIndex = 63177;

class Class_1_58B8517CA6259838 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_Field_1_0()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_58B8517CA6259838_TypeDefinitionIndex)->GetStaticField(0x4D190);
	}
	// static const ::System::Int32 Field_1_2 = 0x65; // 0x0
	// static const ::System::Int32 Field_1_1 = 0x7FFFFFC3; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_58B8517CA6259838__CCTOR_OFFSET))();
	}

	static ::System::Int32 Method_1_D7FE3FCFB1E0B054(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_58B8517CA6259838_METHOD_1_D7FE3FCFB1E0B054_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_5AEC8C9EE262F230(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_58B8517CA6259838_METHOD_1_5AEC8C9EE262F230_OFFSET))(a1);
	}

	static ::System::Int32 Method_1_1A425C083DDF2BB1(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_58B8517CA6259838_METHOD_1_1A425C083DDF2BB1_OFFSET))(a1);
	}
};
