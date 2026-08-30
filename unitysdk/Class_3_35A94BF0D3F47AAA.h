#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class NotifyRougeGoalFinish; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_35A94BF0D3F47AAA_METHOD_3_1FF0B87A9F818945_OFFSET UNITYSDK_OFFSET(0x15811CD0)
#define CLASS_3_35A94BF0D3F47AAA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15811AD0)
#define CLASS_3_35A94BF0D3F47AAA__CTOR_OFFSET UNITYSDK_OFFSET(0x15811AA0)

inline static constexpr unsigned int Class_3_35A94BF0D3F47AAA_TypeDefinitionIndex = 58671;

class Class_3_35A94BF0D3F47AAA : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::NotifyRougeGoalFinish*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::NotifyRougeGoalFinish* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::NotifyRougeGoalFinish*))((::PBYTE)hIl2Cpp + CLASS_3_35A94BF0D3F47AAA__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_35A94BF0D3F47AAA_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Boolean Method_3_1FF0B87A9F818945(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_35A94BF0D3F47AAA_METHOD_3_1FF0B87A9F818945_OFFSET))(this, a1);
	}
};
