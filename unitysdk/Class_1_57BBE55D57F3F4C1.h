#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BundleUpdateProfileId.h"
#include "unitysdk/System/Object.h"

class Class_1_AF84DCC8E0AA63E0;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_57BBE55D57F3F4C1_METHOD_1_04D1E6ED010573AA_OFFSET UNITYSDK_OFFSET(0x1846CA40)
#define CLASS_1_57BBE55D57F3F4C1_METHOD_1_51AC7912135C5E23_OFFSET UNITYSDK_OFFSET(0x1846CC40)
#define CLASS_1_57BBE55D57F3F4C1_METHOD_1_A69B186D3579EB41_OFFSET UNITYSDK_OFFSET(0x1846C700)
#define CLASS_1_57BBE55D57F3F4C1_METHOD_1_B2BC51D750D177F6_OFFSET UNITYSDK_OFFSET(0x1846C7C0)
#define CLASS_1_57BBE55D57F3F4C1_METHOD_1_F0106DDD6E431CA6_OFFSET UNITYSDK_OFFSET(0x1846CB00)
#define CLASS_1_57BBE55D57F3F4C1__CCTOR_OFFSET UNITYSDK_OFFSET(0x1846CD90)
#define CLASS_1_57BBE55D57F3F4C1__CTOR_OFFSET UNITYSDK_OFFSET(0x1846C6F0)

inline static constexpr unsigned int Class_1_57BBE55D57F3F4C1_TypeDefinitionIndex = 58501;

class Class_1_57BBE55D57F3F4C1 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_AF84DCC8E0AA63E0*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_AF84DCC8E0AA63E0*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_57BBE55D57F3F4C1_TypeDefinitionIndex)->GetStaticField(0x5ECB0);
	}
	static ::System::Collections::Generic::List_1<::Class_1_AF84DCC8E0AA63E0*>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::List_1<::Class_1_AF84DCC8E0AA63E0*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_57BBE55D57F3F4C1_TypeDefinitionIndex)->GetStaticField(0x5ECB8);
	}
	static ::System::Boolean* StaticGet_Field_1_2()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_57BBE55D57F3F4C1_TypeDefinitionIndex)->GetStaticField(0xF910);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_57BBE55D57F3F4C1__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_57BBE55D57F3F4C1__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_A69B186D3579EB41(::RPG::Client::BundleUpdateProfileId a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::RPG::Client::BundleUpdateProfileId, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_57BBE55D57F3F4C1_METHOD_1_A69B186D3579EB41_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_B2BC51D750D177F6(::RPG::Client::BundleUpdateProfileId a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::RPG::Client::BundleUpdateProfileId, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_57BBE55D57F3F4C1_METHOD_1_B2BC51D750D177F6_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_04D1E6ED010573AA(::RPG::Client::BundleUpdateProfileId a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::RPG::Client::BundleUpdateProfileId, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_57BBE55D57F3F4C1_METHOD_1_04D1E6ED010573AA_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_F0106DDD6E431CA6(::RPG::Client::BundleUpdateProfileId a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::RPG::Client::BundleUpdateProfileId, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_57BBE55D57F3F4C1_METHOD_1_F0106DDD6E431CA6_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_51AC7912135C5E23()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_57BBE55D57F3F4C1_METHOD_1_51AC7912135C5E23_OFFSET))();
	}
};
