#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class StopCurrentLittleGame; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_B6FD5D0319CB186E_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17A40730)
#define CLASS_3_B6FD5D0319CB186E__CTOR_OFFSET UNITYSDK_OFFSET(0x17A40700)

inline static constexpr unsigned int Class_3_B6FD5D0319CB186E_TypeDefinitionIndex = 53253;

class Class_3_B6FD5D0319CB186E : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::StopCurrentLittleGame*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::StopCurrentLittleGame* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::StopCurrentLittleGame*))((::PBYTE)hIl2Cpp + CLASS_3_B6FD5D0319CB186E__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B6FD5D0319CB186E_ONTASKBEGIN_OFFSET))(this);
	}
};
