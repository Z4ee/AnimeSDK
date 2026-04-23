#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"

namespace UnityEngine { class RectTransform; }

#define CLASS_2_40491F513F4A6F01_METHOD_2_123DFB09BD2C9B9E_OFFSET UNITYSDK_OFFSET(0x11DD8A80)
#define CLASS_2_40491F513F4A6F01__CTOR_OFFSET UNITYSDK_OFFSET(0x11DD8B00)
#define CLASS_2_40491F513F4A6F01__ONBIND_OFFSET UNITYSDK_OFFSET(0x11DD8A20)
#define CLASS_2_40491F513F4A6F01___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x11DD8B30)

inline static constexpr unsigned int Class_2_40491F513F4A6F01_TypeDefinitionIndex = 66017;

class Class_2_40491F513F4A6F01 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::Single Field_2_2; // 0x0
	::UnityEngine::RectTransform* Field_2_1; // 0x60
	::System::UInt32 Field_2_0; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_40491F513F4A6F01__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_40491F513F4A6F01__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_123DFB09BD2C9B9E(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_40491F513F4A6F01_METHOD_2_123DFB09BD2C9B9E_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_40491F513F4A6F01___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}
};
