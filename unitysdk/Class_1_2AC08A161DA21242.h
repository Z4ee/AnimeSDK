#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class GridFightModuleBanRoleConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_2AC08A161DA21242_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x192D6400)
#define CLASS_1_2AC08A161DA21242_METHOD_1_12B68534CE09FF53_OFFSET UNITYSDK_OFFSET(0x192D6060)
#define CLASS_1_2AC08A161DA21242_METHOD_1_4B51DB0A102B2F46_OFFSET UNITYSDK_OFFSET(0x192D6450)
#define CLASS_1_2AC08A161DA21242_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x192D6230)
#define CLASS_1_2AC08A161DA21242_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x192D62C0)
#define CLASS_1_2AC08A161DA21242_METHOD_1_C11214BC84E22617_OFFSET UNITYSDK_OFFSET(0x192D5EF0)
#define CLASS_1_2AC08A161DA21242_METHOD_1_CD1E8188CC445B1A_OFFSET UNITYSDK_OFFSET(0x192D5BE0)
#define CLASS_1_2AC08A161DA21242_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x192D5E90)
#define CLASS_1_2AC08A161DA21242_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x192D5C60)
#define CLASS_1_2AC08A161DA21242_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x192D61F0)
#define CLASS_1_2AC08A161DA21242_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x192D6360)
#define CLASS_1_2AC08A161DA21242__CCTOR_OFFSET UNITYSDK_OFFSET(0x192D67C0)

inline static constexpr unsigned int Class_1_2AC08A161DA21242_TypeDefinitionIndex = 12842;

class Class_1_2AC08A161DA21242 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightModuleBanRoleConfigRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightModuleBanRoleConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2AC08A161DA21242_TypeDefinitionIndex)->GetStaticField(0x3D8B0);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_1()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2AC08A161DA21242_TypeDefinitionIndex)->GetStaticField(0x3D8B8);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_2()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2AC08A161DA21242_TypeDefinitionIndex)->GetStaticField(0x3D8C0);
	}
	static ::System::Byte* StaticGet_Field_1_3()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2AC08A161DA21242_TypeDefinitionIndex)->GetStaticField(0xB7D0);
	}
	static ::System::Boolean* StaticGet_Field_1_4()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2AC08A161DA21242_TypeDefinitionIndex)->GetStaticField(0xB7D1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2AC08A161DA21242__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightModuleBanRoleConfigRow*>* Method_1_CD1E8188CC445B1A()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightModuleBanRoleConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_2AC08A161DA21242_METHOD_1_CD1E8188CC445B1A_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_2AC08A161DA21242_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightModuleBanRoleConfigRow*> Method_1_C11214BC84E22617()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightModuleBanRoleConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_2AC08A161DA21242_METHOD_1_C11214BC84E22617_OFFSET))();
	}

	static ::RPG::GameCore::GridFightModuleBanRoleConfigRow* Method_1_12B68534CE09FF53(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::GridFightModuleBanRoleConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_2AC08A161DA21242_METHOD_1_12B68534CE09FF53_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_2AC08A161DA21242_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2AC08A161DA21242_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2AC08A161DA21242_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_2AC08A161DA21242_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_2AC08A161DA21242_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_08649C2797B37F9D(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_2AC08A161DA21242_METHOD_1_08649C2797B37F9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_4B51DB0A102B2F46(::RPG::GameCore::GridFightModuleBanRoleConfigRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::GridFightModuleBanRoleConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_2AC08A161DA21242_METHOD_1_4B51DB0A102B2F46_OFFSET))(a1);
	}
};
