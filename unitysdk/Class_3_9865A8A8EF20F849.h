#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class ClearDialogCamera; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_9865A8A8EF20F849_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x170431C0)
#define CLASS_3_9865A8A8EF20F849__CTOR_OFFSET UNITYSDK_OFFSET(0x17043190)

inline static constexpr unsigned int Class_3_9865A8A8EF20F849_TypeDefinitionIndex = 55447;

class Class_3_9865A8A8EF20F849 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::ClearDialogCamera*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ClearDialogCamera* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ClearDialogCamera*))((::PBYTE)hIl2Cpp + CLASS_3_9865A8A8EF20F849__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9865A8A8EF20F849_ONTASKBEGIN_OFFSET))(this);
	}
};
