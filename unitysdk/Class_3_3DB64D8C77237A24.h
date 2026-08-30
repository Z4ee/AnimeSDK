#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class UnlockMainStreamingSource; }

#define CLASS_3_3DB64D8C77237A24_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xE88F230)
#define CLASS_3_3DB64D8C77237A24__CTOR_OFFSET UNITYSDK_OFFSET(0xE88F200)

inline static constexpr unsigned int Class_3_3DB64D8C77237A24_TypeDefinitionIndex = 58991;

class Class_3_3DB64D8C77237A24 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::UnlockMainStreamingSource*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::UnlockMainStreamingSource* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::UnlockMainStreamingSource*))((::PBYTE)hIl2Cpp + CLASS_3_3DB64D8C77237A24__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3DB64D8C77237A24_ONTASKBEGIN_OFFSET))(this);
	}
};
