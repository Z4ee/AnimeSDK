#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/ZLinq/FromFixEnumerator_2.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ZLinq/ValueEnumerable_2.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RogueTournCollectionConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_B8D38612002C1A1D_METHOD_1_1306BE317FD2A571_OFFSET UNITYSDK_OFFSET(0x16DF8A00)
#define CLASS_1_B8D38612002C1A1D_METHOD_1_13696A527CD9CA86_OFFSET UNITYSDK_OFFSET(0x16DF9340)
#define CLASS_1_B8D38612002C1A1D_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x16DF9160)
#define CLASS_1_B8D38612002C1A1D_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x16DF8A80)
#define CLASS_1_B8D38612002C1A1D_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x16DF9200)
#define CLASS_1_B8D38612002C1A1D_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x16DF8CD0)
#define CLASS_1_B8D38612002C1A1D_METHOD_1_CEE0A7B9D090EE19_OFFSET UNITYSDK_OFFSET(0x16DF8D30)
#define CLASS_1_B8D38612002C1A1D_METHOD_1_DFB229F05D8C6AE0_OFFSET UNITYSDK_OFFSET(0x16DF8EB0)
#define CLASS_1_B8D38612002C1A1D_METHOD_1_E5A4A9FD89617F4E_OFFSET UNITYSDK_OFFSET(0x16DF9390)
#define CLASS_1_B8D38612002C1A1D_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x16DF9120)
#define CLASS_1_B8D38612002C1A1D_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x16DF92A0)
#define CLASS_1_B8D38612002C1A1D_METHOD_1_FCCC137B45F703D3_OFFSET UNITYSDK_OFFSET(0x16DF8F50)
#define CLASS_1_B8D38612002C1A1D__CCTOR_OFFSET UNITYSDK_OFFSET(0x16DF96A0)

inline static constexpr unsigned int Class_1_B8D38612002C1A1D_TypeDefinitionIndex = 13731;

class Class_1_B8D38612002C1A1D : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournCollectionConfigRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournCollectionConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B8D38612002C1A1D_TypeDefinitionIndex)->GetStaticField(0x18140);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B8D38612002C1A1D_TypeDefinitionIndex)->GetStaticField(0x18148);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B8D38612002C1A1D_TypeDefinitionIndex)->GetStaticField(0x18150);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_B8D38612002C1A1D_TypeDefinitionIndex)->GetStaticField(0x6DC0);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_B8D38612002C1A1D_TypeDefinitionIndex)->GetStaticField(0x6DC1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B8D38612002C1A1D__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournCollectionConfigRow*>* Method_1_1306BE317FD2A571()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournCollectionConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_B8D38612002C1A1D_METHOD_1_1306BE317FD2A571_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_B8D38612002C1A1D_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournCollectionConfigRow*> Method_1_CEE0A7B9D090EE19()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournCollectionConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_B8D38612002C1A1D_METHOD_1_CEE0A7B9D090EE19_OFFSET))();
	}

	static ::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournCollectionConfigRow*>, ::RPG::GameCore::RogueTournCollectionConfigRow*> Method_1_DFB229F05D8C6AE0()
	{
		return ((::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournCollectionConfigRow*>, ::RPG::GameCore::RogueTournCollectionConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_B8D38612002C1A1D_METHOD_1_DFB229F05D8C6AE0_OFFSET))();
	}

	static ::RPG::GameCore::RogueTournCollectionConfigRow* Method_1_FCCC137B45F703D3(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::RogueTournCollectionConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B8D38612002C1A1D_METHOD_1_FCCC137B45F703D3_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_B8D38612002C1A1D_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B8D38612002C1A1D_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B8D38612002C1A1D_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B8D38612002C1A1D_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_B8D38612002C1A1D_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_13696A527CD9CA86(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_B8D38612002C1A1D_METHOD_1_13696A527CD9CA86_OFFSET))(a1);
	}

	static ::System::Void Method_1_E5A4A9FD89617F4E(::RPG::GameCore::RogueTournCollectionConfigRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::RogueTournCollectionConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_B8D38612002C1A1D_METHOD_1_E5A4A9FD89617F4E_OFFSET))(a1);
	}
};
