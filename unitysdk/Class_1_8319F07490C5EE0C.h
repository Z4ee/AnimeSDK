#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PlayerOutfitBaseRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_8319F07490C5EE0C_METHOD_1_13696A527CD9CA86_OFFSET UNITYSDK_OFFSET(0x1C8C6E80)
#define CLASS_1_8319F07490C5EE0C_METHOD_1_4608AE654EBE3DD5_OFFSET UNITYSDK_OFFSET(0x1C8C6AE0)
#define CLASS_1_8319F07490C5EE0C_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1C8C6CB0)
#define CLASS_1_8319F07490C5EE0C_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1C8C6D40)
#define CLASS_1_8319F07490C5EE0C_METHOD_1_C17BD1B50BBEE0A0_OFFSET UNITYSDK_OFFSET(0x1C8C66A0)
#define CLASS_1_8319F07490C5EE0C_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1C8C6950)
#define CLASS_1_8319F07490C5EE0C_METHOD_1_D6CB4F7F7335BF75_OFFSET UNITYSDK_OFFSET(0x1C8C6ED0)
#define CLASS_1_8319F07490C5EE0C_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1C8C6720)
#define CLASS_1_8319F07490C5EE0C_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1C8C6C70)
#define CLASS_1_8319F07490C5EE0C_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1C8C6DE0)
#define CLASS_1_8319F07490C5EE0C_METHOD_1_F6A85619F1117688_OFFSET UNITYSDK_OFFSET(0x1C8C69B0)
#define CLASS_1_8319F07490C5EE0C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C8C71F0)

inline static constexpr unsigned int Class_1_8319F07490C5EE0C_TypeDefinitionIndex = 14345;

class Class_1_8319F07490C5EE0C : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerOutfitBaseRow*>** StaticGet_EHNHPCGDOIO()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerOutfitBaseRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8319F07490C5EE0C_TypeDefinitionIndex)->GetStaticField(0x54650);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8319F07490C5EE0C_TypeDefinitionIndex)->GetStaticField(0x54658);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_MPCODIGIBGL()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8319F07490C5EE0C_TypeDefinitionIndex)->GetStaticField(0x54660);
	}
	static ::System::Boolean* StaticGet_AHBLLGCADBB()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_8319F07490C5EE0C_TypeDefinitionIndex)->GetStaticField(0x11500);
	}
	static ::System::Byte* StaticGet_GDMLAIBCKIP()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_8319F07490C5EE0C_TypeDefinitionIndex)->GetStaticField(0x11501);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8319F07490C5EE0C__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerOutfitBaseRow*>* Method_1_C17BD1B50BBEE0A0()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerOutfitBaseRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_8319F07490C5EE0C_METHOD_1_C17BD1B50BBEE0A0_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_8319F07490C5EE0C_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerOutfitBaseRow*> Method_1_F6A85619F1117688()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerOutfitBaseRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_8319F07490C5EE0C_METHOD_1_F6A85619F1117688_OFFSET))();
	}

	static ::RPG::GameCore::PlayerOutfitBaseRow* Method_1_4608AE654EBE3DD5(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::PlayerOutfitBaseRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_8319F07490C5EE0C_METHOD_1_4608AE654EBE3DD5_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_8319F07490C5EE0C_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8319F07490C5EE0C_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8319F07490C5EE0C_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_8319F07490C5EE0C_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_8319F07490C5EE0C_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_13696A527CD9CA86(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_8319F07490C5EE0C_METHOD_1_13696A527CD9CA86_OFFSET))(a1);
	}

	static ::System::Void Method_1_D6CB4F7F7335BF75(::RPG::GameCore::PlayerOutfitBaseRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::PlayerOutfitBaseRow*))((::PBYTE)hIl2Cpp + CLASS_1_8319F07490C5EE0C_METHOD_1_D6CB4F7F7335BF75_OFFSET))(a1);
	}
};
