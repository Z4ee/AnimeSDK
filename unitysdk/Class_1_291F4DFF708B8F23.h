#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class LittleGameProxyEntityConfig; }

#define CLASS_1_291F4DFF708B8F23__CTOR_OFFSET UNITYSDK_OFFSET(0x17E405D0)

inline static constexpr unsigned int Class_1_291F4DFF708B8F23_TypeDefinitionIndex = 38022;

class Class_1_291F4DFF708B8F23 : public ::System::Object
{
public:
	::RPG::GameCore::LittleGameProxyEntityConfig* Field_1_0; // 0x10
	::System::Boolean Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_291F4DFF708B8F23__CTOR_OFFSET))(this);
	}
};
