#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class FloatCurve; }
namespace RPG::GameCore { class GameEntity; }

#define CLASS_1_93896D58DE250EBE_CLEAR_OFFSET UNITYSDK_OFFSET(0x137CF520)
#define CLASS_1_93896D58DE250EBE__CTOR_OFFSET UNITYSDK_OFFSET(0x137CF570)

inline static constexpr unsigned int Class_1_93896D58DE250EBE_TypeDefinitionIndex = 53188;

class Class_1_93896D58DE250EBE : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* Field_1_0; // 0x10
	::RPG::GameCore::FloatCurve* Field_1_1; // 0x18
	::System::Single Field_1_2; // 0x20
	::System::Single Field_1_3; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_93896D58DE250EBE__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_93896D58DE250EBE_CLEAR_OFFSET))(this);
	}
};
