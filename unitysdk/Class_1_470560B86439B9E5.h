#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1640;
class Class_1_16CEF26E52F4EDEF;
class Class_1_C5E8372927A4159F;
namespace RPG::Client { class UIController; }

#define CLASS_1_470560B86439B9E5_METHOD_1_43493CDAF3911C15_OFFSET UNITYSDK_OFFSET(0xBA62030)
#define CLASS_1_470560B86439B9E5__CTOR_OFFSET UNITYSDK_OFFSET(0xBA62020)

inline static constexpr unsigned int Class_1_470560B86439B9E5_TypeDefinitionIndex = 82104;

class Class_1_470560B86439B9E5 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_1640* LBNAGLIGKIO; // 0x10
	::Class_1_C5E8372927A4159F* MPFFGNPIDOA; // 0x18
	::Class_1_16CEF26E52F4EDEF* JDGBDKHIEGG; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_470560B86439B9E5__CTOR_OFFSET))(this);
	}

	::RPG::Client::UIController* Method_1_43493CDAF3911C15()
	{
		return ((::RPG::Client::UIController*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_470560B86439B9E5_METHOD_1_43493CDAF3911C15_OFFSET))(this);
	}
};
