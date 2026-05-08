#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }

#define CLASS_1_1BF063D9779E82CC__CTOR_OFFSET UNITYSDK_OFFSET(0x10FCAE70)

inline static constexpr unsigned int Class_1_1BF063D9779E82CC_TypeDefinitionIndex = 63059;

class Class_1_1BF063D9779E82CC : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::UnityEngine::AnimationCurve*>* Field_1_1; // 0x10
	::System::Collections::Generic::List_1<::UnityEngine::AnimationCurve*>* Field_1_2; // 0x18
	::System::Single Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1BF063D9779E82CC__CTOR_OFFSET))(this);
	}
};
