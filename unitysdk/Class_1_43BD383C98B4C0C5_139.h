#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class PenaconyEndmostChronicleData; }

#define CLASS_1_43BD383C98B4C0C5_139_METHOD_1_9870AE40E3939725_OFFSET UNITYSDK_OFFSET(0x10AC0C10)
#define CLASS_1_43BD383C98B4C0C5_139__CTOR_OFFSET UNITYSDK_OFFSET(0x10AC0E60)

inline static constexpr unsigned int Class_1_43BD383C98B4C0C5_139_TypeDefinitionIndex = 53723;

class Class_1_43BD383C98B4C0C5_139 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_139__CTOR_OFFSET))(this);
	}

	static ::RPG::Client::PenaconyEndmostChronicleData* Method_1_9870AE40E3939725()
	{
		return ((::RPG::Client::PenaconyEndmostChronicleData*(*)())((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_139_METHOD_1_9870AE40E3939725_OFFSET))();
	}
};
