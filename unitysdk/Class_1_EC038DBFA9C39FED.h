#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MainMissionData; }

#define CLASS_1_EC038DBFA9C39FED_METHOD_1_276C655A5B744749_OFFSET UNITYSDK_OFFSET(0xD22F4E0)
#define CLASS_1_EC038DBFA9C39FED__CTOR_OFFSET UNITYSDK_OFFSET(0xD22F6E0)

inline static constexpr unsigned int Class_1_EC038DBFA9C39FED_TypeDefinitionIndex = 66222;

class Class_1_EC038DBFA9C39FED : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EC038DBFA9C39FED__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_276C655A5B744749(::RPG::Client::MainMissionData* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MainMissionData*))((::PBYTE)hIl2Cpp + CLASS_1_EC038DBFA9C39FED_METHOD_1_276C655A5B744749_OFFSET))(this, a1);
	}
};
