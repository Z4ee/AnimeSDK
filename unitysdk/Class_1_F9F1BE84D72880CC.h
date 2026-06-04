#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MonopolyGoodsConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_F9F1BE84D72880CC_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x19D66270)
#define CLASS_1_F9F1BE84D72880CC_METHOD_1_756ABBAF9437FE75_OFFSET UNITYSDK_OFFSET(0x19D65D60)
#define CLASS_1_F9F1BE84D72880CC_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x19D660A0)
#define CLASS_1_F9F1BE84D72880CC_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x19D66130)
#define CLASS_1_F9F1BE84D72880CC_METHOD_1_B1D7A81368B76C78_OFFSET UNITYSDK_OFFSET(0x19D65A50)
#define CLASS_1_F9F1BE84D72880CC_METHOD_1_C9E6021D0C74B3F5_OFFSET UNITYSDK_OFFSET(0x19D65ED0)
#define CLASS_1_F9F1BE84D72880CC_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x19D65D00)
#define CLASS_1_F9F1BE84D72880CC_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x19D65AD0)
#define CLASS_1_F9F1BE84D72880CC_METHOD_1_E82497C92767025C_OFFSET UNITYSDK_OFFSET(0x19D662C0)
#define CLASS_1_F9F1BE84D72880CC_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x19D66060)
#define CLASS_1_F9F1BE84D72880CC_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x19D661D0)
#define CLASS_1_F9F1BE84D72880CC__CCTOR_OFFSET UNITYSDK_OFFSET(0x19D66630)

inline static constexpr unsigned int Class_1_F9F1BE84D72880CC_TypeDefinitionIndex = 11481;

class Class_1_F9F1BE84D72880CC : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonopolyGoodsConfigRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonopolyGoodsConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F9F1BE84D72880CC_TypeDefinitionIndex)->GetStaticField(0x4BF10);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_1()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F9F1BE84D72880CC_TypeDefinitionIndex)->GetStaticField(0x4BF18);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_2()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F9F1BE84D72880CC_TypeDefinitionIndex)->GetStaticField(0x4BF20);
	}
	static ::System::Boolean* StaticGet_Field_1_3()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_F9F1BE84D72880CC_TypeDefinitionIndex)->GetStaticField(0xE640);
	}
	static ::System::Byte* StaticGet_Field_1_4()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_F9F1BE84D72880CC_TypeDefinitionIndex)->GetStaticField(0xE641);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F9F1BE84D72880CC__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonopolyGoodsConfigRow*>* Method_1_B1D7A81368B76C78()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonopolyGoodsConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_F9F1BE84D72880CC_METHOD_1_B1D7A81368B76C78_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_F9F1BE84D72880CC_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonopolyGoodsConfigRow*> Method_1_756ABBAF9437FE75()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonopolyGoodsConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_F9F1BE84D72880CC_METHOD_1_756ABBAF9437FE75_OFFSET))();
	}

	static ::RPG::GameCore::MonopolyGoodsConfigRow* Method_1_C9E6021D0C74B3F5(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::MonopolyGoodsConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F9F1BE84D72880CC_METHOD_1_C9E6021D0C74B3F5_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_F9F1BE84D72880CC_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F9F1BE84D72880CC_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F9F1BE84D72880CC_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F9F1BE84D72880CC_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_F9F1BE84D72880CC_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_F9F1BE84D72880CC_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_E82497C92767025C(::RPG::GameCore::MonopolyGoodsConfigRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::MonopolyGoodsConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_F9F1BE84D72880CC_METHOD_1_E82497C92767025C_OFFSET))(a1);
	}
};
