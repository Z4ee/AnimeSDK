#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class ClearDialogCamera; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_9865A8A8EF20F849_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x179AAF60)
#define CLASS_3_9865A8A8EF20F849__CTOR_OFFSET UNITYSDK_OFFSET(0x179AAF30)

inline static constexpr unsigned int Class_3_9865A8A8EF20F849_TypeDefinitionIndex = 58178;

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
