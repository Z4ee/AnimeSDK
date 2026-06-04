#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define CLASS_1_8127A0E66BE3BB12__CTOR_OFFSET UNITYSDK_OFFSET(0x1371A8E0)

inline static constexpr unsigned int Class_1_8127A0E66BE3BB12_TypeDefinitionIndex = 44896;

class Class_1_8127A0E66BE3BB12 : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::RPG::GameCore::GameEntity* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8127A0E66BE3BB12__CTOR_OFFSET))(this);
	}
};
