#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TextDanmuContentRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_4BE3AD16BD242A9E_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x1BD4E4E0)
#define CLASS_1_4BE3AD16BD242A9E_METHOD_1_112ED7310805994A_OFFSET UNITYSDK_OFFSET(0x1BD4E530)
#define CLASS_1_4BE3AD16BD242A9E_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1BD4E310)
#define CLASS_1_4BE3AD16BD242A9E_METHOD_1_AA49CE97ACA4360E_OFFSET UNITYSDK_OFFSET(0x1BD4E8A0)
#define CLASS_1_4BE3AD16BD242A9E_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1BD4E3A0)
#define CLASS_1_4BE3AD16BD242A9E_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1BD4E920)
#define CLASS_1_4BE3AD16BD242A9E_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1BD4E0E0)
#define CLASS_1_4BE3AD16BD242A9E_METHOD_1_EB9F63C5BCB11CCF_OFFSET UNITYSDK_OFFSET(0x1BD4EAF0)
#define CLASS_1_4BE3AD16BD242A9E_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1BD4E0A0)
#define CLASS_1_4BE3AD16BD242A9E_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1BD4E440)
#define CLASS_1_4BE3AD16BD242A9E_METHOD_1_FBE18CD24C888907_OFFSET UNITYSDK_OFFSET(0x1BD4E980)
#define CLASS_1_4BE3AD16BD242A9E__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BD4EC80)

inline static constexpr unsigned int Class_1_4BE3AD16BD242A9E_TypeDefinitionIndex = 14588;

class Class_1_4BE3AD16BD242A9E : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TextDanmuContentRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TextDanmuContentRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4BE3AD16BD242A9E_TypeDefinitionIndex)->GetStaticField(0x381E0);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_1()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4BE3AD16BD242A9E_TypeDefinitionIndex)->GetStaticField(0x381E8);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_2()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4BE3AD16BD242A9E_TypeDefinitionIndex)->GetStaticField(0x381F0);
	}
	static ::System::Boolean* StaticGet_Field_1_3()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_4BE3AD16BD242A9E_TypeDefinitionIndex)->GetStaticField(0x9600);
	}
	static ::System::Byte* StaticGet_Field_1_4()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_4BE3AD16BD242A9E_TypeDefinitionIndex)->GetStaticField(0x9601);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4BE3AD16BD242A9E__CCTOR_OFFSET))();
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_4BE3AD16BD242A9E_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4BE3AD16BD242A9E_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4BE3AD16BD242A9E_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_4BE3AD16BD242A9E_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_4BE3AD16BD242A9E_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_08649C2797B37F9D(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_4BE3AD16BD242A9E_METHOD_1_08649C2797B37F9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_112ED7310805994A(::RPG::GameCore::TextDanmuContentRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::TextDanmuContentRow*))((::PBYTE)hIl2Cpp + CLASS_1_4BE3AD16BD242A9E_METHOD_1_112ED7310805994A_OFFSET))(a1);
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TextDanmuContentRow*>* Method_1_AA49CE97ACA4360E()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TextDanmuContentRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_4BE3AD16BD242A9E_METHOD_1_AA49CE97ACA4360E_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_4BE3AD16BD242A9E_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TextDanmuContentRow*> Method_1_FBE18CD24C888907()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TextDanmuContentRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_4BE3AD16BD242A9E_METHOD_1_FBE18CD24C888907_OFFSET))();
	}

	static ::RPG::GameCore::TextDanmuContentRow* Method_1_EB9F63C5BCB11CCF(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::TextDanmuContentRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4BE3AD16BD242A9E_METHOD_1_EB9F63C5BCB11CCF_OFFSET))(a1);
	}
};
