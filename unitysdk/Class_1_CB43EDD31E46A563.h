#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PreReleaseScheduleState.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_CB43EDD31E46A563_METHOD_1_1382F251A304328F_OFFSET UNITYSDK_OFFSET(0xB252670)

inline static constexpr unsigned int Class_1_CB43EDD31E46A563_TypeDefinitionIndex = 66708;

class Class_1_CB43EDD31E46A563 : public ::System::Object
{
public:
	static ::RPG::Client::PreReleaseScheduleState Method_1_1382F251A304328F(::System::UInt32 a1)
	{
		return ((::RPG::Client::PreReleaseScheduleState(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_CB43EDD31E46A563_METHOD_1_1382F251A304328F_OFFSET))(a1);
	}
};
