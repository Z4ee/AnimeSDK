#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class GridFightTraitBonusAddRuleConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_46A70522E7489271_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x191E78A0)
#define CLASS_1_46A70522E7489271_METHOD_1_76D0664381C3A7ED_OFFSET UNITYSDK_OFFSET(0x191E7080)
#define CLASS_1_46A70522E7489271_METHOD_1_7B8418E76EEFBDFA_OFFSET UNITYSDK_OFFSET(0x191E7390)
#define CLASS_1_46A70522E7489271_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x191E76D0)
#define CLASS_1_46A70522E7489271_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x191E7760)
#define CLASS_1_46A70522E7489271_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x191E7330)
#define CLASS_1_46A70522E7489271_METHOD_1_D097E1C9F56CF5E8_OFFSET UNITYSDK_OFFSET(0x191E7500)
#define CLASS_1_46A70522E7489271_METHOD_1_D239A49A24E53873_OFFSET UNITYSDK_OFFSET(0x191E78F0)
#define CLASS_1_46A70522E7489271_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x191E7100)
#define CLASS_1_46A70522E7489271_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x191E7690)
#define CLASS_1_46A70522E7489271_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x191E7800)
#define CLASS_1_46A70522E7489271__CCTOR_OFFSET UNITYSDK_OFFSET(0x191E7C60)

inline static constexpr unsigned int Class_1_46A70522E7489271_TypeDefinitionIndex = 13033;

class Class_1_46A70522E7489271 : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_0()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_46A70522E7489271_TypeDefinitionIndex)->GetStaticField(0x4E9A0);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_1()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_46A70522E7489271_TypeDefinitionIndex)->GetStaticField(0x4E9A8);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTraitBonusAddRuleConfigRow*>** StaticGet_Field_1_2()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTraitBonusAddRuleConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_46A70522E7489271_TypeDefinitionIndex)->GetStaticField(0x4E9B0);
	}
	static ::System::Byte* StaticGet_Field_1_3()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_46A70522E7489271_TypeDefinitionIndex)->GetStaticField(0xF310);
	}
	static ::System::Boolean* StaticGet_Field_1_4()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_46A70522E7489271_TypeDefinitionIndex)->GetStaticField(0xF311);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_46A70522E7489271__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTraitBonusAddRuleConfigRow*>* Method_1_76D0664381C3A7ED()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTraitBonusAddRuleConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_46A70522E7489271_METHOD_1_76D0664381C3A7ED_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_46A70522E7489271_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTraitBonusAddRuleConfigRow*> Method_1_7B8418E76EEFBDFA()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTraitBonusAddRuleConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_46A70522E7489271_METHOD_1_7B8418E76EEFBDFA_OFFSET))();
	}

	static ::RPG::GameCore::GridFightTraitBonusAddRuleConfigRow* Method_1_D097E1C9F56CF5E8(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::GridFightTraitBonusAddRuleConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_46A70522E7489271_METHOD_1_D097E1C9F56CF5E8_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_46A70522E7489271_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_46A70522E7489271_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_46A70522E7489271_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_46A70522E7489271_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_46A70522E7489271_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_08649C2797B37F9D(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_46A70522E7489271_METHOD_1_08649C2797B37F9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_D239A49A24E53873(::RPG::GameCore::GridFightTraitBonusAddRuleConfigRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::GridFightTraitBonusAddRuleConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_46A70522E7489271_METHOD_1_D239A49A24E53873_OFFSET))(a1);
	}
};
