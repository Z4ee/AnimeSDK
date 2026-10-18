#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1390;
namespace RPG::Client::ActivityIdleLive { class IdleLiveTickManager; }

#define CLASS_1_C0A600872C307509_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB2A0C50)
#define CLASS_1_C0A600872C307509_METHOD_1_D27D607691A6D4E3_OFFSET UNITYSDK_OFFSET(0xB2A0BF0)
#define CLASS_1_C0A600872C307509__CTOR_OFFSET UNITYSDK_OFFSET(0xB2A0B80)

inline static constexpr unsigned int Class_1_C0A600872C307509_TypeDefinitionIndex = 75449;

class Class_1_C0A600872C307509 : public ::System::Object
{
public:
	::RPG::Client::ActivityIdleLive::IdleLiveTickManager* ONANOCKIKOK; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C0A600872C307509__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_D27D607691A6D4E3(::Class_0_16E4307DCC419505_1390* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_1390*))((::PBYTE)hIl2Cpp + CLASS_1_C0A600872C307509_METHOD_1_D27D607691A6D4E3_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C0A600872C307509_DISPOSE_OFFSET))(this);
	}
};
