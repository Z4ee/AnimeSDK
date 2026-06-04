#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/ZLinq/FromFixEnumerator_2.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ZLinq/ValueEnumerable_2.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class IdleLiveAvatarUpgradeLimitRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_4993C9A6885D1263_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x190FE2E0)
#define CLASS_1_4993C9A6885D1263_METHOD_1_4808BDF35058F8E8_OFFSET UNITYSDK_OFFSET(0x190FDD50)
#define CLASS_1_4993C9A6885D1263_METHOD_1_62601B9F2365EC3C_OFFSET UNITYSDK_OFFSET(0x190FDEC0)
#define CLASS_1_4993C9A6885D1263_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x190FE110)
#define CLASS_1_4993C9A6885D1263_METHOD_1_8CE77D6A9B94B7F3_OFFSET UNITYSDK_OFFSET(0x190FDA40)
#define CLASS_1_4993C9A6885D1263_METHOD_1_A8666E767EABB8F1_OFFSET UNITYSDK_OFFSET(0x190FE330)
#define CLASS_1_4993C9A6885D1263_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x190FE1A0)
#define CLASS_1_4993C9A6885D1263_METHOD_1_BF8B54A6E8470402_OFFSET UNITYSDK_OFFSET(0x190FDF40)
#define CLASS_1_4993C9A6885D1263_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x190FDCF0)
#define CLASS_1_4993C9A6885D1263_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x190FDAC0)
#define CLASS_1_4993C9A6885D1263_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x190FE0D0)
#define CLASS_1_4993C9A6885D1263_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x190FE240)
#define CLASS_1_4993C9A6885D1263__CCTOR_OFFSET UNITYSDK_OFFSET(0x190FE6A0)

inline static constexpr unsigned int Class_1_4993C9A6885D1263_TypeDefinitionIndex = 11205;

class Class_1_4993C9A6885D1263 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_0()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4993C9A6885D1263_TypeDefinitionIndex)->GetStaticField(0x52A90);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveAvatarUpgradeLimitRow*>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveAvatarUpgradeLimitRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4993C9A6885D1263_TypeDefinitionIndex)->GetStaticField(0x52A98);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_2()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4993C9A6885D1263_TypeDefinitionIndex)->GetStaticField(0x52AA0);
	}
	static ::System::Byte* StaticGet_Field_1_3()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_4993C9A6885D1263_TypeDefinitionIndex)->GetStaticField(0x104E0);
	}
	static ::System::Boolean* StaticGet_Field_1_4()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_4993C9A6885D1263_TypeDefinitionIndex)->GetStaticField(0x104E1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4993C9A6885D1263__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveAvatarUpgradeLimitRow*>* Method_1_8CE77D6A9B94B7F3()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveAvatarUpgradeLimitRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_4993C9A6885D1263_METHOD_1_8CE77D6A9B94B7F3_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_4993C9A6885D1263_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveAvatarUpgradeLimitRow*> Method_1_4808BDF35058F8E8()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveAvatarUpgradeLimitRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_4993C9A6885D1263_METHOD_1_4808BDF35058F8E8_OFFSET))();
	}

	static ::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveAvatarUpgradeLimitRow*>, ::RPG::GameCore::IdleLiveAvatarUpgradeLimitRow*> Method_1_62601B9F2365EC3C()
	{
		return ((::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveAvatarUpgradeLimitRow*>, ::RPG::GameCore::IdleLiveAvatarUpgradeLimitRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_4993C9A6885D1263_METHOD_1_62601B9F2365EC3C_OFFSET))();
	}

	static ::RPG::GameCore::IdleLiveAvatarUpgradeLimitRow* Method_1_BF8B54A6E8470402(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::IdleLiveAvatarUpgradeLimitRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4993C9A6885D1263_METHOD_1_BF8B54A6E8470402_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_4993C9A6885D1263_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4993C9A6885D1263_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4993C9A6885D1263_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_4993C9A6885D1263_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_4993C9A6885D1263_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_08649C2797B37F9D(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_4993C9A6885D1263_METHOD_1_08649C2797B37F9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_A8666E767EABB8F1(::RPG::GameCore::IdleLiveAvatarUpgradeLimitRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::IdleLiveAvatarUpgradeLimitRow*))((::PBYTE)hIl2Cpp + CLASS_1_4993C9A6885D1263_METHOD_1_A8666E767EABB8F1_OFFSET))(a1);
	}
};
