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

#define CLASS_1_C0325AE94F8526BE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16528120)
#define CLASS_1_C0325AE94F8526BE_GET_AGENTLAYERMASK_OFFSET UNITYSDK_OFFSET(0x1652C220)
#define CLASS_1_C0325AE94F8526BE_GET_AGENTRADIUS_OFFSET UNITYSDK_OFFSET(0x1652C210)
#define CLASS_1_C0325AE94F8526BE_GET_ISPOSTSMOOTH_OFFSET UNITYSDK_OFFSET(0x1652C1D0)
#define CLASS_1_C0325AE94F8526BE_METHOD_1_0A45674940E5A274_OFFSET UNITYSDK_OFFSET(0x16528780)
#define CLASS_1_C0325AE94F8526BE_METHOD_1_15C70789D5C9E521_OFFSET UNITYSDK_OFFSET(0x16528AE0)
#define CLASS_1_C0325AE94F8526BE_METHOD_1_21D9A006E23F6291_OFFSET UNITYSDK_OFFSET(0x1652A1A0)
#define CLASS_1_C0325AE94F8526BE_METHOD_1_51BBA01F511E6107_OFFSET UNITYSDK_OFFSET(0x1652A480)
#define CLASS_1_C0325AE94F8526BE_METHOD_1_576F7DA4771CFFCA_OFFSET UNITYSDK_OFFSET(0x16529FF0)
#define CLASS_1_C0325AE94F8526BE_METHOD_1_76AE4244293F1EA0_OFFSET UNITYSDK_OFFSET(0x1652A340)
#define CLASS_1_C0325AE94F8526BE_METHOD_1_794A5D20268719ED_OFFSET UNITYSDK_OFFSET(0x1652C030)
#define CLASS_1_C0325AE94F8526BE_METHOD_1_8C9CBA3FC3999F35_OFFSET UNITYSDK_OFFSET(0x16529D20)
#define CLASS_1_C0325AE94F8526BE_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x1652A2E0)
#define CLASS_1_C0325AE94F8526BE_METHOD_1_9B55B783C4185399_OFFSET UNITYSDK_OFFSET(0x16529680)
#define CLASS_1_C0325AE94F8526BE_METHOD_1_A36150C5DCC8409E_1_OFFSET UNITYSDK_OFFSET(0x1652C280)
#define CLASS_1_C0325AE94F8526BE_METHOD_1_A36150C5DCC8409E_OFFSET UNITYSDK_OFFSET(0x1652C230)
#define CLASS_1_C0325AE94F8526BE_METHOD_1_A85BBBEC77CE2D24_OFFSET UNITYSDK_OFFSET(0x16529260)
#define CLASS_1_C0325AE94F8526BE_METHOD_1_BB2928BEC244DEB7_OFFSET UNITYSDK_OFFSET(0x16528730)
#define CLASS_1_C0325AE94F8526BE_METHOD_1_C081D0F1BA12AC56_OFFSET UNITYSDK_OFFSET(0x165290A0)
#define CLASS_1_C0325AE94F8526BE_METHOD_1_C993C9E276688BDF_OFFSET UNITYSDK_OFFSET(0x1652BF20)
#define CLASS_1_C0325AE94F8526BE_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x16528A90)
#define CLASS_1_C0325AE94F8526BE_METHOD_1_E85465FE638B6B78_OFFSET UNITYSDK_OFFSET(0x16528260)
#define CLASS_1_C0325AE94F8526BE_METHOD_1_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x1652C200)
#define CLASS_1_C0325AE94F8526BE_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1652C1F0)
#define CLASS_1_C0325AE94F8526BE_SET_ISPOSTSMOOTH_OFFSET UNITYSDK_OFFSET(0x1652C1E0)
#define CLASS_1_C0325AE94F8526BE__CTOR_OFFSET UNITYSDK_OFFSET(0x16528040)

inline static constexpr unsigned int Class_1_C0325AE94F8526BE_TypeDefinitionIndex = 47087;

class Class_1_C0325AE94F8526BE : public ::System::Object
{
public:
	// static const ::System::Single Field_1_0; // 0x0
	// static const ::System::Single Field_1_1; // 0x0
	::BansheeGz::BGSpline::Curve::BGCurve* Field_1_2; // 0x10
	::Class_2_E08C4A9CFB467C17* Field_1_3; // 0x18
	::System::Collections::Generic::List_1<::Class_1_4D2DA7CD2E59DEF1*>* Field_1_4; // 0x20
	::System::Collections::Generic::List_1<::UnityEngine::Vector3>* Field_1_5; // 0x28
	::BansheeGz::BGSpline::Components::BGCcMath* Field_1_6; // 0x30
	::Il2CppArray<::Class_1_C84A84118567060F*>* Field_1_7; // 0x38
	::System::Collections::Generic::IEnumerator_1<::System::Nullable_1<::System::Boolean>>* Field_1_8; // 0x40
	::UnityEngine::GameObject* Field_1_9; // 0x48
	::System::Boolean _IsPostSmooth_k__BackingField; // 0x50
	::System::Boolean Field_1_11; // 0x51
	::System::Boolean Field_1_12; // 0x52
	::UnityEngine::Vector3 Field_1_13; // 0x54
	::System::Single _AgentRadius_k__BackingField; // 0x60
	::UnityEngine::Vector3 Field_1_15; // 0x64
	::RPGTools::Octree::Agent::AgentCurveNavigationParams Field_1_16; // 0x70
	::UnityEngine::LayerMask _AgentLayerMask_k__BackingField; // 0x78
	::System::Int32 Field_1_18; // 0x7C

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
