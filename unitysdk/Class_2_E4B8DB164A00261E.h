#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/RPG/GameCore/ControlSkillType.h"

class Class_1_827373C1CEDFE355;
class Class_1_BD800F5B29A08E1F;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class UseSkillByComplexSkillAI; }

#define CLASS_2_E4B8DB164A00261E_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11487290)
#define CLASS_2_E4B8DB164A00261E_METHOD_2_7DE6CFC02F305A54_OFFSET UNITYSDK_OFFSET(0x11487CD0)
#define CLASS_2_E4B8DB164A00261E_METHOD_2_C73225BEC2FFD906_OFFSET UNITYSDK_OFFSET(0x114879A0)
#define CLASS_2_E4B8DB164A00261E_METHOD_2_C9BB6C74C25011DA_OFFSET UNITYSDK_OFFSET(0x11487580)
#define CLASS_2_E4B8DB164A00261E_METHOD_2_D09AC5057F1B1192_OFFSET UNITYSDK_OFFSET(0x11488150)
#define CLASS_2_E4B8DB164A00261E_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x11487330)
#define CLASS_2_E4B8DB164A00261E_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x11488300)
#define CLASS_2_E4B8DB164A00261E_TICK_OFFSET UNITYSDK_OFFSET(0x114872D0)
#define CLASS_2_E4B8DB164A00261E__CTOR_OFFSET UNITYSDK_OFFSET(0x11487280)

inline static constexpr unsigned int Class_2_E4B8DB164A00261E_TypeDefinitionIndex = 43476;

class Class_2_E4B8DB164A00261E : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_1_BD800F5B29A08E1F* Field_2_3; // 0x18
	::RPG::GameCore::UseSkillByComplexSkillAI* Field_2_1; // 0x20
	::RPG::GameCore::TaskContext* Field_2_0; // 0x28
	::Class_1_827373C1CEDFE355* Field_2_2; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::UseSkillByComplexSkillAI* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::UseSkillByComplexSkillAI*))((::PBYTE)hIl2Cpp + CLASS_2_E4B8DB164A00261E__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E4B8DB164A00261E_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_E4B8DB164A00261E_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E4B8DB164A00261E_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_2_C9BB6C74C25011DA(::System::Int32 a1, ::RPG::GameCore::ControlSkillType a2, ::RPG::GameCore::GameEntity* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::GameCore::ControlSkillType, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_E4B8DB164A00261E_METHOD_2_C9BB6C74C25011DA_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_D09AC5057F1B1192(::System::Int32 a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_E4B8DB164A00261E_METHOD_2_D09AC5057F1B1192_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_7DE6CFC02F305A54(::System::Int32 a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_E4B8DB164A00261E_METHOD_2_7DE6CFC02F305A54_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C73225BEC2FFD906(::System::Int32 a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_E4B8DB164A00261E_METHOD_2_C73225BEC2FFD906_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E4B8DB164A00261E_ONTASKRESET_OFFSET))(this);
	}
};
