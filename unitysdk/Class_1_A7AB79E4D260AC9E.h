#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }

#define CLASS_1_A7AB79E4D260AC9E__CTOR_OFFSET UNITYSDK_OFFSET(0x11E76060)

inline static constexpr unsigned int Class_1_A7AB79E4D260AC9E_TypeDefinitionIndex = 74670;

class Class_1_A7AB79E4D260AC9E : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::UnityEngine::AnimationCurve*>* Field_1_0; // 0x10
	::System::Single Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A7AB79E4D260AC9E__CTOR_OFFSET))(this);
	}
};
