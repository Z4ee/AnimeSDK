#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class ClearNpcDistanceTrigger; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_E8514CEA33E401E9_METHOD_3_1680DDAD93EFD151_OFFSET UNITYSDK_OFFSET(0x176BAF40)
#define CLASS_3_E8514CEA33E401E9_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x176BADE0)
#define CLASS_3_E8514CEA33E401E9__CTOR_OFFSET UNITYSDK_OFFSET(0x176BADB0)

inline static constexpr unsigned int Class_3_E8514CEA33E401E9_TypeDefinitionIndex = 52960;

class Class_3_E8514CEA33E401E9 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::ClearNpcDistanceTrigger*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ClearNpcDistanceTrigger* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ClearNpcDistanceTrigger*))((::PBYTE)hIl2Cpp + CLASS_3_E8514CEA33E401E9__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E8514CEA33E401E9_ONTASKBEGIN_OFFSET))(this);
	}

	::RPG::GameCore::GameEntity* Method_3_1680DDAD93EFD151(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_E8514CEA33E401E9_METHOD_3_1680DDAD93EFD151_OFFSET))(this, a1, a2);
	}
};
