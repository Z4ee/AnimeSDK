#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class PenaconyEndmostChronicleData; }

#define CLASS_1_43BD383C98B4C0C5_140_METHOD_1_9870AE40E3939725_OFFSET UNITYSDK_OFFSET(0x983B190)
#define CLASS_1_43BD383C98B4C0C5_140__CTOR_OFFSET UNITYSDK_OFFSET(0x983B3E0)

inline static constexpr unsigned int Class_1_43BD383C98B4C0C5_140_TypeDefinitionIndex = 60867;

class Class_1_43BD383C98B4C0C5_140 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_140__CTOR_OFFSET))(this);
	}

	static ::RPG::Client::PenaconyEndmostChronicleData* Method_1_9870AE40E3939725()
	{
		return ((::RPG::Client::PenaconyEndmostChronicleData*(*)())((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_140_METHOD_1_9870AE40E3939725_OFFSET))();
	}
};
