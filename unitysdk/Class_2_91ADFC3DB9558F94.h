#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace RPG::Client { class MonoPathLightControl; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class MonoBehaviour; }

#define CLASS_2_91ADFC3DB9558F94_METHOD_2_3E7890438E82C929_OFFSET UNITYSDK_OFFSET(0x1187D5D0)
#define CLASS_2_91ADFC3DB9558F94_METHOD_2_5013A6941108F9A2_OFFSET UNITYSDK_OFFSET(0x1187D9D0)
#define CLASS_2_91ADFC3DB9558F94_METHOD_2_8DF47EF45ABD2A6C_OFFSET UNITYSDK_OFFSET(0x1187DA40)
#define CLASS_2_91ADFC3DB9558F94_METHOD_2_90D019D81149A8BA_OFFSET UNITYSDK_OFFSET(0x118805B0)
#define CLASS_2_91ADFC3DB9558F94_METHOD_2_AE828D899505A3B4_OFFSET UNITYSDK_OFFSET(0x1187FFB0)
#define CLASS_2_91ADFC3DB9558F94_METHOD_2_B76CD5CB3E297DF3_OFFSET UNITYSDK_OFFSET(0x1187EB90)
#define CLASS_2_91ADFC3DB9558F94_METHOD_2_E02F100F3080733B_OFFSET UNITYSDK_OFFSET(0x1187DC00)
#define CLASS_2_91ADFC3DB9558F94__CTOR_OFFSET UNITYSDK_OFFSET(0x118805A0)

inline static constexpr unsigned int Class_2_91ADFC3DB9558F94_TypeDefinitionIndex = 64877;

class Class_2_91ADFC3DB9558F94 : public ::RPG::Client::BehaviorBase
{
public:
	::UnityEngine::MaterialPropertyBlock* Field_2_13; // 0x18
	::UnityEngine::Vector3 Field_2_1; // 0x20
	::System::Single Field_2_2; // 0x2C
	::System::Single Field_2_3; // 0x30
	::UnityEngine::Vector3 Field_2_11; // 0x34
	::System::Single Field_2_7; // 0x40
	::System::Single Field_2_4; // 0x44
	::UnityEngine::Vector3 Field_2_10; // 0x48
	::UnityEngine::Vector3 Field_2_0; // 0x54
	::System::Single Field_2_6; // 0x60
	::UnityEngine::Vector4 Field_2_8; // 0x64
	::UnityEngine::Vector3 Field_2_9; // 0x74
	::UnityEngine::Vector3 Field_2_12; // 0x80
	::System::Single Field_2_5; // 0x8C

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
