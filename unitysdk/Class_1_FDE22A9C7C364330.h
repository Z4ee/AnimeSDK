#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class B51RacingTeamRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_FDE22A9C7C364330_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x1D295E30)
#define CLASS_1_FDE22A9C7C364330_METHOD_1_3036B1720353E62A_OFFSET UNITYSDK_OFFSET(0x1D295610)
#define CLASS_1_FDE22A9C7C364330_METHOD_1_894E12556BEEB450_OFFSET UNITYSDK_OFFSET(0x1D295E80)
#define CLASS_1_FDE22A9C7C364330_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1D295C60)
#define CLASS_1_FDE22A9C7C364330_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1D295CF0)
#define CLASS_1_FDE22A9C7C364330_METHOD_1_CDAA608F681B7FF3_OFFSET UNITYSDK_OFFSET(0x1D295920)
#define CLASS_1_FDE22A9C7C364330_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1D2958C0)
#define CLASS_1_FDE22A9C7C364330_METHOD_1_D5DAA66027AEC011_OFFSET UNITYSDK_OFFSET(0x1D295A90)
#define CLASS_1_FDE22A9C7C364330_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1D295690)
#define CLASS_1_FDE22A9C7C364330_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1D295C20)
#define CLASS_1_FDE22A9C7C364330_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1D295D90)
#define CLASS_1_FDE22A9C7C364330__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D2961F0)

inline static constexpr unsigned int Class_1_FDE22A9C7C364330_TypeDefinitionIndex = 10941;

class Class_1_FDE22A9C7C364330 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FDE22A9C7C364330_TypeDefinitionIndex)->GetStaticField(0x3DE90);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::B51RacingTeamRow*>** StaticGet_EHNHPCGDOIO()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::B51RacingTeamRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FDE22A9C7C364330_TypeDefinitionIndex)->GetStaticField(0x3DE98);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_MPCODIGIBGL()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FDE22A9C7C364330_TypeDefinitionIndex)->GetStaticField(0x3DEA0);
	}
	static ::System::Boolean* StaticGet_AHBLLGCADBB()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_FDE22A9C7C364330_TypeDefinitionIndex)->GetStaticField(0xF140);
	}
	static ::System::Byte* StaticGet_GDMLAIBCKIP()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_FDE22A9C7C364330_TypeDefinitionIndex)->GetStaticField(0xF141);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_FDE22A9C7C364330__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::B51RacingTeamRow*>* Method_1_3036B1720353E62A()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::B51RacingTeamRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_FDE22A9C7C364330_METHOD_1_3036B1720353E62A_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_FDE22A9C7C364330_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::B51RacingTeamRow*> Method_1_CDAA608F681B7FF3()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::B51RacingTeamRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_FDE22A9C7C364330_METHOD_1_CDAA608F681B7FF3_OFFSET))();
	}

	static ::RPG::GameCore::B51RacingTeamRow* Method_1_D5DAA66027AEC011(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::B51RacingTeamRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FDE22A9C7C364330_METHOD_1_D5DAA66027AEC011_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_FDE22A9C7C364330_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_FDE22A9C7C364330_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_FDE22A9C7C364330_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_FDE22A9C7C364330_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_FDE22A9C7C364330_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_08649C2797B37F9D(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_FDE22A9C7C364330_METHOD_1_08649C2797B37F9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_894E12556BEEB450(::RPG::GameCore::B51RacingTeamRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::B51RacingTeamRow*))((::PBYTE)hIl2Cpp + CLASS_1_FDE22A9C7C364330_METHOD_1_894E12556BEEB450_OFFSET))(a1);
	}
};
