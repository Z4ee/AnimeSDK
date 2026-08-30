#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AddMazeBuffBaseTask_1.h"

namespace RPG::GameCore { class AddClientMazeBuff; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_4_32398E51BDA1D7EE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1A0A8580)
#define CLASS_4_32398E51BDA1D7EE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0A8530)

inline static constexpr unsigned int Class_4_32398E51BDA1D7EE_TypeDefinitionIndex = 58011;

class Class_4_32398E51BDA1D7EE : public ::RPG::GameCore::AddMazeBuffBaseTask_1<::RPG::GameCore::AddClientMazeBuff*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AddClientMazeBuff* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AddClientMazeBuff*))((::PBYTE)hIl2Cpp + CLASS_4_32398E51BDA1D7EE__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_32398E51BDA1D7EE_ONTASKBEGIN_OFFSET))(this);
	}
};
