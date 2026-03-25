#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class MonoRotatingBlockControl; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class MonoBehaviour; }

#define CLASS_2_7EC4B2877D4006B2_METHOD_2_0051B8967741D9B0_OFFSET UNITYSDK_OFFSET(0xB2643E0)
#define CLASS_2_7EC4B2877D4006B2_METHOD_2_2CBE0B79DD36047E_OFFSET UNITYSDK_OFFSET(0xB2655C0)
#define CLASS_2_7EC4B2877D4006B2_METHOD_2_33E2FA8E6403B93D_OFFSET UNITYSDK_OFFSET(0xB265520)
#define CLASS_2_7EC4B2877D4006B2_METHOD_2_825CC99DD653DEE0_OFFSET UNITYSDK_OFFSET(0xB264D20)
#define CLASS_2_7EC4B2877D4006B2_METHOD_2_8CAB50ED09005BAC_OFFSET UNITYSDK_OFFSET(0xB264CD0)
#define CLASS_2_7EC4B2877D4006B2_METHOD_2_90D019D81149A8BA_OFFSET UNITYSDK_OFFSET(0xB267180)
#define CLASS_2_7EC4B2877D4006B2__CTOR_OFFSET UNITYSDK_OFFSET(0xB267160)

inline static constexpr unsigned int Class_2_7EC4B2877D4006B2_TypeDefinitionIndex = 57616;

class Class_2_7EC4B2877D4006B2 : public ::RPG::Client::BehaviorBase
{
public:
	::UnityEngine::GameObject* Field_2_11; // 0x18
	::UnityEngine::GameObject* Field_2_0; // 0x20
	::UnityEngine::MaterialPropertyBlock* Field_2_12; // 0x28
	::UnityEngine::GameObject* Field_2_10; // 0x30
	::UnityEngine::Vector3 Field_2_2; // 0x38
	::System::Single Field_2_7; // 0x44
	::System::Single Field_2_9; // 0x48
	::UnityEngine::Vector3 Field_2_5; // 0x4C
	::UnityEngine::Vector3 Field_2_3; // 0x58
	::System::Single Field_2_8; // 0x64
	::System::Single Field_2_1; // 0x68
	::UnityEngine::Vector3 Field_2_4; // 0x6C
	::UnityEngine::Quaternion Field_2_6; // 0x78

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
