#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/ZLinq/FromFixEnumerator_2.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ZLinq/ValueEnumerable_2.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RogueTournContentCollectionRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_51C586C9E169EC30_METHOD_1_0002F2087033A0CF_OFFSET UNITYSDK_OFFSET(0x19D41AD0)
#define CLASS_1_51C586C9E169EC30_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x19D41E30)
#define CLASS_1_51C586C9E169EC30_METHOD_1_16FEBFA1E1DB0E3C_OFFSET UNITYSDK_OFFSET(0x19D41630)
#define CLASS_1_51C586C9E169EC30_METHOD_1_4ECD50DE5B3EF081_OFFSET UNITYSDK_OFFSET(0x19D41E80)
#define CLASS_1_51C586C9E169EC30_METHOD_1_56D645A3BEC01630_OFFSET UNITYSDK_OFFSET(0x19D41940)
#define CLASS_1_51C586C9E169EC30_METHOD_1_872CA98930EF948A_OFFSET UNITYSDK_OFFSET(0x19D41A70)
#define CLASS_1_51C586C9E169EC30_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x19D41C60)
#define CLASS_1_51C586C9E169EC30_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x19D41CF0)
#define CLASS_1_51C586C9E169EC30_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x19D418E0)
#define CLASS_1_51C586C9E169EC30_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x19D416B0)
#define CLASS_1_51C586C9E169EC30_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x19D41C20)
#define CLASS_1_51C586C9E169EC30_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x19D41D90)
#define CLASS_1_51C586C9E169EC30__CCTOR_OFFSET UNITYSDK_OFFSET(0x19D421A0)

inline static constexpr unsigned int Class_1_51C586C9E169EC30_TypeDefinitionIndex = 14301;

class Class_1_51C586C9E169EC30 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournContentCollectionRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournContentCollectionRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_51C586C9E169EC30_TypeDefinitionIndex)->GetStaticField(0x4B1A0);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_1()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_51C586C9E169EC30_TypeDefinitionIndex)->GetStaticField(0x4B1A8);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_2()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_51C586C9E169EC30_TypeDefinitionIndex)->GetStaticField(0x4B1B0);
	}
	static ::System::Boolean* StaticGet_Field_1_3()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_51C586C9E169EC30_TypeDefinitionIndex)->GetStaticField(0xE1B0);
	}
	static ::System::Byte* StaticGet_Field_1_4()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_51C586C9E169EC30_TypeDefinitionIndex)->GetStaticField(0xE1B1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_51C586C9E169EC30__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournContentCollectionRow*>* Method_1_16FEBFA1E1DB0E3C()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournContentCollectionRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_51C586C9E169EC30_METHOD_1_16FEBFA1E1DB0E3C_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_51C586C9E169EC30_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournContentCollectionRow*> Method_1_56D645A3BEC01630()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournContentCollectionRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_51C586C9E169EC30_METHOD_1_56D645A3BEC01630_OFFSET))();
	}

	static ::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournContentCollectionRow*>, ::RPG::GameCore::RogueTournContentCollectionRow*> Method_1_872CA98930EF948A()
	{
		return ((::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournContentCollectionRow*>, ::RPG::GameCore::RogueTournContentCollectionRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_51C586C9E169EC30_METHOD_1_872CA98930EF948A_OFFSET))();
	}

	static ::RPG::GameCore::RogueTournContentCollectionRow* Method_1_0002F2087033A0CF(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::RogueTournContentCollectionRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_51C586C9E169EC30_METHOD_1_0002F2087033A0CF_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_51C586C9E169EC30_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_51C586C9E169EC30_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_51C586C9E169EC30_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_51C586C9E169EC30_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_51C586C9E169EC30_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_51C586C9E169EC30_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_4ECD50DE5B3EF081(::RPG::GameCore::RogueTournContentCollectionRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::RogueTournContentCollectionRow*))((::PBYTE)hIl2Cpp + CLASS_1_51C586C9E169EC30_METHOD_1_4ECD50DE5B3EF081_OFFSET))(a1);
	}
};
