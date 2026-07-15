#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine::Rendering { class BatchAnimationInstance; }

#define CLASS_1_5850719FB0DF12B1_METHOD_1_B3B62D0403070E45_OFFSET UNITYSDK_OFFSET(0x18F216C0)

inline static constexpr unsigned int Class_1_5850719FB0DF12B1_TypeDefinitionIndex = 45494;

class Class_1_5850719FB0DF12B1 : public ::System::Object
{
public:
	static ::System::Void Method_1_B3B62D0403070E45(::UnityEngine::Rendering::BatchAnimationInstance* a1, ::System::Int32 a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::UnityEngine::Rendering::BatchAnimationInstance*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_5850719FB0DF12B1_METHOD_1_B3B62D0403070E45_OFFSET))(a1, a2, a3);
	}
};
