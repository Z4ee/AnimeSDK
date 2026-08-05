#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5CB0513590B35A62_Struct_2_7E05CC9D35669911.h"
#include "unitysdk/Class_1_5CB0513590B35A62_Struct_2_8D40D715742F3150.h"
#include "unitysdk/MoleMole/Config/ScreenEffectType.h"
#include "unitysdk/MoleMole/Config/ShaderCustomType.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_5CB0513590B35A62_METHOD_1_27A9D2B1DC9BB570_OFFSET UNITYSDK_OFFSET(0x1BC13E10)
#define CLASS_1_5CB0513590B35A62_METHOD_1_4CF274B13C93EE7F_OFFSET UNITYSDK_OFFSET(0x1BC13BA0)
#define CLASS_1_5CB0513590B35A62_METHOD_1_68CA5BCAC1F6601E_OFFSET UNITYSDK_OFFSET(0x1BC14800)
#define CLASS_1_5CB0513590B35A62_METHOD_1_AA183F1DB8D12321_OFFSET UNITYSDK_OFFSET(0x1BC138B0)
#define CLASS_1_5CB0513590B35A62_METHOD_1_DAF92666EB28CC6E_OFFSET UNITYSDK_OFFSET(0x1BC14480)
#define CLASS_1_5CB0513590B35A62_METHOD_1_F5C3B2AB9C0D41E0_OFFSET UNITYSDK_OFFSET(0x1BC14190)
#define CLASS_1_5CB0513590B35A62__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BC13790)

inline static constexpr unsigned int Class_1_5CB0513590B35A62_TypeDefinitionIndex = 88908;

class Class_1_5CB0513590B35A62 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::Class_1_5CB0513590B35A62_Struct_2_7E05CC9D35669911>*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::Class_1_5CB0513590B35A62_Struct_2_7E05CC9D35669911>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5CB0513590B35A62_TypeDefinitionIndex)->GetStaticField(0x43660);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::Class_1_5CB0513590B35A62_Struct_2_8D40D715742F3150>*>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::Class_1_5CB0513590B35A62_Struct_2_8D40D715742F3150>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5CB0513590B35A62_TypeDefinitionIndex)->GetStaticField(0x43668);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5CB0513590B35A62__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_AA183F1DB8D12321(::System::String* a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5CB0513590B35A62_METHOD_1_AA183F1DB8D12321_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_27A9D2B1DC9BB570(::MoleMole::Config::ScreenEffectType a1, ::System::String* a2, ::System::Boolean a3, ::System::Boolean a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::MoleMole::Config::ScreenEffectType, ::System::String*, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5CB0513590B35A62_METHOD_1_27A9D2B1DC9BB570_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_1_F5C3B2AB9C0D41E0(::System::String* a1, ::System::Boolean a2, ::System::Boolean a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::System::String*, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5CB0513590B35A62_METHOD_1_F5C3B2AB9C0D41E0_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_4CF274B13C93EE7F(::MoleMole::Config::ShaderCustomType a1, ::System::String* a2, ::System::Boolean a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::MoleMole::Config::ShaderCustomType, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5CB0513590B35A62_METHOD_1_4CF274B13C93EE7F_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_DAF92666EB28CC6E(::MoleMole::Config::ScreenEffectType a1, ::System::String* a2, ::System::String* a3, ::MoleMole::Battle::Entity* a4)
	{
		return ((::System::Void(*)(::MoleMole::Config::ScreenEffectType, ::System::String*, ::System::String*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_5CB0513590B35A62_METHOD_1_DAF92666EB28CC6E_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_68CA5BCAC1F6601E(::MoleMole::Config::ShaderCustomType a1, ::System::String* a2, ::System::String* a3, ::MoleMole::Battle::Entity* a4)
	{
		return ((::System::Void(*)(::MoleMole::Config::ShaderCustomType, ::System::String*, ::System::String*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_5CB0513590B35A62_METHOD_1_68CA5BCAC1F6601E_OFFSET))(a1, a2, a3, a4);
	}
};
