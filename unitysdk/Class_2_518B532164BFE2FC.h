#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_07C3C4D2990C49EE;
namespace RPG::Client { class LuaUIController; }
namespace RPG::GameCore { class ShowFistClubMissionPage; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_518B532164BFE2FC_DISPOSE_OFFSET UNITYSDK_OFFSET(0x146A9A40)
#define CLASS_2_518B532164BFE2FC_METHOD_2_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0x146A9DF0)
#define CLASS_2_518B532164BFE2FC_METHOD_2_F5447CD65612575D_OFFSET UNITYSDK_OFFSET(0x146A9CA0)
#define CLASS_2_518B532164BFE2FC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x146A9B70)
#define CLASS_2_518B532164BFE2FC_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x146A9DA0)
#define CLASS_2_518B532164BFE2FC_TICK_OFFSET UNITYSDK_OFFSET(0x146A9B10)
#define CLASS_2_518B532164BFE2FC__CTOR_OFFSET UNITYSDK_OFFSET(0x146A99B0)

inline static constexpr unsigned int Class_2_518B532164BFE2FC_TypeDefinitionIndex = 56023;

class Class_2_518B532164BFE2FC : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::ShowFistClubMissionPage* Field_2_0; // 0x18
	::Class_3_07C3C4D2990C49EE* Field_2_1; // 0x20
	::RPG::GameCore::TaskContext* Field_2_2; // 0x28
	::RPG::Client::LuaUIController* Field_2_3; // 0x30

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
