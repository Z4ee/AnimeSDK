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

#define CLASS_1_A43ECDE612AE08D2_METHOD_1_06FF15BBB9E2233A_OFFSET UNITYSDK_OFFSET(0x182F0150)
#define CLASS_1_A43ECDE612AE08D2_METHOD_1_09CF6EBD9F98F3CF_OFFSET UNITYSDK_OFFSET(0x182F0480)
#define CLASS_1_A43ECDE612AE08D2_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x182F0A20)
#define CLASS_1_A43ECDE612AE08D2_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x182F0840)
#define CLASS_1_A43ECDE612AE08D2_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x182F01D0)
#define CLASS_1_A43ECDE612AE08D2_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x182F08E0)
#define CLASS_1_A43ECDE612AE08D2_METHOD_1_AE3EA4EBF1D81ED8_OFFSET UNITYSDK_OFFSET(0x182F0630)
#define CLASS_1_A43ECDE612AE08D2_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x182F0420)
#define CLASS_1_A43ECDE612AE08D2_METHOD_1_CF49F9155374C646_OFFSET UNITYSDK_OFFSET(0x182F0A70)
#define CLASS_1_A43ECDE612AE08D2_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x182F0800)
#define CLASS_1_A43ECDE612AE08D2_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x182F0980)
#define CLASS_1_A43ECDE612AE08D2__CCTOR_OFFSET UNITYSDK_OFFSET(0x182F0DD0)

inline static constexpr unsigned int Class_1_A43ECDE612AE08D2_TypeDefinitionIndex = 12398;

class Class_1_A43ECDE612AE08D2 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A43ECDE612AE08D2_TypeDefinitionIndex)->GetStaticField(0x245F0);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A43ECDE612AE08D2_TypeDefinitionIndex)->GetStaticField(0x245F8);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DailyQuestRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DailyQuestRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A43ECDE612AE08D2_TypeDefinitionIndex)->GetStaticField(0x24600);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_A43ECDE612AE08D2_TypeDefinitionIndex)->GetStaticField(0x97C0);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_A43ECDE612AE08D2_TypeDefinitionIndex)->GetStaticField(0x97C1);
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

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DailyQuestRow*> Method_1_09CF6EBD9F98F3CF()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DailyQuestRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_A43ECDE612AE08D2_METHOD_1_09CF6EBD9F98F3CF_OFFSET))();
	}

	static ::RPG::GameCore::DailyQuestRow* Method_1_AE3EA4EBF1D81ED8(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::DailyQuestRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_A43ECDE612AE08D2_METHOD_1_AE3EA4EBF1D81ED8_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_A43ECDE612AE08D2_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A43ECDE612AE08D2_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A43ECDE612AE08D2_METHOD_1_30D1209326FA87FC_OFFSET))();
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
