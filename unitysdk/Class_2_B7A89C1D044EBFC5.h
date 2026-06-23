#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_29.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole { class UIBaseController; }
namespace UnityEngine { class Transform; }

#define CLASS_2_B7A89C1D044EBFC5_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13BAA5D0)
#define CLASS_2_B7A89C1D044EBFC5_METHOD_2_87A2427A13E31018_OFFSET UNITYSDK_OFFSET(0x13BAA640)
#define CLASS_2_B7A89C1D044EBFC5_METHOD_2_90EC931103FB6F31_OFFSET UNITYSDK_OFFSET(0x13BAA540)
#define CLASS_2_B7A89C1D044EBFC5__CTOR_OFFSET UNITYSDK_OFFSET(0x13BAA630)

inline static constexpr unsigned int Class_2_B7A89C1D044EBFC5_TypeDefinitionIndex = 86087;

class Class_2_B7A89C1D044EBFC5 : public ::Class_1_43BD383C98B4C0C5_29
{
public:
	::MoleMole::UIBaseController* Field_2_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B7A89C1D044EBFC5__CTOR_OFFSET))(this);
	}

	::UnityEngine::Transform* Method_2_90EC931103FB6F31()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B7A89C1D044EBFC5_METHOD_2_90EC931103FB6F31_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B7A89C1D044EBFC5_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_87A2427A13E31018(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_B7A89C1D044EBFC5_METHOD_2_87A2427A13E31018_OFFSET))(this, a1);
	}
};
