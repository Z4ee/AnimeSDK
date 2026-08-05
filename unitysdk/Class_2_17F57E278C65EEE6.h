#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_8377BAB19A574A40.h"
#include "unitysdk/UnityEngine/Keyframe.h"

class Class_3_3B42BC0680587011;
namespace MoleMole::Config { class AnimatorStateTimeSegment; }

#define CLASS_2_17F57E278C65EEE6_METHOD_2_15F4E4F86182D646_OFFSET UNITYSDK_OFFSET(0x125508F0)
#define CLASS_2_17F57E278C65EEE6_METHOD_2_502E4F13BFB605D5_OFFSET UNITYSDK_OFFSET(0x125509F0)
#define CLASS_2_17F57E278C65EEE6__CTOR_OFFSET UNITYSDK_OFFSET(0x12550980)

inline static constexpr unsigned int Class_2_17F57E278C65EEE6_TypeDefinitionIndex = 65636;

class Class_2_17F57E278C65EEE6 : public ::Class_1_8377BAB19A574A40
{
public:
	::Class_3_3B42BC0680587011* Field_2_6; // 0x80
	::MoleMole::Config::AnimatorStateTimeSegment* Field_2_7; // 0x88
	::UnityEngine::Keyframe Field_2_0; // 0x90
	::UnityEngine::Keyframe Field_2_1; // 0xAC

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_17F57E278C65EEE6__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_15F4E4F86182D646()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_17F57E278C65EEE6_METHOD_2_15F4E4F86182D646_OFFSET))(this);
	}

	::System::Void Method_2_502E4F13BFB605D5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_17F57E278C65EEE6_METHOD_2_502E4F13BFB605D5_OFFSET))(this);
	}
};
