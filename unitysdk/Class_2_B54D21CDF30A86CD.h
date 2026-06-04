#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_ED6A06E6F11DAF49.h"

namespace RPG::Client { class GridFightRole; }

#define CLASS_2_B54D21CDF30A86CD_METHOD_2_4389275F4099DE36_OFFSET UNITYSDK_OFFSET(0x118F5A70)
#define CLASS_2_B54D21CDF30A86CD__CTOR_OFFSET UNITYSDK_OFFSET(0x118F5A50)

inline static constexpr unsigned int Class_2_B54D21CDF30A86CD_TypeDefinitionIndex = 60898;

class Class_2_B54D21CDF30A86CD : public ::Class_1_ED6A06E6F11DAF49
{
public:
	::RPG::Client::GridFightRole* Field_2_0; // 0x20

	::System::Void _ctor(::RPG::Client::GridFightRole* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + CLASS_2_B54D21CDF30A86CD__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_4389275F4099DE36()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B54D21CDF30A86CD_METHOD_2_4389275F4099DE36_OFFSET))(this);
	}
};
