#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_A047D65884258648.h"

class Class_1_EFDEDB2BC2764B7D;
namespace RPG::GameCore { class MarbleByIsDefender; }

#define CLASS_3_4843D0B70B1ADDB9_METHOD_3_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x1C14ACB0)
#define CLASS_3_4843D0B70B1ADDB9__CTOR_OFFSET UNITYSDK_OFFSET(0x1C14ACA0)

inline static constexpr unsigned int Class_3_4843D0B70B1ADDB9_TypeDefinitionIndex = 41502;

class Class_3_4843D0B70B1ADDB9 : public ::Class_2_A047D65884258648
{
public:
	::System::Void _ctor(::RPG::GameCore::MarbleByIsDefender* a1, ::Class_1_EFDEDB2BC2764B7D* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarbleByIsDefender*, ::Class_1_EFDEDB2BC2764B7D*))((::PBYTE)hIl2Cpp + CLASS_3_4843D0B70B1ADDB9__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4843D0B70B1ADDB9_METHOD_3_1808E1CF7A125519_OFFSET))(this);
	}
};
