#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetAliasTokenType.h"
#include "unitysdk/Struct_2_3B2BE9E387F8673D.h"
#include "unitysdk/System/Object.h"

class Class_1_B3C02EB4F05E94C2;

#define CLASS_1_6412CFD00C9BAE84_METHOD_1_2D3627D6432F9596_OFFSET UNITYSDK_OFFSET(0xE484DD0)
#define CLASS_1_6412CFD00C9BAE84_METHOD_1_5885BE70B8D351A2_OFFSET UNITYSDK_OFFSET(0xE484D80)
#define CLASS_1_6412CFD00C9BAE84_METHOD_1_6C9F6034898E90A6_OFFSET UNITYSDK_OFFSET(0xE484E20)
#define CLASS_1_6412CFD00C9BAE84_METHOD_1_81247E32AA2E98F0_OFFSET UNITYSDK_OFFSET(0xE484E70)
#define CLASS_1_6412CFD00C9BAE84_METHOD_1_D78DB5F8EB773A1A_OFFSET UNITYSDK_OFFSET(0xE484CE0)
#define CLASS_1_6412CFD00C9BAE84__CCTOR_OFFSET UNITYSDK_OFFSET(0xE484460)
#define CLASS_1_6412CFD00C9BAE84__CTOR_OFFSET UNITYSDK_OFFSET(0xE484EC0)

inline static constexpr unsigned int Class_1_6412CFD00C9BAE84_TypeDefinitionIndex = 47735;

class Class_1_6412CFD00C9BAE84 : public ::System::Object
{
public:
	static ::Il2CppArray<::Class_1_B3C02EB4F05E94C2*>** StaticGet_Field_1_0()
	{
		return (::Il2CppArray<::Class_1_B3C02EB4F05E94C2*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6412CFD00C9BAE84_TypeDefinitionIndex)->GetStaticField(0x47F80);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6412CFD00C9BAE84__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6412CFD00C9BAE84__CTOR_OFFSET))(this);
	}

	static ::Class_1_B3C02EB4F05E94C2* Method_1_D78DB5F8EB773A1A(::RPG::GameCore::TargetAliasTokenType a1)
	{
		return ((::Class_1_B3C02EB4F05E94C2*(*)(::RPG::GameCore::TargetAliasTokenType))((::PBYTE)hIl2Cpp + CLASS_1_6412CFD00C9BAE84_METHOD_1_D78DB5F8EB773A1A_OFFSET))(a1);
	}

	static ::System::Void Method_1_5885BE70B8D351A2(::Struct_2_3B2BE9E387F8673D& a1)
	{
		return ((::System::Void(*)(::Struct_2_3B2BE9E387F8673D&))((::PBYTE)hIl2Cpp + CLASS_1_6412CFD00C9BAE84_METHOD_1_5885BE70B8D351A2_OFFSET))(a1);
	}

	static ::System::Void Method_1_2D3627D6432F9596(::Struct_2_3B2BE9E387F8673D& a1)
	{
		return ((::System::Void(*)(::Struct_2_3B2BE9E387F8673D&))((::PBYTE)hIl2Cpp + CLASS_1_6412CFD00C9BAE84_METHOD_1_2D3627D6432F9596_OFFSET))(a1);
	}

	static ::System::Void Method_1_6C9F6034898E90A6(::Struct_2_3B2BE9E387F8673D& a1)
	{
		return ((::System::Void(*)(::Struct_2_3B2BE9E387F8673D&))((::PBYTE)hIl2Cpp + CLASS_1_6412CFD00C9BAE84_METHOD_1_6C9F6034898E90A6_OFFSET))(a1);
	}

	static ::System::Void Method_1_81247E32AA2E98F0(::Struct_2_3B2BE9E387F8673D& a1)
	{
		return ((::System::Void(*)(::Struct_2_3B2BE9E387F8673D&))((::PBYTE)hIl2Cpp + CLASS_1_6412CFD00C9BAE84_METHOD_1_81247E32AA2E98F0_OFFSET))(a1);
	}
};
