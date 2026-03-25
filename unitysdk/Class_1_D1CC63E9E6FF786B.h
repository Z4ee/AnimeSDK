#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ChallengeTargetConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_D1CC63E9E6FF786B_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x16EC7B20)
#define CLASS_1_D1CC63E9E6FF786B_METHOD_1_14655E760EF5A2C7_OFFSET UNITYSDK_OFFSET(0x16EC72A0)
#define CLASS_1_D1CC63E9E6FF786B_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x16EC7940)
#define CLASS_1_D1CC63E9E6FF786B_METHOD_1_490B77CC21AF6248_OFFSET UNITYSDK_OFFSET(0x16EC75D0)
#define CLASS_1_D1CC63E9E6FF786B_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x16EC7320)
#define CLASS_1_D1CC63E9E6FF786B_METHOD_1_86F2176ABCDB1548_OFFSET UNITYSDK_OFFSET(0x16EC7780)
#define CLASS_1_D1CC63E9E6FF786B_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x16EC79E0)
#define CLASS_1_D1CC63E9E6FF786B_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x16EC7570)
#define CLASS_1_D1CC63E9E6FF786B_METHOD_1_D548940D9522876C_OFFSET UNITYSDK_OFFSET(0x16EC7B70)
#define CLASS_1_D1CC63E9E6FF786B_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x16EC7900)
#define CLASS_1_D1CC63E9E6FF786B_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x16EC7A80)
#define CLASS_1_D1CC63E9E6FF786B__CCTOR_OFFSET UNITYSDK_OFFSET(0x16EC7E80)

inline static constexpr unsigned int Class_1_D1CC63E9E6FF786B_TypeDefinitionIndex = 11826;

class Class_1_D1CC63E9E6FF786B : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D1CC63E9E6FF786B_TypeDefinitionIndex)->GetStaticField(0x2CB00);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChallengeTargetConfigRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChallengeTargetConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D1CC63E9E6FF786B_TypeDefinitionIndex)->GetStaticField(0x2CB08);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D1CC63E9E6FF786B_TypeDefinitionIndex)->GetStaticField(0x2CB10);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_D1CC63E9E6FF786B_TypeDefinitionIndex)->GetStaticField(0xEE20);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_D1CC63E9E6FF786B_TypeDefinitionIndex)->GetStaticField(0xEE21);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D1CC63E9E6FF786B__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChallengeTargetConfigRow*>* Method_1_14655E760EF5A2C7()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChallengeTargetConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_D1CC63E9E6FF786B_METHOD_1_14655E760EF5A2C7_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_D1CC63E9E6FF786B_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChallengeTargetConfigRow*> Method_1_490B77CC21AF6248()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChallengeTargetConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_D1CC63E9E6FF786B_METHOD_1_490B77CC21AF6248_OFFSET))();
	}

	static ::RPG::GameCore::ChallengeTargetConfigRow* Method_1_86F2176ABCDB1548(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::ChallengeTargetConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D1CC63E9E6FF786B_METHOD_1_86F2176ABCDB1548_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_D1CC63E9E6FF786B_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D1CC63E9E6FF786B_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D1CC63E9E6FF786B_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_D1CC63E9E6FF786B_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_D1CC63E9E6FF786B_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_D1CC63E9E6FF786B_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_D548940D9522876C(::RPG::GameCore::ChallengeTargetConfigRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::ChallengeTargetConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_D1CC63E9E6FF786B_METHOD_1_D548940D9522876C_OFFSET))(a1);
	}
};
