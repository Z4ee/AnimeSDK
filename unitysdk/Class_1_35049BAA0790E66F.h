#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }

#define CLASS_1_35049BAA0790E66F__CTOR_OFFSET UNITYSDK_OFFSET(0x1431C130)

inline static constexpr unsigned int Class_1_35049BAA0790E66F_TypeDefinitionIndex = 49024;

class Class_1_35049BAA0790E66F : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::UnityEngine::AnimationCurve*>* Field_1_1; // 0x10
	::System::Collections::Generic::List_1<::UnityEngine::AnimationCurve*>* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_35049BAA0790E66F__CTOR_OFFSET))(this);
	}
};
