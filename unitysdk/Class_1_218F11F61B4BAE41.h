#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ActivityActiveBenefitConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_218F11F61B4BAE41_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x19B6AA20)
#define CLASS_1_218F11F61B4BAE41_METHOD_1_47898B1741B8457F_OFFSET UNITYSDK_OFFSET(0x19B6AA70)
#define CLASS_1_218F11F61B4BAE41_METHOD_1_6783A26C653681F6_OFFSET UNITYSDK_OFFSET(0x19B6A510)
#define CLASS_1_218F11F61B4BAE41_METHOD_1_705CF2D65524B141_OFFSET UNITYSDK_OFFSET(0x19B6A200)
#define CLASS_1_218F11F61B4BAE41_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x19B6A850)
#define CLASS_1_218F11F61B4BAE41_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x19B6A8E0)
#define CLASS_1_218F11F61B4BAE41_METHOD_1_BE8EB5F95A0AC81C_OFFSET UNITYSDK_OFFSET(0x19B6A680)
#define CLASS_1_218F11F61B4BAE41_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x19B6A4B0)
#define CLASS_1_218F11F61B4BAE41_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x19B6A280)
#define CLASS_1_218F11F61B4BAE41_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x19B6A810)
#define CLASS_1_218F11F61B4BAE41_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x19B6A980)
#define CLASS_1_218F11F61B4BAE41__CCTOR_OFFSET UNITYSDK_OFFSET(0x19B6ADE0)

inline static constexpr unsigned int Class_1_218F11F61B4BAE41_TypeDefinitionIndex = 10494;

class Class_1_218F11F61B4BAE41 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityActiveBenefitConfigRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityActiveBenefitConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_218F11F61B4BAE41_TypeDefinitionIndex)->GetStaticField(0x48820);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_1()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_218F11F61B4BAE41_TypeDefinitionIndex)->GetStaticField(0x48828);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_2()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_218F11F61B4BAE41_TypeDefinitionIndex)->GetStaticField(0x48830);
	}
	static ::System::Byte* StaticGet_Field_1_3()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_218F11F61B4BAE41_TypeDefinitionIndex)->GetStaticField(0xD590);
	}
	static ::System::Boolean* StaticGet_Field_1_4()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_218F11F61B4BAE41_TypeDefinitionIndex)->GetStaticField(0xD591);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_218F11F61B4BAE41__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityActiveBenefitConfigRow*>* Method_1_705CF2D65524B141()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityActiveBenefitConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_218F11F61B4BAE41_METHOD_1_705CF2D65524B141_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_218F11F61B4BAE41_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityActiveBenefitConfigRow*> Method_1_6783A26C653681F6()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityActiveBenefitConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_218F11F61B4BAE41_METHOD_1_6783A26C653681F6_OFFSET))();
	}

	static ::RPG::GameCore::ActivityActiveBenefitConfigRow* Method_1_BE8EB5F95A0AC81C(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::ActivityActiveBenefitConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_218F11F61B4BAE41_METHOD_1_BE8EB5F95A0AC81C_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_218F11F61B4BAE41_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_218F11F61B4BAE41_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_218F11F61B4BAE41_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_218F11F61B4BAE41_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_218F11F61B4BAE41_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_08649C2797B37F9D(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_218F11F61B4BAE41_METHOD_1_08649C2797B37F9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_47898B1741B8457F(::RPG::GameCore::ActivityActiveBenefitConfigRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::ActivityActiveBenefitConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_218F11F61B4BAE41_METHOD_1_47898B1741B8457F_OFFSET))(a1);
	}
};
