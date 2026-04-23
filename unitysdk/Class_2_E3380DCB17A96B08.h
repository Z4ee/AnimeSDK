#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/RPG/GameCore/ControlSkillType.h"

class Class_1_827373C1CEDFE355;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class UseSkill; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_E3380DCB17A96B08_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9A06410)
#define CLASS_2_E3380DCB17A96B08_METHOD_2_02980F4548431707_OFFSET UNITYSDK_OFFSET(0x9A06F50)
#define CLASS_2_E3380DCB17A96B08_METHOD_2_71C65FBF3C554E6C_OFFSET UNITYSDK_OFFSET(0x9A06D10)
#define CLASS_2_E3380DCB17A96B08_METHOD_2_D09AC5057F1B1192_OFFSET UNITYSDK_OFFSET(0x9A07180)
#define CLASS_2_E3380DCB17A96B08_METHOD_2_E275D84836CC3563_OFFSET UNITYSDK_OFFSET(0x9A067F0)
#define CLASS_2_E3380DCB17A96B08_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x9A06460)
#define CLASS_2_E3380DCB17A96B08_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x9A070D0)
#define CLASS_2_E3380DCB17A96B08_TICK_OFFSET UNITYSDK_OFFSET(0x9A07120)
#define CLASS_2_E3380DCB17A96B08__CTOR_OFFSET UNITYSDK_OFFSET(0x9A063A0)

inline static constexpr unsigned int Class_2_E3380DCB17A96B08_TypeDefinitionIndex = 50174;

class Class_2_E3380DCB17A96B08 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_1; // 0x18
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Field_2_0; // 0x20
	::RPG::GameCore::UseSkill* Field_2_2; // 0x28
	::Class_1_827373C1CEDFE355* Field_2_3; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::UseSkill* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::UseSkill*))((::PBYTE)hIl2Cpp + CLASS_2_E3380DCB17A96B08__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E3380DCB17A96B08_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E3380DCB17A96B08_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E3380DCB17A96B08_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_E3380DCB17A96B08_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_71C65FBF3C554E6C(::System::Int32 a1, ::RPG::GameCore::ControlSkillType a2, ::RPG::GameCore::GameEntity* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::GameCore::ControlSkillType, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_E3380DCB17A96B08_METHOD_2_71C65FBF3C554E6C_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_02980F4548431707(::System::Int32 a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_E3380DCB17A96B08_METHOD_2_02980F4548431707_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::GameEntity* Method_2_E275D84836CC3563(::System::Int32 a1)
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_E3380DCB17A96B08_METHOD_2_E275D84836CC3563_OFFSET))(this, a1);
	}

	::System::Void Method_2_D09AC5057F1B1192(::System::Int32 a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_E3380DCB17A96B08_METHOD_2_D09AC5057F1B1192_OFFSET))(this, a1, a2);
	}
};
