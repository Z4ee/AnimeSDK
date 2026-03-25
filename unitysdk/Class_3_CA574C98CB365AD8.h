#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class PlayMonsterHPBarTween; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_CA574C98CB365AD8_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x11537F60)
#define CLASS_3_CA574C98CB365AD8__CTOR_OFFSET UNITYSDK_OFFSET(0x11537F30)

inline static constexpr unsigned int Class_3_CA574C98CB365AD8_TypeDefinitionIndex = 38464;

class Class_3_CA574C98CB365AD8 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::PlayMonsterHPBarTween*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PlayMonsterHPBarTween* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PlayMonsterHPBarTween*))((::PBYTE)hIl2Cpp + CLASS_3_CA574C98CB365AD8__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CA574C98CB365AD8_ONTASKBEGIN_OFFSET))(this);
	}
};
