#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/ZLinq/FromFixEnumerator_2.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ZLinq/ValueEnumerable_2.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RogueActivityResidentConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_9633EA6685121AFE_METHOD_1_0783A04170E399B4_OFFSET UNITYSDK_OFFSET(0x18558200)
#define CLASS_1_9633EA6685121AFE_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x185585F0)
#define CLASS_1_9633EA6685121AFE_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x18558410)
#define CLASS_1_9633EA6685121AFE_METHOD_1_350323B1EB8AB473_OFFSET UNITYSDK_OFFSET(0x18558640)
#define CLASS_1_9633EA6685121AFE_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x18557D30)
#define CLASS_1_9633EA6685121AFE_METHOD_1_7E76D1F4ADC4383D_OFFSET UNITYSDK_OFFSET(0x18558160)
#define CLASS_1_9633EA6685121AFE_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x185584B0)
#define CLASS_1_9633EA6685121AFE_METHOD_1_C6EF2A01C8937600_OFFSET UNITYSDK_OFFSET(0x18557FE0)
#define CLASS_1_9633EA6685121AFE_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x18557F80)
#define CLASS_1_9633EA6685121AFE_METHOD_1_D09FAB26FD7DF78E_OFFSET UNITYSDK_OFFSET(0x18557CB0)
#define CLASS_1_9633EA6685121AFE_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x185583D0)
#define CLASS_1_9633EA6685121AFE_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x18558550)
#define CLASS_1_9633EA6685121AFE__CCTOR_OFFSET UNITYSDK_OFFSET(0x18558950)

inline static constexpr unsigned int Class_1_9633EA6685121AFE_TypeDefinitionIndex = 13904;

class Class_1_9633EA6685121AFE : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueActivityResidentConfigRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueActivityResidentConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9633EA6685121AFE_TypeDefinitionIndex)->GetStaticField(0x19500);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9633EA6685121AFE_TypeDefinitionIndex)->GetStaticField(0x19508);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9633EA6685121AFE_TypeDefinitionIndex)->GetStaticField(0x19510);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_9633EA6685121AFE_TypeDefinitionIndex)->GetStaticField(0x6B90);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_9633EA6685121AFE_TypeDefinitionIndex)->GetStaticField(0x6B91);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_9633EA6685121AFE__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueActivityResidentConfigRow*>* Method_1_D09FAB26FD7DF78E()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueActivityResidentConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_9633EA6685121AFE_METHOD_1_D09FAB26FD7DF78E_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_9633EA6685121AFE_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueActivityResidentConfigRow*> Method_1_C6EF2A01C8937600()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueActivityResidentConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_9633EA6685121AFE_METHOD_1_C6EF2A01C8937600_OFFSET))();
	}

	static ::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueActivityResidentConfigRow*>, ::RPG::GameCore::RogueActivityResidentConfigRow*> Method_1_7E76D1F4ADC4383D()
	{
		return ((::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueActivityResidentConfigRow*>, ::RPG::GameCore::RogueActivityResidentConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_9633EA6685121AFE_METHOD_1_7E76D1F4ADC4383D_OFFSET))();
	}

	static ::RPG::GameCore::RogueActivityResidentConfigRow* Method_1_0783A04170E399B4(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::RogueActivityResidentConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_9633EA6685121AFE_METHOD_1_0783A04170E399B4_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_9633EA6685121AFE_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_9633EA6685121AFE_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_9633EA6685121AFE_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_9633EA6685121AFE_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_9633EA6685121AFE_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_9633EA6685121AFE_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_350323B1EB8AB473(::RPG::GameCore::RogueActivityResidentConfigRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::RogueActivityResidentConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_9633EA6685121AFE_METHOD_1_350323B1EB8AB473_OFFSET))(a1);
	}
};
