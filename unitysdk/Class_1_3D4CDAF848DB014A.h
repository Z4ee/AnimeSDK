#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_B6A3FA7992F9F37E_6.h"
#include "unitysdk/System/Object.h"

class Class_1_7D23A596E7A855DC;

#define CLASS_1_3D4CDAF848DB014A_DISPOSE_OFFSET UNITYSDK_OFFSET(0x198B5300)
#define CLASS_1_3D4CDAF848DB014A_METHOD_1_8649317719F42121_OFFSET UNITYSDK_OFFSET(0x198B5350)
#define CLASS_1_3D4CDAF848DB014A_METHOD_1_9E467FFFA5E8F9EF_OFFSET UNITYSDK_OFFSET(0x198B5630)
#define CLASS_1_3D4CDAF848DB014A_METHOD_1_C5A58508F51BAED6_OFFSET UNITYSDK_OFFSET(0x198B51C0)
#define CLASS_1_3D4CDAF848DB014A__CCTOR_OFFSET UNITYSDK_OFFSET(0x198B5780)
#define CLASS_1_3D4CDAF848DB014A__CTOR_OFFSET UNITYSDK_OFFSET(0x198B52F0)

inline static constexpr unsigned int Class_1_3D4CDAF848DB014A_TypeDefinitionIndex = 57556;

class Class_1_3D4CDAF848DB014A : public ::System::Object
{
public:
	static ::System::Single* StaticGet_BEILIKPDFFG()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_3D4CDAF848DB014A_TypeDefinitionIndex)->GetStaticField(0x10E70);
	}
	static ::System::UInt32* StaticGet_KGNMCNMGCND()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_3D4CDAF848DB014A_TypeDefinitionIndex)->GetStaticField(0x10E74);
	}
	static ::System::UInt32* StaticGet_NNBBEIBIKLJ()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_3D4CDAF848DB014A_TypeDefinitionIndex)->GetStaticField(0x10E78);
	}
	static ::System::UInt32* StaticGet_KAMCGDKHALB()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_3D4CDAF848DB014A_TypeDefinitionIndex)->GetStaticField(0x10E7C);
	}
	::Class_1_7D23A596E7A855DC* FLMODBLFAGD; // 0x10
	::System::Boolean EOELDCMAMHD; // 0x18
	::System::Boolean BFHMIPCLJOB; // 0x19
	::System::Single HODIMDPEHIL; // 0x1C

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
