#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class PenaconyEndmostChronicleData; }

#define CLASS_1_43BD383C98B4C0C5_172_METHOD_1_9EE504DE81BF3189_OFFSET UNITYSDK_OFFSET(0xB72E310)
#define CLASS_1_43BD383C98B4C0C5_172__CTOR_OFFSET UNITYSDK_OFFSET(0xB72E5C0)

inline static constexpr unsigned int Class_1_43BD383C98B4C0C5_172_TypeDefinitionIndex = 66102;

class Class_1_43BD383C98B4C0C5_172 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_172__CTOR_OFFSET))(this);
	}

	static ::RPG::Client::PenaconyEndmostChronicleData* Method_1_9EE504DE81BF3189()
	{
		return ((::RPG::Client::PenaconyEndmostChronicleData*(*)())((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_172_METHOD_1_9EE504DE81BF3189_OFFSET))();
	}
};
