#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/GameCore/TrainPartyGridType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TrainPartyGridTypeConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_94692C9AAA259515_METHOD_1_033FA34FDC86F2C3_OFFSET UNITYSDK_OFFSET(0x182D7560)
#define CLASS_1_94692C9AAA259515_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x182D7950)
#define CLASS_1_94692C9AAA259515_METHOD_1_1E60243FBC835329_OFFSET UNITYSDK_OFFSET(0x182D7080)
#define CLASS_1_94692C9AAA259515_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x182D7770)
#define CLASS_1_94692C9AAA259515_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x182D7100)
#define CLASS_1_94692C9AAA259515_METHOD_1_98B05DF8E0DCC01F_OFFSET UNITYSDK_OFFSET(0x182D79A0)
#define CLASS_1_94692C9AAA259515_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x182D7810)
#define CLASS_1_94692C9AAA259515_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x182D7350)
#define CLASS_1_94692C9AAA259515_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x182D7730)
#define CLASS_1_94692C9AAA259515_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x182D78B0)
#define CLASS_1_94692C9AAA259515_METHOD_1_F906DCAD6498A886_OFFSET UNITYSDK_OFFSET(0x182D73B0)
#define CLASS_1_94692C9AAA259515__CCTOR_OFFSET UNITYSDK_OFFSET(0x182D7D00)

inline static constexpr unsigned int Class_1_94692C9AAA259515_TypeDefinitionIndex = 14511;

class Class_1_94692C9AAA259515 : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_94692C9AAA259515_TypeDefinitionIndex)->GetStaticField(0x23220);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartyGridTypeConfigRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartyGridTypeConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_94692C9AAA259515_TypeDefinitionIndex)->GetStaticField(0x23228);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_94692C9AAA259515_TypeDefinitionIndex)->GetStaticField(0x23230);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_94692C9AAA259515_TypeDefinitionIndex)->GetStaticField(0x8F50);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_94692C9AAA259515_TypeDefinitionIndex)->GetStaticField(0x8F51);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_94692C9AAA259515__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartyGridTypeConfigRow*>* Method_1_1E60243FBC835329()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartyGridTypeConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_94692C9AAA259515_METHOD_1_1E60243FBC835329_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_94692C9AAA259515_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartyGridTypeConfigRow*> Method_1_F906DCAD6498A886()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartyGridTypeConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_94692C9AAA259515_METHOD_1_F906DCAD6498A886_OFFSET))();
	}

	static ::RPG::GameCore::TrainPartyGridTypeConfigRow* Method_1_033FA34FDC86F2C3(::RPG::GameCore::TrainPartyGridType a1)
	{
		return ((::RPG::GameCore::TrainPartyGridTypeConfigRow*(*)(::RPG::GameCore::TrainPartyGridType))((::PBYTE)hIl2Cpp + CLASS_1_94692C9AAA259515_METHOD_1_033FA34FDC86F2C3_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_94692C9AAA259515_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_94692C9AAA259515_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_94692C9AAA259515_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_94692C9AAA259515_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_94692C9AAA259515_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_08649C2797B37F9D(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_94692C9AAA259515_METHOD_1_08649C2797B37F9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_98B05DF8E0DCC01F(::RPG::GameCore::TrainPartyGridTypeConfigRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::TrainPartyGridTypeConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_94692C9AAA259515_METHOD_1_98B05DF8E0DCC01F_OFFSET))(a1);
	}
};
