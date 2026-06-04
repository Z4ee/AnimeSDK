#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MainMissionData; }

#define CLASS_1_0DBE02E82726B6C2_METHOD_1_887EF06500C994B4_OFFSET UNITYSDK_OFFSET(0x141F1360)
#define CLASS_1_0DBE02E82726B6C2__CTOR_OFFSET UNITYSDK_OFFSET(0x141F1680)

inline static constexpr unsigned int Class_1_0DBE02E82726B6C2_TypeDefinitionIndex = 61876;

class Class_1_0DBE02E82726B6C2 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0DBE02E82726B6C2__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_887EF06500C994B4(::RPG::Client::MainMissionData* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MainMissionData*))((::PBYTE)hIl2Cpp + CLASS_1_0DBE02E82726B6C2_METHOD_1_887EF06500C994B4_OFFSET))(this, a1);
	}
};
