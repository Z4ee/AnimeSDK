#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class AnimationState; }

#define CLASS_1_E4B28BF4798FAC79_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11436740)
#define CLASS_1_E4B28BF4798FAC79_METHOD_1_55D7AA42A94ED4D8_OFFSET UNITYSDK_OFFSET(0x11436880)
#define CLASS_1_E4B28BF4798FAC79_METHOD_1_A583248D0B8C6672_OFFSET UNITYSDK_OFFSET(0x114369E0)
#define CLASS_1_E4B28BF4798FAC79_METHOD_1_D8FD93C9664DDD10_OFFSET UNITYSDK_OFFSET(0x11436AB0)
#define CLASS_1_E4B28BF4798FAC79__CTOR_OFFSET UNITYSDK_OFFSET(0x114367F0)

inline static constexpr unsigned int Class_1_E4B28BF4798FAC79_TypeDefinitionIndex = 83122;

class Class_1_E4B28BF4798FAC79 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::AnimationState*>* Field_1_2; // 0x10
	::System::Int32 Field_1_1; // 0x18
	::System::Boolean Field_1_0; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E4B28BF4798FAC79__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E4B28BF4798FAC79_DISPOSE_OFFSET))(this);
	}

	::System::Single Method_1_55D7AA42A94ED4D8()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E4B28BF4798FAC79_METHOD_1_55D7AA42A94ED4D8_OFFSET))(this);
	}

	::System::Boolean Method_1_A583248D0B8C6672(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_E4B28BF4798FAC79_METHOD_1_A583248D0B8C6672_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_D8FD93C9664DDD10(::System::Int32 a1, ::UnityEngine::AnimationState* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::UnityEngine::AnimationState*))((::PBYTE)hIl2Cpp + CLASS_1_E4B28BF4798FAC79_METHOD_1_D8FD93C9664DDD10_OFFSET))(this, a1, a2);
	}
};
