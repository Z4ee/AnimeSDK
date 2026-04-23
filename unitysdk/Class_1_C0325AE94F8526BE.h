#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Octree/Agent/AgentCurveNavigationParams.h"
#include "unitysdk/Struct_2_23A3535C3AD26D5F.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_4D2DA7CD2E59DEF1;
class Class_1_C84A84118567060F;
class Class_2_E08C4A9CFB467C17;
namespace BansheeGz::BGSpline::Components { class BGCcMath; }
namespace BansheeGz::BGSpline::Curve { class BGCurve; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_C0325AE94F8526BE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12562800)
#define CLASS_1_C0325AE94F8526BE_GET_AGENTLAYERMASK_OFFSET UNITYSDK_OFFSET(0x12565F20)
#define CLASS_1_C0325AE94F8526BE_GET_AGENTRADIUS_OFFSET UNITYSDK_OFFSET(0x12565F10)
#define CLASS_1_C0325AE94F8526BE_GET_ISPOSTSMOOTH_OFFSET UNITYSDK_OFFSET(0x12565ED0)
#define CLASS_1_C0325AE94F8526BE_METHOD_1_0A45674940E5A274_OFFSET UNITYSDK_OFFSET(0x12562D80)
#define CLASS_1_C0325AE94F8526BE_METHOD_1_2747B6E1C570CBE2_OFFSET UNITYSDK_OFFSET(0x12563940)
#define CLASS_1_C0325AE94F8526BE_METHOD_1_288F74D11BE167E0_OFFSET UNITYSDK_OFFSET(0x125641F0)
#define CLASS_1_C0325AE94F8526BE_METHOD_1_40082CAD46FBE80F_OFFSET UNITYSDK_OFFSET(0x12564390)
#define CLASS_1_C0325AE94F8526BE_METHOD_1_6415340BC388071F_OFFSET UNITYSDK_OFFSET(0x125630E0)
#define CLASS_1_C0325AE94F8526BE_METHOD_1_6D44C03F490A953F_OFFSET UNITYSDK_OFFSET(0x12563510)
#define CLASS_1_C0325AE94F8526BE_METHOD_1_76AE4244293F1EA0_OFFSET UNITYSDK_OFFSET(0x12564510)
#define CLASS_1_C0325AE94F8526BE_METHOD_1_794A5D20268719ED_OFFSET UNITYSDK_OFFSET(0x12565D30)
#define CLASS_1_C0325AE94F8526BE_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x125644B0)
#define CLASS_1_C0325AE94F8526BE_METHOD_1_A36150C5DCC8409E_1_OFFSET UNITYSDK_OFFSET(0x12565F80)
#define CLASS_1_C0325AE94F8526BE_METHOD_1_A36150C5DCC8409E_OFFSET UNITYSDK_OFFSET(0x12565F30)
#define CLASS_1_C0325AE94F8526BE_METHOD_1_A85BBBEC77CE2D24_OFFSET UNITYSDK_OFFSET(0x12563680)
#define CLASS_1_C0325AE94F8526BE_METHOD_1_B732DC7FA82BA621_OFFSET UNITYSDK_OFFSET(0x12562D30)
#define CLASS_1_C0325AE94F8526BE_METHOD_1_C993C9E276688BDF_OFFSET UNITYSDK_OFFSET(0x12565C20)
#define CLASS_1_C0325AE94F8526BE_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x12563090)
#define CLASS_1_C0325AE94F8526BE_METHOD_1_CF359E60FA453844_OFFSET UNITYSDK_OFFSET(0x12563F60)
#define CLASS_1_C0325AE94F8526BE_METHOD_1_E85465FE638B6B78_OFFSET UNITYSDK_OFFSET(0x12562930)
#define CLASS_1_C0325AE94F8526BE_METHOD_1_E876C8B6D3B840A6_OFFSET UNITYSDK_OFFSET(0x12564650)
#define CLASS_1_C0325AE94F8526BE_METHOD_1_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x12565F00)
#define CLASS_1_C0325AE94F8526BE_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x12565EF0)
#define CLASS_1_C0325AE94F8526BE_SET_ISPOSTSMOOTH_OFFSET UNITYSDK_OFFSET(0x12565EE0)
#define CLASS_1_C0325AE94F8526BE__CTOR_OFFSET UNITYSDK_OFFSET(0x12562720)

inline static constexpr unsigned int Class_1_C0325AE94F8526BE_TypeDefinitionIndex = 45565;

class Class_1_C0325AE94F8526BE : public ::System::Object
{
public:
	// static const ::System::Single Field_1_0; // 0x0
	// static const ::System::Single Field_1_1; // 0x0
	::System::Collections::Generic::IEnumerator_1<::System::Nullable_1<::System::Boolean>>* Field_1_18; // 0x10
	::BansheeGz::BGSpline::Components::BGCcMath* Field_1_17; // 0x18
	::System::Collections::Generic::List_1<::UnityEngine::Vector3>* Field_1_14; // 0x20
	::Class_2_E08C4A9CFB467C17* Field_1_6; // 0x28
	::UnityEngine::GameObject* Field_1_15; // 0x30
	::System::Collections::Generic::List_1<::Class_1_4D2DA7CD2E59DEF1*>* Field_1_10; // 0x38
	::Il2CppArray<::Class_1_C84A84118567060F*>* Field_1_5; // 0x40
	::BansheeGz::BGSpline::Curve::BGCurve* Field_1_16; // 0x48
	::System::Boolean _IsPostSmooth_k__BackingField; // 0x50
	::System::Boolean Field_1_9; // 0x51
	::System::Boolean Field_1_12; // 0x52
	::UnityEngine::Vector3 Field_1_8; // 0x54
	::RPGTools::Octree::Agent::AgentCurveNavigationParams Field_1_11; // 0x60
	::System::Single _AgentRadius_k__BackingField; // 0x68
	::System::Int32 Field_1_13; // 0x6C
	::UnityEngine::Vector3 Field_1_7; // 0x70
	::UnityEngine::LayerMask _AgentLayerMask_k__BackingField; // 0x7C

	::System::Void _ctor(::System::Single a1, ::UnityEngine::LayerMask a2, ::Il2CppArray<::Class_1_C84A84118567060F*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::LayerMask, ::Il2CppArray<::Class_1_C84A84118567060F*>*))((::PBYTE)hIl2Cpp + CLASS_1_C0325AE94F8526BE__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C0325AE94F8526BE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean Method_1_E85465FE638B6B78(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::RPGTools::Octree::Agent::AgentCurveNavigationParams a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::RPGTools::Octree::Agent::AgentCurveNavigationParams))((::PBYTE)hIl2Cpp + CLASS_1_C0325AE94F8526BE_METHOD_1_E85465FE638B6B78_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_6415340BC388071F(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::RPGTools::Octree::Agent::AgentCurveNavigationParams a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::RPGTools::Octree::Agent::AgentCurveNavigationParams))((::PBYTE)hIl2Cpp + CLASS_1_C0325AE94F8526BE_METHOD_1_6415340BC388071F_OFFSET))(this, a1, a2, a3);
	}

	::Struct_2_23A3535C3AD26D5F Method_1_0A45674940E5A274(::UnityEngine::Vector3 a1)
	{
		return ((::Struct_2_23A3535C3AD26D5F(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_C0325AE94F8526BE_METHOD_1_0A45674940E5A274_OFFSET))(this, a1);
	}

	::System::Void Method_1_B732DC7FA82BA621()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C0325AE94F8526BE_METHOD_1_B732DC7FA82BA621_OFFSET))(this);
	}

	::System::Boolean Method_1_A85BBBEC77CE2D24(::System::Boolean& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_C0325AE94F8526BE_METHOD_1_A85BBBEC77CE2D24_OFFSET))(this, a1);
	}

	::System::Void Method_1_2747B6E1C570CBE2(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_C0325AE94F8526BE_METHOD_1_2747B6E1C570CBE2_OFFSET))(this, a1);
	}

	::System::Void Method_1_CF359E60FA453844(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_C0325AE94F8526BE_METHOD_1_CF359E60FA453844_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_1_288F74D11BE167E0(::UnityEngine::Vector3 a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_C0325AE94F8526BE_METHOD_1_288F74D11BE167E0_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_1_40082CAD46FBE80F(::UnityEngine::Vector3 a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_C0325AE94F8526BE_METHOD_1_40082CAD46FBE80F_OFFSET))(this, a1);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C0325AE94F8526BE_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_1_76AE4244293F1EA0(::System::Collections::Generic::List_1<::Class_1_4D2DA7CD2E59DEF1*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_4D2DA7CD2E59DEF1*>*))((::PBYTE)hIl2Cpp + CLASS_1_C0325AE94F8526BE_METHOD_1_76AE4244293F1EA0_OFFSET))(this, a1);
	}

	::System::Void Method_1_E876C8B6D3B840A6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C0325AE94F8526BE_METHOD_1_E876C8B6D3B840A6_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C0325AE94F8526BE_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_6D44C03F490A953F(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C0325AE94F8526BE_METHOD_1_6D44C03F490A953F_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_C993C9E276688BDF(::Struct_2_23A3535C3AD26D5F a1, ::Struct_2_23A3535C3AD26D5F a2, ::UnityEngine::Vector3& a3, ::UnityEngine::Vector3& a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_23A3535C3AD26D5F, ::Struct_2_23A3535C3AD26D5F, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_1_C0325AE94F8526BE_METHOD_1_C993C9E276688BDF_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_1_794A5D20268719ED(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_C0325AE94F8526BE_METHOD_1_794A5D20268719ED_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean get_IsPostSmooth()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C0325AE94F8526BE_GET_ISPOSTSMOOTH_OFFSET))(this);
	}

	::System::Void set_IsPostSmooth(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C0325AE94F8526BE_SET_ISPOSTSMOOTH_OFFSET))(this, value);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C0325AE94F8526BE_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C0325AE94F8526BE_METHOD_1_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::System::Single get_AgentRadius()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C0325AE94F8526BE_GET_AGENTRADIUS_OFFSET))(this);
	}

	::UnityEngine::LayerMask get_AgentLayerMask()
	{
		return ((::UnityEngine::LayerMask(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C0325AE94F8526BE_GET_AGENTLAYERMASK_OFFSET))(this);
	}

	::System::Single Method_1_A36150C5DCC8409E()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C0325AE94F8526BE_METHOD_1_A36150C5DCC8409E_OFFSET))(this);
	}

	::System::Single Method_1_A36150C5DCC8409E_1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C0325AE94F8526BE_METHOD_1_A36150C5DCC8409E_1_OFFSET))(this);
	}
};
