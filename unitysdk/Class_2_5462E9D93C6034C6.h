#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_89D8044AB73F8F6D.h"

namespace System { class String; }
namespace UnityEngine::UI { class Text; }

#define CLASS_2_5462E9D93C6034C6_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x9A38BA0)
#define CLASS_2_5462E9D93C6034C6_METHOD_2_88B60F3B95FAA4F1_OFFSET UNITYSDK_OFFSET(0x9A38B30)
#define CLASS_2_5462E9D93C6034C6__CTOR_OFFSET UNITYSDK_OFFSET(0x9A38C40)

inline static constexpr unsigned int Class_2_5462E9D93C6034C6_TypeDefinitionIndex = 66634;

class Class_2_5462E9D93C6034C6 : public ::Class_1_89D8044AB73F8F6D
{
public:
	::UnityEngine::UI::Text* Field_2_1; // 0x18
	::UnityEngine::UI::Text* Field_2_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5462E9D93C6034C6__CTOR_OFFSET))(this);
	}

	::System::String* Method_2_88B60F3B95FAA4F1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5462E9D93C6034C6_METHOD_2_88B60F3B95FAA4F1_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5462E9D93C6034C6_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}
};
