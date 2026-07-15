#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_B6A3FA7992F9F37E_6.h"
#include "unitysdk/System/Object.h"

class Class_1_7D23A596E7A855DC;

#define CLASS_1_3D4CDAF848DB014A_DISPOSE_OFFSET UNITYSDK_OFFSET(0x185AE7C0)
#define CLASS_1_3D4CDAF848DB014A_METHOD_1_8649317719F42121_OFFSET UNITYSDK_OFFSET(0x185AE810)
#define CLASS_1_3D4CDAF848DB014A_METHOD_1_9E467FFFA5E8F9EF_OFFSET UNITYSDK_OFFSET(0x185AEAF0)
#define CLASS_1_3D4CDAF848DB014A_METHOD_1_C5A58508F51BAED6_OFFSET UNITYSDK_OFFSET(0x185AE680)
#define CLASS_1_3D4CDAF848DB014A__CCTOR_OFFSET UNITYSDK_OFFSET(0x185AEC40)
#define CLASS_1_3D4CDAF848DB014A__CTOR_OFFSET UNITYSDK_OFFSET(0x185AE7B0)

inline static constexpr unsigned int Class_1_3D4CDAF848DB014A_TypeDefinitionIndex = 54835;

class Class_1_3D4CDAF848DB014A : public ::System::Object
{
public:
	static ::System::UInt32* StaticGet_Field_1_0()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_3D4CDAF848DB014A_TypeDefinitionIndex)->GetStaticField(0xACF0);
	}
	static ::System::UInt32* StaticGet_Field_1_1()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_3D4CDAF848DB014A_TypeDefinitionIndex)->GetStaticField(0xACF4);
	}
	static ::System::Single* StaticGet_Field_1_2()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_3D4CDAF848DB014A_TypeDefinitionIndex)->GetStaticField(0xACF8);
	}
	static ::System::UInt32* StaticGet_Field_1_3()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_3D4CDAF848DB014A_TypeDefinitionIndex)->GetStaticField(0xACFC);
	}
	::Class_1_7D23A596E7A855DC* Field_1_4; // 0x10
	::System::Boolean Field_1_5; // 0x18
	::System::Boolean Field_1_6; // 0x19
	::System::Single Field_1_7; // 0x1C

	::System::Void _ctor(::Class_1_7D23A596E7A855DC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7D23A596E7A855DC*))((::PBYTE)hIl2Cpp + CLASS_1_3D4CDAF848DB014A__CTOR_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3D4CDAF848DB014A__CCTOR_OFFSET))();
	}

	static ::Class_1_3D4CDAF848DB014A* Method_1_C5A58508F51BAED6(::Class_1_7D23A596E7A855DC* a1)
	{
		return ((::Class_1_3D4CDAF848DB014A*(*)(::Class_1_7D23A596E7A855DC*))((::PBYTE)hIl2Cpp + CLASS_1_3D4CDAF848DB014A_METHOD_1_C5A58508F51BAED6_OFFSET))(a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3D4CDAF848DB014A_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_8649317719F42121(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_3D4CDAF848DB014A_METHOD_1_8649317719F42121_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_9E467FFFA5E8F9EF(::Struct_2_B6A3FA7992F9F37E_6& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_B6A3FA7992F9F37E_6&))((::PBYTE)hIl2Cpp + CLASS_1_3D4CDAF848DB014A_METHOD_1_9E467FFFA5E8F9EF_OFFSET))(this, a1);
	}
};
