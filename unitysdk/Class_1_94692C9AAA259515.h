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

#define CLASS_1_94692C9AAA259515_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x1B47CC90)
#define CLASS_1_94692C9AAA259515_METHOD_1_0EDC93C97FDB1032_OFFSET UNITYSDK_OFFSET(0x1B47D130)
#define CLASS_1_94692C9AAA259515_METHOD_1_1E60243FBC835329_OFFSET UNITYSDK_OFFSET(0x1B47D050)
#define CLASS_1_94692C9AAA259515_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1B47CAC0)
#define CLASS_1_94692C9AAA259515_METHOD_1_98B05DF8E0DCC01F_OFFSET UNITYSDK_OFFSET(0x1B47CCE0)
#define CLASS_1_94692C9AAA259515_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1B47CB50)
#define CLASS_1_94692C9AAA259515_METHOD_1_B07F041E9BB800B4_OFFSET UNITYSDK_OFFSET(0x1B47D2A0)
#define CLASS_1_94692C9AAA259515_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1B47D0D0)
#define CLASS_1_94692C9AAA259515_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1B47C890)
#define CLASS_1_94692C9AAA259515_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1B47C850)
#define CLASS_1_94692C9AAA259515_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1B47CBF0)
#define CLASS_1_94692C9AAA259515__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B47D430)

inline static constexpr unsigned int Class_1_94692C9AAA259515_TypeDefinitionIndex = 14731;

class Class_1_94692C9AAA259515 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_0()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_94692C9AAA259515_TypeDefinitionIndex)->GetStaticField(0x3FEE0);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartyGridTypeConfigRow*>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartyGridTypeConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_94692C9AAA259515_TypeDefinitionIndex)->GetStaticField(0x3FEE8);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_2()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_94692C9AAA259515_TypeDefinitionIndex)->GetStaticField(0x3FEF0);
	}
	static ::System::Boolean* StaticGet_Field_1_3()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_94692C9AAA259515_TypeDefinitionIndex)->GetStaticField(0xAA60);
	}
	static ::System::Byte* StaticGet_Field_1_4()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_94692C9AAA259515_TypeDefinitionIndex)->GetStaticField(0xAA61);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_94692C9AAA259515__CCTOR_OFFSET))();
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_94692C9AAA259515_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_94692C9AAA259515_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_94692C9AAA259515_METHOD_1_89D1F247B9D324EE_OFFSET))();
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

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartyGridTypeConfigRow*>* Method_1_1E60243FBC835329()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartyGridTypeConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_94692C9AAA259515_METHOD_1_1E60243FBC835329_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_94692C9AAA259515_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartyGridTypeConfigRow*> Method_1_0EDC93C97FDB1032()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartyGridTypeConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_94692C9AAA259515_METHOD_1_0EDC93C97FDB1032_OFFSET))();
	}

	static ::RPG::GameCore::TrainPartyGridTypeConfigRow* Method_1_B07F041E9BB800B4(::RPG::GameCore::TrainPartyGridType a1)
	{
		return ((::RPG::GameCore::TrainPartyGridTypeConfigRow*(*)(::RPG::GameCore::TrainPartyGridType))((::PBYTE)hIl2Cpp + CLASS_1_94692C9AAA259515_METHOD_1_B07F041E9BB800B4_OFFSET))(a1);
	}
};
