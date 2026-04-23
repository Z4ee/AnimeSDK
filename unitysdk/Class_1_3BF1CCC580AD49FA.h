#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RelicSetBonusValueRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_3BF1CCC580AD49FA_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x18966540)
#define CLASS_1_3BF1CCC580AD49FA_METHOD_1_21527C01ECE3CE3E_OFFSET UNITYSDK_OFFSET(0x18966590)
#define CLASS_1_3BF1CCC580AD49FA_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x18966360)
#define CLASS_1_3BF1CCC580AD49FA_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x18965CF0)
#define CLASS_1_3BF1CCC580AD49FA_METHOD_1_7E9B0073F862C680_OFFSET UNITYSDK_OFFSET(0x18966150)
#define CLASS_1_3BF1CCC580AD49FA_METHOD_1_9E0431D345A50BC2_OFFSET UNITYSDK_OFFSET(0x18965C70)
#define CLASS_1_3BF1CCC580AD49FA_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x18966400)
#define CLASS_1_3BF1CCC580AD49FA_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x18965F40)
#define CLASS_1_3BF1CCC580AD49FA_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x18966320)
#define CLASS_1_3BF1CCC580AD49FA_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x189664A0)
#define CLASS_1_3BF1CCC580AD49FA_METHOD_1_F8911351A2509D5B_OFFSET UNITYSDK_OFFSET(0x18965FA0)
#define CLASS_1_3BF1CCC580AD49FA__CCTOR_OFFSET UNITYSDK_OFFSET(0x189668F0)

inline static constexpr unsigned int Class_1_3BF1CCC580AD49FA_TypeDefinitionIndex = 10440;

class Class_1_3BF1CCC580AD49FA : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3BF1CCC580AD49FA_TypeDefinitionIndex)->GetStaticField(0x20990);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RelicSetBonusValueRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RelicSetBonusValueRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3BF1CCC580AD49FA_TypeDefinitionIndex)->GetStaticField(0x20998);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3BF1CCC580AD49FA_TypeDefinitionIndex)->GetStaticField(0x209A0);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_3BF1CCC580AD49FA_TypeDefinitionIndex)->GetStaticField(0x7F10);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_3BF1CCC580AD49FA_TypeDefinitionIndex)->GetStaticField(0x7F11);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3BF1CCC580AD49FA__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RelicSetBonusValueRow*>* Method_1_9E0431D345A50BC2()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RelicSetBonusValueRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_3BF1CCC580AD49FA_METHOD_1_9E0431D345A50BC2_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_3BF1CCC580AD49FA_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RelicSetBonusValueRow*> Method_1_F8911351A2509D5B()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RelicSetBonusValueRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_3BF1CCC580AD49FA_METHOD_1_F8911351A2509D5B_OFFSET))();
	}

	static ::RPG::GameCore::RelicSetBonusValueRow* Method_1_7E9B0073F862C680(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::RelicSetBonusValueRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_3BF1CCC580AD49FA_METHOD_1_7E9B0073F862C680_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_3BF1CCC580AD49FA_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3BF1CCC580AD49FA_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3BF1CCC580AD49FA_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3BF1CCC580AD49FA_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_3BF1CCC580AD49FA_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_08649C2797B37F9D(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_3BF1CCC580AD49FA_METHOD_1_08649C2797B37F9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_21527C01ECE3CE3E(::RPG::GameCore::RelicSetBonusValueRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::RelicSetBonusValueRow*))((::PBYTE)hIl2Cpp + CLASS_1_3BF1CCC580AD49FA_METHOD_1_21527C01ECE3CE3E_OFFSET))(a1);
	}
};
