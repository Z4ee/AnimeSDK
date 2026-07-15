#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class SwordTrainingActionRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_D96E43B7A97D7AC2_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x1B5F3520)
#define CLASS_1_D96E43B7A97D7AC2_METHOD_1_198D9990D3828A16_OFFSET UNITYSDK_OFFSET(0x1B5F3570)
#define CLASS_1_D96E43B7A97D7AC2_METHOD_1_6A177A262F983E8B_OFFSET UNITYSDK_OFFSET(0x1B5F3140)
#define CLASS_1_D96E43B7A97D7AC2_METHOD_1_747005121FD1678A_OFFSET UNITYSDK_OFFSET(0x1B5F2CC0)
#define CLASS_1_D96E43B7A97D7AC2_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1B5F3350)
#define CLASS_1_D96E43B7A97D7AC2_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1B5F33E0)
#define CLASS_1_D96E43B7A97D7AC2_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1B5F2F70)
#define CLASS_1_D96E43B7A97D7AC2_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1B5F2D40)
#define CLASS_1_D96E43B7A97D7AC2_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1B5F3310)
#define CLASS_1_D96E43B7A97D7AC2_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1B5F3480)
#define CLASS_1_D96E43B7A97D7AC2_METHOD_1_F5187A7ECC87A097_OFFSET UNITYSDK_OFFSET(0x1B5F2FD0)
#define CLASS_1_D96E43B7A97D7AC2__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B5F3910)

inline static constexpr unsigned int Class_1_D96E43B7A97D7AC2_TypeDefinitionIndex = 11959;

class Class_1_D96E43B7A97D7AC2 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SwordTrainingActionRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SwordTrainingActionRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D96E43B7A97D7AC2_TypeDefinitionIndex)->GetStaticField(0x44E40);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_1()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D96E43B7A97D7AC2_TypeDefinitionIndex)->GetStaticField(0x44E48);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_2()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D96E43B7A97D7AC2_TypeDefinitionIndex)->GetStaticField(0x44E50);
	}
	static ::System::Boolean* StaticGet_Field_1_3()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_D96E43B7A97D7AC2_TypeDefinitionIndex)->GetStaticField(0xBEC0);
	}
	static ::System::Byte* StaticGet_Field_1_4()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_D96E43B7A97D7AC2_TypeDefinitionIndex)->GetStaticField(0xBEC1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D96E43B7A97D7AC2__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SwordTrainingActionRow*>* Method_1_747005121FD1678A()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SwordTrainingActionRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_D96E43B7A97D7AC2_METHOD_1_747005121FD1678A_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_D96E43B7A97D7AC2_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SwordTrainingActionRow*> Method_1_F5187A7ECC87A097()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SwordTrainingActionRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_D96E43B7A97D7AC2_METHOD_1_F5187A7ECC87A097_OFFSET))();
	}

	static ::RPG::GameCore::SwordTrainingActionRow* Method_1_6A177A262F983E8B(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::RPG::GameCore::SwordTrainingActionRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D96E43B7A97D7AC2_METHOD_1_6A177A262F983E8B_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_D96E43B7A97D7AC2_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D96E43B7A97D7AC2_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D96E43B7A97D7AC2_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_D96E43B7A97D7AC2_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_D96E43B7A97D7AC2_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_D96E43B7A97D7AC2_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_198D9990D3828A16(::RPG::GameCore::SwordTrainingActionRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::SwordTrainingActionRow*))((::PBYTE)hIl2Cpp + CLASS_1_D96E43B7A97D7AC2_METHOD_1_198D9990D3828A16_OFFSET))(a1);
	}
};
