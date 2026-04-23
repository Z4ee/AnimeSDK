#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class SetSummonUnitAttach; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_EED208C55D4DEECC_DISPOSE_OFFSET UNITYSDK_OFFSET(0x927A230)
#define CLASS_3_EED208C55D4DEECC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x927A270)
#define CLASS_3_EED208C55D4DEECC__CTOR_OFFSET UNITYSDK_OFFSET(0x927A200)
#define CLASS_3_EED208C55D4DEECC___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x927A4B0)

inline static constexpr unsigned int Class_3_EED208C55D4DEECC_TypeDefinitionIndex = 54004;

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

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EED208C55D4DEECC___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
