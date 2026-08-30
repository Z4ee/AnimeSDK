#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TrainPartyAreaGoalConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_A0C87C9755CA1817_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x1D5C8080)
#define CLASS_1_A0C87C9755CA1817_METHOD_1_0B4EE7EAEA43B8EC_OFFSET UNITYSDK_OFFSET(0x1D5C8520)
#define CLASS_1_A0C87C9755CA1817_METHOD_1_22AFC8776BFB816F_OFFSET UNITYSDK_OFFSET(0x1D5C8440)
#define CLASS_1_A0C87C9755CA1817_METHOD_1_66D6BA6687EB6CE6_OFFSET UNITYSDK_OFFSET(0x1D5C8690)
#define CLASS_1_A0C87C9755CA1817_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1D5C7EB0)
#define CLASS_1_A0C87C9755CA1817_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1D5C7F40)
#define CLASS_1_A0C87C9755CA1817_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1D5C84C0)
#define CLASS_1_A0C87C9755CA1817_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1D5C7C80)
#define CLASS_1_A0C87C9755CA1817_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1D5C7C40)
#define CLASS_1_A0C87C9755CA1817_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1D5C7FE0)
#define CLASS_1_A0C87C9755CA1817_METHOD_1_FE628C268C4FB1AD_OFFSET UNITYSDK_OFFSET(0x1D5C80D0)
#define CLASS_1_A0C87C9755CA1817__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D5C8820)

inline static constexpr unsigned int Class_1_A0C87C9755CA1817_TypeDefinitionIndex = 15182;

class Class_1_A0C87C9755CA1817 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartyAreaGoalConfigRow*>** StaticGet_EHNHPCGDOIO()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartyAreaGoalConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A0C87C9755CA1817_TypeDefinitionIndex)->GetStaticField(0x300A0);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A0C87C9755CA1817_TypeDefinitionIndex)->GetStaticField(0x300A8);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_MPCODIGIBGL()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A0C87C9755CA1817_TypeDefinitionIndex)->GetStaticField(0x300B0);
	}
	static ::System::Boolean* StaticGet_AHBLLGCADBB()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_A0C87C9755CA1817_TypeDefinitionIndex)->GetStaticField(0xCD10);
	}
	static ::System::Byte* StaticGet_GDMLAIBCKIP()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_A0C87C9755CA1817_TypeDefinitionIndex)->GetStaticField(0xCD11);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A0C87C9755CA1817__CCTOR_OFFSET))();
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_A0C87C9755CA1817_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A0C87C9755CA1817_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A0C87C9755CA1817_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A0C87C9755CA1817_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_A0C87C9755CA1817_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_08649C2797B37F9D(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_A0C87C9755CA1817_METHOD_1_08649C2797B37F9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_FE628C268C4FB1AD(::RPG::GameCore::TrainPartyAreaGoalConfigRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::TrainPartyAreaGoalConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_A0C87C9755CA1817_METHOD_1_FE628C268C4FB1AD_OFFSET))(a1);
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartyAreaGoalConfigRow*>* Method_1_22AFC8776BFB816F()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartyAreaGoalConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_A0C87C9755CA1817_METHOD_1_22AFC8776BFB816F_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_A0C87C9755CA1817_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartyAreaGoalConfigRow*> Method_1_0B4EE7EAEA43B8EC()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartyAreaGoalConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_A0C87C9755CA1817_METHOD_1_0B4EE7EAEA43B8EC_OFFSET))();
	}

	static ::RPG::GameCore::TrainPartyAreaGoalConfigRow* Method_1_66D6BA6687EB6CE6(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::TrainPartyAreaGoalConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_A0C87C9755CA1817_METHOD_1_66D6BA6687EB6CE6_OFFSET))(a1);
	}
};
