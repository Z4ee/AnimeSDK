#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

#define CLASS_2_4C33489CC9ABFB9D__CTOR_OFFSET UNITYSDK_OFFSET(0x14937920)

inline static constexpr unsigned int Class_2_4C33489CC9ABFB9D_TypeDefinitionIndex = 71046;

class Class_2_4C33489CC9ABFB9D : public ::UnityEngine::Playables::PlayableBehaviour
{
public:
	::System::Boolean Field_2_2; // 0x10
	::System::Boolean Field_2_1; // 0x11
	::System::ValueTuple_2<::System::Double, ::System::Double> Field_2_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4C33489CC9ABFB9D__CTOR_OFFSET))(this);
	}
};
