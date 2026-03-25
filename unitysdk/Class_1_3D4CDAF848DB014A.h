#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_B6A3FA7992F9F37E_7.h"
#include "unitysdk/System/Object.h"

class Class_1_7D23A596E7A855DC;

#define CLASS_1_3D4CDAF848DB014A_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11877900)
#define CLASS_1_3D4CDAF848DB014A_METHOD_1_8649317719F42121_OFFSET UNITYSDK_OFFSET(0x11877950)
#define CLASS_1_3D4CDAF848DB014A_METHOD_1_9E467FFFA5E8F9EF_OFFSET UNITYSDK_OFFSET(0x11877C50)
#define CLASS_1_3D4CDAF848DB014A_METHOD_1_F0652E187B0224A1_OFFSET UNITYSDK_OFFSET(0x11877820)
#define CLASS_1_3D4CDAF848DB014A__CCTOR_OFFSET UNITYSDK_OFFSET(0x11877DA0)
#define CLASS_1_3D4CDAF848DB014A__CTOR_OFFSET UNITYSDK_OFFSET(0x118778F0)

inline static constexpr unsigned int Class_1_3D4CDAF848DB014A_TypeDefinitionIndex = 46241;

class Class_1_3D4CDAF848DB014A : public ::System::Object
{
public:
	static ::System::UInt32* StaticGet_Field_1_2()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_3D4CDAF848DB014A_TypeDefinitionIndex)->GetStaticField(0x12710);
	}
	static ::System::UInt32* StaticGet_Field_1_0()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_3D4CDAF848DB014A_TypeDefinitionIndex)->GetStaticField(0x12714);
	}
	static ::System::UInt32* StaticGet_Field_1_1()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_3D4CDAF848DB014A_TypeDefinitionIndex)->GetStaticField(0x12718);
	}
	static ::System::Single* StaticGet_Field_1_3()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_3D4CDAF848DB014A_TypeDefinitionIndex)->GetStaticField(0x1271C);
	}
	::Class_1_7D23A596E7A855DC* Field_1_4; // 0x10
	::System::Single Field_1_5; // 0x18
	::System::Boolean Field_1_7; // 0x1C
	::System::Boolean Field_1_6; // 0x1D

	::System::Void _ctor(::Class_1_7D23A596E7A855DC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7D23A596E7A855DC*))((::PBYTE)hIl2Cpp + CLASS_1_3D4CDAF848DB014A__CTOR_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3D4CDAF848DB014A__CCTOR_OFFSET))();
	}

	static ::Class_1_3D4CDAF848DB014A* Method_1_F0652E187B0224A1(::Class_1_7D23A596E7A855DC* a1)
	{
		return ((::Class_1_3D4CDAF848DB014A*(*)(::Class_1_7D23A596E7A855DC*))((::PBYTE)hIl2Cpp + CLASS_1_3D4CDAF848DB014A_METHOD_1_F0652E187B0224A1_OFFSET))(a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3D4CDAF848DB014A_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_8649317719F42121(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_3D4CDAF848DB014A_METHOD_1_8649317719F42121_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_9E467FFFA5E8F9EF(::Struct_2_B6A3FA7992F9F37E_7& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_B6A3FA7992F9F37E_7&))((::PBYTE)hIl2Cpp + CLASS_1_3D4CDAF848DB014A_METHOD_1_9E467FFFA5E8F9EF_OFFSET))(this, a1);
	}
};
