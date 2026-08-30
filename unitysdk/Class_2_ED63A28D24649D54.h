#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"

class Class_1_C4C2ACF3D9655BEA_26;
class Effect_SetMaterialPropertyByRules;
namespace UnityEngine { class MonoBehaviour; }

#define CLASS_2_ED63A28D24649D54_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18490DF0)
#define CLASS_2_ED63A28D24649D54_METHOD_2_31DF47752CE18598_OFFSET UNITYSDK_OFFSET(0x18490BA0)
#define CLASS_2_ED63A28D24649D54_METHOD_2_4055E4BA4A53045E_OFFSET UNITYSDK_OFFSET(0x18490850)
#define CLASS_2_ED63A28D24649D54_METHOD_2_6A8EC1C1458586F1_OFFSET UNITYSDK_OFFSET(0x18490BF0)
#define CLASS_2_ED63A28D24649D54__CTOR_OFFSET UNITYSDK_OFFSET(0x18490E60)

inline static constexpr unsigned int Class_2_ED63A28D24649D54_TypeDefinitionIndex = 47908;

class Class_2_ED63A28D24649D54 : public ::RPG::Client::BehaviorBase
{
public:
	::Class_1_C4C2ACF3D9655BEA_26* KAADKOILGAB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ED63A28D24649D54__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_4055E4BA4A53045E(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_ED63A28D24649D54_METHOD_2_4055E4BA4A53045E_OFFSET))(this, a1);
	}

	::System::Void Method_2_6A8EC1C1458586F1(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_ED63A28D24649D54_METHOD_2_6A8EC1C1458586F1_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ED63A28D24649D54_DISPOSE_OFFSET))(this);
	}

	::Effect_SetMaterialPropertyByRules* Method_2_31DF47752CE18598()
	{
		return ((::Effect_SetMaterialPropertyByRules*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ED63A28D24649D54_METHOD_2_31DF47752CE18598_OFFSET))(this);
	}
};
