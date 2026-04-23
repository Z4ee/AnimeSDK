#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class ModifierBehaviorVisual; }

#define CLASS_1_0023FA7079F1D834_METHOD_1_0410BAD1FB7FAA59_OFFSET UNITYSDK_OFFSET(0xA066B10)

inline static constexpr unsigned int Class_1_0023FA7079F1D834_TypeDefinitionIndex = 50206;

class Class_1_0023FA7079F1D834 : public ::System::Object
{
public:
	static ::System::Int32 Method_1_0410BAD1FB7FAA59(::RPG::GameCore::ModifierBehaviorVisual* a1)
	{
		return ((::System::Int32(*)(::RPG::GameCore::ModifierBehaviorVisual*))((::PBYTE)hIl2Cpp + CLASS_1_0023FA7079F1D834_METHOD_1_0410BAD1FB7FAA59_OFFSET))(a1);
	}
};
