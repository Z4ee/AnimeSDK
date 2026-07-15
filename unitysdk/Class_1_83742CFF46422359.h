#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class IdleLiveEquipRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_83742CFF46422359_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x1AF84C50)
#define CLASS_1_83742CFF46422359_METHOD_1_6E9356EDEACC6E4B_OFFSET UNITYSDK_OFFSET(0x1AF84CA0)
#define CLASS_1_83742CFF46422359_METHOD_1_7D86F0F60C3B8955_OFFSET UNITYSDK_OFFSET(0x1AF84430)
#define CLASS_1_83742CFF46422359_METHOD_1_813BC2077FD24ACE_OFFSET UNITYSDK_OFFSET(0x1AF84740)
#define CLASS_1_83742CFF46422359_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1AF84A80)
#define CLASS_1_83742CFF46422359_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1AF84B10)
#define CLASS_1_83742CFF46422359_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1AF846E0)
#define CLASS_1_83742CFF46422359_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1AF844B0)
#define CLASS_1_83742CFF46422359_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1AF84A40)
#define CLASS_1_83742CFF46422359_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1AF84BB0)
#define CLASS_1_83742CFF46422359_METHOD_1_F94B850EE52AD670_OFFSET UNITYSDK_OFFSET(0x1AF848B0)
#define CLASS_1_83742CFF46422359__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AF85010)

inline static constexpr unsigned int Class_1_83742CFF46422359_TypeDefinitionIndex = 11344;

class Class_1_83742CFF46422359 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_0()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_83742CFF46422359_TypeDefinitionIndex)->GetStaticField(0x66F50);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_1()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_83742CFF46422359_TypeDefinitionIndex)->GetStaticField(0x66F58);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveEquipRow*>** StaticGet_Field_1_2()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveEquipRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_83742CFF46422359_TypeDefinitionIndex)->GetStaticField(0x66F60);
	}
	static ::System::Byte* StaticGet_Field_1_3()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_83742CFF46422359_TypeDefinitionIndex)->GetStaticField(0x13E00);
	}
	static ::System::Boolean* StaticGet_Field_1_4()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_83742CFF46422359_TypeDefinitionIndex)->GetStaticField(0x13E01);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_83742CFF46422359__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveEquipRow*>* Method_1_7D86F0F60C3B8955()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveEquipRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_83742CFF46422359_METHOD_1_7D86F0F60C3B8955_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_83742CFF46422359_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveEquipRow*> Method_1_813BC2077FD24ACE()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveEquipRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_83742CFF46422359_METHOD_1_813BC2077FD24ACE_OFFSET))();
	}

	static ::RPG::GameCore::IdleLiveEquipRow* Method_1_F94B850EE52AD670(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::IdleLiveEquipRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_83742CFF46422359_METHOD_1_F94B850EE52AD670_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_83742CFF46422359_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_83742CFF46422359_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_83742CFF46422359_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_83742CFF46422359_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_83742CFF46422359_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_08649C2797B37F9D(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_83742CFF46422359_METHOD_1_08649C2797B37F9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_6E9356EDEACC6E4B(::RPG::GameCore::IdleLiveEquipRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::IdleLiveEquipRow*))((::PBYTE)hIl2Cpp + CLASS_1_83742CFF46422359_METHOD_1_6E9356EDEACC6E4B_OFFSET))(a1);
	}
};
