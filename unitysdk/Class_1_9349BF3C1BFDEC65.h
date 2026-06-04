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

#define CLASS_1_9349BF3C1BFDEC65_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x19786B30)
#define CLASS_1_9349BF3C1BFDEC65_METHOD_1_4712BEDA6E78711D_OFFSET UNITYSDK_OFFSET(0x197865A0)
#define CLASS_1_9349BF3C1BFDEC65_METHOD_1_6A006D4D10A7C4CC_OFFSET UNITYSDK_OFFSET(0x19786F50)
#define CLASS_1_9349BF3C1BFDEC65_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x19786960)
#define CLASS_1_9349BF3C1BFDEC65_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x197869F0)
#define CLASS_1_9349BF3C1BFDEC65_METHOD_1_C5C04DC25A1368F4_OFFSET UNITYSDK_OFFSET(0x19786290)
#define CLASS_1_9349BF3C1BFDEC65_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x19786540)
#define CLASS_1_9349BF3C1BFDEC65_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x19786310)
#define CLASS_1_9349BF3C1BFDEC65_METHOD_1_E28A41704B1587B8_OFFSET UNITYSDK_OFFSET(0x19786B80)
#define CLASS_1_9349BF3C1BFDEC65_METHOD_1_E51A89118BBCB9DB_OFFSET UNITYSDK_OFFSET(0x19786710)
#define CLASS_1_9349BF3C1BFDEC65_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x19786920)
#define CLASS_1_9349BF3C1BFDEC65_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x19786A90)
#define CLASS_1_9349BF3C1BFDEC65__CCTOR_OFFSET UNITYSDK_OFFSET(0x197875A0)

inline static constexpr unsigned int Class_1_9349BF3C1BFDEC65_TypeDefinitionIndex = 13035;

class Class_1_9349BF3C1BFDEC65 : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_0()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9349BF3C1BFDEC65_TypeDefinitionIndex)->GetStaticField(0x45860);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTraitBonusConfigRow*>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTraitBonusConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9349BF3C1BFDEC65_TypeDefinitionIndex)->GetStaticField(0x45868);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>** StaticGet_Field_1_2()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9349BF3C1BFDEC65_TypeDefinitionIndex)->GetStaticField(0x45870);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_3()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9349BF3C1BFDEC65_TypeDefinitionIndex)->GetStaticField(0x45878);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::System::Collections::Generic::List_1<::System::UInt32>*>** StaticGet_Field_1_4()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::System::Collections::Generic::List_1<::System::UInt32>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9349BF3C1BFDEC65_TypeDefinitionIndex)->GetStaticField(0x45880);
	}
	static ::System::Boolean* StaticGet_Field_1_5()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_9349BF3C1BFDEC65_TypeDefinitionIndex)->GetStaticField(0xC810);
	}
	static ::System::Byte* StaticGet_Field_1_6()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_9349BF3C1BFDEC65_TypeDefinitionIndex)->GetStaticField(0xC811);
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
