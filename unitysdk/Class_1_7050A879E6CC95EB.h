#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AvatarAbilityStatisticsRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_7050A879E6CC95EB_METHOD_1_13696A527CD9CA86_OFFSET UNITYSDK_OFFSET(0x1CA83DC0)
#define CLASS_1_7050A879E6CC95EB_METHOD_1_2A8BE3D8B0F60C82_OFFSET UNITYSDK_OFFSET(0x1CA83A60)
#define CLASS_1_7050A879E6CC95EB_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1CA83BF0)
#define CLASS_1_7050A879E6CC95EB_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1CA83C80)
#define CLASS_1_7050A879E6CC95EB_METHOD_1_AE26A30E8A8FB24B_OFFSET UNITYSDK_OFFSET(0x1CA835E0)
#define CLASS_1_7050A879E6CC95EB_METHOD_1_C0F808A5B866A6A8_OFFSET UNITYSDK_OFFSET(0x1CA838F0)
#define CLASS_1_7050A879E6CC95EB_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1CA83890)
#define CLASS_1_7050A879E6CC95EB_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1CA83660)
#define CLASS_1_7050A879E6CC95EB_METHOD_1_DF78D9F7890B0F24_OFFSET UNITYSDK_OFFSET(0x1CA83E10)
#define CLASS_1_7050A879E6CC95EB_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1CA83BB0)
#define CLASS_1_7050A879E6CC95EB_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1CA83D20)
#define CLASS_1_7050A879E6CC95EB__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CA84130)

inline static constexpr unsigned int Class_1_7050A879E6CC95EB_TypeDefinitionIndex = 12757;

class Class_1_7050A879E6CC95EB : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7050A879E6CC95EB_TypeDefinitionIndex)->GetStaticField(0x21260);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarAbilityStatisticsRow*>** StaticGet_EHNHPCGDOIO()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarAbilityStatisticsRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7050A879E6CC95EB_TypeDefinitionIndex)->GetStaticField(0x21268);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_MPCODIGIBGL()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7050A879E6CC95EB_TypeDefinitionIndex)->GetStaticField(0x21270);
	}
	static ::System::Byte* StaticGet_GDMLAIBCKIP()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_7050A879E6CC95EB_TypeDefinitionIndex)->GetStaticField(0xAB20);
	}
	static ::System::Boolean* StaticGet_AHBLLGCADBB()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_7050A879E6CC95EB_TypeDefinitionIndex)->GetStaticField(0xAB21);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7050A879E6CC95EB__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarAbilityStatisticsRow*>* Method_1_AE26A30E8A8FB24B()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarAbilityStatisticsRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_7050A879E6CC95EB_METHOD_1_AE26A30E8A8FB24B_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_7050A879E6CC95EB_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarAbilityStatisticsRow*> Method_1_C0F808A5B866A6A8()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarAbilityStatisticsRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_7050A879E6CC95EB_METHOD_1_C0F808A5B866A6A8_OFFSET))();
	}

	static ::RPG::GameCore::AvatarAbilityStatisticsRow* Method_1_2A8BE3D8B0F60C82(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::AvatarAbilityStatisticsRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_7050A879E6CC95EB_METHOD_1_2A8BE3D8B0F60C82_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_7050A879E6CC95EB_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7050A879E6CC95EB_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7050A879E6CC95EB_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_7050A879E6CC95EB_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_7050A879E6CC95EB_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_13696A527CD9CA86(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_7050A879E6CC95EB_METHOD_1_13696A527CD9CA86_OFFSET))(a1);
	}

	static ::System::Void Method_1_DF78D9F7890B0F24(::RPG::GameCore::AvatarAbilityStatisticsRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::AvatarAbilityStatisticsRow*))((::PBYTE)hIl2Cpp + CLASS_1_7050A879E6CC95EB_METHOD_1_DF78D9F7890B0F24_OFFSET))(a1);
	}
};
