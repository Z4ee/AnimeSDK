#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class IdleLiveAvatarUpgradeRewardRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_1253D7B88BDF0D49_METHOD_1_13696A527CD9CA86_OFFSET UNITYSDK_OFFSET(0x1CFF9190)
#define CLASS_1_1253D7B88BDF0D49_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1CFF8FC0)
#define CLASS_1_1253D7B88BDF0D49_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1CFF9050)
#define CLASS_1_1253D7B88BDF0D49_METHOD_1_B61DA349AD937FCD_OFFSET UNITYSDK_OFFSET(0x1CFF89B0)
#define CLASS_1_1253D7B88BDF0D49_METHOD_1_C6A235804CEB58C2_OFFSET UNITYSDK_OFFSET(0x1CFF91E0)
#define CLASS_1_1253D7B88BDF0D49_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1CFF8C60)
#define CLASS_1_1253D7B88BDF0D49_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1CFF8A30)
#define CLASS_1_1253D7B88BDF0D49_METHOD_1_E04486B7DD7F527B_OFFSET UNITYSDK_OFFSET(0x1CFF8CC0)
#define CLASS_1_1253D7B88BDF0D49_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1CFF8F80)
#define CLASS_1_1253D7B88BDF0D49_METHOD_1_F2DFAE1B63163A20_OFFSET UNITYSDK_OFFSET(0x1CFF8DF0)
#define CLASS_1_1253D7B88BDF0D49_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1CFF90F0)
#define CLASS_1_1253D7B88BDF0D49__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CFF9500)

inline static constexpr unsigned int Class_1_1253D7B88BDF0D49_TypeDefinitionIndex = 11696;

class Class_1_1253D7B88BDF0D49 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveAvatarUpgradeRewardRow*>** StaticGet_EHNHPCGDOIO()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveAvatarUpgradeRewardRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1253D7B88BDF0D49_TypeDefinitionIndex)->GetStaticField(0x35650);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_MPCODIGIBGL()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1253D7B88BDF0D49_TypeDefinitionIndex)->GetStaticField(0x35658);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1253D7B88BDF0D49_TypeDefinitionIndex)->GetStaticField(0x35660);
	}
	static ::System::Byte* StaticGet_GDMLAIBCKIP()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_1253D7B88BDF0D49_TypeDefinitionIndex)->GetStaticField(0xDF90);
	}
	static ::System::Boolean* StaticGet_AHBLLGCADBB()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_1253D7B88BDF0D49_TypeDefinitionIndex)->GetStaticField(0xDF91);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_1253D7B88BDF0D49__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveAvatarUpgradeRewardRow*>* Method_1_B61DA349AD937FCD()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveAvatarUpgradeRewardRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_1253D7B88BDF0D49_METHOD_1_B61DA349AD937FCD_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_1253D7B88BDF0D49_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveAvatarUpgradeRewardRow*> Method_1_E04486B7DD7F527B()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveAvatarUpgradeRewardRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_1253D7B88BDF0D49_METHOD_1_E04486B7DD7F527B_OFFSET))();
	}

	static ::RPG::GameCore::IdleLiveAvatarUpgradeRewardRow* Method_1_F2DFAE1B63163A20(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::IdleLiveAvatarUpgradeRewardRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1253D7B88BDF0D49_METHOD_1_F2DFAE1B63163A20_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_1253D7B88BDF0D49_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_1253D7B88BDF0D49_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_1253D7B88BDF0D49_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_1253D7B88BDF0D49_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_1253D7B88BDF0D49_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_13696A527CD9CA86(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_1253D7B88BDF0D49_METHOD_1_13696A527CD9CA86_OFFSET))(a1);
	}

	static ::System::Void Method_1_C6A235804CEB58C2(::RPG::GameCore::IdleLiveAvatarUpgradeRewardRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::IdleLiveAvatarUpgradeRewardRow*))((::PBYTE)hIl2Cpp + CLASS_1_1253D7B88BDF0D49_METHOD_1_C6A235804CEB58C2_OFFSET))(a1);
	}
};
