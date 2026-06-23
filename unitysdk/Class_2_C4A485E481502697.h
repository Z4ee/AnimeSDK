#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_8377BAB19A574A40.h"
#include "unitysdk/UnityEngine/Keyframe.h"

class Class_3_3B42BC0680587011;
namespace MoleMole::Config { class AnimatorStateTimeSegment; }

#define CLASS_2_C4A485E481502697_METHOD_2_08A500CCFA7B1882_OFFSET UNITYSDK_OFFSET(0x12FD0AC0)
#define CLASS_2_C4A485E481502697_METHOD_2_96F6E9EA89A38FD1_OFFSET UNITYSDK_OFFSET(0x12FD09C0)
#define CLASS_2_C4A485E481502697__CTOR_OFFSET UNITYSDK_OFFSET(0x12FD0A50)

inline static constexpr unsigned int Class_2_C4A485E481502697_TypeDefinitionIndex = 62826;

class Class_2_C4A485E481502697 : public ::Class_1_8377BAB19A574A40
{
public:
	::MoleMole::Config::AnimatorStateTimeSegment* Field_2_2; // 0x80
	::Class_3_3B42BC0680587011* Field_2_3; // 0x88
	::UnityEngine::Keyframe Field_2_0; // 0x90
	::UnityEngine::Keyframe Field_2_1; // 0xAC

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C4A485E481502697__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_96F6E9EA89A38FD1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C4A485E481502697_METHOD_2_96F6E9EA89A38FD1_OFFSET))(this);
	}

	::System::Void Method_2_08A500CCFA7B1882()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C4A485E481502697_METHOD_2_08A500CCFA7B1882_OFFSET))(this);
	}
};
