#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ChallengeActMarkConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_382471FECAFE3E0F_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x192ADD30)
#define CLASS_1_382471FECAFE3E0F_METHOD_1_2985B1A7FF9CE183_OFFSET UNITYSDK_OFFSET(0x192ADD80)
#define CLASS_1_382471FECAFE3E0F_METHOD_1_4AAE30657796676B_OFFSET UNITYSDK_OFFSET(0x192AD510)
#define CLASS_1_382471FECAFE3E0F_METHOD_1_80D2FF0709E19B08_OFFSET UNITYSDK_OFFSET(0x192AD820)
#define CLASS_1_382471FECAFE3E0F_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x192ADB60)
#define CLASS_1_382471FECAFE3E0F_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x192ADBF0)
#define CLASS_1_382471FECAFE3E0F_METHOD_1_C76929985FA827A8_OFFSET UNITYSDK_OFFSET(0x192AD990)
#define CLASS_1_382471FECAFE3E0F_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x192AD7C0)
#define CLASS_1_382471FECAFE3E0F_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x192AD590)
#define CLASS_1_382471FECAFE3E0F_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x192ADB20)
#define CLASS_1_382471FECAFE3E0F_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x192ADC90)
#define CLASS_1_382471FECAFE3E0F__CCTOR_OFFSET UNITYSDK_OFFSET(0x192AE0F0)

inline static constexpr unsigned int Class_1_382471FECAFE3E0F_TypeDefinitionIndex = 12322;

class Class_1_382471FECAFE3E0F : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_0()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_382471FECAFE3E0F_TypeDefinitionIndex)->GetStaticField(0x54420);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChallengeActMarkConfigRow*>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChallengeActMarkConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_382471FECAFE3E0F_TypeDefinitionIndex)->GetStaticField(0x54428);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_2()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_382471FECAFE3E0F_TypeDefinitionIndex)->GetStaticField(0x54430);
	}
	static ::System::Boolean* StaticGet_Field_1_3()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_382471FECAFE3E0F_TypeDefinitionIndex)->GetStaticField(0x10B60);
	}
	static ::System::Byte* StaticGet_Field_1_4()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_382471FECAFE3E0F_TypeDefinitionIndex)->GetStaticField(0x10B61);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_382471FECAFE3E0F__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChallengeActMarkConfigRow*>* Method_1_4AAE30657796676B()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChallengeActMarkConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_382471FECAFE3E0F_METHOD_1_4AAE30657796676B_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_382471FECAFE3E0F_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChallengeActMarkConfigRow*> Method_1_80D2FF0709E19B08()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChallengeActMarkConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_382471FECAFE3E0F_METHOD_1_80D2FF0709E19B08_OFFSET))();
	}

	static ::RPG::GameCore::ChallengeActMarkConfigRow* Method_1_C76929985FA827A8(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::ChallengeActMarkConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_382471FECAFE3E0F_METHOD_1_C76929985FA827A8_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_382471FECAFE3E0F_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_382471FECAFE3E0F_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_382471FECAFE3E0F_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_382471FECAFE3E0F_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_382471FECAFE3E0F_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_08649C2797B37F9D(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_382471FECAFE3E0F_METHOD_1_08649C2797B37F9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_2985B1A7FF9CE183(::RPG::GameCore::ChallengeActMarkConfigRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::ChallengeActMarkConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_382471FECAFE3E0F_METHOD_1_2985B1A7FF9CE183_OFFSET))(a1);
	}
};
