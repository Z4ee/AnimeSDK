#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/ZLinq/FromFixEnumerator_2.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ZLinq/ValueEnumerable_2.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RogueTournContentCollectionRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_51C586C9E169EC30_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x16D72450)
#define CLASS_1_51C586C9E169EC30_METHOD_1_16FEBFA1E1DB0E3C_OFFSET UNITYSDK_OFFSET(0x16D71B60)
#define CLASS_1_51C586C9E169EC30_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x16D72270)
#define CLASS_1_51C586C9E169EC30_METHOD_1_4017B9473AD315AB_OFFSET UNITYSDK_OFFSET(0x16D720B0)
#define CLASS_1_51C586C9E169EC30_METHOD_1_4ECD50DE5B3EF081_OFFSET UNITYSDK_OFFSET(0x16D724A0)
#define CLASS_1_51C586C9E169EC30_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x16D71BE0)
#define CLASS_1_51C586C9E169EC30_METHOD_1_96C88F73C5D5213A_OFFSET UNITYSDK_OFFSET(0x16D71E90)
#define CLASS_1_51C586C9E169EC30_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x16D72310)
#define CLASS_1_51C586C9E169EC30_METHOD_1_C32DBFE0A4B2B90F_OFFSET UNITYSDK_OFFSET(0x16D72010)
#define CLASS_1_51C586C9E169EC30_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x16D71E30)
#define CLASS_1_51C586C9E169EC30_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x16D72230)
#define CLASS_1_51C586C9E169EC30_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x16D723B0)
#define CLASS_1_51C586C9E169EC30__CCTOR_OFFSET UNITYSDK_OFFSET(0x16D727B0)

inline static constexpr unsigned int Class_1_51C586C9E169EC30_TypeDefinitionIndex = 13773;

class Class_1_51C586C9E169EC30 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_51C586C9E169EC30_TypeDefinitionIndex)->GetStaticField(0x14500);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_51C586C9E169EC30_TypeDefinitionIndex)->GetStaticField(0x14508);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournContentCollectionRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournContentCollectionRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_51C586C9E169EC30_TypeDefinitionIndex)->GetStaticField(0x14510);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_51C586C9E169EC30_TypeDefinitionIndex)->GetStaticField(0x5ED0);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_51C586C9E169EC30_TypeDefinitionIndex)->GetStaticField(0x5ED1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_51C586C9E169EC30__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournContentCollectionRow*>* Method_1_16FEBFA1E1DB0E3C()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournContentCollectionRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_51C586C9E169EC30_METHOD_1_16FEBFA1E1DB0E3C_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_51C586C9E169EC30_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournContentCollectionRow*> Method_1_96C88F73C5D5213A()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournContentCollectionRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_51C586C9E169EC30_METHOD_1_96C88F73C5D5213A_OFFSET))();
	}

	static ::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournContentCollectionRow*>, ::RPG::GameCore::RogueTournContentCollectionRow*> Method_1_C32DBFE0A4B2B90F()
	{
		return ((::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournContentCollectionRow*>, ::RPG::GameCore::RogueTournContentCollectionRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_51C586C9E169EC30_METHOD_1_C32DBFE0A4B2B90F_OFFSET))();
	}

	static ::RPG::GameCore::RogueTournContentCollectionRow* Method_1_4017B9473AD315AB(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::RogueTournContentCollectionRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_51C586C9E169EC30_METHOD_1_4017B9473AD315AB_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_51C586C9E169EC30_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_51C586C9E169EC30_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_51C586C9E169EC30_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_51C586C9E169EC30_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_51C586C9E169EC30_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_51C586C9E169EC30_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_4ECD50DE5B3EF081(::RPG::GameCore::RogueTournContentCollectionRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::RogueTournContentCollectionRow*))((::PBYTE)hIl2Cpp + CLASS_1_51C586C9E169EC30_METHOD_1_4ECD50DE5B3EF081_OFFSET))(a1);
	}
};
