#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntityList; }

#define CLASS_1_1FD555BBEDA73FC1__CTOR_OFFSET UNITYSDK_OFFSET(0x10522EF0)

inline static constexpr unsigned int Class_1_1FD555BBEDA73FC1_TypeDefinitionIndex = 44544;

class Class_1_1FD555BBEDA73FC1 : public ::System::Object
{
public:
	::RPG::GameCore::GameEntityList* Field_1_0; // 0x10
	::System::Boolean Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1FD555BBEDA73FC1__CTOR_OFFSET))(this);
	}
};
