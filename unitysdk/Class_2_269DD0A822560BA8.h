#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PropTryGetNiudanReward; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_269DD0A822560BA8_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17BC7B90)
#define CLASS_2_269DD0A822560BA8_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17BC7C80)
#define CLASS_2_269DD0A822560BA8_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x17BC7BD0)
#define CLASS_2_269DD0A822560BA8_TICK_OFFSET UNITYSDK_OFFSET(0x17BC7C20)
#define CLASS_2_269DD0A822560BA8__CTOR_OFFSET UNITYSDK_OFFSET(0x17BC7B80)

inline static constexpr unsigned int Class_2_269DD0A822560BA8_TypeDefinitionIndex = 58511;

class Class_2_269DD0A822560BA8 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::GameEntity* KCKEHDGBGGG; // 0x18
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
	::RPG::GameCore::PropTryGetNiudanReward* OFKGLJOAMLD; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PropTryGetNiudanReward* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropTryGetNiudanReward*))((::PBYTE)hIl2Cpp + CLASS_2_269DD0A822560BA8__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_269DD0A822560BA8_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_269DD0A822560BA8_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_269DD0A822560BA8_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_269DD0A822560BA8_ONTASKBEGIN_OFFSET))(this);
	}
};
