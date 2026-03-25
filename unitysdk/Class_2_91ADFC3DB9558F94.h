#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace RPG::Client { class MonoPathLightControl; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class MonoBehaviour; }

#define CLASS_2_91ADFC3DB9558F94_METHOD_2_3E7890438E82C929_OFFSET UNITYSDK_OFFSET(0x1165AEB0)
#define CLASS_2_91ADFC3DB9558F94_METHOD_2_5013A6941108F9A2_OFFSET UNITYSDK_OFFSET(0x1165B2C0)
#define CLASS_2_91ADFC3DB9558F94_METHOD_2_8DF47EF45ABD2A6C_OFFSET UNITYSDK_OFFSET(0x1165B330)
#define CLASS_2_91ADFC3DB9558F94_METHOD_2_90D019D81149A8BA_OFFSET UNITYSDK_OFFSET(0x1165DEA0)
#define CLASS_2_91ADFC3DB9558F94_METHOD_2_AE828D899505A3B4_OFFSET UNITYSDK_OFFSET(0x1165D8A0)
#define CLASS_2_91ADFC3DB9558F94_METHOD_2_B76CD5CB3E297DF3_OFFSET UNITYSDK_OFFSET(0x1165C470)
#define CLASS_2_91ADFC3DB9558F94_METHOD_2_E02F100F3080733B_OFFSET UNITYSDK_OFFSET(0x1165B4F0)
#define CLASS_2_91ADFC3DB9558F94__CTOR_OFFSET UNITYSDK_OFFSET(0x1165DE90)

inline static constexpr unsigned int Class_2_91ADFC3DB9558F94_TypeDefinitionIndex = 57614;

class Class_2_91ADFC3DB9558F94 : public ::RPG::Client::BehaviorBase
{
public:
	::UnityEngine::MaterialPropertyBlock* Field_2_13; // 0x18
	::UnityEngine::Vector3 Field_2_0; // 0x20
	::System::Single Field_2_2; // 0x2C
	::System::Single Field_2_3; // 0x30
	::UnityEngine::Vector4 Field_2_8; // 0x34
	::UnityEngine::Vector3 Field_2_11; // 0x44
	::UnityEngine::Vector3 Field_2_10; // 0x50
	::UnityEngine::Vector3 Field_2_12; // 0x5C
	::System::Single Field_2_6; // 0x68
	::System::Single Field_2_7; // 0x6C
	::System::Single Field_2_5; // 0x70
	::UnityEngine::Vector3 Field_2_9; // 0x74
	::System::Single Field_2_4; // 0x80
	::UnityEngine::Vector3 Field_2_1; // 0x84

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_91ADFC3DB9558F94__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_3E7890438E82C929(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_91ADFC3DB9558F94_METHOD_2_3E7890438E82C929_OFFSET))(this, a1);
	}

	::System::Void Method_2_8DF47EF45ABD2A6C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_91ADFC3DB9558F94_METHOD_2_8DF47EF45ABD2A6C_OFFSET))(this);
	}

	::System::Void Method_2_E02F100F3080733B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_91ADFC3DB9558F94_METHOD_2_E02F100F3080733B_OFFSET))(this);
	}

	::System::Void Method_2_B76CD5CB3E297DF3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_91ADFC3DB9558F94_METHOD_2_B76CD5CB3E297DF3_OFFSET))(this);
	}

	::System::Void Method_2_AE828D899505A3B4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_91ADFC3DB9558F94_METHOD_2_AE828D899505A3B4_OFFSET))(this);
	}

	::RPG::Client::MonoPathLightControl* Method_2_5013A6941108F9A2()
	{
		return ((::RPG::Client::MonoPathLightControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_91ADFC3DB9558F94_METHOD_2_5013A6941108F9A2_OFFSET))(this);
	}

	::System::Void Method_2_90D019D81149A8BA(::UnityEngine::MonoBehaviour* P0)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_91ADFC3DB9558F94_METHOD_2_90D019D81149A8BA_OFFSET))(this, P0);
	}
};
