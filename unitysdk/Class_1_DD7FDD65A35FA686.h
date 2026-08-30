#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_8A959A6F652E3685.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class FiveDimPipePortalConfig; }

#define CLASS_1_DD7FDD65A35FA686__CTOR_OFFSET UNITYSDK_OFFSET(0x1D057320)

inline static constexpr unsigned int Class_1_DD7FDD65A35FA686_TypeDefinitionIndex = 41843;

class Class_1_DD7FDD65A35FA686 : public ::System::Object
{
public:
	::RPG::GameCore::FiveDimPipePortalConfig* EABKOHGCHFP; // 0x10
	::Struct_2_8A959A6F652E3685 BPAPBAFOMCH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DD7FDD65A35FA686__CTOR_OFFSET))(this);
	}
};
