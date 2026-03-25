#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MainMissionData; }

#define CLASS_1_2D59057833AC8FE1_METHOD_1_5F84B67763971A36_OFFSET UNITYSDK_OFFSET(0x11639600)
#define CLASS_1_2D59057833AC8FE1_METHOD_1_7C2463ECCE9D2C3E_OFFSET UNITYSDK_OFFSET(0x11639530)
#define CLASS_1_2D59057833AC8FE1_METHOD_1_8A3EB355C470E8A9_OFFSET UNITYSDK_OFFSET(0x116398D0)
#define CLASS_1_2D59057833AC8FE1__CTOR_OFFSET UNITYSDK_OFFSET(0x11639A80)

inline static constexpr unsigned int Class_1_2D59057833AC8FE1_TypeDefinitionIndex = 53797;

class Class_1_2D59057833AC8FE1 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2D59057833AC8FE1__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_7C2463ECCE9D2C3E(::RPG::Client::MainMissionData* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MainMissionData*))((::PBYTE)hIl2Cpp + CLASS_1_2D59057833AC8FE1_METHOD_1_7C2463ECCE9D2C3E_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_5F84B67763971A36(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_2D59057833AC8FE1_METHOD_1_5F84B67763971A36_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_8A3EB355C470E8A9(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_2D59057833AC8FE1_METHOD_1_8A3EB355C470E8A9_OFFSET))(this, a1);
	}
};
