#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MainMissionData; }

#define CLASS_1_EEE99151E65ED9F4_METHOD_1_90B15CC134C5B328_OFFSET UNITYSDK_OFFSET(0x11C01850)
#define CLASS_1_EEE99151E65ED9F4_METHOD_1_A457149E7F33CAA8_OFFSET UNITYSDK_OFFSET(0x11C01500)
#define CLASS_1_EEE99151E65ED9F4__CTOR_OFFSET UNITYSDK_OFFSET(0x11C01A50)

inline static constexpr unsigned int Class_1_EEE99151E65ED9F4_TypeDefinitionIndex = 60939;

class Class_1_EEE99151E65ED9F4 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EEE99151E65ED9F4__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_A457149E7F33CAA8(::RPG::Client::MainMissionData* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MainMissionData*))((::PBYTE)hIl2Cpp + CLASS_1_EEE99151E65ED9F4_METHOD_1_A457149E7F33CAA8_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_90B15CC134C5B328(::RPG::Client::MainMissionData* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MainMissionData*))((::PBYTE)hIl2Cpp + CLASS_1_EEE99151E65ED9F4_METHOD_1_90B15CC134C5B328_OFFSET))(this, a1);
	}
};
