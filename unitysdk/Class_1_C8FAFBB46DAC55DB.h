#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class WorldUnlockConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_C8FAFBB46DAC55DB_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x1B614D60)
#define CLASS_1_C8FAFBB46DAC55DB_METHOD_1_71176F3952142970_OFFSET UNITYSDK_OFFSET(0x1B614DB0)
#define CLASS_1_C8FAFBB46DAC55DB_METHOD_1_73060EEC4999DA7A_OFFSET UNITYSDK_OFFSET(0x1B6149C0)
#define CLASS_1_C8FAFBB46DAC55DB_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1B614B90)
#define CLASS_1_C8FAFBB46DAC55DB_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1B614C20)
#define CLASS_1_C8FAFBB46DAC55DB_METHOD_1_BA380777A27C0A09_OFFSET UNITYSDK_OFFSET(0x1B614890)
#define CLASS_1_C8FAFBB46DAC55DB_METHOD_1_BA40439E1043DE6B_OFFSET UNITYSDK_OFFSET(0x1B614580)
#define CLASS_1_C8FAFBB46DAC55DB_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1B614830)
#define CLASS_1_C8FAFBB46DAC55DB_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1B614600)
#define CLASS_1_C8FAFBB46DAC55DB_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1B614B50)
#define CLASS_1_C8FAFBB46DAC55DB_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1B614CC0)
#define CLASS_1_C8FAFBB46DAC55DB__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B6150D0)

inline static constexpr unsigned int Class_1_C8FAFBB46DAC55DB_TypeDefinitionIndex = 13495;

class Class_1_C8FAFBB46DAC55DB : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_0()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C8FAFBB46DAC55DB_TypeDefinitionIndex)->GetStaticField(0x63170);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_1()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C8FAFBB46DAC55DB_TypeDefinitionIndex)->GetStaticField(0x63178);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::WorldUnlockConfigRow*>** StaticGet_Field_1_2()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::WorldUnlockConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C8FAFBB46DAC55DB_TypeDefinitionIndex)->GetStaticField(0x63180);
	}
	static ::System::Boolean* StaticGet_Field_1_3()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_C8FAFBB46DAC55DB_TypeDefinitionIndex)->GetStaticField(0x12FD0);
	}
	static ::System::Byte* StaticGet_Field_1_4()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_C8FAFBB46DAC55DB_TypeDefinitionIndex)->GetStaticField(0x12FD1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C8FAFBB46DAC55DB__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::WorldUnlockConfigRow*>* Method_1_BA40439E1043DE6B()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::WorldUnlockConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_C8FAFBB46DAC55DB_METHOD_1_BA40439E1043DE6B_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_C8FAFBB46DAC55DB_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::WorldUnlockConfigRow*> Method_1_BA380777A27C0A09()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::WorldUnlockConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_C8FAFBB46DAC55DB_METHOD_1_BA380777A27C0A09_OFFSET))();
	}

	static ::RPG::GameCore::WorldUnlockConfigRow* Method_1_73060EEC4999DA7A(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::WorldUnlockConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C8FAFBB46DAC55DB_METHOD_1_73060EEC4999DA7A_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_C8FAFBB46DAC55DB_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C8FAFBB46DAC55DB_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C8FAFBB46DAC55DB_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C8FAFBB46DAC55DB_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_C8FAFBB46DAC55DB_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_C8FAFBB46DAC55DB_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_71176F3952142970(::RPG::GameCore::WorldUnlockConfigRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::WorldUnlockConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_C8FAFBB46DAC55DB_METHOD_1_71176F3952142970_OFFSET))(a1);
	}
};
