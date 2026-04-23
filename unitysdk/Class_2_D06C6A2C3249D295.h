#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_3897C88E8C59E725.h"

namespace RPG::Client { class GridFightRole; }

#define CLASS_2_D06C6A2C3249D295_METHOD_2_4389275F4099DE36_OFFSET UNITYSDK_OFFSET(0x1289BFB0)
#define CLASS_2_D06C6A2C3249D295__CTOR_OFFSET UNITYSDK_OFFSET(0x1289BF10)

inline static constexpr unsigned int Class_2_D06C6A2C3249D295_TypeDefinitionIndex = 59963;

class Class_2_D06C6A2C3249D295 : public ::Class_1_3897C88E8C59E725
{
public:
	::RPG::Client::GridFightRole* Field_2_0; // 0x20

	::System::Void _ctor(::RPG::Client::GridFightRole* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + CLASS_2_D06C6A2C3249D295__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_4389275F4099DE36()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D06C6A2C3249D295_METHOD_2_4389275F4099DE36_OFFSET))(this);
	}
};
