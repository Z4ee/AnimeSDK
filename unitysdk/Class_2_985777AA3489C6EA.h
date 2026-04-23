#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F9FBCC956DFCF137_3.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

class Class_1_BD800F5B29A08E1F;
namespace RPG::GameCore { class CheckAIVariableIntAxis; }

#define CLASS_2_985777AA3489C6EA_METHOD_2_4B1627D78D57FD39_OFFSET UNITYSDK_OFFSET(0x95DAC90)
#define CLASS_2_985777AA3489C6EA_METHOD_2_DEA99FA2D9A643CC_OFFSET UNITYSDK_OFFSET(0x95DAB80)
#define CLASS_2_985777AA3489C6EA__CTOR_OFFSET UNITYSDK_OFFSET(0x95DAB70)

inline static constexpr unsigned int Class_2_985777AA3489C6EA_TypeDefinitionIndex = 50143;

class Class_2_985777AA3489C6EA : public ::Class_1_F9FBCC956DFCF137_3
{
public:
	::RPG::GameCore::CheckAIVariableIntAxis* Field_2_0; // 0x18

	::System::Void _ctor(::RPG::GameCore::CheckAIVariableIntAxis* a1, ::Class_1_BD800F5B29A08E1F* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CheckAIVariableIntAxis*, ::Class_1_BD800F5B29A08E1F*))((::PBYTE)hIl2Cpp + CLASS_2_985777AA3489C6EA__CTOR_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::FixPoint Method_2_DEA99FA2D9A643CC()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_985777AA3489C6EA_METHOD_2_DEA99FA2D9A643CC_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_2_4B1627D78D57FD39()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_985777AA3489C6EA_METHOD_2_4B1627D78D57FD39_OFFSET))(this);
	}
};
