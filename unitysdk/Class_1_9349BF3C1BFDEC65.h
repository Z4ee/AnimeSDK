#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/GameCore/GridFightTraitBonusType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class GridFightTraitBonusConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_9349BF3C1BFDEC65_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x1C787BE0)
#define CLASS_1_9349BF3C1BFDEC65_METHOD_1_4712BEDA6E78711D_OFFSET UNITYSDK_OFFSET(0x1C787650)
#define CLASS_1_9349BF3C1BFDEC65_METHOD_1_6A006D4D10A7C4CC_OFFSET UNITYSDK_OFFSET(0x1C788000)
#define CLASS_1_9349BF3C1BFDEC65_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1C787A10)
#define CLASS_1_9349BF3C1BFDEC65_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1C787AA0)
#define CLASS_1_9349BF3C1BFDEC65_METHOD_1_C5C04DC25A1368F4_OFFSET UNITYSDK_OFFSET(0x1C787340)
#define CLASS_1_9349BF3C1BFDEC65_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1C7875F0)
#define CLASS_1_9349BF3C1BFDEC65_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1C7873C0)
#define CLASS_1_9349BF3C1BFDEC65_METHOD_1_E28A41704B1587B8_OFFSET UNITYSDK_OFFSET(0x1C787C30)
#define CLASS_1_9349BF3C1BFDEC65_METHOD_1_E51A89118BBCB9DB_OFFSET UNITYSDK_OFFSET(0x1C7877C0)
#define CLASS_1_9349BF3C1BFDEC65_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1C7879D0)
#define CLASS_1_9349BF3C1BFDEC65_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1C787B40)
#define CLASS_1_9349BF3C1BFDEC65__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C788650)

inline static constexpr unsigned int Class_1_9349BF3C1BFDEC65_TypeDefinitionIndex = 13574;

class Class_1_9349BF3C1BFDEC65 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTraitBonusConfigRow*>** StaticGet_EHNHPCGDOIO()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTraitBonusConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9349BF3C1BFDEC65_TypeDefinitionIndex)->GetStaticField(0x34B0);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9349BF3C1BFDEC65_TypeDefinitionIndex)->GetStaticField(0x34B8);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>** StaticGet_LKLFLPPKLKK()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9349BF3C1BFDEC65_TypeDefinitionIndex)->GetStaticField(0x34C0);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_MPCODIGIBGL()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9349BF3C1BFDEC65_TypeDefinitionIndex)->GetStaticField(0x34C8);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::System::Collections::Generic::List_1<::System::UInt32>*>** StaticGet_NMGKDLKIBIJ()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::System::Collections::Generic::List_1<::System::UInt32>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9349BF3C1BFDEC65_TypeDefinitionIndex)->GetStaticField(0x34D0);
	}
	static ::System::Boolean* StaticGet_AHBLLGCADBB()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_9349BF3C1BFDEC65_TypeDefinitionIndex)->GetStaticField(0x1280);
	}
	static ::System::Byte* StaticGet_GDMLAIBCKIP()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_9349BF3C1BFDEC65_TypeDefinitionIndex)->GetStaticField(0x1281);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_9349BF3C1BFDEC65__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTraitBonusConfigRow*>* Method_1_C5C04DC25A1368F4()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTraitBonusConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_9349BF3C1BFDEC65_METHOD_1_C5C04DC25A1368F4_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_9349BF3C1BFDEC65_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTraitBonusConfigRow*> Method_1_4712BEDA6E78711D()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTraitBonusConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_9349BF3C1BFDEC65_METHOD_1_4712BEDA6E78711D_OFFSET))();
	}

	static ::RPG::GameCore::GridFightTraitBonusConfigRow* Method_1_E51A89118BBCB9DB(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::GameCore::GridFightTraitBonusType a3)
	{
		return ((::RPG::GameCore::GridFightTraitBonusConfigRow*(*)(::System::UInt32, ::System::UInt32, ::RPG::GameCore::GridFightTraitBonusType))((::PBYTE)hIl2Cpp + CLASS_1_9349BF3C1BFDEC65_METHOD_1_E51A89118BBCB9DB_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_9349BF3C1BFDEC65_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_9349BF3C1BFDEC65_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_9349BF3C1BFDEC65_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_9349BF3C1BFDEC65_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_9349BF3C1BFDEC65_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_9349BF3C1BFDEC65_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_E28A41704B1587B8(::RPG::GameCore::GridFightTraitBonusConfigRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::GridFightTraitBonusConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_9349BF3C1BFDEC65_METHOD_1_E28A41704B1587B8_OFFSET))(a1);
	}

	static ::System::Collections::Generic::List_1<::System::UInt32>* Method_1_6A006D4D10A7C4CC(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_9349BF3C1BFDEC65_METHOD_1_6A006D4D10A7C4CC_OFFSET))(a1, a2);
	}
};
