#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class FiveDimInteractEmitterConfig; }

#define CLASS_1_9958BAAC50DCB343__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE10190)

inline static constexpr unsigned int Class_1_9958BAAC50DCB343_TypeDefinitionIndex = 41837;

class Class_1_9958BAAC50DCB343 : public ::System::Object
{
public:
	::RPG::GameCore::FiveDimInteractEmitterConfig* EABKOHGCHFP; // 0x10
	::System::Boolean EDCNKGHPHFC; // 0x18
	::System::Int32 MNMHMECGDAK; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9958BAAC50DCB343__CTOR_OFFSET))(this);
	}
};
