#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ActivityRaidSpecialOrderRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_BF9F8059F503529F_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x16BDCD90)
#define CLASS_1_BF9F8059F503529F_METHOD_1_19D671DD909699F3_OFFSET UNITYSDK_OFFSET(0x16BDCDE0)
#define CLASS_1_BF9F8059F503529F_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x16BDCBB0)
#define CLASS_1_BF9F8059F503529F_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x16BDC540)
#define CLASS_1_BF9F8059F503529F_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x16BDCC50)
#define CLASS_1_BF9F8059F503529F_METHOD_1_B88C103AF62A9007_OFFSET UNITYSDK_OFFSET(0x16BDC4C0)
#define CLASS_1_BF9F8059F503529F_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x16BDC790)
#define CLASS_1_BF9F8059F503529F_METHOD_1_E1B8ED3E11946F07_OFFSET UNITYSDK_OFFSET(0x16BDC9A0)
#define CLASS_1_BF9F8059F503529F_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x16BDCB70)
#define CLASS_1_BF9F8059F503529F_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x16BDCCF0)
#define CLASS_1_BF9F8059F503529F_METHOD_1_F49C778531704B08_OFFSET UNITYSDK_OFFSET(0x16BDC7F0)
#define CLASS_1_BF9F8059F503529F__CCTOR_OFFSET UNITYSDK_OFFSET(0x16BDD140)

inline static constexpr unsigned int Class_1_BF9F8059F503529F_TypeDefinitionIndex = 11539;

class Class_1_BF9F8059F503529F : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_BF9F8059F503529F_TypeDefinitionIndex)->GetStaticField(0x284C0);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_BF9F8059F503529F_TypeDefinitionIndex)->GetStaticField(0x284C8);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityRaidSpecialOrderRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityRaidSpecialOrderRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_BF9F8059F503529F_TypeDefinitionIndex)->GetStaticField(0x284D0);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_BF9F8059F503529F_TypeDefinitionIndex)->GetStaticField(0xD410);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_BF9F8059F503529F_TypeDefinitionIndex)->GetStaticField(0xD411);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_BF9F8059F503529F__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityRaidSpecialOrderRow*>* Method_1_B88C103AF62A9007()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityRaidSpecialOrderRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_BF9F8059F503529F_METHOD_1_B88C103AF62A9007_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_BF9F8059F503529F_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityRaidSpecialOrderRow*> Method_1_F49C778531704B08()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityRaidSpecialOrderRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_BF9F8059F503529F_METHOD_1_F49C778531704B08_OFFSET))();
	}

	static ::RPG::GameCore::ActivityRaidSpecialOrderRow* Method_1_E1B8ED3E11946F07(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::ActivityRaidSpecialOrderRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_BF9F8059F503529F_METHOD_1_E1B8ED3E11946F07_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_BF9F8059F503529F_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_BF9F8059F503529F_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_BF9F8059F503529F_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_BF9F8059F503529F_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_BF9F8059F503529F_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_BF9F8059F503529F_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_19D671DD909699F3(::RPG::GameCore::ActivityRaidSpecialOrderRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::ActivityRaidSpecialOrderRow*))((::PBYTE)hIl2Cpp + CLASS_1_BF9F8059F503529F_METHOD_1_19D671DD909699F3_OFFSET))(a1);
	}
};
