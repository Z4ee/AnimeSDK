#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_8EC2A64207E05751;

#define CLASS_1_8EC2A64207E05751___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x19FBC010)
#define CLASS_1_8EC2A64207E05751___C__CTOR_OFFSET UNITYSDK_OFFSET(0x19FBC050)
#define CLASS_1_8EC2A64207E05751___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x19FBC060)

inline static constexpr unsigned int Class_1_8EC2A64207E05751___c_TypeDefinitionIndex = 24221;

class Class_1_8EC2A64207E05751___c : public ::System::Object
{
public:
	static ::Class_1_8EC2A64207E05751___c** StaticGet___9()
	{
		return (::Class_1_8EC2A64207E05751___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8EC2A64207E05751___c_TypeDefinitionIndex)->GetStaticField(0xE7A0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8EC2A64207E05751___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8EC2A64207E05751___C__CTOR_OFFSET))(this);
	}

	::Class_1_8EC2A64207E05751* __cctor_b__38_0()
	{
		return ((::Class_1_8EC2A64207E05751*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8EC2A64207E05751___C___CCTOR_B__38_0_OFFSET))(this);
	}
};
