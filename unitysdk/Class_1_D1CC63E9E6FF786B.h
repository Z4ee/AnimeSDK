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

#define CLASS_1_D1CC63E9E6FF786B_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x1D0E14A0)
#define CLASS_1_D1CC63E9E6FF786B_METHOD_1_14655E760EF5A2C7_OFFSET UNITYSDK_OFFSET(0x1D0E0CC0)
#define CLASS_1_D1CC63E9E6FF786B_METHOD_1_38A43F09C51C1E4A_OFFSET UNITYSDK_OFFSET(0x1D0E1140)
#define CLASS_1_D1CC63E9E6FF786B_METHOD_1_7B4A73C254C2A094_OFFSET UNITYSDK_OFFSET(0x1D0E0FD0)
#define CLASS_1_D1CC63E9E6FF786B_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1D0E12D0)
#define CLASS_1_D1CC63E9E6FF786B_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1D0E1360)
#define CLASS_1_D1CC63E9E6FF786B_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1D0E0F70)
#define CLASS_1_D1CC63E9E6FF786B_METHOD_1_D548940D9522876C_OFFSET UNITYSDK_OFFSET(0x1D0E14F0)
#define CLASS_1_D1CC63E9E6FF786B_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1D0E0D40)
#define CLASS_1_D1CC63E9E6FF786B_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1D0E1290)
#define CLASS_1_D1CC63E9E6FF786B_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1D0E1400)
#define CLASS_1_D1CC63E9E6FF786B__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D0E1810)

inline static constexpr unsigned int Class_1_D1CC63E9E6FF786B_TypeDefinitionIndex = 12868;

class Class_1_D1CC63E9E6FF786B : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChallengeTargetConfigRow*>** StaticGet_EHNHPCGDOIO()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChallengeTargetConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D1CC63E9E6FF786B_TypeDefinitionIndex)->GetStaticField(0x17A40);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D1CC63E9E6FF786B_TypeDefinitionIndex)->GetStaticField(0x17A48);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_MPCODIGIBGL()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D1CC63E9E6FF786B_TypeDefinitionIndex)->GetStaticField(0x17A50);
	}
	static ::System::Boolean* StaticGet_AHBLLGCADBB()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_D1CC63E9E6FF786B_TypeDefinitionIndex)->GetStaticField(0x8BB0);
	}
	static ::System::Byte* StaticGet_GDMLAIBCKIP()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_D1CC63E9E6FF786B_TypeDefinitionIndex)->GetStaticField(0x8BB1);
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

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChallengeTargetConfigRow*> Method_1_7B4A73C254C2A094()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChallengeTargetConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_D1CC63E9E6FF786B_METHOD_1_7B4A73C254C2A094_OFFSET))();
	}

	static ::RPG::GameCore::ChallengeTargetConfigRow* Method_1_38A43F09C51C1E4A(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::ChallengeTargetConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D1CC63E9E6FF786B_METHOD_1_38A43F09C51C1E4A_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_D1CC63E9E6FF786B_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D1CC63E9E6FF786B_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D1CC63E9E6FF786B_METHOD_1_89D1F247B9D324EE_OFFSET))();
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
