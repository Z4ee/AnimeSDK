#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B55037134F9E6688.h"

class Class_2_843468DEB2C89684;
namespace RPG::GameCore { class DiceCombatTaskConfig_InitOwedRollCount; }

#define CLASS_2_9DAF6F6DE381C579_METHOD_2_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0x1661E190)
#define CLASS_2_9DAF6F6DE381C579__CTOR_OFFSET UNITYSDK_OFFSET(0x1661E180)

inline static constexpr unsigned int Class_2_9DAF6F6DE381C579_TypeDefinitionIndex = 28443;

class Class_2_9DAF6F6DE381C579 : public ::Class_1_B55037134F9E6688
{
public:
	::RPG::GameCore::DiceCombatTaskConfig_InitOwedRollCount* Field_2_0; // 0x18
	::Class_2_843468DEB2C89684* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::DiceCombatTaskConfig_InitOwedRollCount* a1, ::Class_2_843468DEB2C89684* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatTaskConfig_InitOwedRollCount*, ::Class_2_843468DEB2C89684*))((::PBYTE)hIl2Cpp + CLASS_2_9DAF6F6DE381C579__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_D0BD1377F2594D33()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9DAF6F6DE381C579_METHOD_2_D0BD1377F2594D33_OFFSET))(this);
	}
};
