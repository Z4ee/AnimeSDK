#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/WanFaLianJiStartType.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_873A267154DB19A0__CTOR_OFFSET UNITYSDK_OFFSET(0x16BB6170)

inline static constexpr unsigned int Class_1_873A267154DB19A0_TypeDefinitionIndex = 63716;

class Class_1_873A267154DB19A0 : public ::System::Object
{
public:
	::System::Object* Field_1_0; // 0x10
	::RPG::Client::WanFaLianJiStartType Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_873A267154DB19A0__CTOR_OFFSET))(this);
	}
};
