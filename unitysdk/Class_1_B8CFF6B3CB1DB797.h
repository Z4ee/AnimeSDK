#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TrainPartySkillEffectRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_B8CFF6B3CB1DB797_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x1B14CC80)
#define CLASS_1_B8CFF6B3CB1DB797_METHOD_1_16A217D7A10956A6_OFFSET UNITYSDK_OFFSET(0x1B14D290)
#define CLASS_1_B8CFF6B3CB1DB797_METHOD_1_658A20AD1AB9E36F_OFFSET UNITYSDK_OFFSET(0x1B14D040)
#define CLASS_1_B8CFF6B3CB1DB797_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1B14CAB0)
#define CLASS_1_B8CFF6B3CB1DB797_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1B14CB40)
#define CLASS_1_B8CFF6B3CB1DB797_METHOD_1_BC5EEB8A84A49BED_OFFSET UNITYSDK_OFFSET(0x1B14CCD0)
#define CLASS_1_B8CFF6B3CB1DB797_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1B14D0C0)
#define CLASS_1_B8CFF6B3CB1DB797_METHOD_1_D8C2DF951AD78F9C_OFFSET UNITYSDK_OFFSET(0x1B14D120)
#define CLASS_1_B8CFF6B3CB1DB797_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1B14C880)
#define CLASS_1_B8CFF6B3CB1DB797_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1B14C840)
#define CLASS_1_B8CFF6B3CB1DB797_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1B14CBE0)
#define CLASS_1_B8CFF6B3CB1DB797__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B14D420)

inline static constexpr unsigned int Class_1_B8CFF6B3CB1DB797_TypeDefinitionIndex = 14754;

class Class_1_B8CFF6B3CB1DB797 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_0()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B8CFF6B3CB1DB797_TypeDefinitionIndex)->GetStaticField(0x48FB0);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartySkillEffectRow*>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartySkillEffectRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B8CFF6B3CB1DB797_TypeDefinitionIndex)->GetStaticField(0x48FB8);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_2()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B8CFF6B3CB1DB797_TypeDefinitionIndex)->GetStaticField(0x48FC0);
	}
	static ::System::Byte* StaticGet_Field_1_3()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_B8CFF6B3CB1DB797_TypeDefinitionIndex)->GetStaticField(0xCDD0);
	}
	static ::System::Boolean* StaticGet_Field_1_4()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_B8CFF6B3CB1DB797_TypeDefinitionIndex)->GetStaticField(0xCDD1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B8CFF6B3CB1DB797__CCTOR_OFFSET))();
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_B8CFF6B3CB1DB797_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B8CFF6B3CB1DB797_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B8CFF6B3CB1DB797_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B8CFF6B3CB1DB797_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_B8CFF6B3CB1DB797_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_08649C2797B37F9D(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_B8CFF6B3CB1DB797_METHOD_1_08649C2797B37F9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_BC5EEB8A84A49BED(::RPG::GameCore::TrainPartySkillEffectRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::TrainPartySkillEffectRow*))((::PBYTE)hIl2Cpp + CLASS_1_B8CFF6B3CB1DB797_METHOD_1_BC5EEB8A84A49BED_OFFSET))(a1);
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartySkillEffectRow*>* Method_1_658A20AD1AB9E36F()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartySkillEffectRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_B8CFF6B3CB1DB797_METHOD_1_658A20AD1AB9E36F_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_B8CFF6B3CB1DB797_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartySkillEffectRow*> Method_1_D8C2DF951AD78F9C()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartySkillEffectRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_B8CFF6B3CB1DB797_METHOD_1_D8C2DF951AD78F9C_OFFSET))();
	}

	static ::RPG::GameCore::TrainPartySkillEffectRow* Method_1_16A217D7A10956A6(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::TrainPartySkillEffectRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B8CFF6B3CB1DB797_METHOD_1_16A217D7A10956A6_OFFSET))(a1);
	}
};
