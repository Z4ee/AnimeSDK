#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Prop { class DeployPuzzleBoard; }
namespace System { class Action; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Transform; }

#define CLASS_1_E84B715B4BB2E65F_GET_FINISH_OFFSET UNITYSDK_OFFSET(0xA5A73D0)
#define CLASS_1_E84B715B4BB2E65F_METHOD_1_63EDAB3EFF913F92_OFFSET UNITYSDK_OFFSET(0xA5A7050)
#define CLASS_1_E84B715B4BB2E65F_SET_FINISH_OFFSET UNITYSDK_OFFSET(0xA5A73E0)
#define CLASS_1_E84B715B4BB2E65F__CTOR_OFFSET UNITYSDK_OFFSET(0xA5A73F0)

inline static constexpr unsigned int Class_1_E84B715B4BB2E65F_TypeDefinitionIndex = 73045;

class Class_1_E84B715B4BB2E65F : public ::System::Object
{
public:
	::UnityEngine::AnimationCurve* Field_1_0; // 0x10
	::UnityEngine::AnimationCurve* Field_1_1; // 0x18
	::UnityEngine::Transform* Field_1_2; // 0x20
	::RPG::Client::Prop::DeployPuzzleBoard* Field_1_3; // 0x28
	::System::Action* Field_1_4; // 0x30
	::System::UInt32 Field_1_5; // 0x38
	::System::Boolean _Finish_k__BackingField; // 0x3C
	::System::Boolean Field_1_7; // 0x3D
	::System::Boolean Field_1_8; // 0x3E
	::System::Single Field_1_9; // 0x40
	::System::Single Field_1_10; // 0x44

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
