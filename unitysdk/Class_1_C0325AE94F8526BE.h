#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Octree/Agent/AgentCurveNavigationParams.h"
#include "unitysdk/Struct_2_A143022D1701BC76.h"
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

#define CLASS_1_C0325AE94F8526BE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17FAF470)
#define CLASS_1_C0325AE94F8526BE_GET_AGENTLAYERMASK_OFFSET UNITYSDK_OFFSET(0x17FB3530)
#define CLASS_1_C0325AE94F8526BE_GET_AGENTRADIUS_OFFSET UNITYSDK_OFFSET(0x17FB3520)
#define CLASS_1_C0325AE94F8526BE_GET_ISPOSTSMOOTH_OFFSET UNITYSDK_OFFSET(0x17FB34E0)
#define CLASS_1_C0325AE94F8526BE_METHOD_1_0A45674940E5A274_OFFSET UNITYSDK_OFFSET(0x17FAFAD0)
#define CLASS_1_C0325AE94F8526BE_METHOD_1_15C70789D5C9E521_OFFSET UNITYSDK_OFFSET(0x17FAFE30)
#define CLASS_1_C0325AE94F8526BE_METHOD_1_21D9A006E23F6291_OFFSET UNITYSDK_OFFSET(0x17FB14B0)
#define CLASS_1_C0325AE94F8526BE_METHOD_1_51BBA01F511E6107_OFFSET UNITYSDK_OFFSET(0x17FB1790)
#define CLASS_1_C0325AE94F8526BE_METHOD_1_576F7DA4771CFFCA_OFFSET UNITYSDK_OFFSET(0x17FB1300)
#define CLASS_1_C0325AE94F8526BE_METHOD_1_76AE4244293F1EA0_OFFSET UNITYSDK_OFFSET(0x17FB1650)
#define CLASS_1_C0325AE94F8526BE_METHOD_1_794A5D20268719ED_OFFSET UNITYSDK_OFFSET(0x17FB3340)
#define CLASS_1_C0325AE94F8526BE_METHOD_1_8C9CBA3FC3999F35_OFFSET UNITYSDK_OFFSET(0x17FB1030)
#define CLASS_1_C0325AE94F8526BE_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x17FB15F0)
#define CLASS_1_C0325AE94F8526BE_METHOD_1_9B55B783C4185399_OFFSET UNITYSDK_OFFSET(0x17FB0990)
#define CLASS_1_C0325AE94F8526BE_METHOD_1_A36150C5DCC8409E_1_OFFSET UNITYSDK_OFFSET(0x17FB3590)
#define CLASS_1_C0325AE94F8526BE_METHOD_1_A36150C5DCC8409E_OFFSET UNITYSDK_OFFSET(0x17FB3540)
#define CLASS_1_C0325AE94F8526BE_METHOD_1_A85BBBEC77CE2D24_OFFSET UNITYSDK_OFFSET(0x17FB05B0)
#define CLASS_1_C0325AE94F8526BE_METHOD_1_BB2928BEC244DEB7_OFFSET UNITYSDK_OFFSET(0x17FAFA80)
#define CLASS_1_C0325AE94F8526BE_METHOD_1_C081D0F1BA12AC56_OFFSET UNITYSDK_OFFSET(0x17FB03F0)
#define CLASS_1_C0325AE94F8526BE_METHOD_1_C993C9E276688BDF_OFFSET UNITYSDK_OFFSET(0x17FB3230)
#define CLASS_1_C0325AE94F8526BE_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x17FAFDE0)
#define CLASS_1_C0325AE94F8526BE_METHOD_1_E85465FE638B6B78_OFFSET UNITYSDK_OFFSET(0x17FAF5B0)
#define CLASS_1_C0325AE94F8526BE_METHOD_1_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x17FB3510)
#define CLASS_1_C0325AE94F8526BE_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x17FB3500)
#define CLASS_1_C0325AE94F8526BE_SET_ISPOSTSMOOTH_OFFSET UNITYSDK_OFFSET(0x17FB34F0)
#define CLASS_1_C0325AE94F8526BE__CTOR_OFFSET UNITYSDK_OFFSET(0x17FAF390)

inline static constexpr unsigned int Class_1_C0325AE94F8526BE_TypeDefinitionIndex = 49350;

class Class_1_C0325AE94F8526BE : public ::System::Object
{
public:
	// static const ::System::Single BFMOKCBGHKO; // 0x0
	// static const ::System::Single LLBLHENJGKJ; // 0x0
	::System::Collections::Generic::List_1<::UnityEngine::Vector3>* IMDMBCFBKKE; // 0x10
	::BansheeGz::BGSpline::Components::BGCcMath* JPEGGCCPIEG; // 0x18
	::Class_2_E08C4A9CFB467C17* DHOBMFLDLAN; // 0x20
	::BansheeGz::BGSpline::Curve::BGCurve* PNOHBBMHGLB; // 0x28
	::System::Collections::Generic::IEnumerator_1<::System::Nullable_1<::System::Boolean>>* OEAFOKMCOGH; // 0x30
	::System::Collections::Generic::List_1<::Class_1_4D2DA7CD2E59DEF1*>* OINCGJJMAEF; // 0x38
	::UnityEngine::GameObject* CMLIHCEJFDG; // 0x40
	::Il2CppArray<::Class_1_C84A84118567060F*>* IOFHPGIJANO; // 0x48
	::UnityEngine::LayerMask _AgentLayerMask_k__BackingField; // 0x50
	::UnityEngine::Vector3 DEIMGIGLHLK; // 0x54
	::System::Boolean AFLJILDNMHA; // 0x60
	::System::Boolean _IsPostSmooth_k__BackingField; // 0x61
	::System::Boolean HHBGOBMFMML; // 0x62
	::System::Single _AgentRadius_k__BackingField; // 0x64
	::System::Int32 ECMGHKJIKNL; // 0x68
	::RPGTools::Octree::Agent::AgentCurveNavigationParams IJIHPGHKLIF; // 0x6C
	::UnityEngine::Vector3 GLDEBFOKEMJ; // 0x74

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

	::System::Boolean Method_1_15C70789D5C9E521(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::RPGTools::Octree::Agent::AgentCurveNavigationParams a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::RPGTools::Octree::Agent::AgentCurveNavigationParams))((::PBYTE)hIl2Cpp + CLASS_1_C0325AE94F8526BE_METHOD_1_15C70789D5C9E521_OFFSET))(this, a1, a2, a3);
	}

	::Struct_2_A143022D1701BC76 Method_1_0A45674940E5A274(::UnityEngine::Vector3 a1)
	{
		return ((::Struct_2_A143022D1701BC76(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_C0325AE94F8526BE_METHOD_1_0A45674940E5A274_OFFSET))(this, a1);
	}

	::System::Void Method_1_BB2928BEC244DEB7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C0325AE94F8526BE_METHOD_1_BB2928BEC244DEB7_OFFSET))(this);
	}

	::System::Boolean Method_1_A85BBBEC77CE2D24(::System::Boolean& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_C0325AE94F8526BE_METHOD_1_A85BBBEC77CE2D24_OFFSET))(this, a1);
	}

	::System::Void Method_1_9B55B783C4185399(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_C0325AE94F8526BE_METHOD_1_9B55B783C4185399_OFFSET))(this, a1);
	}

	::System::Void Method_1_8C9CBA3FC3999F35(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_C0325AE94F8526BE_METHOD_1_8C9CBA3FC3999F35_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_1_576F7DA4771CFFCA(::UnityEngine::Vector3 a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_C0325AE94F8526BE_METHOD_1_576F7DA4771CFFCA_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_1_21D9A006E23F6291(::UnityEngine::Vector3 a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_C0325AE94F8526BE_METHOD_1_21D9A006E23F6291_OFFSET))(this, a1);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C0325AE94F8526BE_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_1_76AE4244293F1EA0(::System::Collections::Generic::List_1<::Class_1_4D2DA7CD2E59DEF1*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_4D2DA7CD2E59DEF1*>*))((::PBYTE)hIl2Cpp + CLASS_1_C0325AE94F8526BE_METHOD_1_76AE4244293F1EA0_OFFSET))(this, a1);
	}

	::System::Void Method_1_51BBA01F511E6107()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C0325AE94F8526BE_METHOD_1_51BBA01F511E6107_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C0325AE94F8526BE_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_C081D0F1BA12AC56(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C0325AE94F8526BE_METHOD_1_C081D0F1BA12AC56_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_C993C9E276688BDF(::Struct_2_A143022D1701BC76 a1, ::Struct_2_A143022D1701BC76 a2, ::UnityEngine::Vector3& a3, ::UnityEngine::Vector3& a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_A143022D1701BC76, ::Struct_2_A143022D1701BC76, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_1_C0325AE94F8526BE_METHOD_1_C993C9E276688BDF_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_1_794A5D20268719ED(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_C0325AE94F8526BE_METHOD_1_794A5D20268719ED_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean get_IsPostSmooth()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C0325AE94F8526BE_GET_ISPOSTSMOOTH_OFFSET))(this);
	}

	::System::Void set_IsPostSmooth(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C0325AE94F8526BE_SET_ISPOSTSMOOTH_OFFSET))(this, a1);
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
