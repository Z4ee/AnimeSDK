#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B7E341C5F1A6F199.h"

namespace MoleMole::Config { class ConfigEntitySkill; }
namespace System { class String; }

#define CLASS_2_E275F6568FBD98FA_METHOD_2_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x1CB8F370)
#define CLASS_2_E275F6568FBD98FA_METHOD_2_3163C288F3AE2966_OFFSET UNITYSDK_OFFSET(0x1CB8F390)
#define CLASS_2_E275F6568FBD98FA_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x1CB8EBA0)
#define CLASS_2_E275F6568FBD98FA_METHOD_2_50131F4CF014469C_OFFSET UNITYSDK_OFFSET(0x1CB8ECC0)
#define CLASS_2_E275F6568FBD98FA_METHOD_2_7D201B4343E63821_OFFSET UNITYSDK_OFFSET(0x1CB8F380)
#define CLASS_2_E275F6568FBD98FA_METHOD_2_85F0557376C87A42_OFFSET UNITYSDK_OFFSET(0x1CB8ED50)
#define CLASS_2_E275F6568FBD98FA_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x1CB8F2E0)
#define CLASS_2_E275F6568FBD98FA_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1CB8F230)
#define CLASS_2_E275F6568FBD98FA_METHOD_2_CE81D059476B1F49_OFFSET UNITYSDK_OFFSET(0x1CB8F2D0)
#define CLASS_2_E275F6568FBD98FA__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CB8EC30)
#define CLASS_2_E275F6568FBD98FA__CTOR_OFFSET UNITYSDK_OFFSET(0x1CB8ECB0)

inline static constexpr unsigned int Class_2_E275F6568FBD98FA_TypeDefinitionIndex = 41463;

class Class_2_E275F6568FBD98FA : public ::Class_1_B7E341C5F1A6F199
{
public:
	static ::System::UInt64* StaticGet_Field_2_0()
	{
		return (::System::UInt64*)Il2CppClass::FromTypeDefinitionIndex(Class_2_E275F6568FBD98FA_TypeDefinitionIndex)->GetStaticField(0x10A60);
	}
	// static const ::System::UInt16 Field_2_7 = 0xE4; // 0x0
	::MoleMole::Config::ConfigEntitySkill* Field_2_2; // 0x20
	::System::String* Field_2_3; // 0x28
	::System::UInt64 Field_2_1; // 0x30

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_E275F6568FBD98FA__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E275F6568FBD98FA__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E275F6568FBD98FA_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_50131F4CF014469C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E275F6568FBD98FA_METHOD_2_50131F4CF014469C_OFFSET))(this);
	}

	::System::Void Method_2_85F0557376C87A42(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_E275F6568FBD98FA_METHOD_2_85F0557376C87A42_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E275F6568FBD98FA_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::UInt64 Method_2_CE81D059476B1F49()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E275F6568FBD98FA_METHOD_2_CE81D059476B1F49_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E275F6568FBD98FA_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::String* Method_2_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E275F6568FBD98FA_METHOD_2_126AB3935214AA22_OFFSET))(this);
	}

	::System::Void Method_2_7D201B4343E63821(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_E275F6568FBD98FA_METHOD_2_7D201B4343E63821_OFFSET))(this, a1);
	}

	::System::Void Method_2_3163C288F3AE2966(::System::UInt64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_2_E275F6568FBD98FA_METHOD_2_3163C288F3AE2966_OFFSET))(this, a1);
	}
};
