#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class HeartDialConditionRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_65C0AC8D1BB356EC_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x1AF91460)
#define CLASS_1_65C0AC8D1BB356EC_METHOD_1_51C90BAB310878E0_OFFSET UNITYSDK_OFFSET(0x1AF90C40)
#define CLASS_1_65C0AC8D1BB356EC_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1AF91290)
#define CLASS_1_65C0AC8D1BB356EC_METHOD_1_A32CC34A29607C75_OFFSET UNITYSDK_OFFSET(0x1AF910C0)
#define CLASS_1_65C0AC8D1BB356EC_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1AF91320)
#define CLASS_1_65C0AC8D1BB356EC_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1AF90EF0)
#define CLASS_1_65C0AC8D1BB356EC_METHOD_1_DDA025911F6A04FC_OFFSET UNITYSDK_OFFSET(0x1AF914B0)
#define CLASS_1_65C0AC8D1BB356EC_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1AF90CC0)
#define CLASS_1_65C0AC8D1BB356EC_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1AF91250)
#define CLASS_1_65C0AC8D1BB356EC_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1AF913C0)
#define CLASS_1_65C0AC8D1BB356EC_METHOD_1_FCE043B69DC88DDD_OFFSET UNITYSDK_OFFSET(0x1AF90F50)
#define CLASS_1_65C0AC8D1BB356EC__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AF91820)

inline static constexpr unsigned int Class_1_65C0AC8D1BB356EC_TypeDefinitionIndex = 13225;

class Class_1_65C0AC8D1BB356EC : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeartDialConditionRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeartDialConditionRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_65C0AC8D1BB356EC_TypeDefinitionIndex)->GetStaticField(0x67210);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_1()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_65C0AC8D1BB356EC_TypeDefinitionIndex)->GetStaticField(0x67218);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_2()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_65C0AC8D1BB356EC_TypeDefinitionIndex)->GetStaticField(0x67220);
	}
	static ::System::Byte* StaticGet_Field_1_3()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_65C0AC8D1BB356EC_TypeDefinitionIndex)->GetStaticField(0x13EF0);
	}
	static ::System::Boolean* StaticGet_Field_1_4()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_65C0AC8D1BB356EC_TypeDefinitionIndex)->GetStaticField(0x13EF1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_65C0AC8D1BB356EC__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeartDialConditionRow*>* Method_1_51C90BAB310878E0()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeartDialConditionRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_65C0AC8D1BB356EC_METHOD_1_51C90BAB310878E0_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_65C0AC8D1BB356EC_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeartDialConditionRow*> Method_1_FCE043B69DC88DDD()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeartDialConditionRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_65C0AC8D1BB356EC_METHOD_1_FCE043B69DC88DDD_OFFSET))();
	}

	static ::RPG::GameCore::HeartDialConditionRow* Method_1_A32CC34A29607C75(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::HeartDialConditionRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_65C0AC8D1BB356EC_METHOD_1_A32CC34A29607C75_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_65C0AC8D1BB356EC_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_65C0AC8D1BB356EC_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_65C0AC8D1BB356EC_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_65C0AC8D1BB356EC_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_65C0AC8D1BB356EC_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_65C0AC8D1BB356EC_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_DDA025911F6A04FC(::RPG::GameCore::HeartDialConditionRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::HeartDialConditionRow*))((::PBYTE)hIl2Cpp + CLASS_1_65C0AC8D1BB356EC_METHOD_1_DDA025911F6A04FC_OFFSET))(a1);
	}
};
