#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"

namespace RPG::Client { class MonoEffectPluginDelayEnableChildren; }
namespace UnityEngine { class MonoBehaviour; }

#define CLASS_2_A9D6E9C3BFC6E74E_DISPOSE_OFFSET UNITYSDK_OFFSET(0x134C0980)
#define CLASS_2_A9D6E9C3BFC6E74E_METHOD_2_30A9E8FE2B1AFED4_OFFSET UNITYSDK_OFFSET(0x134C0B90)
#define CLASS_2_A9D6E9C3BFC6E74E_METHOD_2_9ED22ACC5C854585_OFFSET UNITYSDK_OFFSET(0x134C0B40)
#define CLASS_2_A9D6E9C3BFC6E74E_METHOD_2_B1EB734337965E73_OFFSET UNITYSDK_OFFSET(0x134C0910)
#define CLASS_2_A9D6E9C3BFC6E74E_METHOD_2_D339EFAB24ED44B0_OFFSET UNITYSDK_OFFSET(0x134C09F0)
#define CLASS_2_A9D6E9C3BFC6E74E__CTOR_OFFSET UNITYSDK_OFFSET(0x134C0D20)

inline static constexpr unsigned int Class_2_A9D6E9C3BFC6E74E_TypeDefinitionIndex = 69838;

class Class_2_A9D6E9C3BFC6E74E : public ::RPG::Client::BehaviorBase
{
public:
	::System::Single NPINECOCALC; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A9D6E9C3BFC6E74E__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_B1EB734337965E73(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_A9D6E9C3BFC6E74E_METHOD_2_B1EB734337965E73_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A9D6E9C3BFC6E74E_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_D339EFAB24ED44B0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A9D6E9C3BFC6E74E_METHOD_2_D339EFAB24ED44B0_OFFSET))(this);
	}

	::System::Void Method_2_30A9E8FE2B1AFED4(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_A9D6E9C3BFC6E74E_METHOD_2_30A9E8FE2B1AFED4_OFFSET))(this, a1);
	}

	::RPG::Client::MonoEffectPluginDelayEnableChildren* Method_2_9ED22ACC5C854585()
	{
		return ((::RPG::Client::MonoEffectPluginDelayEnableChildren*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A9D6E9C3BFC6E74E_METHOD_2_9ED22ACC5C854585_OFFSET))(this);
	}
};
