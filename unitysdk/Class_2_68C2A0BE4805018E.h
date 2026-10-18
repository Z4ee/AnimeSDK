#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F9FBCC956DFCF137_1.h"

class Class_1_7325E2A200EF063B;
namespace RPG::GameCore { class MarbleAIDegrade; }

#define CLASS_2_68C2A0BE4805018E_METHOD_2_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x1CB789C0)
#define CLASS_2_68C2A0BE4805018E__CTOR_OFFSET UNITYSDK_OFFSET(0x1CB789B0)

inline static constexpr unsigned int Class_2_68C2A0BE4805018E_TypeDefinitionIndex = 43130;

class Class_2_68C2A0BE4805018E : public ::Class_1_F9FBCC956DFCF137_1
{
public:
	::RPG::GameCore::MarbleAIDegrade* IGHAHBNLIJA; // 0x18

	::System::Void _ctor(::RPG::GameCore::MarbleAIDegrade* a1, ::Class_1_7325E2A200EF063B* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarbleAIDegrade*, ::Class_1_7325E2A200EF063B*))((::PBYTE)hIl2Cpp + CLASS_2_68C2A0BE4805018E__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_68C2A0BE4805018E_METHOD_2_1808E1CF7A125519_OFFSET))(this);
	}
};
