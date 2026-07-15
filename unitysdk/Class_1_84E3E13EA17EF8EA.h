#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class VoiceAtlasRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define CLASS_1_84E3E13EA17EF8EA_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x1B3120A0)
#define CLASS_1_84E3E13EA17EF8EA_METHOD_1_423B951F4F69A635_OFFSET UNITYSDK_OFFSET(0x1B312450)
#define CLASS_1_84E3E13EA17EF8EA_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1B311ED0)
#define CLASS_1_84E3E13EA17EF8EA_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1B311F60)
#define CLASS_1_84E3E13EA17EF8EA_METHOD_1_B4F7C200EF5A8C85_OFFSET UNITYSDK_OFFSET(0x1B311CF0)
#define CLASS_1_84E3E13EA17EF8EA_METHOD_1_B73A05101E8FECA2_OFFSET UNITYSDK_OFFSET(0x1B3118B0)
#define CLASS_1_84E3E13EA17EF8EA_METHOD_1_B8B114E050E882F7_OFFSET UNITYSDK_OFFSET(0x1B3120F0)
#define CLASS_1_84E3E13EA17EF8EA_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1B311B60)
#define CLASS_1_84E3E13EA17EF8EA_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1B311930)
#define CLASS_1_84E3E13EA17EF8EA_METHOD_1_ED97B249F9B9BDBE_OFFSET UNITYSDK_OFFSET(0x1B311BC0)
#define CLASS_1_84E3E13EA17EF8EA_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1B311E90)
#define CLASS_1_84E3E13EA17EF8EA_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1B312000)
#define CLASS_1_84E3E13EA17EF8EA__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B3124A0)

inline static constexpr unsigned int Class_1_84E3E13EA17EF8EA_TypeDefinitionIndex = 12202;

class Class_1_84E3E13EA17EF8EA : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_0()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_84E3E13EA17EF8EA_TypeDefinitionIndex)->GetStaticField(0x660D0);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::VoiceAtlasRow*>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::VoiceAtlasRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_84E3E13EA17EF8EA_TypeDefinitionIndex)->GetStaticField(0x660D8);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_2()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_84E3E13EA17EF8EA_TypeDefinitionIndex)->GetStaticField(0x660E0);
	}
	static ::System::Byte* StaticGet_Field_1_3()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_84E3E13EA17EF8EA_TypeDefinitionIndex)->GetStaticField(0x139C0);
	}
	static ::System::Boolean* StaticGet_Field_1_4()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_84E3E13EA17EF8EA_TypeDefinitionIndex)->GetStaticField(0x139C1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_84E3E13EA17EF8EA__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::VoiceAtlasRow*>* Method_1_B73A05101E8FECA2()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::VoiceAtlasRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_84E3E13EA17EF8EA_METHOD_1_B73A05101E8FECA2_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_84E3E13EA17EF8EA_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::VoiceAtlasRow*> Method_1_ED97B249F9B9BDBE()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::VoiceAtlasRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_84E3E13EA17EF8EA_METHOD_1_ED97B249F9B9BDBE_OFFSET))();
	}

	static ::RPG::GameCore::VoiceAtlasRow* Method_1_B4F7C200EF5A8C85(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::RPG::GameCore::VoiceAtlasRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_84E3E13EA17EF8EA_METHOD_1_B4F7C200EF5A8C85_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_84E3E13EA17EF8EA_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_84E3E13EA17EF8EA_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_84E3E13EA17EF8EA_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_84E3E13EA17EF8EA_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_84E3E13EA17EF8EA_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_84E3E13EA17EF8EA_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_B8B114E050E882F7(::RPG::GameCore::VoiceAtlasRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::VoiceAtlasRow*))((::PBYTE)hIl2Cpp + CLASS_1_84E3E13EA17EF8EA_METHOD_1_B8B114E050E882F7_OFFSET))(a1);
	}

	static ::System::Collections::Generic::IEnumerator_1<::RPG::GameCore::VoiceAtlasRow*>* Method_1_423B951F4F69A635(::System::UInt32 a1)
	{
		return ((::System::Collections::Generic::IEnumerator_1<::RPG::GameCore::VoiceAtlasRow*>*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_84E3E13EA17EF8EA_METHOD_1_423B951F4F69A635_OFFSET))(a1);
	}
};
