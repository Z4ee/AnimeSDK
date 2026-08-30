#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_07C3C4D2990C49EE;
namespace RPG::Client { class LuaUIController; }
namespace RPG::GameCore { class ShowFistClubMissionPage; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_518B532164BFE2FC_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15FF4F00)
#define CLASS_2_518B532164BFE2FC_METHOD_2_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0x15FF52A0)
#define CLASS_2_518B532164BFE2FC_METHOD_2_F5447CD65612575D_OFFSET UNITYSDK_OFFSET(0x15FF5150)
#define CLASS_2_518B532164BFE2FC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15FF5030)
#define CLASS_2_518B532164BFE2FC_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15FF5250)
#define CLASS_2_518B532164BFE2FC_TICK_OFFSET UNITYSDK_OFFSET(0x15FF4FD0)
#define CLASS_2_518B532164BFE2FC__CTOR_OFFSET UNITYSDK_OFFSET(0x15FF4E70)

inline static constexpr unsigned int Class_2_518B532164BFE2FC_TypeDefinitionIndex = 58798;

class Class_2_518B532164BFE2FC : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::Client::LuaUIController* OGOFNHAGOPO; // 0x18
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
	::Class_3_07C3C4D2990C49EE* NJMIOBMMCPH; // 0x28
	::RPG::GameCore::ShowFistClubMissionPage* OFKGLJOAMLD; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowFistClubMissionPage* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowFistClubMissionPage*))((::PBYTE)hIl2Cpp + CLASS_2_518B532164BFE2FC__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_518B532164BFE2FC_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_518B532164BFE2FC_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_518B532164BFE2FC_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_518B532164BFE2FC_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Method_2_F5447CD65612575D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_518B532164BFE2FC_METHOD_2_F5447CD65612575D_OFFSET))(this);
	}

	::System::Void Method_2_A239DF324AF4215D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_518B532164BFE2FC_METHOD_2_A239DF324AF4215D_OFFSET))(this);
	}
};
