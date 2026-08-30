#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_A167209E71412818.h"

namespace System { class String; }
namespace UnityEngine::UI { class Text; }

#define CLASS_2_5462E9D93C6034C6_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x1591FDD0)
#define CLASS_2_5462E9D93C6034C6_METHOD_2_88B60F3B95FAA4F1_OFFSET UNITYSDK_OFFSET(0x1591FD60)
#define CLASS_2_5462E9D93C6034C6__CTOR_OFFSET UNITYSDK_OFFSET(0x1591FE70)

inline static constexpr unsigned int Class_2_5462E9D93C6034C6_TypeDefinitionIndex = 72255;

class Class_2_5462E9D93C6034C6 : public ::Class_1_A167209E71412818
{
public:
	::UnityEngine::UI::Text* OHECLMGMKJL; // 0x18
	::UnityEngine::UI::Text* DDFDOBAACDC; // 0x20

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
