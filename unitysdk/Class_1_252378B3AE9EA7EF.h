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

#define CLASS_1_252378B3AE9EA7EF_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13D1CA10)
#define CLASS_1_252378B3AE9EA7EF_GET_CASTER_OFFSET UNITYSDK_OFFSET(0x13D1D000)
#define CLASS_1_252378B3AE9EA7EF_GET_SKILLDATALIST_OFFSET UNITYSDK_OFFSET(0x13D1D020)
#define CLASS_1_252378B3AE9EA7EF_METHOD_1_04AD0E70E8BAC391_OFFSET UNITYSDK_OFFSET(0x13D1C6E0)
#define CLASS_1_252378B3AE9EA7EF_METHOD_1_16F6139D7EAFAB81_OFFSET UNITYSDK_OFFSET(0x13D1CEC0)
#define CLASS_1_252378B3AE9EA7EF_METHOD_1_1CDA0051FD244886_OFFSET UNITYSDK_OFFSET(0x13D1C8B0)
#define CLASS_1_252378B3AE9EA7EF_METHOD_1_3931D2D928836DDF_OFFSET UNITYSDK_OFFSET(0x13D1CCC0)
#define CLASS_1_252378B3AE9EA7EF_METHOD_1_8EE718AED69AA7F8_OFFSET UNITYSDK_OFFSET(0x13D1CB00)
#define CLASS_1_252378B3AE9EA7EF_METHOD_1_95B3B89ED6B71740_OFFSET UNITYSDK_OFFSET(0x13D1C450)
#define CLASS_1_252378B3AE9EA7EF_METHOD_1_A3FAE12D7B6ACD62_OFFSET UNITYSDK_OFFSET(0x13D1D040)
#define CLASS_1_252378B3AE9EA7EF_METHOD_1_ED0DB36404E5A689_OFFSET UNITYSDK_OFFSET(0x13D1CBA0)
#define CLASS_1_252378B3AE9EA7EF_METHOD_1_F7D052124779FE4E_OFFSET UNITYSDK_OFFSET(0x13D1CD50)
#define CLASS_1_252378B3AE9EA7EF_SET_CASTER_OFFSET UNITYSDK_OFFSET(0x13D1D010)
#define CLASS_1_252378B3AE9EA7EF_SET_SKILLDATALIST_OFFSET UNITYSDK_OFFSET(0x13D1D030)
#define CLASS_1_252378B3AE9EA7EF__CTOR_OFFSET UNITYSDK_OFFSET(0x13D1C630)

inline static constexpr unsigned int Class_1_252378B3AE9EA7EF_TypeDefinitionIndex = 67408;

class Class_1_252378B3AE9EA7EF : public ::System::Object
{
public:
	// static const ::RPG::GameCore::ModifierBehaviorFlag Field_1_0; // 0x0
	::System::Collections::Generic::HashSet_1<::RPG::GameCore::TurnBasedModifierInstance*>* Field_1_1; // 0x10
	::Class_2_AD908255DB87849A* _SkillDataList_k__BackingField; // 0x18
	::RPG::GameCore::GameEntity* _Caster_k__BackingField; // 0x20
	::System::Boolean Field_1_4; // 0x28

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

	::System::Boolean Method_1_F7D052124779FE4E(::Class_1_83D980B81C9B9AFA* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_83D980B81C9B9AFA*))((::PBYTE)hIl2Cpp + CLASS_1_252378B3AE9EA7EF_METHOD_1_F7D052124779FE4E_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_16F6139D7EAFAB81(::RPG::GameCore::SkillData* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::SkillData*))((::PBYTE)hIl2Cpp + CLASS_1_252378B3AE9EA7EF_METHOD_1_16F6139D7EAFAB81_OFFSET))(this, a1);
	}

	::System::Void Method_1_1CDA0051FD244886()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_252378B3AE9EA7EF_METHOD_1_1CDA0051FD244886_OFFSET))(this);
	}

	static ::System::Boolean Method_1_04AD0E70E8BAC391(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_252378B3AE9EA7EF_METHOD_1_04AD0E70E8BAC391_OFFSET))(a1);
	}

	::System::Boolean Method_1_ED0DB36404E5A689(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_1_252378B3AE9EA7EF_METHOD_1_ED0DB36404E5A689_OFFSET))(this, a1);
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
