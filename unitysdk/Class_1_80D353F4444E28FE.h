#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ILBattleMonsterConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_80D353F4444E28FE_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x19107BC0)
#define CLASS_1_80D353F4444E28FE_METHOD_1_157FA25ED9277137_OFFSET UNITYSDK_OFFSET(0x191076B0)
#define CLASS_1_80D353F4444E28FE_METHOD_1_4C158082C2F225AA_OFFSET UNITYSDK_OFFSET(0x19107C10)
#define CLASS_1_80D353F4444E28FE_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x191079F0)
#define CLASS_1_80D353F4444E28FE_METHOD_1_A0F14807B3C0FBFE_OFFSET UNITYSDK_OFFSET(0x191073A0)
#define CLASS_1_80D353F4444E28FE_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x19107A80)
#define CLASS_1_80D353F4444E28FE_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x19107650)
#define CLASS_1_80D353F4444E28FE_METHOD_1_D2CA13C79224CE6F_OFFSET UNITYSDK_OFFSET(0x19107820)
#define CLASS_1_80D353F4444E28FE_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x19107420)
#define CLASS_1_80D353F4444E28FE_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x191079B0)
#define CLASS_1_80D353F4444E28FE_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x19107B20)
#define CLASS_1_80D353F4444E28FE__CCTOR_OFFSET UNITYSDK_OFFSET(0x19107F80)

inline static constexpr unsigned int Class_1_80D353F4444E28FE_TypeDefinitionIndex = 13148;

class Class_1_80D353F4444E28FE : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ILBattleMonsterConfigRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ILBattleMonsterConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_80D353F4444E28FE_TypeDefinitionIndex)->GetStaticField(0x52DA0);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_1()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_80D353F4444E28FE_TypeDefinitionIndex)->GetStaticField(0x52DA8);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_2()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_80D353F4444E28FE_TypeDefinitionIndex)->GetStaticField(0x52DB0);
	}
	static ::System::Byte* StaticGet_Field_1_3()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_80D353F4444E28FE_TypeDefinitionIndex)->GetStaticField(0x105C0);
	}
	static ::System::Boolean* StaticGet_Field_1_4()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_80D353F4444E28FE_TypeDefinitionIndex)->GetStaticField(0x105C1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_80D353F4444E28FE__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ILBattleMonsterConfigRow*>* Method_1_A0F14807B3C0FBFE()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ILBattleMonsterConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_80D353F4444E28FE_METHOD_1_A0F14807B3C0FBFE_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_80D353F4444E28FE_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ILBattleMonsterConfigRow*> Method_1_157FA25ED9277137()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ILBattleMonsterConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_80D353F4444E28FE_METHOD_1_157FA25ED9277137_OFFSET))();
	}

	static ::RPG::GameCore::ILBattleMonsterConfigRow* Method_1_D2CA13C79224CE6F(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::ILBattleMonsterConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_80D353F4444E28FE_METHOD_1_D2CA13C79224CE6F_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_80D353F4444E28FE_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_80D353F4444E28FE_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_80D353F4444E28FE_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_80D353F4444E28FE_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_80D353F4444E28FE_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_80D353F4444E28FE_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_4C158082C2F225AA(::RPG::GameCore::ILBattleMonsterConfigRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::ILBattleMonsterConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_80D353F4444E28FE_METHOD_1_4C158082C2F225AA_OFFSET))(a1);
	}
};
