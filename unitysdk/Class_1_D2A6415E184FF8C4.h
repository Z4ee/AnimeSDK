#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/GameCore/GridFightAugmentQuality.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class GridFightAugmentMonsterConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_D2A6415E184FF8C4_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x16D67B10)
#define CLASS_1_D2A6415E184FF8C4_METHOD_1_0894E6DE729AE079_OFFSET UNITYSDK_OFFSET(0x16D67530)
#define CLASS_1_D2A6415E184FF8C4_METHOD_1_26E9A256AF1C2AF0_OFFSET UNITYSDK_OFFSET(0x16D67200)
#define CLASS_1_D2A6415E184FF8C4_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x16D67930)
#define CLASS_1_D2A6415E184FF8C4_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x16D67280)
#define CLASS_1_D2A6415E184FF8C4_METHOD_1_6BE77863C2345C54_OFFSET UNITYSDK_OFFSET(0x16D67B60)
#define CLASS_1_D2A6415E184FF8C4_METHOD_1_7546741233B6C2CE_OFFSET UNITYSDK_OFFSET(0x16D676E0)
#define CLASS_1_D2A6415E184FF8C4_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x16D679D0)
#define CLASS_1_D2A6415E184FF8C4_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x16D674D0)
#define CLASS_1_D2A6415E184FF8C4_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x16D678F0)
#define CLASS_1_D2A6415E184FF8C4_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x16D67A70)
#define CLASS_1_D2A6415E184FF8C4__CCTOR_OFFSET UNITYSDK_OFFSET(0x16D67F10)

inline static constexpr unsigned int Class_1_D2A6415E184FF8C4_TypeDefinitionIndex = 12247;

class Class_1_D2A6415E184FF8C4 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D2A6415E184FF8C4_TypeDefinitionIndex)->GetStaticField(0x14100);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightAugmentMonsterConfigRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightAugmentMonsterConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D2A6415E184FF8C4_TypeDefinitionIndex)->GetStaticField(0x14108);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D2A6415E184FF8C4_TypeDefinitionIndex)->GetStaticField(0x14110);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_D2A6415E184FF8C4_TypeDefinitionIndex)->GetStaticField(0x5DF0);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_D2A6415E184FF8C4_TypeDefinitionIndex)->GetStaticField(0x5DF1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D2A6415E184FF8C4__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightAugmentMonsterConfigRow*>* Method_1_26E9A256AF1C2AF0()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightAugmentMonsterConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_D2A6415E184FF8C4_METHOD_1_26E9A256AF1C2AF0_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_D2A6415E184FF8C4_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightAugmentMonsterConfigRow*> Method_1_0894E6DE729AE079()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightAugmentMonsterConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_D2A6415E184FF8C4_METHOD_1_0894E6DE729AE079_OFFSET))();
	}

	static ::RPG::GameCore::GridFightAugmentMonsterConfigRow* Method_1_7546741233B6C2CE(::System::UInt32 a1, ::RPG::GameCore::GridFightAugmentQuality a2)
	{
		return ((::RPG::GameCore::GridFightAugmentMonsterConfigRow*(*)(::System::UInt32, ::RPG::GameCore::GridFightAugmentQuality))((::PBYTE)hIl2Cpp + CLASS_1_D2A6415E184FF8C4_METHOD_1_7546741233B6C2CE_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_D2A6415E184FF8C4_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D2A6415E184FF8C4_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D2A6415E184FF8C4_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_D2A6415E184FF8C4_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_D2A6415E184FF8C4_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_08649C2797B37F9D(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_D2A6415E184FF8C4_METHOD_1_08649C2797B37F9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_6BE77863C2345C54(::RPG::GameCore::GridFightAugmentMonsterConfigRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::GridFightAugmentMonsterConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_D2A6415E184FF8C4_METHOD_1_6BE77863C2345C54_OFFSET))(a1);
	}
};
