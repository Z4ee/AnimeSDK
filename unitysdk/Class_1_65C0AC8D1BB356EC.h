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

#define CLASS_1_65C0AC8D1BB356EC_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x191BFE40)
#define CLASS_1_65C0AC8D1BB356EC_METHOD_1_51C90BAB310878E0_OFFSET UNITYSDK_OFFSET(0x191BF620)
#define CLASS_1_65C0AC8D1BB356EC_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x191BFC70)
#define CLASS_1_65C0AC8D1BB356EC_METHOD_1_A32CC34A29607C75_OFFSET UNITYSDK_OFFSET(0x191BFAA0)
#define CLASS_1_65C0AC8D1BB356EC_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x191BFD00)
#define CLASS_1_65C0AC8D1BB356EC_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x191BF8D0)
#define CLASS_1_65C0AC8D1BB356EC_METHOD_1_DDA025911F6A04FC_OFFSET UNITYSDK_OFFSET(0x191BFE90)
#define CLASS_1_65C0AC8D1BB356EC_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x191BF6A0)
#define CLASS_1_65C0AC8D1BB356EC_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x191BFC30)
#define CLASS_1_65C0AC8D1BB356EC_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x191BFDA0)
#define CLASS_1_65C0AC8D1BB356EC_METHOD_1_FCE043B69DC88DDD_OFFSET UNITYSDK_OFFSET(0x191BF930)
#define CLASS_1_65C0AC8D1BB356EC__CCTOR_OFFSET UNITYSDK_OFFSET(0x191C0200)

inline static constexpr unsigned int Class_1_65C0AC8D1BB356EC_TypeDefinitionIndex = 13075;

class Class_1_65C0AC8D1BB356EC : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeartDialConditionRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeartDialConditionRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_65C0AC8D1BB356EC_TypeDefinitionIndex)->GetStaticField(0x4DAD0);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_1()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_65C0AC8D1BB356EC_TypeDefinitionIndex)->GetStaticField(0x4DAD8);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_2()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_65C0AC8D1BB356EC_TypeDefinitionIndex)->GetStaticField(0x4DAE0);
	}
	static ::System::Boolean* StaticGet_Field_1_3()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_65C0AC8D1BB356EC_TypeDefinitionIndex)->GetStaticField(0xEE80);
	}
	static ::System::Byte* StaticGet_Field_1_4()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_65C0AC8D1BB356EC_TypeDefinitionIndex)->GetStaticField(0xEE81);
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
