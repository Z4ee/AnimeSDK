#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }

#define CLASS_1_19B7EEF756261CFE_CLASS_1_2770D53CA37367E3_METHOD_1_27B25ECA3DE9862A_OFFSET UNITYSDK_OFFSET(0x11115950)
#define CLASS_1_19B7EEF756261CFE_CLASS_1_2770D53CA37367E3__CTOR_OFFSET UNITYSDK_OFFSET(0x11115B90)

inline static constexpr unsigned int Class_1_19B7EEF756261CFE_Class_1_2770D53CA37367E3_TypeDefinitionIndex = 46432;

class Class_1_19B7EEF756261CFE_Class_1_2770D53CA37367E3 : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* Field_1_0; // 0x10
	::Il2CppArray<::RPG::GameCore::FixPoint>* Field_1_2; // 0x18
	::System::UInt32 Field_1_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_19B7EEF756261CFE_CLASS_1_2770D53CA37367E3__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_1_27B25ECA3DE9862A(::RPG::GameCore::FixPoint a1)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_19B7EEF756261CFE_CLASS_1_2770D53CA37367E3_METHOD_1_27B25ECA3DE9862A_OFFSET))(this, a1);
	}
};
