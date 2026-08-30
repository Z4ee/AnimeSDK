#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class ChimeraAbility; }

#define CLASS_1_6B53B381AECDC5C8__CTOR_OFFSET UNITYSDK_OFFSET(0x1C3A7400)

inline static constexpr unsigned int Class_1_6B53B381AECDC5C8_TypeDefinitionIndex = 40397;

class Class_1_6B53B381AECDC5C8 : public ::System::Object
{
public:
	::Il2CppArray<::RPG::GameCore::ChimeraAbility*>* GLLOLLEDHAD; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6B53B381AECDC5C8__CTOR_OFFSET))(this);
	}
};
