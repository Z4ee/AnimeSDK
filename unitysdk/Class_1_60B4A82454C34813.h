#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class AIDecisionGroup; }

#define CLASS_1_60B4A82454C34813_METHOD_1_C1A368B7C2B47CC8_OFFSET UNITYSDK_OFFSET(0x162B0360)

inline static constexpr unsigned int Class_1_60B4A82454C34813_TypeDefinitionIndex = 57915;

class Class_1_60B4A82454C34813 : public ::System::Object
{
public:
	static ::RPG::GameCore::AIDecisionGroup* Method_1_C1A368B7C2B47CC8(::RPG::GameCore::AIDecisionGroup* a1)
	{
		return ((::RPG::GameCore::AIDecisionGroup*(*)(::RPG::GameCore::AIDecisionGroup*))((::PBYTE)hIl2Cpp + CLASS_1_60B4A82454C34813_METHOD_1_C1A368B7C2B47CC8_OFFSET))(a1);
	}
};
