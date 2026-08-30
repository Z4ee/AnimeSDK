#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1381;
class Class_1_57A077DBC3E5B8EF;
namespace RPG::Client::FateRin::Logging { class ILogger; }
namespace RPG::Client::FateRin::Logging { class ILoggerFactory; }

#define CLASS_1_5033CCABAB033D26_METHOD_1_C8F236EDA5771098_OFFSET UNITYSDK_OFFSET(0x1286C710)
#define CLASS_1_5033CCABAB033D26__CTOR_OFFSET UNITYSDK_OFFSET(0x1286C6E0)

inline static constexpr unsigned int Class_1_5033CCABAB033D26_TypeDefinitionIndex = 79877;

class Class_1_5033CCABAB033D26 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_1381* ILMLNDPKFNO; // 0x10
	::RPG::Client::FateRin::Logging::ILogger* JKCNFDEAMDJ; // 0x18

	::System::Void _ctor(::Class_0_16E4307DCC419505_1381* a1, ::RPG::Client::FateRin::Logging::ILoggerFactory* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_1381*, ::RPG::Client::FateRin::Logging::ILoggerFactory*))((::PBYTE)hIl2Cpp + CLASS_1_5033CCABAB033D26__CTOR_OFFSET))(this, a1, a2);
	}

	::Class_1_57A077DBC3E5B8EF* Method_1_C8F236EDA5771098()
	{
		return ((::Class_1_57A077DBC3E5B8EF*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5033CCABAB033D26_METHOD_1_C8F236EDA5771098_OFFSET))(this);
	}
};
