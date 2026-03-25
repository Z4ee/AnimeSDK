#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"

namespace RPG::Client { class MonoEffectPluginSyncTargetNormalizedTime; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class MonoBehaviour; }

#define CLASS_2_6AD37206BD6F3A6B_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1145CA80)
#define CLASS_2_6AD37206BD6F3A6B_METHOD_2_1B9F44FA8A728FCD_OFFSET UNITYSDK_OFFSET(0x1145CD10)
#define CLASS_2_6AD37206BD6F3A6B_METHOD_2_21093493642AEBDA_OFFSET UNITYSDK_OFFSET(0x1145CAF0)
#define CLASS_2_6AD37206BD6F3A6B_METHOD_2_659B881A8763C779_OFFSET UNITYSDK_OFFSET(0x1145CB50)
#define CLASS_2_6AD37206BD6F3A6B_METHOD_2_90D019D81149A8BA_OFFSET UNITYSDK_OFFSET(0x1145D430)
#define CLASS_2_6AD37206BD6F3A6B_METHOD_2_B1EB734337965E73_OFFSET UNITYSDK_OFFSET(0x1145CA10)
#define CLASS_2_6AD37206BD6F3A6B_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1145CCC0)
#define CLASS_2_6AD37206BD6F3A6B_METHOD_2_CABD735B56046A6F_OFFSET UNITYSDK_OFFSET(0x1145D3D0)
#define CLASS_2_6AD37206BD6F3A6B_METHOD_2_FD6AF0F9AA9298B1_OFFSET UNITYSDK_OFFSET(0x1145CD60)
#define CLASS_2_6AD37206BD6F3A6B__CTOR_OFFSET UNITYSDK_OFFSET(0x1145D420)
#define CLASS_2_6AD37206BD6F3A6B___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1145D4A0)

inline static constexpr unsigned int Class_2_6AD37206BD6F3A6B_TypeDefinitionIndex = 57180;

class Class_2_6AD37206BD6F3A6B : public ::RPG::Client::BehaviorBase
{
public:
	::UnityEngine::Animator* Field_2_2; // 0x18
	::UnityEngine::Animator* Field_2_1; // 0x20
	::System::Int32 Field_2_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6AD37206BD6F3A6B__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_B1EB734337965E73(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_6AD37206BD6F3A6B_METHOD_2_B1EB734337965E73_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6AD37206BD6F3A6B_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_21093493642AEBDA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6AD37206BD6F3A6B_METHOD_2_21093493642AEBDA_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6AD37206BD6F3A6B_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_1B9F44FA8A728FCD(::UnityEngine::Animator* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + CLASS_2_6AD37206BD6F3A6B_METHOD_2_1B9F44FA8A728FCD_OFFSET))(this, a1);
	}

	::System::Void Method_2_FD6AF0F9AA9298B1(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_6AD37206BD6F3A6B_METHOD_2_FD6AF0F9AA9298B1_OFFSET))(this, a1);
	}

	::System::Void Method_2_659B881A8763C779()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6AD37206BD6F3A6B_METHOD_2_659B881A8763C779_OFFSET))(this);
	}

	::RPG::Client::MonoEffectPluginSyncTargetNormalizedTime* Method_2_CABD735B56046A6F()
	{
		return ((::RPG::Client::MonoEffectPluginSyncTargetNormalizedTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6AD37206BD6F3A6B_METHOD_2_CABD735B56046A6F_OFFSET))(this);
	}

	::System::Void Method_2_90D019D81149A8BA(::UnityEngine::MonoBehaviour* P0)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_6AD37206BD6F3A6B_METHOD_2_90D019D81149A8BA_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6AD37206BD6F3A6B___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
