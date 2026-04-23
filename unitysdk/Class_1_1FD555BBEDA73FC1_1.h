#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntityList; }

#define CLASS_1_1FD555BBEDA73FC1_1__CTOR_OFFSET UNITYSDK_OFFSET(0x11D70A50)

inline static constexpr unsigned int Class_1_1FD555BBEDA73FC1_1_TypeDefinitionIndex = 51280;

class Class_1_1FD555BBEDA73FC1_1 : public ::System::Object
{
public:
	::RPG::GameCore::GameEntityList* Field_1_0; // 0x10
	::System::Boolean Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1FD555BBEDA73FC1_1__CTOR_OFFSET))(this);
	}
};
