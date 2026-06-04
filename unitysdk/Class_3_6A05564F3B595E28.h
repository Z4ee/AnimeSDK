#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class AddActivityMazeBuffBinding; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_6A05564F3B595E28_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1458D3C0)
#define CLASS_3_6A05564F3B595E28__CTOR_OFFSET UNITYSDK_OFFSET(0x1458D390)

inline static constexpr unsigned int Class_3_6A05564F3B595E28_TypeDefinitionIndex = 51235;

class Class_3_6A05564F3B595E28 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::AddActivityMazeBuffBinding*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AddActivityMazeBuffBinding* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AddActivityMazeBuffBinding*))((::PBYTE)hIl2Cpp + CLASS_3_6A05564F3B595E28__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6A05564F3B595E28_ONTASKBEGIN_OFFSET))(this);
	}
};
