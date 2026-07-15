#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Prop { class DeployPuzzleBoard; }
namespace System { class Action; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Transform; }

#define CLASS_1_E84B715B4BB2E65F_GET_FINISH_OFFSET UNITYSDK_OFFSET(0x152A2FE0)
#define CLASS_1_E84B715B4BB2E65F_METHOD_1_63EDAB3EFF913F92_OFFSET UNITYSDK_OFFSET(0x152A2C60)
#define CLASS_1_E84B715B4BB2E65F_SET_FINISH_OFFSET UNITYSDK_OFFSET(0x152A2FF0)
#define CLASS_1_E84B715B4BB2E65F__CTOR_OFFSET UNITYSDK_OFFSET(0x152A3000)

inline static constexpr unsigned int Class_1_E84B715B4BB2E65F_TypeDefinitionIndex = 74570;

class Class_1_E84B715B4BB2E65F : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10
	::UnityEngine::AnimationCurve* Field_1_1; // 0x18
	::UnityEngine::AnimationCurve* Field_1_2; // 0x20
	::RPG::Client::Prop::DeployPuzzleBoard* Field_1_3; // 0x28
	::UnityEngine::Transform* Field_1_4; // 0x30
	::System::Single Field_1_5; // 0x38
	::System::Single Field_1_6; // 0x3C
	::System::UInt32 Field_1_7; // 0x40
	::System::Boolean _Finish_k__BackingField; // 0x44
	::System::Boolean Field_1_9; // 0x45
	::System::Boolean Field_1_10; // 0x46

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E84B715B4BB2E65F__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_63EDAB3EFF913F92(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_E84B715B4BB2E65F_METHOD_1_63EDAB3EFF913F92_OFFSET))(this, a1);
	}

	::System::Boolean get_Finish()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E84B715B4BB2E65F_GET_FINISH_OFFSET))(this);
	}

	::System::Void set_Finish(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E84B715B4BB2E65F_SET_FINISH_OFFSET))(this, a1);
	}
};
