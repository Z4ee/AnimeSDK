#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class SetSummonUnitAttach; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_EED208C55D4DEECC_DISPOSE_OFFSET UNITYSDK_OFFSET(0x154215B0)
#define CLASS_3_EED208C55D4DEECC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x154215F0)
#define CLASS_3_EED208C55D4DEECC__CTOR_OFFSET UNITYSDK_OFFSET(0x15421580)

inline static constexpr unsigned int Class_3_EED208C55D4DEECC_TypeDefinitionIndex = 58727;

class Class_3_EED208C55D4DEECC : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetSummonUnitAttach*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetSummonUnitAttach* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetSummonUnitAttach*))((::PBYTE)hIl2Cpp + CLASS_3_EED208C55D4DEECC__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EED208C55D4DEECC_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EED208C55D4DEECC_ONTASKBEGIN_OFFSET))(this);
	}
};
