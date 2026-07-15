#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class IdleLiveDisplayImageRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_44E442B41321FBBC_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x1B8F83E0)
#define CLASS_1_44E442B41321FBBC_METHOD_1_6B619D7F6E05F4A5_OFFSET UNITYSDK_OFFSET(0x1B8F8040)
#define CLASS_1_44E442B41321FBBC_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1B8F8210)
#define CLASS_1_44E442B41321FBBC_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1B8F82A0)
#define CLASS_1_44E442B41321FBBC_METHOD_1_B3DC728A49E553A8_OFFSET UNITYSDK_OFFSET(0x1B8F7BC0)
#define CLASS_1_44E442B41321FBBC_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1B8F7E70)
#define CLASS_1_44E442B41321FBBC_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1B8F7C40)
#define CLASS_1_44E442B41321FBBC_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1B8F81D0)
#define CLASS_1_44E442B41321FBBC_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1B8F8340)
#define CLASS_1_44E442B41321FBBC_METHOD_1_F6C772A7A8C07851_OFFSET UNITYSDK_OFFSET(0x1B8F7ED0)
#define CLASS_1_44E442B41321FBBC_METHOD_1_FDDF55B426726A4C_OFFSET UNITYSDK_OFFSET(0x1B8F8430)
#define CLASS_1_44E442B41321FBBC__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B8F87A0)

inline static constexpr unsigned int Class_1_44E442B41321FBBC_TypeDefinitionIndex = 11385;

class Class_1_44E442B41321FBBC : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveDisplayImageRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveDisplayImageRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_44E442B41321FBBC_TypeDefinitionIndex)->GetStaticField(0x42230);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_1()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_44E442B41321FBBC_TypeDefinitionIndex)->GetStaticField(0x42238);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_2()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_44E442B41321FBBC_TypeDefinitionIndex)->GetStaticField(0x42240);
	}
	static ::System::Byte* StaticGet_Field_1_3()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_44E442B41321FBBC_TypeDefinitionIndex)->GetStaticField(0xB360);
	}
	static ::System::Boolean* StaticGet_Field_1_4()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_44E442B41321FBBC_TypeDefinitionIndex)->GetStaticField(0xB361);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_44E442B41321FBBC__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveDisplayImageRow*>* Method_1_B3DC728A49E553A8()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveDisplayImageRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_44E442B41321FBBC_METHOD_1_B3DC728A49E553A8_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_44E442B41321FBBC_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveDisplayImageRow*> Method_1_F6C772A7A8C07851()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveDisplayImageRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_44E442B41321FBBC_METHOD_1_F6C772A7A8C07851_OFFSET))();
	}

	static ::RPG::GameCore::IdleLiveDisplayImageRow* Method_1_6B619D7F6E05F4A5(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::IdleLiveDisplayImageRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_44E442B41321FBBC_METHOD_1_6B619D7F6E05F4A5_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_44E442B41321FBBC_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_44E442B41321FBBC_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_44E442B41321FBBC_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_44E442B41321FBBC_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_44E442B41321FBBC_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_08649C2797B37F9D(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_44E442B41321FBBC_METHOD_1_08649C2797B37F9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_FDDF55B426726A4C(::RPG::GameCore::IdleLiveDisplayImageRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::IdleLiveDisplayImageRow*))((::PBYTE)hIl2Cpp + CLASS_1_44E442B41321FBBC_METHOD_1_FDDF55B426726A4C_OFFSET))(a1);
	}
};
