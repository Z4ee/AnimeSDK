#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5CB0513590B35A62_Struct_2_7E05CC9D35669911.h"
#include "unitysdk/Class_1_5CB0513590B35A62_Struct_2_8D40D715742F3150.h"
#include "unitysdk/MoleMole/Config/ScreenEffectType.h"
#include "unitysdk/MoleMole/Config/ShaderCustomType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_5CB0513590B35A62_METHOD_1_27A9D2B1DC9BB570_OFFSET UNITYSDK_OFFSET(0x133F23E0)
#define CLASS_1_5CB0513590B35A62_METHOD_1_4CF274B13C93EE7F_OFFSET UNITYSDK_OFFSET(0x133F2A50)
#define CLASS_1_5CB0513590B35A62_METHOD_1_653FFB7B95C82D99_OFFSET UNITYSDK_OFFSET(0x133F2CB0)
#define CLASS_1_5CB0513590B35A62_METHOD_1_AA183F1DB8D12321_OFFSET UNITYSDK_OFFSET(0x133F2770)
#define CLASS_1_5CB0513590B35A62_METHOD_1_F2F9ED67B01BE37E_OFFSET UNITYSDK_OFFSET(0x133F2FB0)
#define CLASS_1_5CB0513590B35A62_METHOD_1_F5C3B2AB9C0D41E0_OFFSET UNITYSDK_OFFSET(0x133F20E0)
#define CLASS_1_5CB0513590B35A62__CCTOR_OFFSET UNITYSDK_OFFSET(0x133F1FC0)

inline static constexpr unsigned int Class_1_5CB0513590B35A62_TypeDefinitionIndex = 63941;

class Class_1_5CB0513590B35A62 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::Class_1_5CB0513590B35A62_Struct_2_8D40D715742F3150>*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::Class_1_5CB0513590B35A62_Struct_2_8D40D715742F3150>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5CB0513590B35A62_TypeDefinitionIndex)->GetStaticField(0x42A20);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::Class_1_5CB0513590B35A62_Struct_2_7E05CC9D35669911>*>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::Class_1_5CB0513590B35A62_Struct_2_7E05CC9D35669911>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5CB0513590B35A62_TypeDefinitionIndex)->GetStaticField(0x42A28);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5CB0513590B35A62__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_F5C3B2AB9C0D41E0(::System::String* a1, ::System::Boolean a2, ::System::Boolean a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::System::String*, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5CB0513590B35A62_METHOD_1_F5C3B2AB9C0D41E0_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_27A9D2B1DC9BB570(::MoleMole::Config::ScreenEffectType a1, ::System::String* a2, ::System::Boolean a3, ::System::Boolean a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::MoleMole::Config::ScreenEffectType, ::System::String*, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5CB0513590B35A62_METHOD_1_27A9D2B1DC9BB570_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_1_AA183F1DB8D12321(::System::String* a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5CB0513590B35A62_METHOD_1_AA183F1DB8D12321_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_653FFB7B95C82D99(::MoleMole::Config::ShaderCustomType a1, ::System::String* a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::MoleMole::Config::ShaderCustomType, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_5CB0513590B35A62_METHOD_1_653FFB7B95C82D99_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_4CF274B13C93EE7F(::MoleMole::Config::ShaderCustomType a1, ::System::String* a2, ::System::Boolean a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::MoleMole::Config::ShaderCustomType, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5CB0513590B35A62_METHOD_1_4CF274B13C93EE7F_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_F2F9ED67B01BE37E(::MoleMole::Config::ScreenEffectType a1, ::System::String* a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::MoleMole::Config::ScreenEffectType, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_5CB0513590B35A62_METHOD_1_F2F9ED67B01BE37E_OFFSET))(a1, a2, a3);
	}
};
