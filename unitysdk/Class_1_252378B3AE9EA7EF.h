#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ModifierBehaviorFlag.h"
#include "unitysdk/System/Object.h"

class Class_1_83D980B81C9B9AFA;
class Class_2_AD908255DB87849A;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class SkillData; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_252378B3AE9EA7EF_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1AA477D0)
#define CLASS_1_252378B3AE9EA7EF_GET_CASTER_OFFSET UNITYSDK_OFFSET(0x1AA47E20)
#define CLASS_1_252378B3AE9EA7EF_GET_SKILLDATALIST_OFFSET UNITYSDK_OFFSET(0x1AA47E40)
#define CLASS_1_252378B3AE9EA7EF_METHOD_1_04AD0E70E8BAC391_OFFSET UNITYSDK_OFFSET(0x1AA474A0)
#define CLASS_1_252378B3AE9EA7EF_METHOD_1_1CDA0051FD244886_OFFSET UNITYSDK_OFFSET(0x1AA47670)
#define CLASS_1_252378B3AE9EA7EF_METHOD_1_3931D2D928836DDF_OFFSET UNITYSDK_OFFSET(0x1AA47A20)
#define CLASS_1_252378B3AE9EA7EF_METHOD_1_6307FF7A464DD596_OFFSET UNITYSDK_OFFSET(0x1AA47B90)
#define CLASS_1_252378B3AE9EA7EF_METHOD_1_8073A3C8BD4F2EE0_OFFSET UNITYSDK_OFFSET(0x1AA47AB0)
#define CLASS_1_252378B3AE9EA7EF_METHOD_1_8EE718AED69AA7F8_OFFSET UNITYSDK_OFFSET(0x1AA478C0)
#define CLASS_1_252378B3AE9EA7EF_METHOD_1_95B3B89ED6B71740_OFFSET UNITYSDK_OFFSET(0x1AA47210)
#define CLASS_1_252378B3AE9EA7EF_METHOD_1_A3FAE12D7B6ACD62_OFFSET UNITYSDK_OFFSET(0x1AA47E60)
#define CLASS_1_252378B3AE9EA7EF_METHOD_1_B281FA23FED89AE0_OFFSET UNITYSDK_OFFSET(0x1AA47960)
#define CLASS_1_252378B3AE9EA7EF_METHOD_1_C4E2F930A41E34C0_OFFSET UNITYSDK_OFFSET(0x1AA47D00)
#define CLASS_1_252378B3AE9EA7EF_METHOD_1_CF0D4B58606967D2_OFFSET UNITYSDK_OFFSET(0x1AA47CA0)
#define CLASS_1_252378B3AE9EA7EF_SET_CASTER_OFFSET UNITYSDK_OFFSET(0x1AA47E30)
#define CLASS_1_252378B3AE9EA7EF_SET_SKILLDATALIST_OFFSET UNITYSDK_OFFSET(0x1AA47E50)
#define CLASS_1_252378B3AE9EA7EF__CTOR_OFFSET UNITYSDK_OFFSET(0x1AA473F0)

inline static constexpr unsigned int Class_1_252378B3AE9EA7EF_TypeDefinitionIndex = 72078;

class Class_1_252378B3AE9EA7EF : public ::System::Object
{
public:
	// static const ::RPG::GameCore::ModifierBehaviorFlag DEJEMKJDNKL; // 0x0
	// static const ::RPG::GameCore::ModifierBehaviorFlag APECPLCFIHN; // 0x0
	::RPG::GameCore::GameEntity* _Caster_k__BackingField; // 0x10
	::System::Collections::Generic::HashSet_1<::RPG::GameCore::TurnBasedModifierInstance*>* NCLMLBLBOGK; // 0x18
	::Class_2_AD908255DB87849A* _SkillDataList_k__BackingField; // 0x20
	::System::Boolean EGKLIBFLKHG; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_252378B3AE9EA7EF__CTOR_OFFSET))(this);
	}

	static ::Class_1_252378B3AE9EA7EF* Method_1_95B3B89ED6B71740(::RPG::GameCore::GameEntity* a1, ::Class_2_AD908255DB87849A* a2)
	{
		return ((::Class_1_252378B3AE9EA7EF*(*)(::RPG::GameCore::GameEntity*, ::Class_2_AD908255DB87849A*))((::PBYTE)hIl2Cpp + CLASS_1_252378B3AE9EA7EF_METHOD_1_95B3B89ED6B71740_OFFSET))(a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_252378B3AE9EA7EF_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_8EE718AED69AA7F8(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_1_252378B3AE9EA7EF_METHOD_1_8EE718AED69AA7F8_OFFSET))(this, a1);
	}

	::System::Void Method_1_3931D2D928836DDF(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_1_252378B3AE9EA7EF_METHOD_1_3931D2D928836DDF_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_8073A3C8BD4F2EE0(::Class_1_83D980B81C9B9AFA* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_83D980B81C9B9AFA*))((::PBYTE)hIl2Cpp + CLASS_1_252378B3AE9EA7EF_METHOD_1_8073A3C8BD4F2EE0_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_6307FF7A464DD596(::RPG::GameCore::SkillData* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::SkillData*))((::PBYTE)hIl2Cpp + CLASS_1_252378B3AE9EA7EF_METHOD_1_6307FF7A464DD596_OFFSET))(this, a1);
	}

	::System::Void Method_1_1CDA0051FD244886()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_252378B3AE9EA7EF_METHOD_1_1CDA0051FD244886_OFFSET))(this);
	}

	static ::System::Boolean Method_1_04AD0E70E8BAC391(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_252378B3AE9EA7EF_METHOD_1_04AD0E70E8BAC391_OFFSET))(a1);
	}

	::System::Boolean Method_1_B281FA23FED89AE0(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_1_252378B3AE9EA7EF_METHOD_1_B281FA23FED89AE0_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_C4E2F930A41E34C0(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_1_252378B3AE9EA7EF_METHOD_1_C4E2F930A41E34C0_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_CF0D4B58606967D2(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_1_252378B3AE9EA7EF_METHOD_1_CF0D4B58606967D2_OFFSET))(this, a1);
	}

	::RPG::GameCore::GameEntity* get_Caster()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_252378B3AE9EA7EF_GET_CASTER_OFFSET))(this);
	}

	::System::Void set_Caster(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_252378B3AE9EA7EF_SET_CASTER_OFFSET))(this, a1);
	}

	::Class_2_AD908255DB87849A* get_SkillDataList()
	{
		return ((::Class_2_AD908255DB87849A*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_252378B3AE9EA7EF_GET_SKILLDATALIST_OFFSET))(this);
	}

	::System::Void set_SkillDataList(::Class_2_AD908255DB87849A* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_AD908255DB87849A*))((::PBYTE)hIl2Cpp + CLASS_1_252378B3AE9EA7EF_SET_SKILLDATALIST_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_A3FAE12D7B6ACD62()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_252378B3AE9EA7EF_METHOD_1_A3FAE12D7B6ACD62_OFFSET))(this);
	}
};
