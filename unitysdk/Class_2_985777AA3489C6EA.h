#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F9FBCC956DFCF137_4.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

class Class_1_AC66714FF5876767;
namespace RPG::GameCore { class CheckAIVariableIntAxis; }

#define CLASS_2_985777AA3489C6EA_METHOD_2_897B8FFB2E402295_OFFSET UNITYSDK_OFFSET(0x17D5AA10)
#define CLASS_2_985777AA3489C6EA__CTOR_OFFSET UNITYSDK_OFFSET(0x17D5AA00)

inline static constexpr unsigned int Class_2_985777AA3489C6EA_TypeDefinitionIndex = 51895;

class Class_2_985777AA3489C6EA : public ::Class_1_F9FBCC956DFCF137_4
{
public:
	::RPG::GameCore::CheckAIVariableIntAxis* Field_2_0; // 0x18

	::System::Void _ctor(::RPG::GameCore::CheckAIVariableIntAxis* a1, ::Class_1_AC66714FF5876767* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CheckAIVariableIntAxis*, ::Class_1_AC66714FF5876767*))((::PBYTE)hIl2Cpp + CLASS_2_985777AA3489C6EA__CTOR_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::FixPoint Method_2_897B8FFB2E402295()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_985777AA3489C6EA_METHOD_2_897B8FFB2E402295_OFFSET))(this);
	}
};
