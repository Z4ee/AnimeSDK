#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MultiFloorConflictGroupRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_BEE9B2C25E1435EB_METHOD_1_01BDD81A05F5F11E_OFFSET UNITYSDK_OFFSET(0x1C77E7E0)
#define CLASS_1_BEE9B2C25E1435EB_METHOD_1_13696A527CD9CA86_OFFSET UNITYSDK_OFFSET(0x1C77EB40)
#define CLASS_1_BEE9B2C25E1435EB_METHOD_1_2F34DBC0FDBD1300_OFFSET UNITYSDK_OFFSET(0x1C77EB90)
#define CLASS_1_BEE9B2C25E1435EB_METHOD_1_4EAEDD79AAFB1E8B_OFFSET UNITYSDK_OFFSET(0x1C77E3A0)
#define CLASS_1_BEE9B2C25E1435EB_METHOD_1_5D98D9E2AFBF8139_OFFSET UNITYSDK_OFFSET(0x1C77E6B0)
#define CLASS_1_BEE9B2C25E1435EB_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1C77E970)
#define CLASS_1_BEE9B2C25E1435EB_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1C77EA00)
#define CLASS_1_BEE9B2C25E1435EB_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1C77E650)
#define CLASS_1_BEE9B2C25E1435EB_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1C77E420)
#define CLASS_1_BEE9B2C25E1435EB_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1C77E930)
#define CLASS_1_BEE9B2C25E1435EB_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1C77EAA0)
#define CLASS_1_BEE9B2C25E1435EB__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C77EEB0)

inline static constexpr unsigned int Class_1_BEE9B2C25E1435EB_TypeDefinitionIndex = 13950;

class Class_1_BEE9B2C25E1435EB : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MultiFloorConflictGroupRow*>** StaticGet_EHNHPCGDOIO()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MultiFloorConflictGroupRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_BEE9B2C25E1435EB_TypeDefinitionIndex)->GetStaticField(0x26D0);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_MPCODIGIBGL()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_BEE9B2C25E1435EB_TypeDefinitionIndex)->GetStaticField(0x26D8);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_BEE9B2C25E1435EB_TypeDefinitionIndex)->GetStaticField(0x26E0);
	}
	static ::System::Boolean* StaticGet_AHBLLGCADBB()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_BEE9B2C25E1435EB_TypeDefinitionIndex)->GetStaticField(0xE30);
	}
	static ::System::Byte* StaticGet_GDMLAIBCKIP()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_BEE9B2C25E1435EB_TypeDefinitionIndex)->GetStaticField(0xE31);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_BEE9B2C25E1435EB__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MultiFloorConflictGroupRow*>* Method_1_4EAEDD79AAFB1E8B()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MultiFloorConflictGroupRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_BEE9B2C25E1435EB_METHOD_1_4EAEDD79AAFB1E8B_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_BEE9B2C25E1435EB_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MultiFloorConflictGroupRow*> Method_1_5D98D9E2AFBF8139()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MultiFloorConflictGroupRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_BEE9B2C25E1435EB_METHOD_1_5D98D9E2AFBF8139_OFFSET))();
	}

	static ::RPG::GameCore::MultiFloorConflictGroupRow* Method_1_01BDD81A05F5F11E(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::MultiFloorConflictGroupRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_BEE9B2C25E1435EB_METHOD_1_01BDD81A05F5F11E_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_BEE9B2C25E1435EB_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_BEE9B2C25E1435EB_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_BEE9B2C25E1435EB_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_BEE9B2C25E1435EB_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_BEE9B2C25E1435EB_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_13696A527CD9CA86(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_BEE9B2C25E1435EB_METHOD_1_13696A527CD9CA86_OFFSET))(a1);
	}

	static ::System::Void Method_1_2F34DBC0FDBD1300(::RPG::GameCore::MultiFloorConflictGroupRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::MultiFloorConflictGroupRow*))((::PBYTE)hIl2Cpp + CLASS_1_BEE9B2C25E1435EB_METHOD_1_2F34DBC0FDBD1300_OFFSET))(a1);
	}
};
