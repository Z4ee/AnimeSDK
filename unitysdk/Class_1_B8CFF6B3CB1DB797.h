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

#define CLASS_1_B8CFF6B3CB1DB797_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x18B8C3E0)
#define CLASS_1_B8CFF6B3CB1DB797_METHOD_1_0D9DFDA517A37ED0_OFFSET UNITYSDK_OFFSET(0x18B8BE40)
#define CLASS_1_B8CFF6B3CB1DB797_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x18B8C200)
#define CLASS_1_B8CFF6B3CB1DB797_METHOD_1_658A20AD1AB9E36F_OFFSET UNITYSDK_OFFSET(0x18B8BB10)
#define CLASS_1_B8CFF6B3CB1DB797_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x18B8BB90)
#define CLASS_1_B8CFF6B3CB1DB797_METHOD_1_92E45D01EF6A4B19_OFFSET UNITYSDK_OFFSET(0x18B8BFF0)
#define CLASS_1_B8CFF6B3CB1DB797_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x18B8C2A0)
#define CLASS_1_B8CFF6B3CB1DB797_METHOD_1_BC5EEB8A84A49BED_OFFSET UNITYSDK_OFFSET(0x18B8C430)
#define CLASS_1_B8CFF6B3CB1DB797_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x18B8BDE0)
#define CLASS_1_B8CFF6B3CB1DB797_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x18B8C1C0)
#define CLASS_1_B8CFF6B3CB1DB797_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x18B8C340)
#define CLASS_1_B8CFF6B3CB1DB797__CCTOR_OFFSET UNITYSDK_OFFSET(0x18B8C790)

inline static constexpr unsigned int Class_1_B8CFF6B3CB1DB797_TypeDefinitionIndex = 14564;

class Class_1_B8CFF6B3CB1DB797 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartySkillEffectRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartySkillEffectRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B8CFF6B3CB1DB797_TypeDefinitionIndex)->GetStaticField(0x22F60);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B8CFF6B3CB1DB797_TypeDefinitionIndex)->GetStaticField(0x22F68);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B8CFF6B3CB1DB797_TypeDefinitionIndex)->GetStaticField(0x22F70);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_B8CFF6B3CB1DB797_TypeDefinitionIndex)->GetStaticField(0x8E10);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_B8CFF6B3CB1DB797_TypeDefinitionIndex)->GetStaticField(0x8E11);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B8CFF6B3CB1DB797__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartySkillEffectRow*>* Method_1_658A20AD1AB9E36F()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartySkillEffectRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_B8CFF6B3CB1DB797_METHOD_1_658A20AD1AB9E36F_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_B8CFF6B3CB1DB797_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartySkillEffectRow*> Method_1_0D9DFDA517A37ED0()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartySkillEffectRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_B8CFF6B3CB1DB797_METHOD_1_0D9DFDA517A37ED0_OFFSET))();
	}

	static ::RPG::GameCore::TrainPartySkillEffectRow* Method_1_92E45D01EF6A4B19(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::TrainPartySkillEffectRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B8CFF6B3CB1DB797_METHOD_1_92E45D01EF6A4B19_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_B8CFF6B3CB1DB797_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B8CFF6B3CB1DB797_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B8CFF6B3CB1DB797_METHOD_1_30D1209326FA87FC_OFFSET))();
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
};
