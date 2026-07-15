#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class PenaconyEndmostChronicleData; }

#define CLASS_1_43BD383C98B4C0C5_159_METHOD_1_9EE504DE81BF3189_OFFSET UNITYSDK_OFFSET(0x152A6E30)
#define CLASS_1_43BD383C98B4C0C5_159__CTOR_OFFSET UNITYSDK_OFFSET(0x152A70E0)

inline static constexpr unsigned int Class_1_43BD383C98B4C0C5_159_TypeDefinitionIndex = 63163;

class Class_1_43BD383C98B4C0C5_159 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_159__CTOR_OFFSET))(this);
	}

	static ::RPG::Client::PenaconyEndmostChronicleData* Method_1_9EE504DE81BF3189()
	{
		return ((::RPG::Client::PenaconyEndmostChronicleData*(*)())((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_159_METHOD_1_9EE504DE81BF3189_OFFSET))();
	}
};
