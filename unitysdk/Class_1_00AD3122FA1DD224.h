#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftConditionType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_105;

#define CLASS_1_00AD3122FA1DD224_METHOD_1_90EEDACFD3122580_OFFSET UNITYSDK_OFFSET(0xDA3F950)
#define CLASS_1_00AD3122FA1DD224__CTOR_OFFSET UNITYSDK_OFFSET(0xDA3FA10)

inline static constexpr unsigned int Class_1_00AD3122FA1DD224_TypeDefinitionIndex = 80092;

class Class_1_00AD3122FA1DD224 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_00AD3122FA1DD224__CTOR_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_105* Method_1_90EEDACFD3122580(::RPG::Client::MechCraft::MechCraftConditionType a1)
	{
		return ((::Class_0_16E4307DCC419505_105*(*)(::PVOID, ::RPG::Client::MechCraft::MechCraftConditionType))((::PBYTE)hIl2Cpp + CLASS_1_00AD3122FA1DD224_METHOD_1_90EEDACFD3122580_OFFSET))(this, a1);
	}
};
