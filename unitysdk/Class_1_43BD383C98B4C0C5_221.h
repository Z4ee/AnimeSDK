#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class RedDotGraphConfig; }

#define CLASS_1_43BD383C98B4C0C5_221_METHOD_1_CEE559F34785E6D4_OFFSET UNITYSDK_OFFSET(0x19AD9DE0)
#define CLASS_1_43BD383C98B4C0C5_221__CTOR_OFFSET UNITYSDK_OFFSET(0x19AD9E80)

inline static constexpr unsigned int Class_1_43BD383C98B4C0C5_221_TypeDefinitionIndex = 78685;

class Class_1_43BD383C98B4C0C5_221 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_221__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::RedDotGraphConfig* Method_1_CEE559F34785E6D4()
	{
		return ((::RPG::GameCore::RedDotGraphConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_221_METHOD_1_CEE559F34785E6D4_OFFSET))(this);
	}
};
