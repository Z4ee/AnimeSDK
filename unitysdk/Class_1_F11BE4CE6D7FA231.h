#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/GameCore/MultiPlayerGameMode.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MarblePVPRankConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_F11BE4CE6D7FA231_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x1B2F60C0)
#define CLASS_1_F11BE4CE6D7FA231_METHOD_1_1D528B9A63C13053_OFFSET UNITYSDK_OFFSET(0x1B2F5BB0)
#define CLASS_1_F11BE4CE6D7FA231_METHOD_1_7891ED380D7B61D6_OFFSET UNITYSDK_OFFSET(0x1B2F58A0)
#define CLASS_1_F11BE4CE6D7FA231_METHOD_1_89D1F247B9D324EE_1_OFFSET UNITYSDK_OFFSET(0x1B2F6C50)
#define CLASS_1_F11BE4CE6D7FA231_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1B2F5EF0)
#define CLASS_1_F11BE4CE6D7FA231_METHOD_1_91BBC2B8ABFE8A23_OFFSET UNITYSDK_OFFSET(0x1B2F6110)
#define CLASS_1_F11BE4CE6D7FA231_METHOD_1_AB7ED27CAB69BE58_OFFSET UNITYSDK_OFFSET(0x1B2F6610)
#define CLASS_1_F11BE4CE6D7FA231_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1B2F5F80)
#define CLASS_1_F11BE4CE6D7FA231_METHOD_1_B0B7E23CCB7B7D85_OFFSET UNITYSDK_OFFSET(0x1B2F6430)
#define CLASS_1_F11BE4CE6D7FA231_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1B2F5B50)
#define CLASS_1_F11BE4CE6D7FA231_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1B2F5920)
#define CLASS_1_F11BE4CE6D7FA231_METHOD_1_E47D5474F1F585DF_OFFSET UNITYSDK_OFFSET(0x1B2F5D20)
#define CLASS_1_F11BE4CE6D7FA231_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1B2F5EB0)
#define CLASS_1_F11BE4CE6D7FA231_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1B2F6020)
#define CLASS_1_F11BE4CE6D7FA231__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B2F6CE0)

inline static constexpr unsigned int Class_1_F11BE4CE6D7FA231_TypeDefinitionIndex = 11464;

class Class_1_F11BE4CE6D7FA231 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MarblePVPRankConfigRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MarblePVPRankConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F11BE4CE6D7FA231_TypeDefinitionIndex)->GetStaticField(0x4E330);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_1()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F11BE4CE6D7FA231_TypeDefinitionIndex)->GetStaticField(0x4E338);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_2()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F11BE4CE6D7FA231_TypeDefinitionIndex)->GetStaticField(0x4E340);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::MultiPlayerGameMode, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::MarblePVPRankConfigRow*>*>** StaticGet_Field_1_3()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::MultiPlayerGameMode, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::MarblePVPRankConfigRow*>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F11BE4CE6D7FA231_TypeDefinitionIndex)->GetStaticField(0x4E348);
	}
	static ::System::Boolean* StaticGet_Field_1_4()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_F11BE4CE6D7FA231_TypeDefinitionIndex)->GetStaticField(0xDF10);
	}
	static ::System::Byte* StaticGet_Field_1_5()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_F11BE4CE6D7FA231_TypeDefinitionIndex)->GetStaticField(0xDF11);
	}
	static ::System::Boolean* StaticGet_Field_1_6()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_F11BE4CE6D7FA231_TypeDefinitionIndex)->GetStaticField(0xDF12);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F11BE4CE6D7FA231__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MarblePVPRankConfigRow*>* Method_1_7891ED380D7B61D6()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MarblePVPRankConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_F11BE4CE6D7FA231_METHOD_1_7891ED380D7B61D6_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_F11BE4CE6D7FA231_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MarblePVPRankConfigRow*> Method_1_1D528B9A63C13053()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MarblePVPRankConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_F11BE4CE6D7FA231_METHOD_1_1D528B9A63C13053_OFFSET))();
	}

	static ::RPG::GameCore::MarblePVPRankConfigRow* Method_1_E47D5474F1F585DF(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::MarblePVPRankConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F11BE4CE6D7FA231_METHOD_1_E47D5474F1F585DF_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_F11BE4CE6D7FA231_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F11BE4CE6D7FA231_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F11BE4CE6D7FA231_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F11BE4CE6D7FA231_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_F11BE4CE6D7FA231_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_F11BE4CE6D7FA231_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_91BBC2B8ABFE8A23(::RPG::GameCore::MarblePVPRankConfigRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::MarblePVPRankConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_F11BE4CE6D7FA231_METHOD_1_91BBC2B8ABFE8A23_OFFSET))(a1);
	}

	static ::RPG::GameCore::MarblePVPRankConfigRow* Method_1_B0B7E23CCB7B7D85(::RPG::GameCore::MultiPlayerGameMode a1, ::System::UInt32 a2)
	{
		return ((::RPG::GameCore::MarblePVPRankConfigRow*(*)(::RPG::GameCore::MultiPlayerGameMode, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F11BE4CE6D7FA231_METHOD_1_B0B7E23CCB7B7D85_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_AB7ED27CAB69BE58()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F11BE4CE6D7FA231_METHOD_1_AB7ED27CAB69BE58_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE_1()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F11BE4CE6D7FA231_METHOD_1_89D1F247B9D324EE_1_OFFSET))();
	}
};
