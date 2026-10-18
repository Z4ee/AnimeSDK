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

#define CLASS_1_A3EC2019A916DC05_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15F0A820)
#define CLASS_1_A3EC2019A916DC05_GET_CASTER_OFFSET UNITYSDK_OFFSET(0x15F0AED0)
#define CLASS_1_A3EC2019A916DC05_GET_SKILLDATALIST_OFFSET UNITYSDK_OFFSET(0x15F0AEF0)
#define CLASS_1_A3EC2019A916DC05_METHOD_1_04AD0E70E8BAC391_OFFSET UNITYSDK_OFFSET(0x15F0A520)
#define CLASS_1_A3EC2019A916DC05_METHOD_1_1CDA0051FD244886_OFFSET UNITYSDK_OFFSET(0x15F0A6C0)
#define CLASS_1_A3EC2019A916DC05_METHOD_1_3931D2D928836DDF_OFFSET UNITYSDK_OFFSET(0x15F0AA70)
#define CLASS_1_A3EC2019A916DC05_METHOD_1_3EAECAF55A90512B_OFFSET UNITYSDK_OFFSET(0x15F0ADB0)
#define CLASS_1_A3EC2019A916DC05_METHOD_1_6307FF7A464DD596_OFFSET UNITYSDK_OFFSET(0x15F0ABE0)
#define CLASS_1_A3EC2019A916DC05_METHOD_1_8073A3C8BD4F2EE0_OFFSET UNITYSDK_OFFSET(0x15F0AB00)
#define CLASS_1_A3EC2019A916DC05_METHOD_1_8EE718AED69AA7F8_OFFSET UNITYSDK_OFFSET(0x15F0A910)
#define CLASS_1_A3EC2019A916DC05_METHOD_1_95B3B89ED6B71740_OFFSET UNITYSDK_OFFSET(0x15F0A290)
#define CLASS_1_A3EC2019A916DC05_METHOD_1_A3FAE12D7B6ACD62_OFFSET UNITYSDK_OFFSET(0x15F0AF10)
#define CLASS_1_A3EC2019A916DC05_METHOD_1_B281FA23FED89AE0_OFFSET UNITYSDK_OFFSET(0x15F0A9B0)
#define CLASS_1_A3EC2019A916DC05_METHOD_1_FCBEEC80F1C638A7_1_OFFSET UNITYSDK_OFFSET(0x15F0AD50)
#define CLASS_1_A3EC2019A916DC05_METHOD_1_FCBEEC80F1C638A7_OFFSET UNITYSDK_OFFSET(0x15F0ACF0)
#define CLASS_1_A3EC2019A916DC05_SET_CASTER_OFFSET UNITYSDK_OFFSET(0x15F0AEE0)
#define CLASS_1_A3EC2019A916DC05_SET_SKILLDATALIST_OFFSET UNITYSDK_OFFSET(0x15F0AF00)
#define CLASS_1_A3EC2019A916DC05__CTOR_OFFSET UNITYSDK_OFFSET(0x15F0A470)

inline static constexpr unsigned int Class_1_A3EC2019A916DC05_TypeDefinitionIndex = 72152;

class Class_1_A3EC2019A916DC05 : public ::System::Object
{
public:
	// static const ::RPG::GameCore::ModifierBehaviorFlag DEJEMKJDNKL; // 0x0
	// static const ::RPG::GameCore::ModifierBehaviorFlag NBKIAJMEHLO; // 0x0
	::Class_2_AD908255DB87849A* _SkillDataList_k__BackingField; // 0x10
	::RPG::GameCore::GameEntity* _Caster_k__BackingField; // 0x18
	::System::Collections::Generic::HashSet_1<::RPG::GameCore::TurnBasedModifierInstance*>* NCLMLBLBOGK; // 0x20
	::System::Boolean EGKLIBFLKHG; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A3EC2019A916DC05__CTOR_OFFSET))(this);
	}

	static ::Class_1_A3EC2019A916DC05* Method_1_95B3B89ED6B71740(::RPG::GameCore::GameEntity* a1, ::Class_2_AD908255DB87849A* a2)
	{
		return ((::Class_1_A3EC2019A916DC05*(*)(::RPG::GameCore::GameEntity*, ::Class_2_AD908255DB87849A*))((::PBYTE)hIl2Cpp + CLASS_1_A3EC2019A916DC05_METHOD_1_95B3B89ED6B71740_OFFSET))(a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A3EC2019A916DC05_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_8EE718AED69AA7F8(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_1_A3EC2019A916DC05_METHOD_1_8EE718AED69AA7F8_OFFSET))(this, a1);
	}

	::System::Void Method_1_3931D2D928836DDF(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_1_A3EC2019A916DC05_METHOD_1_3931D2D928836DDF_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_8073A3C8BD4F2EE0(::Class_1_83D980B81C9B9AFA* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_83D980B81C9B9AFA*))((::PBYTE)hIl2Cpp + CLASS_1_A3EC2019A916DC05_METHOD_1_8073A3C8BD4F2EE0_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_6307FF7A464DD596(::RPG::GameCore::SkillData* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::SkillData*))((::PBYTE)hIl2Cpp + CLASS_1_A3EC2019A916DC05_METHOD_1_6307FF7A464DD596_OFFSET))(this, a1);
	}

	::System::Void Method_1_1CDA0051FD244886()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A3EC2019A916DC05_METHOD_1_1CDA0051FD244886_OFFSET))(this);
	}

	static ::System::Boolean Method_1_04AD0E70E8BAC391(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_A3EC2019A916DC05_METHOD_1_04AD0E70E8BAC391_OFFSET))(a1);
	}

	::System::Boolean Method_1_B281FA23FED89AE0(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_1_A3EC2019A916DC05_METHOD_1_B281FA23FED89AE0_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_FCBEEC80F1C638A7(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_1_A3EC2019A916DC05_METHOD_1_FCBEEC80F1C638A7_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_FCBEEC80F1C638A7_1(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_1_A3EC2019A916DC05_METHOD_1_FCBEEC80F1C638A7_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_3EAECAF55A90512B(::RPG::GameCore::TurnBasedModifierInstance* a1, ::RPG::GameCore::ModifierBehaviorFlag a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*, ::RPG::GameCore::ModifierBehaviorFlag))((::PBYTE)hIl2Cpp + CLASS_1_A3EC2019A916DC05_METHOD_1_3EAECAF55A90512B_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::GameEntity* get_Caster()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A3EC2019A916DC05_GET_CASTER_OFFSET))(this);
	}

	::System::Void set_Caster(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_A3EC2019A916DC05_SET_CASTER_OFFSET))(this, a1);
	}

	::Class_2_AD908255DB87849A* get_SkillDataList()
	{
		return ((::Class_2_AD908255DB87849A*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A3EC2019A916DC05_GET_SKILLDATALIST_OFFSET))(this);
	}

	::System::Void set_SkillDataList(::Class_2_AD908255DB87849A* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_AD908255DB87849A*))((::PBYTE)hIl2Cpp + CLASS_1_A3EC2019A916DC05_SET_SKILLDATALIST_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_A3FAE12D7B6ACD62()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A3EC2019A916DC05_METHOD_1_A3FAE12D7B6ACD62_OFFSET))(this);
	}
};
