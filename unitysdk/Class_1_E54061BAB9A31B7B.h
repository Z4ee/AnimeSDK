#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RestaurantQuestGroupRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_E54061BAB9A31B7B_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x184386C0)
#define CLASS_1_E54061BAB9A31B7B_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x184384E0)
#define CLASS_1_E54061BAB9A31B7B_METHOD_1_3A9D58475E9E4EAF_OFFSET UNITYSDK_OFFSET(0x184381A0)
#define CLASS_1_E54061BAB9A31B7B_METHOD_1_671F304E97959AEB_OFFSET UNITYSDK_OFFSET(0x18437E70)
#define CLASS_1_E54061BAB9A31B7B_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x18437EF0)
#define CLASS_1_E54061BAB9A31B7B_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x18438580)
#define CLASS_1_E54061BAB9A31B7B_METHOD_1_C4DA362BDAA51744_OFFSET UNITYSDK_OFFSET(0x18438320)
#define CLASS_1_E54061BAB9A31B7B_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x18438140)
#define CLASS_1_E54061BAB9A31B7B_METHOD_1_D57BF8F009973A50_OFFSET UNITYSDK_OFFSET(0x18438710)
#define CLASS_1_E54061BAB9A31B7B_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x184384A0)
#define CLASS_1_E54061BAB9A31B7B_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x18438620)
#define CLASS_1_E54061BAB9A31B7B__CCTOR_OFFSET UNITYSDK_OFFSET(0x18438A20)

inline static constexpr unsigned int Class_1_E54061BAB9A31B7B_TypeDefinitionIndex = 10898;

class Class_1_E54061BAB9A31B7B : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E54061BAB9A31B7B_TypeDefinitionIndex)->GetStaticField(0x29B70);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantQuestGroupRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantQuestGroupRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E54061BAB9A31B7B_TypeDefinitionIndex)->GetStaticField(0x29B78);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E54061BAB9A31B7B_TypeDefinitionIndex)->GetStaticField(0x29B80);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_E54061BAB9A31B7B_TypeDefinitionIndex)->GetStaticField(0xB210);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_E54061BAB9A31B7B_TypeDefinitionIndex)->GetStaticField(0xB211);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_E54061BAB9A31B7B__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantQuestGroupRow*>* Method_1_671F304E97959AEB()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantQuestGroupRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_E54061BAB9A31B7B_METHOD_1_671F304E97959AEB_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_E54061BAB9A31B7B_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantQuestGroupRow*> Method_1_3A9D58475E9E4EAF()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantQuestGroupRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_E54061BAB9A31B7B_METHOD_1_3A9D58475E9E4EAF_OFFSET))();
	}

	static ::RPG::GameCore::RestaurantQuestGroupRow* Method_1_C4DA362BDAA51744(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::RestaurantQuestGroupRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_E54061BAB9A31B7B_METHOD_1_C4DA362BDAA51744_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_E54061BAB9A31B7B_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_E54061BAB9A31B7B_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_E54061BAB9A31B7B_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_E54061BAB9A31B7B_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_E54061BAB9A31B7B_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_E54061BAB9A31B7B_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_D57BF8F009973A50(::RPG::GameCore::RestaurantQuestGroupRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::RestaurantQuestGroupRow*))((::PBYTE)hIl2Cpp + CLASS_1_E54061BAB9A31B7B_METHOD_1_D57BF8F009973A50_OFFSET))(a1);
	}
};
