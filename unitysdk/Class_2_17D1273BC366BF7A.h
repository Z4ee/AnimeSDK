#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_1_827373C1CEDFE355;
class Class_1_BD800F5B29A08E1F;
namespace RPG::GameCore { class AISelector; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameEntityList; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class UseSequencedSkill; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_17D1273BC366BF7A_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8796250)
#define CLASS_2_17D1273BC366BF7A_METHOD_2_3BACF11473B40D3C_OFFSET UNITYSDK_OFFSET(0x8796690)
#define CLASS_2_17D1273BC366BF7A_METHOD_2_63D396B662030C2A_OFFSET UNITYSDK_OFFSET(0x8796BC0)
#define CLASS_2_17D1273BC366BF7A_METHOD_2_CB63CE00D92A7A9B_OFFSET UNITYSDK_OFFSET(0x8796970)
#define CLASS_2_17D1273BC366BF7A_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x8796290)
#define CLASS_2_17D1273BC366BF7A_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x8796B10)
#define CLASS_2_17D1273BC366BF7A_TICK_OFFSET UNITYSDK_OFFSET(0x8796B60)
#define CLASS_2_17D1273BC366BF7A__CTOR_OFFSET UNITYSDK_OFFSET(0x8796200)

inline static constexpr unsigned int Class_2_17D1273BC366BF7A_TypeDefinitionIndex = 43475;

class Class_2_17D1273BC366BF7A : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_1_827373C1CEDFE355* Field_2_2; // 0x18
	::Class_1_BD800F5B29A08E1F* Field_2_3; // 0x20
	::RPG::GameCore::TaskContext* Field_2_0; // 0x28
	::RPG::GameCore::UseSequencedSkill* Field_2_1; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::UseSequencedSkill* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::UseSequencedSkill*))((::PBYTE)hIl2Cpp + CLASS_2_17D1273BC366BF7A__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_17D1273BC366BF7A_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_17D1273BC366BF7A_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_17D1273BC366BF7A_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_17D1273BC366BF7A_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_63D396B662030C2A(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1, ::RPG::GameCore::AISelector* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::RPG::GameCore::AISelector*))((::PBYTE)hIl2Cpp + CLASS_2_17D1273BC366BF7A_METHOD_2_63D396B662030C2A_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::GameEntityList* Method_2_3BACF11473B40D3C(::System::Int32 a1)
	{
		return ((::RPG::GameCore::GameEntityList*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_17D1273BC366BF7A_METHOD_2_3BACF11473B40D3C_OFFSET))(this, a1);
	}

	::System::Void Method_2_CB63CE00D92A7A9B(::System::Int32 a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_17D1273BC366BF7A_METHOD_2_CB63CE00D92A7A9B_OFFSET))(this, a1, a2);
	}
};
