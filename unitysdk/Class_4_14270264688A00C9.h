#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_8F6F8BA02AC9B962.h"

namespace RPG::GameCore { class CreateBattleEventFromGridFightBackend; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class StageRow; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_4_14270264688A00C9_METHOD_4_5F7725CF19FE7264_OFFSET UNITYSDK_OFFSET(0x10579410)
#define CLASS_4_14270264688A00C9_METHOD_4_6CF9404998AE49B3_OFFSET UNITYSDK_OFFSET(0x105794F0)
#define CLASS_4_14270264688A00C9_METHOD_4_DBFC6601BD68BC4F_OFFSET UNITYSDK_OFFSET(0x105787C0)
#define CLASS_4_14270264688A00C9_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x10578510)
#define CLASS_4_14270264688A00C9__CTOR_OFFSET UNITYSDK_OFFSET(0x105784F0)
#define CLASS_4_14270264688A00C9___IFIXBASEPROXY_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x105794E0)

inline static constexpr unsigned int Class_4_14270264688A00C9_TypeDefinitionIndex = 46816;

class Class_4_14270264688A00C9 : public ::Class_3_8F6F8BA02AC9B962
{
public:
	::RPG::GameCore::GameEntity* Field_4_1; // 0x40
	::RPG::GameCore::CreateBattleEventFromGridFightBackend* Field_4_0; // 0x48

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CreateBattleEventFromGridFightBackend* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CreateBattleEventFromGridFightBackend*))((::PBYTE)hIl2Cpp + CLASS_4_14270264688A00C9__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_14270264688A00C9_ONTASKBEGIN_OFFSET))(this);
	}

	::RPG::GameCore::GameEntity* Method_4_DBFC6601BD68BC4F(::System::UInt32 a1, ::RPG::GameCore::StageRow* a2)
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::StageRow*))((::PBYTE)hIl2Cpp + CLASS_4_14270264688A00C9_METHOD_4_DBFC6601BD68BC4F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_4_5F7725CF19FE7264(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_4_14270264688A00C9_METHOD_4_5F7725CF19FE7264_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_14270264688A00C9___IFIXBASEPROXY_ONTASKBEGIN_OFFSET))(this);
	}

	::RPG::GameCore::GameEntity* Method_4_6CF9404998AE49B3(::System::UInt32 P0, ::RPG::GameCore::StageRow* P1)
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::StageRow*))((::PBYTE)hIl2Cpp + CLASS_4_14270264688A00C9_METHOD_4_6CF9404998AE49B3_OFFSET))(this, P0, P1);
	}
};
