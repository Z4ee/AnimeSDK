#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/ZLinq/FromFixEnumerator_2.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ZLinq/ValueEnumerable_2.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class GridFightTraitBaseConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define CLASS_1_87694247BDED5E2E_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x1926C0B0)
#define CLASS_1_87694247BDED5E2E_METHOD_1_4DB85C0799DC8893_OFFSET UNITYSDK_OFFSET(0x1926C100)
#define CLASS_1_87694247BDED5E2E_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1926BEE0)
#define CLASS_1_87694247BDED5E2E_METHOD_1_916D2D9B3CA1F5A3_OFFSET UNITYSDK_OFFSET(0x1926B8D0)
#define CLASS_1_87694247BDED5E2E_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1926BF70)
#define CLASS_1_87694247BDED5E2E_METHOD_1_B72E207BA59F87E6_OFFSET UNITYSDK_OFFSET(0x1926B5C0)
#define CLASS_1_87694247BDED5E2E_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1926B870)
#define CLASS_1_87694247BDED5E2E_METHOD_1_D6017E2E32EB7D1E_OFFSET UNITYSDK_OFFSET(0x1926BC10)
#define CLASS_1_87694247BDED5E2E_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1926B640)
#define CLASS_1_87694247BDED5E2E_METHOD_1_E341DF7F1918FF41_OFFSET UNITYSDK_OFFSET(0x1926BAC0)
#define CLASS_1_87694247BDED5E2E_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1926BEA0)
#define CLASS_1_87694247BDED5E2E_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1926C010)
#define CLASS_1_87694247BDED5E2E_METHOD_1_F6523851B0686207_OFFSET UNITYSDK_OFFSET(0x1926BA40)
#define CLASS_1_87694247BDED5E2E__CCTOR_OFFSET UNITYSDK_OFFSET(0x1926C430)

inline static constexpr unsigned int Class_1_87694247BDED5E2E_TypeDefinitionIndex = 13020;

class Class_1_87694247BDED5E2E : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_0()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_87694247BDED5E2E_TypeDefinitionIndex)->GetStaticField(0x52650);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTraitBaseConfigRow*>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTraitBaseConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_87694247BDED5E2E_TypeDefinitionIndex)->GetStaticField(0x52658);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_2()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_87694247BDED5E2E_TypeDefinitionIndex)->GetStaticField(0x52660);
	}
	static ::System::Boolean* StaticGet_Field_1_3()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_87694247BDED5E2E_TypeDefinitionIndex)->GetStaticField(0x10390);
	}
	static ::System::Byte* StaticGet_Field_1_4()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_87694247BDED5E2E_TypeDefinitionIndex)->GetStaticField(0x10391);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_87694247BDED5E2E__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTraitBaseConfigRow*>* Method_1_B72E207BA59F87E6()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTraitBaseConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_87694247BDED5E2E_METHOD_1_B72E207BA59F87E6_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_87694247BDED5E2E_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTraitBaseConfigRow*> Method_1_916D2D9B3CA1F5A3()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTraitBaseConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_87694247BDED5E2E_METHOD_1_916D2D9B3CA1F5A3_OFFSET))();
	}

	static ::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTraitBaseConfigRow*>, ::RPG::GameCore::GridFightTraitBaseConfigRow*> Method_1_F6523851B0686207()
	{
		return ((::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTraitBaseConfigRow*>, ::RPG::GameCore::GridFightTraitBaseConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_87694247BDED5E2E_METHOD_1_F6523851B0686207_OFFSET))();
	}

	static ::RPG::GameCore::GridFightTraitBaseConfigRow* Method_1_E341DF7F1918FF41(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::GridFightTraitBaseConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_87694247BDED5E2E_METHOD_1_E341DF7F1918FF41_OFFSET))(a1);
	}

	static ::System::Collections::Generic::IList_1<::RPG::GameCore::GridFightTraitBaseConfigRow*>* Method_1_D6017E2E32EB7D1E(::System::UInt32 a1)
	{
		return ((::System::Collections::Generic::IList_1<::RPG::GameCore::GridFightTraitBaseConfigRow*>*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_87694247BDED5E2E_METHOD_1_D6017E2E32EB7D1E_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_87694247BDED5E2E_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_87694247BDED5E2E_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_87694247BDED5E2E_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_87694247BDED5E2E_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_87694247BDED5E2E_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_87694247BDED5E2E_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_4DB85C0799DC8893(::RPG::GameCore::GridFightTraitBaseConfigRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::GridFightTraitBaseConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_87694247BDED5E2E_METHOD_1_4DB85C0799DC8893_OFFSET))(a1);
	}
};
