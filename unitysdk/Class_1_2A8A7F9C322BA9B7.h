#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AnimatorParameterType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_2A8A7F9C322BA9B7__CTOR_OFFSET UNITYSDK_OFFSET(0x110BB090)

inline static constexpr unsigned int Class_1_2A8A7F9C322BA9B7_TypeDefinitionIndex = 50459;

class Class_1_2A8A7F9C322BA9B7 : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::System::Single Field_1_2; // 0x18
	::RPG::GameCore::AnimatorParameterType Field_1_1; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2A8A7F9C322BA9B7__CTOR_OFFSET))(this);
	}
};
