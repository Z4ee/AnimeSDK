#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MainMissionData; }

#define CLASS_1_414F10489C7CB9B6_METHOD_1_8025381188F18083_OFFSET UNITYSDK_OFFSET(0x1836A120)
#define CLASS_1_414F10489C7CB9B6__CTOR_OFFSET UNITYSDK_OFFSET(0x1836A5F0)

inline static constexpr unsigned int Class_1_414F10489C7CB9B6_TypeDefinitionIndex = 66224;

class Class_1_414F10489C7CB9B6 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_414F10489C7CB9B6__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_8025381188F18083(::RPG::Client::MainMissionData* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MainMissionData*))((::PBYTE)hIl2Cpp + CLASS_1_414F10489C7CB9B6_METHOD_1_8025381188F18083_OFFSET))(this, a1);
	}
};
