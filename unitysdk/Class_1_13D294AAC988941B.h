#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MainMissionData; }

#define CLASS_1_13D294AAC988941B_METHOD_1_569897CFEAD3B252_OFFSET UNITYSDK_OFFSET(0xA3DF500)
#define CLASS_1_13D294AAC988941B__CTOR_OFFSET UNITYSDK_OFFSET(0xA3DF6D0)

inline static constexpr unsigned int Class_1_13D294AAC988941B_TypeDefinitionIndex = 61874;

class Class_1_13D294AAC988941B : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_13D294AAC988941B__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_569897CFEAD3B252(::RPG::Client::MainMissionData* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MainMissionData*))((::PBYTE)hIl2Cpp + CLASS_1_13D294AAC988941B_METHOD_1_569897CFEAD3B252_OFFSET))(this, a1);
	}
};
