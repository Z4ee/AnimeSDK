#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_A167209E71412818.h"

namespace RPG::Client { class AnimatorButton; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define CLASS_2_0FE616E64A04D650_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x1701FDC0)
#define CLASS_2_0FE616E64A04D650_METHOD_2_88B60F3B95FAA4F1_OFFSET UNITYSDK_OFFSET(0x1701FD50)
#define CLASS_2_0FE616E64A04D650__CTOR_OFFSET UNITYSDK_OFFSET(0x1701FE60)

inline static constexpr unsigned int Class_2_0FE616E64A04D650_TypeDefinitionIndex = 69216;

class Class_2_0FE616E64A04D650 : public ::Class_1_A167209E71412818
{
public:
	::RPG::Client::AnimatorButton* Field_2_0; // 0x18
	::UnityEngine::Transform* Field_2_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0FE616E64A04D650__CTOR_OFFSET))(this);
	}

	::System::String* Method_2_88B60F3B95FAA4F1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0FE616E64A04D650_METHOD_2_88B60F3B95FAA4F1_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0FE616E64A04D650_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}
};
