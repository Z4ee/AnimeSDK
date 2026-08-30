#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DailyQuestRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_A43ECDE612AE08D2_METHOD_1_06FF15BBB9E2233A_OFFSET UNITYSDK_OFFSET(0x1CCF9A80)
#define CLASS_1_A43ECDE612AE08D2_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x1CCFA2A0)
#define CLASS_1_A43ECDE612AE08D2_METHOD_1_0EF5EA9182AD8603_OFFSET UNITYSDK_OFFSET(0x1CCF9F00)
#define CLASS_1_A43ECDE612AE08D2_METHOD_1_3B26FFE39C494FE3_OFFSET UNITYSDK_OFFSET(0x1CCF9D90)
#define CLASS_1_A43ECDE612AE08D2_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1CCFA0D0)
#define CLASS_1_A43ECDE612AE08D2_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1CCFA160)
#define CLASS_1_A43ECDE612AE08D2_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1CCF9D30)
#define CLASS_1_A43ECDE612AE08D2_METHOD_1_CF49F9155374C646_OFFSET UNITYSDK_OFFSET(0x1CCFA2F0)
#define CLASS_1_A43ECDE612AE08D2_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1CCF9B00)
#define CLASS_1_A43ECDE612AE08D2_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1CCFA090)
#define CLASS_1_A43ECDE612AE08D2_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1CCFA200)
#define CLASS_1_A43ECDE612AE08D2__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CCFA660)

inline static constexpr unsigned int Class_1_A43ECDE612AE08D2_TypeDefinitionIndex = 13014;

class Class_1_A43ECDE612AE08D2 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A43ECDE612AE08D2_TypeDefinitionIndex)->GetStaticField(0x41470);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_MPCODIGIBGL()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A43ECDE612AE08D2_TypeDefinitionIndex)->GetStaticField(0x41478);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DailyQuestRow*>** StaticGet_EHNHPCGDOIO()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DailyQuestRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A43ECDE612AE08D2_TypeDefinitionIndex)->GetStaticField(0x41480);
	}
	static ::System::Boolean* StaticGet_AHBLLGCADBB()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_A43ECDE612AE08D2_TypeDefinitionIndex)->GetStaticField(0xFA50);
	}
	static ::System::Byte* StaticGet_GDMLAIBCKIP()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_A43ECDE612AE08D2_TypeDefinitionIndex)->GetStaticField(0xFA51);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A43ECDE612AE08D2__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DailyQuestRow*>* Method_1_06FF15BBB9E2233A()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DailyQuestRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_A43ECDE612AE08D2_METHOD_1_06FF15BBB9E2233A_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_A43ECDE612AE08D2_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DailyQuestRow*> Method_1_3B26FFE39C494FE3()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DailyQuestRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_A43ECDE612AE08D2_METHOD_1_3B26FFE39C494FE3_OFFSET))();
	}

	static ::RPG::GameCore::DailyQuestRow* Method_1_0EF5EA9182AD8603(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::DailyQuestRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_A43ECDE612AE08D2_METHOD_1_0EF5EA9182AD8603_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_A43ECDE612AE08D2_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A43ECDE612AE08D2_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A43ECDE612AE08D2_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A43ECDE612AE08D2_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_A43ECDE612AE08D2_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_A43ECDE612AE08D2_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_CF49F9155374C646(::RPG::GameCore::DailyQuestRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::DailyQuestRow*))((::PBYTE)hIl2Cpp + CLASS_1_A43ECDE612AE08D2_METHOD_1_CF49F9155374C646_OFFSET))(a1);
	}
};
