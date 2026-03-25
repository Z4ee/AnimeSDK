#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_89D8044AB73F8F6D.h"

namespace RPG::Client { class AnimatorButton; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define CLASS_2_0FE616E64A04D650_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x10A4EC60)
#define CLASS_2_0FE616E64A04D650_METHOD_2_88B60F3B95FAA4F1_OFFSET UNITYSDK_OFFSET(0x10A4EBF0)
#define CLASS_2_0FE616E64A04D650__CTOR_OFFSET UNITYSDK_OFFSET(0x10A4ED00)

inline static constexpr unsigned int Class_2_0FE616E64A04D650_TypeDefinitionIndex = 59397;

class Class_2_0FE616E64A04D650 : public ::Class_1_89D8044AB73F8F6D
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
