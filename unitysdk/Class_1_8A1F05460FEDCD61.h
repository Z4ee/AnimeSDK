#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FreeStyleCharacterInfoConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_8A1F05460FEDCD61_METHOD_1_13696A527CD9CA86_OFFSET UNITYSDK_OFFSET(0x191556A0)
#define CLASS_1_8A1F05460FEDCD61_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x191554C0)
#define CLASS_1_8A1F05460FEDCD61_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x19154E70)
#define CLASS_1_8A1F05460FEDCD61_METHOD_1_9277C5796B7A630A_OFFSET UNITYSDK_OFFSET(0x191556F0)
#define CLASS_1_8A1F05460FEDCD61_METHOD_1_A7331DB2E0D9FFFD_OFFSET UNITYSDK_OFFSET(0x191552D0)
#define CLASS_1_8A1F05460FEDCD61_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x19155560)
#define CLASS_1_8A1F05460FEDCD61_METHOD_1_BE3E56D88D63C85D_OFFSET UNITYSDK_OFFSET(0x19154DF0)
#define CLASS_1_8A1F05460FEDCD61_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x191550C0)
#define CLASS_1_8A1F05460FEDCD61_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x19155480)
#define CLASS_1_8A1F05460FEDCD61_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x19155600)
#define CLASS_1_8A1F05460FEDCD61_METHOD_1_F702AF3549167E7E_OFFSET UNITYSDK_OFFSET(0x19155120)
#define CLASS_1_8A1F05460FEDCD61__CCTOR_OFFSET UNITYSDK_OFFSET(0x19155A00)

inline static constexpr unsigned int Class_1_8A1F05460FEDCD61_TypeDefinitionIndex = 12577;

class Class_1_8A1F05460FEDCD61 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FreeStyleCharacterInfoConfigRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FreeStyleCharacterInfoConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8A1F05460FEDCD61_TypeDefinitionIndex)->GetStaticField(0x41980);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8A1F05460FEDCD61_TypeDefinitionIndex)->GetStaticField(0x41988);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8A1F05460FEDCD61_TypeDefinitionIndex)->GetStaticField(0x41990);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_8A1F05460FEDCD61_TypeDefinitionIndex)->GetStaticField(0xEBB0);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_8A1F05460FEDCD61_TypeDefinitionIndex)->GetStaticField(0xEBB1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8A1F05460FEDCD61__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FreeStyleCharacterInfoConfigRow*>* Method_1_BE3E56D88D63C85D()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FreeStyleCharacterInfoConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_8A1F05460FEDCD61_METHOD_1_BE3E56D88D63C85D_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_8A1F05460FEDCD61_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FreeStyleCharacterInfoConfigRow*> Method_1_F702AF3549167E7E()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FreeStyleCharacterInfoConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_8A1F05460FEDCD61_METHOD_1_F702AF3549167E7E_OFFSET))();
	}

	static ::RPG::GameCore::FreeStyleCharacterInfoConfigRow* Method_1_A7331DB2E0D9FFFD(::System::String* a1)
	{
		return ((::RPG::GameCore::FreeStyleCharacterInfoConfigRow*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_8A1F05460FEDCD61_METHOD_1_A7331DB2E0D9FFFD_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_8A1F05460FEDCD61_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8A1F05460FEDCD61_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8A1F05460FEDCD61_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_8A1F05460FEDCD61_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_8A1F05460FEDCD61_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_13696A527CD9CA86(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_8A1F05460FEDCD61_METHOD_1_13696A527CD9CA86_OFFSET))(a1);
	}

	static ::System::Void Method_1_9277C5796B7A630A(::RPG::GameCore::FreeStyleCharacterInfoConfigRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::FreeStyleCharacterInfoConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_8A1F05460FEDCD61_METHOD_1_9277C5796B7A630A_OFFSET))(a1);
	}
};
