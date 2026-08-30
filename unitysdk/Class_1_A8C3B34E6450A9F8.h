#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ILBattleSkillTriggerKeyRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_A8C3B34E6450A9F8_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x1CF45990)
#define CLASS_1_A8C3B34E6450A9F8_METHOD_1_59BAC1BC643C47B6_OFFSET UNITYSDK_OFFSET(0x1CF455D0)
#define CLASS_1_A8C3B34E6450A9F8_METHOD_1_5ACD025224D93370_OFFSET UNITYSDK_OFFSET(0x1CF459E0)
#define CLASS_1_A8C3B34E6450A9F8_METHOD_1_69683E748846A74C_OFFSET UNITYSDK_OFFSET(0x1CF45150)
#define CLASS_1_A8C3B34E6450A9F8_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1CF457C0)
#define CLASS_1_A8C3B34E6450A9F8_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1CF45850)
#define CLASS_1_A8C3B34E6450A9F8_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1CF45400)
#define CLASS_1_A8C3B34E6450A9F8_METHOD_1_D624771E64E55AED_OFFSET UNITYSDK_OFFSET(0x1CF45460)
#define CLASS_1_A8C3B34E6450A9F8_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1CF451D0)
#define CLASS_1_A8C3B34E6450A9F8_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1CF45780)
#define CLASS_1_A8C3B34E6450A9F8_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1CF458F0)
#define CLASS_1_A8C3B34E6450A9F8__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CF45D50)

inline static constexpr unsigned int Class_1_A8C3B34E6450A9F8_TypeDefinitionIndex = 13684;

class Class_1_A8C3B34E6450A9F8 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ILBattleSkillTriggerKeyRow*>** StaticGet_EHNHPCGDOIO()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ILBattleSkillTriggerKeyRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A8C3B34E6450A9F8_TypeDefinitionIndex)->GetStaticField(0x5E960);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A8C3B34E6450A9F8_TypeDefinitionIndex)->GetStaticField(0x5E968);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_MPCODIGIBGL()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A8C3B34E6450A9F8_TypeDefinitionIndex)->GetStaticField(0x5E970);
	}
	static ::System::Boolean* StaticGet_AHBLLGCADBB()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_A8C3B34E6450A9F8_TypeDefinitionIndex)->GetStaticField(0x131A0);
	}
	static ::System::Byte* StaticGet_GDMLAIBCKIP()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_A8C3B34E6450A9F8_TypeDefinitionIndex)->GetStaticField(0x131A1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A8C3B34E6450A9F8__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ILBattleSkillTriggerKeyRow*>* Method_1_69683E748846A74C()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ILBattleSkillTriggerKeyRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_A8C3B34E6450A9F8_METHOD_1_69683E748846A74C_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_A8C3B34E6450A9F8_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ILBattleSkillTriggerKeyRow*> Method_1_D624771E64E55AED()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ILBattleSkillTriggerKeyRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_A8C3B34E6450A9F8_METHOD_1_D624771E64E55AED_OFFSET))();
	}

	static ::RPG::GameCore::ILBattleSkillTriggerKeyRow* Method_1_59BAC1BC643C47B6(::System::String* a1)
	{
		return ((::RPG::GameCore::ILBattleSkillTriggerKeyRow*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A8C3B34E6450A9F8_METHOD_1_59BAC1BC643C47B6_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_A8C3B34E6450A9F8_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A8C3B34E6450A9F8_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A8C3B34E6450A9F8_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A8C3B34E6450A9F8_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_A8C3B34E6450A9F8_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_08649C2797B37F9D(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_A8C3B34E6450A9F8_METHOD_1_08649C2797B37F9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_5ACD025224D93370(::RPG::GameCore::ILBattleSkillTriggerKeyRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::ILBattleSkillTriggerKeyRow*))((::PBYTE)hIl2Cpp + CLASS_1_A8C3B34E6450A9F8_METHOD_1_5ACD025224D93370_OFFSET))(a1);
	}
};
