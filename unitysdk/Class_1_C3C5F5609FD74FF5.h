#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Prop { class DeployPuzzleBoard; }
namespace System { class Action; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Transform; }

#define CLASS_1_C3C5F5609FD74FF5_GET_FINISH_OFFSET UNITYSDK_OFFSET(0x8A63000)
#define CLASS_1_C3C5F5609FD74FF5_METHOD_1_AF53AC45ED2466EB_OFFSET UNITYSDK_OFFSET(0x8A62CD0)
#define CLASS_1_C3C5F5609FD74FF5_SET_FINISH_OFFSET UNITYSDK_OFFSET(0x8A63010)
#define CLASS_1_C3C5F5609FD74FF5__CTOR_OFFSET UNITYSDK_OFFSET(0x8A63020)

inline static constexpr unsigned int Class_1_C3C5F5609FD74FF5_TypeDefinitionIndex = 63976;

class Class_1_C3C5F5609FD74FF5 : public ::System::Object
{
public:
	::UnityEngine::Transform* Field_1_0; // 0x10
	::UnityEngine::AnimationCurve* Field_1_4; // 0x18
	::UnityEngine::AnimationCurve* Field_1_5; // 0x20
	::System::Action* Field_1_7; // 0x28
	::RPG::Client::Prop::DeployPuzzleBoard* Field_1_8; // 0x30
	::System::Boolean _Finish_k__BackingField; // 0x38
	::System::Boolean Field_1_6; // 0x39
	::System::Boolean Field_1_2; // 0x3A
	::System::Single Field_1_9; // 0x3C
	::System::Single Field_1_3; // 0x40
	::System::UInt32 Field_1_1; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C3C5F5609FD74FF5__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_AF53AC45ED2466EB(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C3C5F5609FD74FF5_METHOD_1_AF53AC45ED2466EB_OFFSET))(this, a1);
	}

	::System::Boolean get_Finish()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C3C5F5609FD74FF5_GET_FINISH_OFFSET))(this);
	}

	::System::Void set_Finish(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C3C5F5609FD74FF5_SET_FINISH_OFFSET))(this, value);
	}
};
