#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DrinkMakerCheersFormulaRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_AE057FBDCE8D00C3_METHOD_1_02BF68E34FD24771_OFFSET UNITYSDK_OFFSET(0x16C18480)
#define CLASS_1_AE057FBDCE8D00C3_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x16C18430)
#define CLASS_1_AE057FBDCE8D00C3_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x16C18250)
#define CLASS_1_AE057FBDCE8D00C3_METHOD_1_386C806E1520D4F5_OFFSET UNITYSDK_OFFSET(0x16C18040)
#define CLASS_1_AE057FBDCE8D00C3_METHOD_1_5E2E732404D2CC8C_OFFSET UNITYSDK_OFFSET(0x16C17E90)
#define CLASS_1_AE057FBDCE8D00C3_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x16C17BE0)
#define CLASS_1_AE057FBDCE8D00C3_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x16C182F0)
#define CLASS_1_AE057FBDCE8D00C3_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x16C17E30)
#define CLASS_1_AE057FBDCE8D00C3_METHOD_1_D43E8F4067FF84EB_OFFSET UNITYSDK_OFFSET(0x16C17B60)
#define CLASS_1_AE057FBDCE8D00C3_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x16C18210)
#define CLASS_1_AE057FBDCE8D00C3_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x16C18390)
#define CLASS_1_AE057FBDCE8D00C3__CCTOR_OFFSET UNITYSDK_OFFSET(0x16C187E0)

inline static constexpr unsigned int Class_1_AE057FBDCE8D00C3_TypeDefinitionIndex = 12043;

class Class_1_AE057FBDCE8D00C3 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerCheersFormulaRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerCheersFormulaRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_AE057FBDCE8D00C3_TypeDefinitionIndex)->GetStaticField(0x29E30);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_AE057FBDCE8D00C3_TypeDefinitionIndex)->GetStaticField(0x29E38);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_AE057FBDCE8D00C3_TypeDefinitionIndex)->GetStaticField(0x29E40);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_AE057FBDCE8D00C3_TypeDefinitionIndex)->GetStaticField(0xDCE0);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_AE057FBDCE8D00C3_TypeDefinitionIndex)->GetStaticField(0xDCE1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_AE057FBDCE8D00C3__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerCheersFormulaRow*>* Method_1_D43E8F4067FF84EB()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerCheersFormulaRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_AE057FBDCE8D00C3_METHOD_1_D43E8F4067FF84EB_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_AE057FBDCE8D00C3_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerCheersFormulaRow*> Method_1_5E2E732404D2CC8C()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerCheersFormulaRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_AE057FBDCE8D00C3_METHOD_1_5E2E732404D2CC8C_OFFSET))();
	}

	static ::RPG::GameCore::DrinkMakerCheersFormulaRow* Method_1_386C806E1520D4F5(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::DrinkMakerCheersFormulaRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_AE057FBDCE8D00C3_METHOD_1_386C806E1520D4F5_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_AE057FBDCE8D00C3_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_AE057FBDCE8D00C3_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_AE057FBDCE8D00C3_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_AE057FBDCE8D00C3_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_AE057FBDCE8D00C3_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_AE057FBDCE8D00C3_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_02BF68E34FD24771(::RPG::GameCore::DrinkMakerCheersFormulaRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::DrinkMakerCheersFormulaRow*))((::PBYTE)hIl2Cpp + CLASS_1_AE057FBDCE8D00C3_METHOD_1_02BF68E34FD24771_OFFSET))(a1);
	}
};
