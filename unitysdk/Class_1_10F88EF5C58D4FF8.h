#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RogueDLCSubStoryGroupRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_10F88EF5C58D4FF8_METHOD_1_0BA66D7BEEE270D3_OFFSET UNITYSDK_OFFSET(0x16C18E00)
#define CLASS_1_10F88EF5C58D4FF8_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x16C191A0)
#define CLASS_1_10F88EF5C58D4FF8_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x16C18FC0)
#define CLASS_1_10F88EF5C58D4FF8_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x16C189A0)
#define CLASS_1_10F88EF5C58D4FF8_METHOD_1_985AA58143C0EC0C_OFFSET UNITYSDK_OFFSET(0x16C18920)
#define CLASS_1_10F88EF5C58D4FF8_METHOD_1_9AF6B7C82A75EBC9_OFFSET UNITYSDK_OFFSET(0x16C191F0)
#define CLASS_1_10F88EF5C58D4FF8_METHOD_1_A65800CFEED55361_OFFSET UNITYSDK_OFFSET(0x16C18C50)
#define CLASS_1_10F88EF5C58D4FF8_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x16C19060)
#define CLASS_1_10F88EF5C58D4FF8_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x16C18BF0)
#define CLASS_1_10F88EF5C58D4FF8_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x16C18F80)
#define CLASS_1_10F88EF5C58D4FF8_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x16C19100)
#define CLASS_1_10F88EF5C58D4FF8__CCTOR_OFFSET UNITYSDK_OFFSET(0x16C19500)

inline static constexpr unsigned int Class_1_10F88EF5C58D4FF8_TypeDefinitionIndex = 13528;

class Class_1_10F88EF5C58D4FF8 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCSubStoryGroupRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCSubStoryGroupRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_10F88EF5C58D4FF8_TypeDefinitionIndex)->GetStaticField(0x29E80);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_10F88EF5C58D4FF8_TypeDefinitionIndex)->GetStaticField(0x29E88);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_10F88EF5C58D4FF8_TypeDefinitionIndex)->GetStaticField(0x29E90);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_10F88EF5C58D4FF8_TypeDefinitionIndex)->GetStaticField(0xDCF0);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_10F88EF5C58D4FF8_TypeDefinitionIndex)->GetStaticField(0xDCF1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_10F88EF5C58D4FF8__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCSubStoryGroupRow*>* Method_1_985AA58143C0EC0C()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCSubStoryGroupRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_10F88EF5C58D4FF8_METHOD_1_985AA58143C0EC0C_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_10F88EF5C58D4FF8_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCSubStoryGroupRow*> Method_1_A65800CFEED55361()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCSubStoryGroupRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_10F88EF5C58D4FF8_METHOD_1_A65800CFEED55361_OFFSET))();
	}

	static ::RPG::GameCore::RogueDLCSubStoryGroupRow* Method_1_0BA66D7BEEE270D3(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::RogueDLCSubStoryGroupRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_10F88EF5C58D4FF8_METHOD_1_0BA66D7BEEE270D3_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_10F88EF5C58D4FF8_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_10F88EF5C58D4FF8_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_10F88EF5C58D4FF8_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_10F88EF5C58D4FF8_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_10F88EF5C58D4FF8_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_10F88EF5C58D4FF8_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_9AF6B7C82A75EBC9(::RPG::GameCore::RogueDLCSubStoryGroupRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::RogueDLCSubStoryGroupRow*))((::PBYTE)hIl2Cpp + CLASS_1_10F88EF5C58D4FF8_METHOD_1_9AF6B7C82A75EBC9_OFFSET))(a1);
	}
};
