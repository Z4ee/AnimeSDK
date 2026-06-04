#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class FiveDimSurfaceBakedInfo; }

#define CLASS_1_9B7AD197202F811D__CTOR_OFFSET UNITYSDK_OFFSET(0x18C1BD60)

inline static constexpr unsigned int Class_1_9B7AD197202F811D_TypeDefinitionIndex = 39962;

class Class_1_9B7AD197202F811D : public ::System::Object
{
public:
	::RPG::GameCore::FiveDimSurfaceBakedInfo* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9B7AD197202F811D__CTOR_OFFSET))(this);
	}
};
