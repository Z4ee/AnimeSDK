#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityHipplen { class ActivityHipplenWorkData; }

#define CLASS_1_4151676097639A60_METHOD_1_A69170213FDC5B5A_OFFSET UNITYSDK_OFFSET(0x1105D840)

inline static constexpr unsigned int Class_1_4151676097639A60_TypeDefinitionIndex = 61758;

class Class_1_4151676097639A60 : public ::System::Object
{
public:
	static ::RPG::Client::ActivityHipplen::ActivityHipplenWorkData* Method_1_A69170213FDC5B5A(::System::UInt32 a1, ::System::Boolean a2, ::System::Boolean a3, ::System::Boolean a4, ::System::Boolean a5)
	{
		return ((::RPG::Client::ActivityHipplen::ActivityHipplenWorkData*(*)(::System::UInt32, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4151676097639A60_METHOD_1_A69170213FDC5B5A_OFFSET))(a1, a2, a3, a4, a5);
	}
};
