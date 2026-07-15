#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RogueTournCocoonConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_47E58ED069583EF2_METHOD_1_0A24225226BFC431_OFFSET UNITYSDK_OFFSET(0x103E1030)
#define CLASS_1_47E58ED069583EF2_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x103E13E0)
#define CLASS_1_47E58ED069583EF2_METHOD_1_7E7AD0D20EF2286A_OFFSET UNITYSDK_OFFSET(0x103E0F00)
#define CLASS_1_47E58ED069583EF2_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x103E1210)
#define CLASS_1_47E58ED069583EF2_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x103E12A0)
#define CLASS_1_47E58ED069583EF2_METHOD_1_C765221EA192A632_OFFSET UNITYSDK_OFFSET(0x103E0BF0)
#define CLASS_1_47E58ED069583EF2_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x103E0EA0)
#define CLASS_1_47E58ED069583EF2_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x103E0C70)
#define CLASS_1_47E58ED069583EF2_METHOD_1_E488867C30D040BF_OFFSET UNITYSDK_OFFSET(0x103E1430)
#define CLASS_1_47E58ED069583EF2_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x103E11D0)
#define CLASS_1_47E58ED069583EF2_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x103E1340)
#define CLASS_1_47E58ED069583EF2__CCTOR_OFFSET UNITYSDK_OFFSET(0x103E1790)

inline static constexpr unsigned int Class_1_47E58ED069583EF2_TypeDefinitionIndex = 14403;

class Class_1_47E58ED069583EF2 : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_0()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_47E58ED069583EF2_TypeDefinitionIndex)->GetStaticField(0x41760);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_1()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_47E58ED069583EF2_TypeDefinitionIndex)->GetStaticField(0x41768);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournCocoonConfigRow*>** StaticGet_Field_1_2()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournCocoonConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_47E58ED069583EF2_TypeDefinitionIndex)->GetStaticField(0x41770);
	}
	static ::System::Byte* StaticGet_Field_1_3()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_47E58ED069583EF2_TypeDefinitionIndex)->GetStaticField(0xB170);
	}
	static ::System::Boolean* StaticGet_Field_1_4()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_47E58ED069583EF2_TypeDefinitionIndex)->GetStaticField(0xB171);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_47E58ED069583EF2__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournCocoonConfigRow*>* Method_1_C765221EA192A632()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournCocoonConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_47E58ED069583EF2_METHOD_1_C765221EA192A632_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_47E58ED069583EF2_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournCocoonConfigRow*> Method_1_7E7AD0D20EF2286A()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournCocoonConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_47E58ED069583EF2_METHOD_1_7E7AD0D20EF2286A_OFFSET))();
	}

	static ::RPG::GameCore::RogueTournCocoonConfigRow* Method_1_0A24225226BFC431(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::RPG::GameCore::RogueTournCocoonConfigRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_47E58ED069583EF2_METHOD_1_0A24225226BFC431_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_47E58ED069583EF2_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_47E58ED069583EF2_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_47E58ED069583EF2_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_47E58ED069583EF2_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_47E58ED069583EF2_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_47E58ED069583EF2_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_E488867C30D040BF(::RPG::GameCore::RogueTournCocoonConfigRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::RogueTournCocoonConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_47E58ED069583EF2_METHOD_1_E488867C30D040BF_OFFSET))(a1);
	}
};
