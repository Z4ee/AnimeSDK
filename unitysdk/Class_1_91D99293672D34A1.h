#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RogueMagicGambleGroupRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_91D99293672D34A1_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x18F6D6E0)
#define CLASS_1_91D99293672D34A1_METHOD_1_3011B088D4AD74D2_OFFSET UNITYSDK_OFFSET(0x18F6D1D0)
#define CLASS_1_91D99293672D34A1_METHOD_1_83FF304E6A7B6455_OFFSET UNITYSDK_OFFSET(0x18F6CEC0)
#define CLASS_1_91D99293672D34A1_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x18F6D510)
#define CLASS_1_91D99293672D34A1_METHOD_1_89E8DF3317128373_OFFSET UNITYSDK_OFFSET(0x18F6D730)
#define CLASS_1_91D99293672D34A1_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x18F6D5A0)
#define CLASS_1_91D99293672D34A1_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x18F6D170)
#define CLASS_1_91D99293672D34A1_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x18F6CF40)
#define CLASS_1_91D99293672D34A1_METHOD_1_E8431A5201014278_OFFSET UNITYSDK_OFFSET(0x18F6D340)
#define CLASS_1_91D99293672D34A1_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x18F6D4D0)
#define CLASS_1_91D99293672D34A1_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x18F6D640)
#define CLASS_1_91D99293672D34A1__CCTOR_OFFSET UNITYSDK_OFFSET(0x18F6DAA0)

inline static constexpr unsigned int Class_1_91D99293672D34A1_TypeDefinitionIndex = 14156;

class Class_1_91D99293672D34A1 : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_0()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_91D99293672D34A1_TypeDefinitionIndex)->GetStaticField(0x36490);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_1()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_91D99293672D34A1_TypeDefinitionIndex)->GetStaticField(0x36498);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicGambleGroupRow*>** StaticGet_Field_1_2()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicGambleGroupRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_91D99293672D34A1_TypeDefinitionIndex)->GetStaticField(0x364A0);
	}
	static ::System::Boolean* StaticGet_Field_1_3()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_91D99293672D34A1_TypeDefinitionIndex)->GetStaticField(0xADF0);
	}
	static ::System::Byte* StaticGet_Field_1_4()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_91D99293672D34A1_TypeDefinitionIndex)->GetStaticField(0xADF1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_91D99293672D34A1__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicGambleGroupRow*>* Method_1_83FF304E6A7B6455()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicGambleGroupRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_91D99293672D34A1_METHOD_1_83FF304E6A7B6455_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_91D99293672D34A1_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicGambleGroupRow*> Method_1_3011B088D4AD74D2()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicGambleGroupRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_91D99293672D34A1_METHOD_1_3011B088D4AD74D2_OFFSET))();
	}

	static ::RPG::GameCore::RogueMagicGambleGroupRow* Method_1_E8431A5201014278(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::RogueMagicGambleGroupRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_91D99293672D34A1_METHOD_1_E8431A5201014278_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_91D99293672D34A1_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_91D99293672D34A1_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_91D99293672D34A1_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_91D99293672D34A1_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_91D99293672D34A1_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_08649C2797B37F9D(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_91D99293672D34A1_METHOD_1_08649C2797B37F9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_89E8DF3317128373(::RPG::GameCore::RogueMagicGambleGroupRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::RogueMagicGambleGroupRow*))((::PBYTE)hIl2Cpp + CLASS_1_91D99293672D34A1_METHOD_1_89E8DF3317128373_OFFSET))(a1);
	}
};
