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

#define CLASS_1_F11BE4CE6D7FA231_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x16B627E0)
#define CLASS_1_F11BE4CE6D7FA231_METHOD_1_209AB1A1F93733BF_OFFSET UNITYSDK_OFFSET(0x16B62240)
#define CLASS_1_F11BE4CE6D7FA231_METHOD_1_30D1209326FA87FC_1_OFFSET UNITYSDK_OFFSET(0x16B63310)
#define CLASS_1_F11BE4CE6D7FA231_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x16B62600)
#define CLASS_1_F11BE4CE6D7FA231_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x16B61F90)
#define CLASS_1_F11BE4CE6D7FA231_METHOD_1_7891ED380D7B61D6_OFFSET UNITYSDK_OFFSET(0x16B61F10)
#define CLASS_1_F11BE4CE6D7FA231_METHOD_1_91BBC2B8ABFE8A23_OFFSET UNITYSDK_OFFSET(0x16B62830)
#define CLASS_1_F11BE4CE6D7FA231_METHOD_1_AB7ED27CAB69BE58_OFFSET UNITYSDK_OFFSET(0x16B62D00)
#define CLASS_1_F11BE4CE6D7FA231_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x16B626A0)
#define CLASS_1_F11BE4CE6D7FA231_METHOD_1_CBBCE5E655DCEBC9_OFFSET UNITYSDK_OFFSET(0x16B62B40)
#define CLASS_1_F11BE4CE6D7FA231_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x16B621E0)
#define CLASS_1_F11BE4CE6D7FA231_METHOD_1_D0AA2CCC3A0BAA64_OFFSET UNITYSDK_OFFSET(0x16B623F0)
#define CLASS_1_F11BE4CE6D7FA231_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x16B625C0)
#define CLASS_1_F11BE4CE6D7FA231_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x16B62740)
#define CLASS_1_F11BE4CE6D7FA231__CCTOR_OFFSET UNITYSDK_OFFSET(0x16B633B0)

inline static constexpr unsigned int Class_1_F11BE4CE6D7FA231_TypeDefinitionIndex = 10913;

class Class_1_F11BE4CE6D7FA231 : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F11BE4CE6D7FA231_TypeDefinitionIndex)->GetStaticField(0x2A190);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MarblePVPRankConfigRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MarblePVPRankConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F11BE4CE6D7FA231_TypeDefinitionIndex)->GetStaticField(0x2A198);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::MultiPlayerGameMode, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::MarblePVPRankConfigRow*>*>** StaticGet_Field_1_6()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::MultiPlayerGameMode, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::MarblePVPRankConfigRow*>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F11BE4CE6D7FA231_TypeDefinitionIndex)->GetStaticField(0x2A1A0);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F11BE4CE6D7FA231_TypeDefinitionIndex)->GetStaticField(0x2A1A8);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_F11BE4CE6D7FA231_TypeDefinitionIndex)->GetStaticField(0xDDF0);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_F11BE4CE6D7FA231_TypeDefinitionIndex)->GetStaticField(0xDDF1);
	}
	static ::System::Boolean* StaticGet_Field_1_5()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_F11BE4CE6D7FA231_TypeDefinitionIndex)->GetStaticField(0xDDF2);
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

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MarblePVPRankConfigRow*> Method_1_209AB1A1F93733BF()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MarblePVPRankConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_F11BE4CE6D7FA231_METHOD_1_209AB1A1F93733BF_OFFSET))();
	}

	static ::RPG::GameCore::MarblePVPRankConfigRow* Method_1_D0AA2CCC3A0BAA64(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::MarblePVPRankConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F11BE4CE6D7FA231_METHOD_1_D0AA2CCC3A0BAA64_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_F11BE4CE6D7FA231_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F11BE4CE6D7FA231_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F11BE4CE6D7FA231_METHOD_1_30D1209326FA87FC_OFFSET))();
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

	static ::RPG::GameCore::MarblePVPRankConfigRow* Method_1_CBBCE5E655DCEBC9(::RPG::GameCore::MultiPlayerGameMode a1, ::System::UInt32 a2)
	{
		return ((::RPG::GameCore::MarblePVPRankConfigRow*(*)(::RPG::GameCore::MultiPlayerGameMode, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F11BE4CE6D7FA231_METHOD_1_CBBCE5E655DCEBC9_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_AB7ED27CAB69BE58()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F11BE4CE6D7FA231_METHOD_1_AB7ED27CAB69BE58_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC_1()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F11BE4CE6D7FA231_METHOD_1_30D1209326FA87FC_1_OFFSET))();
	}
};
