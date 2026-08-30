#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F9FBCC956DFCF137_5.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

class Class_1_AC66714FF5876767;
namespace RPG::GameCore { class CheckAIVariableIntAxis; }

#define CLASS_2_985777AA3489C6EA_METHOD_2_897B8FFB2E402295_OFFSET UNITYSDK_OFFSET(0x180CB240)
#define CLASS_2_985777AA3489C6EA__CTOR_OFFSET UNITYSDK_OFFSET(0x180CB230)

inline static constexpr unsigned int Class_2_985777AA3489C6EA_TypeDefinitionIndex = 54579;

class Class_2_985777AA3489C6EA : public ::Class_1_F9FBCC956DFCF137_5
{
public:
	::RPG::GameCore::CheckAIVariableIntAxis* IGHAHBNLIJA; // 0x18

	::System::Void _ctor(::RPG::GameCore::CheckAIVariableIntAxis* a1, ::Class_1_AC66714FF5876767* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CheckAIVariableIntAxis*, ::Class_1_AC66714FF5876767*))((::PBYTE)hIl2Cpp + CLASS_2_985777AA3489C6EA__CTOR_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::FixPoint Method_2_897B8FFB2E402295()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_985777AA3489C6EA_METHOD_2_897B8FFB2E402295_OFFSET))(this);
	}
};
