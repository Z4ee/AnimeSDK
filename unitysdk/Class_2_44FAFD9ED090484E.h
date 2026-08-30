#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/RPG/GameCore/ControlSkillType.h"

class Class_1_43B0AF86156D9901;
class Class_1_AC66714FF5876767;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class UseSkillByComplexSkillAI; }

#define CLASS_2_44FAFD9ED090484E_DISPOSE_OFFSET UNITYSDK_OFFSET(0x163EA2B0)
#define CLASS_2_44FAFD9ED090484E_METHOD_2_2733535C648EAA2C_OFFSET UNITYSDK_OFFSET(0x163EB070)
#define CLASS_2_44FAFD9ED090484E_METHOD_2_7DE6CFC02F305A54_OFFSET UNITYSDK_OFFSET(0x163EB780)
#define CLASS_2_44FAFD9ED090484E_METHOD_2_A7E7CA0CC56CB7EC_OFFSET UNITYSDK_OFFSET(0x163EA630)
#define CLASS_2_44FAFD9ED090484E_METHOD_2_F1C5275F84A00152_OFFSET UNITYSDK_OFFSET(0x163EAB90)
#define CLASS_2_44FAFD9ED090484E_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x163EA350)
#define CLASS_2_44FAFD9ED090484E_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x163EBA20)
#define CLASS_2_44FAFD9ED090484E_TICK_OFFSET UNITYSDK_OFFSET(0x163EA2F0)
#define CLASS_2_44FAFD9ED090484E__CTOR_OFFSET UNITYSDK_OFFSET(0x163EA2A0)

inline static constexpr unsigned int Class_2_44FAFD9ED090484E_TypeDefinitionIndex = 54609;

class Class_2_44FAFD9ED090484E : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_1_43B0AF86156D9901* AIJGGLCAEON; // 0x18
	::RPG::GameCore::UseSkillByComplexSkillAI* OFKGLJOAMLD; // 0x20
	::Class_1_AC66714FF5876767* LAPCOHEMCJN; // 0x28
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::UseSkillByComplexSkillAI* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::UseSkillByComplexSkillAI*))((::PBYTE)hIl2Cpp + CLASS_2_44FAFD9ED090484E__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_44FAFD9ED090484E_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_44FAFD9ED090484E_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_44FAFD9ED090484E_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_2_A7E7CA0CC56CB7EC(::System::Int32 a1, ::RPG::GameCore::ControlSkillType a2, ::RPG::GameCore::GameEntity* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::GameCore::ControlSkillType, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_44FAFD9ED090484E_METHOD_2_A7E7CA0CC56CB7EC_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_7DE6CFC02F305A54(::System::Int32 a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_44FAFD9ED090484E_METHOD_2_7DE6CFC02F305A54_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_2733535C648EAA2C(::System::Int32 a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_44FAFD9ED090484E_METHOD_2_2733535C648EAA2C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_F1C5275F84A00152(::System::Int32 a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_44FAFD9ED090484E_METHOD_2_F1C5275F84A00152_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_44FAFD9ED090484E_ONTASKRESET_OFFSET))(this);
	}
};
