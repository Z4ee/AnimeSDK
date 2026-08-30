#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/ZLinq/FromFixEnumerator_2.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ZLinq/ValueEnumerable_2.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PlayerReturnInviteRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_E09549829E09DC7F_METHOD_1_0742AA4E89F2D96E_OFFSET UNITYSDK_OFFSET(0x1D5F2900)
#define CLASS_1_E09549829E09DC7F_METHOD_1_0BBFE13607AC534F_OFFSET UNITYSDK_OFFSET(0x1D5F2460)
#define CLASS_1_E09549829E09DC7F_METHOD_1_12120F8E0163B6D1_OFFSET UNITYSDK_OFFSET(0x1D5F2770)
#define CLASS_1_E09549829E09DC7F_METHOD_1_13696A527CD9CA86_OFFSET UNITYSDK_OFFSET(0x1D5F2CA0)
#define CLASS_1_E09549829E09DC7F_METHOD_1_4EA3C90B3512E9B7_OFFSET UNITYSDK_OFFSET(0x1D5F28A0)
#define CLASS_1_E09549829E09DC7F_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1D5F2AD0)
#define CLASS_1_E09549829E09DC7F_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1D5F2B60)
#define CLASS_1_E09549829E09DC7F_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1D5F2710)
#define CLASS_1_E09549829E09DC7F_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1D5F24E0)
#define CLASS_1_E09549829E09DC7F_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1D5F2A90)
#define CLASS_1_E09549829E09DC7F_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1D5F2C00)
#define CLASS_1_E09549829E09DC7F_METHOD_1_F6B397180FA8C33C_OFFSET UNITYSDK_OFFSET(0x1D5F2CF0)
#define CLASS_1_E09549829E09DC7F__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D5F3010)

inline static constexpr unsigned int Class_1_E09549829E09DC7F_TypeDefinitionIndex = 14376;

class Class_1_E09549829E09DC7F : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_MPCODIGIBGL()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E09549829E09DC7F_TypeDefinitionIndex)->GetStaticField(0x5A9A0);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerReturnInviteRow*>** StaticGet_EHNHPCGDOIO()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerReturnInviteRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E09549829E09DC7F_TypeDefinitionIndex)->GetStaticField(0x5A9A8);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E09549829E09DC7F_TypeDefinitionIndex)->GetStaticField(0x5A9B0);
	}
	static ::System::Byte* StaticGet_GDMLAIBCKIP()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_E09549829E09DC7F_TypeDefinitionIndex)->GetStaticField(0x12680);
	}
	static ::System::Boolean* StaticGet_AHBLLGCADBB()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_E09549829E09DC7F_TypeDefinitionIndex)->GetStaticField(0x12681);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_E09549829E09DC7F__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerReturnInviteRow*>* Method_1_0BBFE13607AC534F()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerReturnInviteRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_E09549829E09DC7F_METHOD_1_0BBFE13607AC534F_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_E09549829E09DC7F_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerReturnInviteRow*> Method_1_12120F8E0163B6D1()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerReturnInviteRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_E09549829E09DC7F_METHOD_1_12120F8E0163B6D1_OFFSET))();
	}

	static ::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerReturnInviteRow*>, ::RPG::GameCore::PlayerReturnInviteRow*> Method_1_4EA3C90B3512E9B7()
	{
		return ((::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerReturnInviteRow*>, ::RPG::GameCore::PlayerReturnInviteRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_E09549829E09DC7F_METHOD_1_4EA3C90B3512E9B7_OFFSET))();
	}

	static ::RPG::GameCore::PlayerReturnInviteRow* Method_1_0742AA4E89F2D96E(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::PlayerReturnInviteRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_E09549829E09DC7F_METHOD_1_0742AA4E89F2D96E_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_E09549829E09DC7F_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_E09549829E09DC7F_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_E09549829E09DC7F_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_E09549829E09DC7F_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_E09549829E09DC7F_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_13696A527CD9CA86(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_E09549829E09DC7F_METHOD_1_13696A527CD9CA86_OFFSET))(a1);
	}

	static ::System::Void Method_1_F6B397180FA8C33C(::RPG::GameCore::PlayerReturnInviteRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::PlayerReturnInviteRow*))((::PBYTE)hIl2Cpp + CLASS_1_E09549829E09DC7F_METHOD_1_F6B397180FA8C33C_OFFSET))(a1);
	}
};
