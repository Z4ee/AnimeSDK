#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MarbleRoundCustomBuffRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_D870F8AA5EFB30F6_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x192D3390)
#define CLASS_1_D870F8AA5EFB30F6_METHOD_1_15A17AE4183F4A16_OFFSET UNITYSDK_OFFSET(0x192D2B30)
#define CLASS_1_D870F8AA5EFB30F6_METHOD_1_4434BC5312F26BBF_OFFSET UNITYSDK_OFFSET(0x192D2FB0)
#define CLASS_1_D870F8AA5EFB30F6_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x192D31C0)
#define CLASS_1_D870F8AA5EFB30F6_METHOD_1_8E142187E93EE95B_OFFSET UNITYSDK_OFFSET(0x192D2E40)
#define CLASS_1_D870F8AA5EFB30F6_METHOD_1_9B8796A4EA04E8A2_OFFSET UNITYSDK_OFFSET(0x192D33E0)
#define CLASS_1_D870F8AA5EFB30F6_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x192D3250)
#define CLASS_1_D870F8AA5EFB30F6_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x192D2DE0)
#define CLASS_1_D870F8AA5EFB30F6_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x192D2BB0)
#define CLASS_1_D870F8AA5EFB30F6_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x192D3180)
#define CLASS_1_D870F8AA5EFB30F6_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x192D32F0)
#define CLASS_1_D870F8AA5EFB30F6__CCTOR_OFFSET UNITYSDK_OFFSET(0x192D3790)

inline static constexpr unsigned int Class_1_D870F8AA5EFB30F6_TypeDefinitionIndex = 11379;

class Class_1_D870F8AA5EFB30F6 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MarbleRoundCustomBuffRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MarbleRoundCustomBuffRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D870F8AA5EFB30F6_TypeDefinitionIndex)->GetStaticField(0x3D740);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_1()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D870F8AA5EFB30F6_TypeDefinitionIndex)->GetStaticField(0x3D748);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_2()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D870F8AA5EFB30F6_TypeDefinitionIndex)->GetStaticField(0x3D750);
	}
	static ::System::Byte* StaticGet_Field_1_3()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_D870F8AA5EFB30F6_TypeDefinitionIndex)->GetStaticField(0xB790);
	}
	static ::System::Boolean* StaticGet_Field_1_4()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_D870F8AA5EFB30F6_TypeDefinitionIndex)->GetStaticField(0xB791);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D870F8AA5EFB30F6__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MarbleRoundCustomBuffRow*>* Method_1_15A17AE4183F4A16()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MarbleRoundCustomBuffRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_D870F8AA5EFB30F6_METHOD_1_15A17AE4183F4A16_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_D870F8AA5EFB30F6_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MarbleRoundCustomBuffRow*> Method_1_8E142187E93EE95B()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MarbleRoundCustomBuffRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_D870F8AA5EFB30F6_METHOD_1_8E142187E93EE95B_OFFSET))();
	}

	static ::RPG::GameCore::MarbleRoundCustomBuffRow* Method_1_4434BC5312F26BBF(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::RPG::GameCore::MarbleRoundCustomBuffRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D870F8AA5EFB30F6_METHOD_1_4434BC5312F26BBF_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_D870F8AA5EFB30F6_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D870F8AA5EFB30F6_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D870F8AA5EFB30F6_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_D870F8AA5EFB30F6_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_D870F8AA5EFB30F6_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_08649C2797B37F9D(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_D870F8AA5EFB30F6_METHOD_1_08649C2797B37F9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_9B8796A4EA04E8A2(::RPG::GameCore::MarbleRoundCustomBuffRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::MarbleRoundCustomBuffRow*))((::PBYTE)hIl2Cpp + CLASS_1_D870F8AA5EFB30F6_METHOD_1_9B8796A4EA04E8A2_OFFSET))(a1);
	}
};
