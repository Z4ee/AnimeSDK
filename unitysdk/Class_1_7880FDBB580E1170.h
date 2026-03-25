#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class FiveDimRenderingPanel;

#define CLASS_1_7880FDBB580E1170_CLEAR_OFFSET UNITYSDK_OFFSET(0xA9E2670)
#define CLASS_1_7880FDBB580E1170_METHOD_1_1D4018D4200358D0_1_OFFSET UNITYSDK_OFFSET(0xA9E2AF0)
#define CLASS_1_7880FDBB580E1170_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0xA9E27A0)
#define CLASS_1_7880FDBB580E1170_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xA9E26C0)
#define CLASS_1_7880FDBB580E1170_METHOD_1_921C3C3E09D59CD4_OFFSET UNITYSDK_OFFSET(0xA9E27F0)
#define CLASS_1_7880FDBB580E1170_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xA9E2740)
#define CLASS_1_7880FDBB580E1170_METHOD_1_BD9AF35CCFA0A4C5_OFFSET UNITYSDK_OFFSET(0xA9E2610)
#define CLASS_1_7880FDBB580E1170_METHOD_1_C97D60D1CBC90ADF_1_OFFSET UNITYSDK_OFFSET(0xA9E2EA0)
#define CLASS_1_7880FDBB580E1170_METHOD_1_C97D60D1CBC90ADF_OFFSET UNITYSDK_OFFSET(0xA9E2C20)
#define CLASS_1_7880FDBB580E1170_METHOD_1_F8CE21D50466542B_OFFSET UNITYSDK_OFFSET(0xA9E2B50)
#define CLASS_1_7880FDBB580E1170__CTOR_OFFSET UNITYSDK_OFFSET(0xA9E3130)

inline static constexpr unsigned int Class_1_7880FDBB580E1170_TypeDefinitionIndex = 62596;

class Class_1_7880FDBB580E1170 : public ::System::Object
{
public:
	::FiveDimRenderingPanel* Field_1_0; // 0x10
	::System::Boolean Field_1_1; // 0x18
	::System::Boolean Field_1_5; // 0x19
	::System::Boolean Field_1_4; // 0x1A
	::UnityEngine::Vector3 Field_1_2; // 0x1C
	::UnityEngine::Vector3 Field_1_3; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7880FDBB580E1170__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_BD9AF35CCFA0A4C5(::FiveDimRenderingPanel* a1)
	{
		return ((::System::Void(*)(::PVOID, ::FiveDimRenderingPanel*))((::PBYTE)hIl2Cpp + CLASS_1_7880FDBB580E1170_METHOD_1_BD9AF35CCFA0A4C5_OFFSET))(this, a1);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7880FDBB580E1170_CLEAR_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7880FDBB580E1170_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7880FDBB580E1170_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7880FDBB580E1170_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Void Method_1_921C3C3E09D59CD4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7880FDBB580E1170_METHOD_1_921C3C3E09D59CD4_OFFSET))(this);
	}

	::System::Void Method_1_C97D60D1CBC90ADF(::UnityEngine::Vector3 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_7880FDBB580E1170_METHOD_1_C97D60D1CBC90ADF_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_C97D60D1CBC90ADF_1(::UnityEngine::Vector3 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_7880FDBB580E1170_METHOD_1_C97D60D1CBC90ADF_1_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_F8CE21D50466542B(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_7880FDBB580E1170_METHOD_1_F8CE21D50466542B_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_1D4018D4200358D0_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7880FDBB580E1170_METHOD_1_1D4018D4200358D0_1_OFFSET))(this);
	}
};
