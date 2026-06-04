#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class BattleInstance; }

#define CLASS_2_9885B9F5AA089289_CLASS_1_B5E16AB8EEB1D2A0__CTOR_OFFSET UNITYSDK_OFFSET(0x14353020)

inline static constexpr unsigned int Class_2_9885B9F5AA089289_Class_1_B5E16AB8EEB1D2A0_TypeDefinitionIndex = 66567;

class Class_2_9885B9F5AA089289_Class_1_B5E16AB8EEB1D2A0 : public ::System::Object
{
public:
	::RPG::GameCore::BattleInstance* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9885B9F5AA089289_CLASS_1_B5E16AB8EEB1D2A0__CTOR_OFFSET))(this);
	}
};
