#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_A167209E71412818.h"

namespace RPG::Client { class PrefabLoadMeta; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Text; }

#define CLASS_2_88FCAD5C7174A6E9_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x14E97800)
#define CLASS_2_88FCAD5C7174A6E9_METHOD_2_88B60F3B95FAA4F1_OFFSET UNITYSDK_OFFSET(0x14E97790)
#define CLASS_2_88FCAD5C7174A6E9__CTOR_OFFSET UNITYSDK_OFFSET(0x14E97910)

inline static constexpr unsigned int Class_2_88FCAD5C7174A6E9_TypeDefinitionIndex = 68195;

class Class_2_88FCAD5C7174A6E9 : public ::Class_1_A167209E71412818
{
public:
	::UnityEngine::Transform* Field_2_0; // 0x18
	::RPG::Client::PrefabLoadMeta* Field_2_1; // 0x20
	::UnityEngine::Animation* Field_2_2; // 0x28
	::UnityEngine::Transform* Field_2_3; // 0x30
	::UnityEngine::Transform* Field_2_4; // 0x38
	::UnityEngine::UI::Text* Field_2_5; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_88FCAD5C7174A6E9__CTOR_OFFSET))(this);
	}

	::System::String* Method_2_88B60F3B95FAA4F1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_88FCAD5C7174A6E9_METHOD_2_88B60F3B95FAA4F1_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_88FCAD5C7174A6E9_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}
};
