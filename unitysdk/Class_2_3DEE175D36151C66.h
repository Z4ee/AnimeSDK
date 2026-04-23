#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"

namespace RPG::Client { class CharacterEffect; }
namespace RPG::Client { class MonoEffectPluginCharaEffectDataTransfer; }
namespace UnityEngine { class MonoBehaviour; }

#define CLASS_2_3DEE175D36151C66_DISPOSE_OFFSET UNITYSDK_OFFSET(0x118B50B0)
#define CLASS_2_3DEE175D36151C66_METHOD_2_08285FE6790B4C7C_OFFSET UNITYSDK_OFFSET(0x118B5420)
#define CLASS_2_3DEE175D36151C66_METHOD_2_2449FEA34439A117_OFFSET UNITYSDK_OFFSET(0x118B5120)
#define CLASS_2_3DEE175D36151C66_METHOD_2_7B9BA9105FBB49A2_OFFSET UNITYSDK_OFFSET(0x118B5180)
#define CLASS_2_3DEE175D36151C66_METHOD_2_82E992240300FB30_OFFSET UNITYSDK_OFFSET(0x118B4F20)
#define CLASS_2_3DEE175D36151C66_METHOD_2_90D019D81149A8BA_OFFSET UNITYSDK_OFFSET(0x118B5480)
#define CLASS_2_3DEE175D36151C66_METHOD_2_B532A1BF7843D724_OFFSET UNITYSDK_OFFSET(0x118B4EA0)
#define CLASS_2_3DEE175D36151C66_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x118B53E0)
#define CLASS_2_3DEE175D36151C66_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x118B53A0)
#define CLASS_2_3DEE175D36151C66__CTOR_OFFSET UNITYSDK_OFFSET(0x118B5470)
#define CLASS_2_3DEE175D36151C66___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x118B54F0)

inline static constexpr unsigned int Class_2_3DEE175D36151C66_TypeDefinitionIndex = 64402;

class Class_2_3DEE175D36151C66 : public ::RPG::Client::BehaviorBase
{
public:
	::RPG::Client::CharacterEffect* Field_2_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3DEE175D36151C66__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_B532A1BF7843D724(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_3DEE175D36151C66_METHOD_2_B532A1BF7843D724_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3DEE175D36151C66_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_2449FEA34439A117(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_3DEE175D36151C66_METHOD_2_2449FEA34439A117_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3DEE175D36151C66_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3DEE175D36151C66_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_2_82E992240300FB30()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3DEE175D36151C66_METHOD_2_82E992240300FB30_OFFSET))(this);
	}

	::System::Void Method_2_7B9BA9105FBB49A2(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_3DEE175D36151C66_METHOD_2_7B9BA9105FBB49A2_OFFSET))(this, a1);
	}

	::RPG::Client::MonoEffectPluginCharaEffectDataTransfer* Method_2_08285FE6790B4C7C()
	{
		return ((::RPG::Client::MonoEffectPluginCharaEffectDataTransfer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3DEE175D36151C66_METHOD_2_08285FE6790B4C7C_OFFSET))(this);
	}

	::System::Void Method_2_90D019D81149A8BA(::UnityEngine::MonoBehaviour* P0)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_3DEE175D36151C66_METHOD_2_90D019D81149A8BA_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3DEE175D36151C66___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
