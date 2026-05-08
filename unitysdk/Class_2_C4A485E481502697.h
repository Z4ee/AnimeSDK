#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_677CEA8C88AC78AB.h"
#include "unitysdk/UnityEngine/Keyframe.h"

class Class_3_BA709FB56ED5FAC4;
namespace MoleMole::Config { class AnimatorStateTimeSegment; }

#define CLASS_2_C4A485E481502697_METHOD_2_08A500CCFA7B1882_OFFSET UNITYSDK_OFFSET(0xD08CB70)
#define CLASS_2_C4A485E481502697_METHOD_2_96F6E9EA89A38FD1_OFFSET UNITYSDK_OFFSET(0xD08CA70)
#define CLASS_2_C4A485E481502697__CTOR_OFFSET UNITYSDK_OFFSET(0xD08CB00)

inline static constexpr unsigned int Class_2_C4A485E481502697_TypeDefinitionIndex = 54739;

class Class_2_C4A485E481502697 : public ::Class_1_677CEA8C88AC78AB
{
public:
	::Class_3_BA709FB56ED5FAC4* Field_2_3; // 0x80
	::MoleMole::Config::AnimatorStateTimeSegment* Field_2_2; // 0x88
	::UnityEngine::Keyframe Field_2_1; // 0x90
	::UnityEngine::Keyframe Field_2_0; // 0xAC

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
