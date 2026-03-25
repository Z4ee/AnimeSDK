#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"

class Class_1_C4C2ACF3D9655BEA_24;
class Effect_SetMaterialPropertyByRules;
namespace UnityEngine { class MonoBehaviour; }

#define CLASS_2_8030D5D085E5A2DA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1173C860)
#define CLASS_2_8030D5D085E5A2DA_METHOD_2_154D40D3FB77E960_OFFSET UNITYSDK_OFFSET(0x1173C340)
#define CLASS_2_8030D5D085E5A2DA_METHOD_2_3865204B58358D33_OFFSET UNITYSDK_OFFSET(0x1173C620)
#define CLASS_2_8030D5D085E5A2DA_METHOD_2_63EDAB3EFF913F92_OFFSET UNITYSDK_OFFSET(0x1173C670)
#define CLASS_2_8030D5D085E5A2DA_METHOD_2_90D019D81149A8BA_OFFSET UNITYSDK_OFFSET(0x1173C8F0)
#define CLASS_2_8030D5D085E5A2DA__CTOR_OFFSET UNITYSDK_OFFSET(0x1173C8D0)
#define CLASS_2_8030D5D085E5A2DA___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1173C960)

inline static constexpr unsigned int Class_2_8030D5D085E5A2DA_TypeDefinitionIndex = 38312;

class Class_2_8030D5D085E5A2DA : public ::RPG::Client::BehaviorBase
{
public:
	::Class_1_C4C2ACF3D9655BEA_24* Field_2_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8030D5D085E5A2DA__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_154D40D3FB77E960(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_8030D5D085E5A2DA_METHOD_2_154D40D3FB77E960_OFFSET))(this, a1);
	}

	::System::Void Method_2_63EDAB3EFF913F92(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_8030D5D085E5A2DA_METHOD_2_63EDAB3EFF913F92_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8030D5D085E5A2DA_DISPOSE_OFFSET))(this);
	}

	::Effect_SetMaterialPropertyByRules* Method_2_3865204B58358D33()
	{
		return ((::Effect_SetMaterialPropertyByRules*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8030D5D085E5A2DA_METHOD_2_3865204B58358D33_OFFSET))(this);
	}

	::System::Void Method_2_90D019D81149A8BA(::UnityEngine::MonoBehaviour* P0)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_8030D5D085E5A2DA_METHOD_2_90D019D81149A8BA_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8030D5D085E5A2DA___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
