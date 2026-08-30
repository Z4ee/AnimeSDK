#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"
#include "unitysdk/RPG/GameCore/StringHash.h"

namespace RPG::GameCore { class InfiniteWaveNextMonsterId; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_0A64B6FBBB74CA97_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x11E84D70)
#define CLASS_3_0A64B6FBBB74CA97__CTOR_OFFSET UNITYSDK_OFFSET(0x11E84B30)

inline static constexpr unsigned int Class_3_0A64B6FBBB74CA97_TypeDefinitionIndex = 55321;

class Class_3_0A64B6FBBB74CA97 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::InfiniteWaveNextMonsterId*>
{
public:
	::RPG::GameCore::StringHash KLDJEHDJOBA; // 0x28
	::RPG::GameCore::StringHash FOLGINKOCIB; // 0x2C
	::RPG::GameCore::StringHash OCNBONDLKOF; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::InfiniteWaveNextMonsterId* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::InfiniteWaveNextMonsterId*))((::PBYTE)hIl2Cpp + CLASS_3_0A64B6FBBB74CA97__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0A64B6FBBB74CA97_ONTASKBEGIN_OFFSET))(this);
	}
};
