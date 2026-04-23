#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"

namespace RPG::Client { class MonoEffectPluginSyncTargetNormalizedTime; }
namespace RPG::GameCore { class GameEntity; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class MonoBehaviour; }

#define CLASS_2_E0BCC5BA166304FB_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD35D8E0)
#define CLASS_2_E0BCC5BA166304FB_METHOD_2_2439B52C953E2E46_OFFSET UNITYSDK_OFFSET(0xD35D950)
#define CLASS_2_E0BCC5BA166304FB_METHOD_2_60E1F7F58CCF739F_OFFSET UNITYSDK_OFFSET(0xD35D9B0)
#define CLASS_2_E0BCC5BA166304FB_METHOD_2_90D019D81149A8BA_OFFSET UNITYSDK_OFFSET(0xD35E320)
#define CLASS_2_E0BCC5BA166304FB_METHOD_2_AFCA3B0141A34FE2_OFFSET UNITYSDK_OFFSET(0xD35E250)
#define CLASS_2_E0BCC5BA166304FB_METHOD_2_B1EB734337965E73_OFFSET UNITYSDK_OFFSET(0xD35D870)
#define CLASS_2_E0BCC5BA166304FB_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xD35DAF0)
#define CLASS_2_E0BCC5BA166304FB_METHOD_2_CABD735B56046A6F_OFFSET UNITYSDK_OFFSET(0xD35E200)
#define CLASS_2_E0BCC5BA166304FB_METHOD_2_F203E4CE3EB949BD_OFFSET UNITYSDK_OFFSET(0xD35DB40)
#define CLASS_2_E0BCC5BA166304FB_METHOD_2_FD6AF0F9AA9298B1_OFFSET UNITYSDK_OFFSET(0xD35DB90)
#define CLASS_2_E0BCC5BA166304FB__CTOR_OFFSET UNITYSDK_OFFSET(0xD35E310)
#define CLASS_2_E0BCC5BA166304FB___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD35E390)

inline static constexpr unsigned int Class_2_E0BCC5BA166304FB_TypeDefinitionIndex = 64433;

class Class_2_E0BCC5BA166304FB : public ::RPG::Client::BehaviorBase
{
public:
	::UnityEngine::Animator* Field_2_2; // 0x18
	::UnityEngine::Animator* Field_2_1; // 0x20
	::System::Int32 Field_2_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E0BCC5BA166304FB__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_B1EB734337965E73(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_E0BCC5BA166304FB_METHOD_2_B1EB734337965E73_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E0BCC5BA166304FB_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_2439B52C953E2E46()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E0BCC5BA166304FB_METHOD_2_2439B52C953E2E46_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E0BCC5BA166304FB_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_F203E4CE3EB949BD(::UnityEngine::Animator* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + CLASS_2_E0BCC5BA166304FB_METHOD_2_F203E4CE3EB949BD_OFFSET))(this, a1);
	}

	::System::Void Method_2_FD6AF0F9AA9298B1(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_E0BCC5BA166304FB_METHOD_2_FD6AF0F9AA9298B1_OFFSET))(this, a1);
	}

	::System::Void Method_2_60E1F7F58CCF739F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E0BCC5BA166304FB_METHOD_2_60E1F7F58CCF739F_OFFSET))(this);
	}

	::UnityEngine::Animator* Method_2_AFCA3B0141A34FE2(::RPG::GameCore::GameEntity* a1)
	{
		return ((::UnityEngine::Animator*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_E0BCC5BA166304FB_METHOD_2_AFCA3B0141A34FE2_OFFSET))(this, a1);
	}

	::RPG::Client::MonoEffectPluginSyncTargetNormalizedTime* Method_2_CABD735B56046A6F()
	{
		return ((::RPG::Client::MonoEffectPluginSyncTargetNormalizedTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E0BCC5BA166304FB_METHOD_2_CABD735B56046A6F_OFFSET))(this);
	}

	::System::Void Method_2_90D019D81149A8BA(::UnityEngine::MonoBehaviour* P0)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_E0BCC5BA166304FB_METHOD_2_90D019D81149A8BA_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E0BCC5BA166304FB___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
