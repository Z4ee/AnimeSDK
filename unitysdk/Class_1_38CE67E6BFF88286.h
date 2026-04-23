#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class CycleScore; }

#define CLASS_1_38CE67E6BFF88286_METHOD_1_C50C2423B8683D19_OFFSET UNITYSDK_OFFSET(0xB2250B0)
#define CLASS_1_38CE67E6BFF88286__CTOR_OFFSET UNITYSDK_OFFSET(0xB225150)

inline static constexpr unsigned int Class_1_38CE67E6BFF88286_TypeDefinitionIndex = 58541;

class Class_1_38CE67E6BFF88286 : public ::System::Object
{
public:
	::RPG::Client::CycleScore* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_38CE67E6BFF88286__CTOR_OFFSET))(this);
	}

	::RPG::Client::CycleScore* Method_1_C50C2423B8683D19()
	{
		return ((::RPG::Client::CycleScore*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_38CE67E6BFF88286_METHOD_1_C50C2423B8683D19_OFFSET))(this);
	}
};
