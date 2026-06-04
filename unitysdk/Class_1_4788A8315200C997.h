#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_AA7A9E067CD84C14;
namespace RPG::Client { class RogueGambleBaseFunc; }

#define CLASS_1_4788A8315200C997_METHOD_1_00A3B441C91DF205_OFFSET UNITYSDK_OFFSET(0x1360B9C0)

inline static constexpr unsigned int Class_1_4788A8315200C997_TypeDefinitionIndex = 62861;

class Class_1_4788A8315200C997 : public ::System::Object
{
public:
	static ::RPG::Client::RogueGambleBaseFunc* Method_1_00A3B441C91DF205(::Class_1_AA7A9E067CD84C14* a1)
	{
		return ((::RPG::Client::RogueGambleBaseFunc*(*)(::Class_1_AA7A9E067CD84C14*))((::PBYTE)hIl2Cpp + CLASS_1_4788A8315200C997_METHOD_1_00A3B441C91DF205_OFFSET))(a1);
	}
};
