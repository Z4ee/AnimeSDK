#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ModifierBehaviorFlag.h"
#include "unitysdk/System/Object.h"

class Class_1_83D980B81C9B9AFA;
class Class_2_8F285BFA404E1032;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class SkillData; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_559429787A82232C_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11DD5DE0)
#define CLASS_1_559429787A82232C_GET_CASTER_OFFSET UNITYSDK_OFFSET(0x11DD6220)
#define CLASS_1_559429787A82232C_GET_SKILLDATALIST_OFFSET UNITYSDK_OFFSET(0x11DD6240)
#define CLASS_1_559429787A82232C_METHOD_1_16F6139D7EAFAB81_OFFSET UNITYSDK_OFFSET(0x11DD6130)
#define CLASS_1_559429787A82232C_METHOD_1_3931D2D928836DDF_OFFSET UNITYSDK_OFFSET(0x11DD6010)
#define CLASS_1_559429787A82232C_METHOD_1_8073A3C8BD4F2EE0_OFFSET UNITYSDK_OFFSET(0x11DD60A0)
#define CLASS_1_559429787A82232C_METHOD_1_95B3B89ED6B71740_OFFSET UNITYSDK_OFFSET(0x11DD59B0)
#define CLASS_1_559429787A82232C_METHOD_1_A3FAE12D7B6ACD62_OFFSET UNITYSDK_OFFSET(0x11DD6260)
#define CLASS_1_559429787A82232C_METHOD_1_BBA49FAB086F388D_OFFSET UNITYSDK_OFFSET(0x11DD5C30)
#define CLASS_1_559429787A82232C_METHOD_1_D905404EC52F0B53_OFFSET UNITYSDK_OFFSET(0x11DD5ED0)
#define CLASS_1_559429787A82232C_METHOD_1_FCC4231E1385F95A_OFFSET UNITYSDK_OFFSET(0x11DD5FB0)
#define CLASS_1_559429787A82232C_SET_CASTER_OFFSET UNITYSDK_OFFSET(0x11DD6230)
#define CLASS_1_559429787A82232C_SET_SKILLDATALIST_OFFSET UNITYSDK_OFFSET(0x11DD6250)
#define CLASS_1_559429787A82232C__CTOR_OFFSET UNITYSDK_OFFSET(0x11DD5B80)

inline static constexpr unsigned int Class_1_559429787A82232C_TypeDefinitionIndex = 66469;

class Class_1_559429787A82232C : public ::System::Object
{
public:
	// static const ::RPG::GameCore::ModifierBehaviorFlag Field_1_3; // 0x0
	::RPG::GameCore::GameEntity* _Caster_k__BackingField; // 0x10
	::System::Collections::Generic::HashSet_1<::RPG::GameCore::TurnBasedModifierInstance*>* Field_1_2; // 0x18
	::Class_2_8F285BFA404E1032* _SkillDataList_k__BackingField; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_559429787A82232C__CTOR_OFFSET))(this);
	}

	static ::Class_1_559429787A82232C* Method_1_95B3B89ED6B71740(::RPG::GameCore::GameEntity* a1, ::Class_2_8F285BFA404E1032* a2)
	{
		return ((::Class_1_559429787A82232C*(*)(::RPG::GameCore::GameEntity*, ::Class_2_8F285BFA404E1032*))((::PBYTE)hIl2Cpp + CLASS_1_559429787A82232C_METHOD_1_95B3B89ED6B71740_OFFSET))(a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_559429787A82232C_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_D905404EC52F0B53(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_1_559429787A82232C_METHOD_1_D905404EC52F0B53_OFFSET))(this, a1);
	}

	::System::Void Method_1_3931D2D928836DDF(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_1_559429787A82232C_METHOD_1_3931D2D928836DDF_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_8073A3C8BD4F2EE0(::Class_1_83D980B81C9B9AFA* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_83D980B81C9B9AFA*))((::PBYTE)hIl2Cpp + CLASS_1_559429787A82232C_METHOD_1_8073A3C8BD4F2EE0_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_16F6139D7EAFAB81(::RPG::GameCore::SkillData* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::SkillData*))((::PBYTE)hIl2Cpp + CLASS_1_559429787A82232C_METHOD_1_16F6139D7EAFAB81_OFFSET))(this, a1);
	}

	::System::Void Method_1_BBA49FAB086F388D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_559429787A82232C_METHOD_1_BBA49FAB086F388D_OFFSET))(this);
	}

	::System::Boolean Method_1_FCC4231E1385F95A(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_1_559429787A82232C_METHOD_1_FCC4231E1385F95A_OFFSET))(this, a1);
	}

	::RPG::GameCore::GameEntity* get_Caster()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_559429787A82232C_GET_CASTER_OFFSET))(this);
	}

	::System::Void set_Caster(::RPG::GameCore::GameEntity* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_559429787A82232C_SET_CASTER_OFFSET))(this, value);
	}

	::Class_2_8F285BFA404E1032* get_SkillDataList()
	{
		return ((::Class_2_8F285BFA404E1032*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_559429787A82232C_GET_SKILLDATALIST_OFFSET))(this);
	}

	::System::Void set_SkillDataList(::Class_2_8F285BFA404E1032* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_8F285BFA404E1032*))((::PBYTE)hIl2Cpp + CLASS_1_559429787A82232C_SET_SKILLDATALIST_OFFSET))(this, value);
	}

	::System::Boolean Method_1_A3FAE12D7B6ACD62()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_559429787A82232C_METHOD_1_A3FAE12D7B6ACD62_OFFSET))(this);
	}
};
