#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class LittleGameAttachPointConfig; }

#define CLASS_1_6AC66C82472E816E__CTOR_OFFSET UNITYSDK_OFFSET(0x16A1BDB0)

inline static constexpr unsigned int Class_1_6AC66C82472E816E_TypeDefinitionIndex = 32295;

class Class_1_6AC66C82472E816E : public ::System::Object
{
public:
	::RPG::GameCore::LittleGameAttachPointConfig* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6AC66C82472E816E__CTOR_OFFSET))(this);
	}
};
