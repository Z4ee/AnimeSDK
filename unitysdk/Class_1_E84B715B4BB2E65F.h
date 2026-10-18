#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Prop { class DeployPuzzleBoard; }
namespace System { class Action; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Transform; }

#define CLASS_1_E84B715B4BB2E65F_GET_FINISH_OFFSET UNITYSDK_OFFSET(0xB729ED0)
#define CLASS_1_E84B715B4BB2E65F_METHOD_1_63EDAB3EFF913F92_OFFSET UNITYSDK_OFFSET(0xB729B50)
#define CLASS_1_E84B715B4BB2E65F_SET_FINISH_OFFSET UNITYSDK_OFFSET(0xB729EE0)
#define CLASS_1_E84B715B4BB2E65F__CTOR_OFFSET UNITYSDK_OFFSET(0xB729EF0)

inline static constexpr unsigned int Class_1_E84B715B4BB2E65F_TypeDefinitionIndex = 78527;

class Class_1_E84B715B4BB2E65F : public ::System::Object
{
public:
	::RPG::Client::Prop::DeployPuzzleBoard* GAIENNLBCMM; // 0x10
	::UnityEngine::Transform* MCLLALGABAB; // 0x18
	::UnityEngine::AnimationCurve* EDPIEOEAIMF; // 0x20
	::UnityEngine::AnimationCurve* LOHJNDDJAJE; // 0x28
	::System::Action* DPANHIICMLD; // 0x30
	::System::UInt32 AMGLFFNJGFN; // 0x38
	::System::Boolean _Finish_k__BackingField; // 0x3C
	::System::Boolean GEMLHAGDHKA; // 0x3D
	::System::Boolean EKOBCMPNOCP; // 0x3E
	::System::Single PMHMEGEJDGP; // 0x40
	::System::Single IEHPFADHJFD; // 0x44

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
