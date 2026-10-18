#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F9FBCC956DFCF137_1.h"

class Class_1_7325E2A200EF063B;
namespace RPG::GameCore { class MarbleSetNextScoreDelta; }

#define CLASS_2_C604E6AD10C15684_METHOD_2_F39234F2606D8D97_OFFSET UNITYSDK_OFFSET(0x1C877A40)
#define CLASS_2_C604E6AD10C15684__CTOR_OFFSET UNITYSDK_OFFSET(0x1C877A30)

inline static constexpr unsigned int Class_2_C604E6AD10C15684_TypeDefinitionIndex = 43125;

class Class_2_C604E6AD10C15684 : public ::Class_1_F9FBCC956DFCF137_1
{
public:
	::RPG::GameCore::MarbleSetNextScoreDelta* IGHAHBNLIJA; // 0x18

	::System::Void _ctor(::RPG::GameCore::MarbleSetNextScoreDelta* a1, ::Class_1_7325E2A200EF063B* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarbleSetNextScoreDelta*, ::Class_1_7325E2A200EF063B*))((::PBYTE)hIl2Cpp + CLASS_2_C604E6AD10C15684__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_F39234F2606D8D97()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C604E6AD10C15684_METHOD_2_F39234F2606D8D97_OFFSET))(this);
	}
};
