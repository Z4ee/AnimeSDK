#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"

namespace UnityEngine { class RectTransform; }

#define CLASS_2_40491F513F4A6F01_METHOD_2_123DFB09BD2C9B9E_OFFSET UNITYSDK_OFFSET(0xBC86B70)
#define CLASS_2_40491F513F4A6F01__CTOR_OFFSET UNITYSDK_OFFSET(0xBC86BF0)
#define CLASS_2_40491F513F4A6F01__ONBIND_OFFSET UNITYSDK_OFFSET(0xBC86B10)

inline static constexpr unsigned int Class_2_40491F513F4A6F01_TypeDefinitionIndex = 71576;

class Class_2_40491F513F4A6F01 : public ::Class_1_34917908B7833130
{
public:
	// static const ::System::Single FMDIJDNGFFD; // 0x0
	::UnityEngine::RectTransform* EGKOCBGAFPB; // 0x60
	::System::UInt32 LCJDAMMJLEI; // 0x68

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
};
