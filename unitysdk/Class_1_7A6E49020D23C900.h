#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_7A6E49020D23C900_METHOD_1_D20BF56E36607D54_OFFSET UNITYSDK_OFFSET(0x17075690)
#define CLASS_1_7A6E49020D23C900__CCTOR_OFFSET UNITYSDK_OFFSET(0x170756E0)
#define CLASS_1_7A6E49020D23C900__CTOR_OFFSET UNITYSDK_OFFSET(0x17075680)

inline static constexpr unsigned int Class_1_7A6E49020D23C900_TypeDefinitionIndex = 73832;

class Class_1_7A6E49020D23C900 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>** StaticGet_DNKLFBGOPJA()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7A6E49020D23C900_TypeDefinitionIndex)->GetStaticField(0x36C0);
	}
	static ::Class_1_7A6E49020D23C900** StaticGet_LJPLDIOCAGF()
	{
		return (::Class_1_7A6E49020D23C900**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7A6E49020D23C900_TypeDefinitionIndex)->GetStaticField(0x36C8);
	}
	static ::Class_1_7A6E49020D23C900** StaticGet_LJAAIAGMNDK()
	{
		return (::Class_1_7A6E49020D23C900**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7A6E49020D23C900_TypeDefinitionIndex)->GetStaticField(0x36D0);
	}
	static ::Class_1_7A6E49020D23C900** StaticGet_DNIPGEAABKE()
	{
		return (::Class_1_7A6E49020D23C900**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7A6E49020D23C900_TypeDefinitionIndex)->GetStaticField(0x36D8);
	}
	static ::Class_1_7A6E49020D23C900** StaticGet_EJGIOGDEHLE()
	{
		return (::Class_1_7A6E49020D23C900**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7A6E49020D23C900_TypeDefinitionIndex)->GetStaticField(0x36E0);
	}
	static ::Class_1_7A6E49020D23C900** StaticGet_FLDKONBFOMA()
	{
		return (::Class_1_7A6E49020D23C900**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7A6E49020D23C900_TypeDefinitionIndex)->GetStaticField(0x36E8);
	}
	static ::Class_1_7A6E49020D23C900** StaticGet_GNPCNKHPAMH()
	{
		return (::Class_1_7A6E49020D23C900**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7A6E49020D23C900_TypeDefinitionIndex)->GetStaticField(0x36F0);
	}
	static ::Class_1_7A6E49020D23C900** StaticGet_FLCDLHIJAGC()
	{
		return (::Class_1_7A6E49020D23C900**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7A6E49020D23C900_TypeDefinitionIndex)->GetStaticField(0x36F8);
	}
	static ::Class_1_7A6E49020D23C900** StaticGet_LGIABFPBNPG()
	{
		return (::Class_1_7A6E49020D23C900**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7A6E49020D23C900_TypeDefinitionIndex)->GetStaticField(0x3700);
	}
	::System::Int32 DLMINHHKKMK; // 0x10
	::System::Int32 NALMBOOCCIN; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7A6E49020D23C900__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7A6E49020D23C900__CCTOR_OFFSET))();
	}

	::System::Boolean Method_1_D20BF56E36607D54(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_7A6E49020D23C900_METHOD_1_D20BF56E36607D54_OFFSET))(this, a1);
	}
};
