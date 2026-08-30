#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_3713064DEE761936.h"

namespace RPG::Client { class MatchThreeBoard; }

#define CLASS_2_980BB27C20DEC196_CLEAR_OFFSET UNITYSDK_OFFSET(0x155A5080)
#define CLASS_2_980BB27C20DEC196__CTOR_OFFSET UNITYSDK_OFFSET(0x155A50D0)

inline static constexpr unsigned int Class_2_980BB27C20DEC196_TypeDefinitionIndex = 65895;

class Class_2_980BB27C20DEC196 : public ::Class_1_3713064DEE761936
{
public:
	::RPG::Client::MatchThreeBoard* GAIENNLBCMM; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_980BB27C20DEC196__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_980BB27C20DEC196_CLEAR_OFFSET))(this);
	}
};
