#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_28D410CCE235575F_6;
class Class_2_2677292940697014;
namespace RPG::Client::Promises { class IPromise; }

#define CLASS_2_2677292940697014___C__DISPLAYCLASS8_0__CTOR_OFFSET UNITYSDK_OFFSET(0x17ECF1A0)
#define CLASS_2_2677292940697014___C__DISPLAYCLASS8_0__SENDSETLINEUPCSREQ_B__0_OFFSET UNITYSDK_OFFSET(0x17ECF6E0)

inline static constexpr unsigned int Class_2_2677292940697014___c__DisplayClass8_0_TypeDefinitionIndex = 64001;

class Class_2_2677292940697014___c__DisplayClass8_0 : public ::System::Object
{
public:
	::Class_2_2677292940697014* __4__this; // 0x10
	::System::UInt32 mapID; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2677292940697014___C__DISPLAYCLASS8_0__CTOR_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* _SendSetLineupCsReq_b__0(::Class_1_28D410CCE235575F_6* a1)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::Class_1_28D410CCE235575F_6*))((::PBYTE)hIl2Cpp + CLASS_2_2677292940697014___C__DISPLAYCLASS8_0__SENDSETLINEUPCSREQ_B__0_OFFSET))(this, a1);
	}
};
