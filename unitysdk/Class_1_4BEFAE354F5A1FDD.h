#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class GridFightBackendRoleEquipmentConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_4BEFAE354F5A1FDD_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x1B333050)
#define CLASS_1_4BEFAE354F5A1FDD_METHOD_1_1B6BA7F4584859AD_OFFSET UNITYSDK_OFFSET(0x1B332C30)
#define CLASS_1_4BEFAE354F5A1FDD_METHOD_1_4B841B25749ECDB2_OFFSET UNITYSDK_OFFSET(0x1B332AC0)
#define CLASS_1_4BEFAE354F5A1FDD_METHOD_1_66D0710E1E8CB9BD_OFFSET UNITYSDK_OFFSET(0x1B3327B0)
#define CLASS_1_4BEFAE354F5A1FDD_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1B332E80)
#define CLASS_1_4BEFAE354F5A1FDD_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1B332F10)
#define CLASS_1_4BEFAE354F5A1FDD_METHOD_1_B75EBCAF2DDD8E9B_OFFSET UNITYSDK_OFFSET(0x1B3330A0)
#define CLASS_1_4BEFAE354F5A1FDD_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1B332A60)
#define CLASS_1_4BEFAE354F5A1FDD_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1B332830)
#define CLASS_1_4BEFAE354F5A1FDD_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1B332E40)
#define CLASS_1_4BEFAE354F5A1FDD_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1B332FB0)
#define CLASS_1_4BEFAE354F5A1FDD__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B333470)

inline static constexpr unsigned int Class_1_4BEFAE354F5A1FDD_TypeDefinitionIndex = 13030;

class Class_1_4BEFAE354F5A1FDD : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_0()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4BEFAE354F5A1FDD_TypeDefinitionIndex)->GetStaticField(0x66720);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightBackendRoleEquipmentConfigRow*>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightBackendRoleEquipmentConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4BEFAE354F5A1FDD_TypeDefinitionIndex)->GetStaticField(0x66728);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_2()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4BEFAE354F5A1FDD_TypeDefinitionIndex)->GetStaticField(0x66730);
	}
	static ::System::Byte* StaticGet_Field_1_3()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_4BEFAE354F5A1FDD_TypeDefinitionIndex)->GetStaticField(0x13C00);
	}
	static ::System::Boolean* StaticGet_Field_1_4()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_4BEFAE354F5A1FDD_TypeDefinitionIndex)->GetStaticField(0x13C01);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4BEFAE354F5A1FDD__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightBackendRoleEquipmentConfigRow*>* Method_1_66D0710E1E8CB9BD()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightBackendRoleEquipmentConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_4BEFAE354F5A1FDD_METHOD_1_66D0710E1E8CB9BD_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_4BEFAE354F5A1FDD_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightBackendRoleEquipmentConfigRow*> Method_1_4B841B25749ECDB2()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightBackendRoleEquipmentConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_4BEFAE354F5A1FDD_METHOD_1_4B841B25749ECDB2_OFFSET))();
	}

	static ::RPG::GameCore::GridFightBackendRoleEquipmentConfigRow* Method_1_1B6BA7F4584859AD(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
	{
		return ((::RPG::GameCore::GridFightBackendRoleEquipmentConfigRow*(*)(::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4BEFAE354F5A1FDD_METHOD_1_1B6BA7F4584859AD_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_4BEFAE354F5A1FDD_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4BEFAE354F5A1FDD_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4BEFAE354F5A1FDD_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_4BEFAE354F5A1FDD_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_4BEFAE354F5A1FDD_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_4BEFAE354F5A1FDD_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_B75EBCAF2DDD8E9B(::RPG::GameCore::GridFightBackendRoleEquipmentConfigRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::GridFightBackendRoleEquipmentConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_4BEFAE354F5A1FDD_METHOD_1_B75EBCAF2DDD8E9B_OFFSET))(a1);
	}
};
