#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }

#define CLASS_1_C15036FFDF8F4F0A_METHOD_1_D065428AECA71270_OFFSET UNITYSDK_OFFSET(0x134043D0)

inline static constexpr unsigned int Class_1_C15036FFDF8F4F0A_TypeDefinitionIndex = 81155;

class Class_1_C15036FFDF8F4F0A : public ::System::Object
{
public:
	static ::Foundation::ViewObject::ViewObjectHandle Method_1_D065428AECA71270(::MoleMole::Battle::Entity* a1)
	{
		return ((::Foundation::ViewObject::ViewObjectHandle(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_C15036FFDF8F4F0A_METHOD_1_D065428AECA71270_OFFSET))(a1);
	}
};
