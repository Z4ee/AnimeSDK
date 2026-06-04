#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::CustomRP { class CustomAdditionalLightData; }
namespace UnityEngine { class Light; }

#define CLASS_3_47EE43A653B9B8AC_CLASS_1_DCAB5FE245EF35DE__CTOR_OFFSET UNITYSDK_OFFSET(0xCBE5DD0)

inline static constexpr unsigned int Class_3_47EE43A653B9B8AC_Class_1_DCAB5FE245EF35DE_TypeDefinitionIndex = 44679;

class Class_3_47EE43A653B9B8AC_Class_1_DCAB5FE245EF35DE : public ::System::Object
{
public:
	::RPG::CustomRP::CustomAdditionalLightData* Field_1_0; // 0x10
	::UnityEngine::Light* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_47EE43A653B9B8AC_CLASS_1_DCAB5FE245EF35DE__CTOR_OFFSET))(this);
	}
};
