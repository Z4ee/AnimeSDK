#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"
#include "unitysdk/RPG/GameCore/StringHash.h"

namespace RPG::GameCore { class InfiniteWaveNextMonsterId; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_0A64B6FBBB74CA97_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1064B2B0)
#define CLASS_3_0A64B6FBBB74CA97__CTOR_OFFSET UNITYSDK_OFFSET(0x1064B070)

inline static constexpr unsigned int Class_3_0A64B6FBBB74CA97_TypeDefinitionIndex = 44107;

class Class_3_0A64B6FBBB74CA97 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::InfiniteWaveNextMonsterId*>
{
public:
	::RPG::GameCore::StringHash Field_3_2; // 0x28
	::RPG::GameCore::StringHash Field_3_0; // 0x2C
	::RPG::GameCore::StringHash Field_3_1; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::InfiniteWaveNextMonsterId* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::InfiniteWaveNextMonsterId*))((::PBYTE)hIl2Cpp + CLASS_3_0A64B6FBBB74CA97__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0A64B6FBBB74CA97_ONTASKBEGIN_OFFSET))(this);
	}
};
