#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class MonoRotatingBlockControl; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class MonoBehaviour; }

#define CLASS_2_7EC4B2877D4006B2_METHOD_2_0051B8967741D9B0_OFFSET UNITYSDK_OFFSET(0xB7C1240)
#define CLASS_2_7EC4B2877D4006B2_METHOD_2_2CBE0B79DD36047E_OFFSET UNITYSDK_OFFSET(0xB7C2420)
#define CLASS_2_7EC4B2877D4006B2_METHOD_2_33E2FA8E6403B93D_OFFSET UNITYSDK_OFFSET(0xB7C2380)
#define CLASS_2_7EC4B2877D4006B2_METHOD_2_825CC99DD653DEE0_OFFSET UNITYSDK_OFFSET(0xB7C1B80)
#define CLASS_2_7EC4B2877D4006B2_METHOD_2_8CAB50ED09005BAC_OFFSET UNITYSDK_OFFSET(0xB7C1B30)
#define CLASS_2_7EC4B2877D4006B2_METHOD_2_90D019D81149A8BA_OFFSET UNITYSDK_OFFSET(0xB7C3FF0)
#define CLASS_2_7EC4B2877D4006B2__CTOR_OFFSET UNITYSDK_OFFSET(0xB7C3FD0)

inline static constexpr unsigned int Class_2_7EC4B2877D4006B2_TypeDefinitionIndex = 64879;

class Class_2_7EC4B2877D4006B2 : public ::RPG::Client::BehaviorBase
{
public:
	::UnityEngine::GameObject* Field_2_0; // 0x18
	::UnityEngine::MaterialPropertyBlock* Field_2_12; // 0x20
	::UnityEngine::GameObject* Field_2_11; // 0x28
	::UnityEngine::GameObject* Field_2_10; // 0x30
	::UnityEngine::Vector3 Field_2_5; // 0x38
	::UnityEngine::Vector3 Field_2_4; // 0x44
	::UnityEngine::Vector3 Field_2_3; // 0x50
	::UnityEngine::Quaternion Field_2_6; // 0x5C
	::System::Single Field_2_9; // 0x6C
	::System::Single Field_2_1; // 0x70
	::UnityEngine::Vector3 Field_2_2; // 0x74
	::System::Single Field_2_7; // 0x80
	::System::Single Field_2_8; // 0x84

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7EC4B2877D4006B2__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_0051B8967741D9B0(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_7EC4B2877D4006B2_METHOD_2_0051B8967741D9B0_OFFSET))(this, a1);
	}

	::System::Void Method_2_33E2FA8E6403B93D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7EC4B2877D4006B2_METHOD_2_33E2FA8E6403B93D_OFFSET))(this);
	}

	::System::Void Method_2_2CBE0B79DD36047E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7EC4B2877D4006B2_METHOD_2_2CBE0B79DD36047E_OFFSET))(this);
	}

	::System::Void Method_2_825CC99DD653DEE0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7EC4B2877D4006B2_METHOD_2_825CC99DD653DEE0_OFFSET))(this);
	}

	::RPG::Client::MonoRotatingBlockControl* Method_2_8CAB50ED09005BAC()
	{
		return ((::RPG::Client::MonoRotatingBlockControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7EC4B2877D4006B2_METHOD_2_8CAB50ED09005BAC_OFFSET))(this);
	}

	::System::Void Method_2_90D019D81149A8BA(::UnityEngine::MonoBehaviour* P0)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_7EC4B2877D4006B2_METHOD_2_90D019D81149A8BA_OFFSET))(this, P0);
	}
};
