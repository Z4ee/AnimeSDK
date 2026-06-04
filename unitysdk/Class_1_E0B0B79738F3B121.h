#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class OfferingTypeConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_E0B0B79738F3B121_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x19357DC0)
#define CLASS_1_E0B0B79738F3B121_METHOD_1_17CB68876B8D4FCA_OFFSET UNITYSDK_OFFSET(0x19357E10)
#define CLASS_1_E0B0B79738F3B121_METHOD_1_6217AB9EF97FF0B3_OFFSET UNITYSDK_OFFSET(0x19357930)
#define CLASS_1_E0B0B79738F3B121_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x19357BF0)
#define CLASS_1_E0B0B79738F3B121_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x19357C80)
#define CLASS_1_E0B0B79738F3B121_METHOD_1_BE5703BC8A14F808_OFFSET UNITYSDK_OFFSET(0x19357A60)
#define CLASS_1_E0B0B79738F3B121_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x193578D0)
#define CLASS_1_E0B0B79738F3B121_METHOD_1_D798B0952F59CF25_OFFSET UNITYSDK_OFFSET(0x19357620)
#define CLASS_1_E0B0B79738F3B121_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x193576A0)
#define CLASS_1_E0B0B79738F3B121_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x19357BB0)
#define CLASS_1_E0B0B79738F3B121_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x19357D20)
#define CLASS_1_E0B0B79738F3B121__CCTOR_OFFSET UNITYSDK_OFFSET(0x19358130)

inline static constexpr unsigned int Class_1_E0B0B79738F3B121_TypeDefinitionIndex = 13620;

class Class_1_E0B0B79738F3B121 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_0()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E0B0B79738F3B121_TypeDefinitionIndex)->GetStaticField(0x56240);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_1()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E0B0B79738F3B121_TypeDefinitionIndex)->GetStaticField(0x56248);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::OfferingTypeConfigRow*>** StaticGet_Field_1_2()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::OfferingTypeConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E0B0B79738F3B121_TypeDefinitionIndex)->GetStaticField(0x56250);
	}
	static ::System::Boolean* StaticGet_Field_1_3()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_E0B0B79738F3B121_TypeDefinitionIndex)->GetStaticField(0x11100);
	}
	static ::System::Byte* StaticGet_Field_1_4()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_E0B0B79738F3B121_TypeDefinitionIndex)->GetStaticField(0x11101);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_E0B0B79738F3B121__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::OfferingTypeConfigRow*>* Method_1_D798B0952F59CF25()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::OfferingTypeConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_E0B0B79738F3B121_METHOD_1_D798B0952F59CF25_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_E0B0B79738F3B121_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::OfferingTypeConfigRow*> Method_1_6217AB9EF97FF0B3()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::OfferingTypeConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_E0B0B79738F3B121_METHOD_1_6217AB9EF97FF0B3_OFFSET))();
	}

	static ::RPG::GameCore::OfferingTypeConfigRow* Method_1_BE5703BC8A14F808(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::OfferingTypeConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_E0B0B79738F3B121_METHOD_1_BE5703BC8A14F808_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_E0B0B79738F3B121_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_E0B0B79738F3B121_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_E0B0B79738F3B121_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_E0B0B79738F3B121_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_E0B0B79738F3B121_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_E0B0B79738F3B121_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_17CB68876B8D4FCA(::RPG::GameCore::OfferingTypeConfigRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::OfferingTypeConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_E0B0B79738F3B121_METHOD_1_17CB68876B8D4FCA_OFFSET))(a1);
	}
};
