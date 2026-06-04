#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class AITryInsertUltra; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_221CC4908DC77487_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB9E9AA0)
#define CLASS_3_221CC4908DC77487__CTOR_OFFSET UNITYSDK_OFFSET(0xB9E9A70)

inline static constexpr unsigned int Class_3_221CC4908DC77487_TypeDefinitionIndex = 51221;

class Class_3_221CC4908DC77487 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::AITryInsertUltra*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AITryInsertUltra* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AITryInsertUltra*))((::PBYTE)hIl2Cpp + CLASS_3_221CC4908DC77487__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_221CC4908DC77487_ONTASKBEGIN_OFFSET))(this);
	}
};
