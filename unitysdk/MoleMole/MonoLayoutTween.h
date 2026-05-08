#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_1_402DBB6FAC12574C;
namespace DG::Tweening { class Tweener; }
namespace System { class Action; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class LayoutElement; }
namespace UnityEngine::UI { class LayoutGroup; }

#define MOLEMOLE_MONOLAYOUTTWEEN_AWAKE_OFFSET UNITYSDK_OFFSET(0x10E431A0)
#define MOLEMOLE_MONOLAYOUTTWEEN_CANCELTWEEN_OFFSET UNITYSDK_OFFSET(0x10E43E80)
#define MOLEMOLE_MONOLAYOUTTWEEN_INSERTCELL_OFFSET UNITYSDK_OFFSET(0x10E433B0)
#define MOLEMOLE_MONOLAYOUTTWEEN_METHOD_5_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x10E441E0)
#define MOLEMOLE_MONOLAYOUTTWEEN_METHOD_5_2B486E50305A7CDC_OFFSET UNITYSDK_OFFSET(0x10E436A0)
#define MOLEMOLE_MONOLAYOUTTWEEN_METHOD_5_2C9E083DC9C549F9_OFFSET UNITYSDK_OFFSET(0x10E43600)
#define MOLEMOLE_MONOLAYOUTTWEEN_METHOD_5_2CBE0B79DD36047E_OFFSET UNITYSDK_OFFSET(0x10E44410)
#define MOLEMOLE_MONOLAYOUTTWEEN_METHOD_5_3CCA0B8A31B650A8_OFFSET UNITYSDK_OFFSET(0x10E44F90)
#define MOLEMOLE_MONOLAYOUTTWEEN_METHOD_5_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x10E431F0)
#define MOLEMOLE_MONOLAYOUTTWEEN_METHOD_5_497833CF065C1894_OFFSET UNITYSDK_OFFSET(0x10E44CB0)
#define MOLEMOLE_MONOLAYOUTTWEEN_METHOD_5_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0x10E444B0)
#define MOLEMOLE_MONOLAYOUTTWEEN_METHOD_5_7BD3449C94EB28DC_OFFSET UNITYSDK_OFFSET(0x10E44690)
#define MOLEMOLE_MONOLAYOUTTWEEN_METHOD_5_7EBA8DAF54830EDE_OFFSET UNITYSDK_OFFSET(0x10E449A0)
#define MOLEMOLE_MONOLAYOUTTWEEN_METHOD_5_A1739D86623C0116_OFFSET UNITYSDK_OFFSET(0x10E43BF0)
#define MOLEMOLE_MONOLAYOUTTWEEN_METHOD_5_A56385E6706FA723_OFFSET UNITYSDK_OFFSET(0x10E44460)
#define MOLEMOLE_MONOLAYOUTTWEEN_METHOD_5_A8F30D3692AA24D3_OFFSET UNITYSDK_OFFSET(0x10E444E0)
#define MOLEMOLE_MONOLAYOUTTWEEN_METHOD_5_C114A1F8E08B6F92_1_OFFSET UNITYSDK_OFFSET(0x10E44CA0)
#define MOLEMOLE_MONOLAYOUTTWEEN_METHOD_5_C114A1F8E08B6F92_OFFSET UNITYSDK_OFFSET(0x10E44C90)
#define MOLEMOLE_MONOLAYOUTTWEEN_METHOD_5_C74CF020AA42ED85_1_OFFSET UNITYSDK_OFFSET(0x10E44C80)
#define MOLEMOLE_MONOLAYOUTTWEEN_METHOD_5_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x10E444C0)
#define MOLEMOLE_MONOLAYOUTTWEEN_METHOD_5_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x10E44850)
#define MOLEMOLE_MONOLAYOUTTWEEN_METHOD_5_D94E828E9DA8A315_OFFSET UNITYSDK_OFFSET(0x10E44860)
#define MOLEMOLE_MONOLAYOUTTWEEN_METHOD_5_E7F1AECA7CFF8AAD_OFFSET UNITYSDK_OFFSET(0x10E44F80)
#define MOLEMOLE_MONOLAYOUTTWEEN_METHOD_5_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x10E444D0)
#define MOLEMOLE_MONOLAYOUTTWEEN_METHOD_5_F0C971A0A9681120_OFFSET UNITYSDK_OFFSET(0x10E442A0)
#define MOLEMOLE_MONOLAYOUTTWEEN_NEEDINSERTTWEEN_OFFSET UNITYSDK_OFFSET(0x10E43560)
#define MOLEMOLE_MONOLAYOUTTWEEN_NEEDREMOVETWEEN_OFFSET UNITYSDK_OFFSET(0x10E43AE0)
#define MOLEMOLE_MONOLAYOUTTWEEN_REMOVECELL_OFFSET UNITYSDK_OFFSET(0x10E43920)
#define MOLEMOLE_MONOLAYOUTTWEEN_SETDURATION_OFFSET UNITYSDK_OFFSET(0x10E43E20)
#define MOLEMOLE_MONOLAYOUTTWEEN_SETSLOTHELPER_OFFSET UNITYSDK_OFFSET(0x10E43360)
#define MOLEMOLE_MONOLAYOUTTWEEN__CTOR_OFFSET UNITYSDK_OFFSET(0x10E44240)

namespace MoleMole
{
	inline static constexpr unsigned int MonoLayoutTween_TypeDefinitionIndex = 48357;

	class MonoLayoutTween : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single FadeTime; // 0x18
		::System::Single Field_5_1; // 0x1C
		::UnityEngine::UI::LayoutElement* Field_5_2; // 0x20
		::UnityEngine::GameObject* Field_5_3; // 0x28
		::UnityEngine::UI::LayoutGroup* Field_5_4; // 0x30
		::UnityEngine::Transform* Field_5_5; // 0x38
		::Class_1_402DBB6FAC12574C* Field_5_6; // 0x40
		::DG::Tweening::Tweener* Field_5_7; // 0x48
		::System::Single Field_5_8; // 0x50
		::System::Int32 Field_5_9; // 0x54
		::System::Int32 Field_5_10; // 0x58
		::System::Boolean Field_5_11; // 0x5C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLAYOUTTWEEN__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLAYOUTTWEEN_AWAKE_OFFSET))(this);
		}

		::System::Void SetSlotHelper(::Class_1_402DBB6FAC12574C* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_402DBB6FAC12574C*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLAYOUTTWEEN_SETSLOTHELPER_OFFSET))(this, a1);
		}

		::System::Void InsertCell(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLAYOUTTWEEN_INSERTCELL_OFFSET))(this, a1);
		}

		::System::Void RemoveCell(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLAYOUTTWEEN_REMOVECELL_OFFSET))(this, a1);
		}

		::System::Void SetDuration(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLAYOUTTWEEN_SETDURATION_OFFSET))(this, a1);
		}

		::System::Void CancelTween()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLAYOUTTWEEN_CANCELTWEEN_OFFSET))(this);
		}

		::System::Boolean NeedInsertTween()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLAYOUTTWEEN_NEEDINSERTTWEEN_OFFSET))(this);
		}

		::System::Boolean NeedRemoveTween()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLAYOUTTWEEN_NEEDREMOVETWEEN_OFFSET))(this);
		}

		::System::Single Method_5_F0C971A0A9681120(::UnityEngine::GameObject* a1)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLAYOUTTWEEN_METHOD_5_F0C971A0A9681120_OFFSET))(this, a1);
		}

		::System::Void Method_5_2CBE0B79DD36047E()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLAYOUTTWEEN_METHOD_5_2CBE0B79DD36047E_OFFSET))(this);
		}

		::System::Void Method_5_A56385E6706FA723()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLAYOUTTWEEN_METHOD_5_A56385E6706FA723_OFFSET))(this);
		}

		::System::Single Method_5_5323F2DF46A044DA()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLAYOUTTWEEN_METHOD_5_5323F2DF46A044DA_OFFSET))(this);
		}

		::System::Int32 Method_5_C74CF020AA42ED85()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLAYOUTTWEEN_METHOD_5_C74CF020AA42ED85_OFFSET))(this);
		}

		::System::Boolean Method_5_F0088C88851A7DFB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLAYOUTTWEEN_METHOD_5_F0088C88851A7DFB_OFFSET))(this);
		}

		::System::Void Method_5_A8F30D3692AA24D3(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Action* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLAYOUTTWEEN_METHOD_5_A8F30D3692AA24D3_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Method_5_C74E50CBD41F0264(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLAYOUTTWEEN_METHOD_5_C74E50CBD41F0264_OFFSET))(this, a1);
		}

		::System::Boolean Method_5_D94E828E9DA8A315()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLAYOUTTWEEN_METHOD_5_D94E828E9DA8A315_OFFSET))(this);
		}

		::System::Void Method_5_2B486E50305A7CDC(::UnityEngine::GameObject* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLAYOUTTWEEN_METHOD_5_2B486E50305A7CDC_OFFSET))(this, a1, a2);
		}

		::UnityEngine::UI::LayoutGroup* Method_5_7EBA8DAF54830EDE(::UnityEngine::Transform* a1)
		{
			return ((::UnityEngine::UI::LayoutGroup*(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLAYOUTTWEEN_METHOD_5_7EBA8DAF54830EDE_OFFSET))(this, a1);
		}

		::System::Int32 Method_5_C74CF020AA42ED85_1()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLAYOUTTWEEN_METHOD_5_C74CF020AA42ED85_1_OFFSET))(this);
		}

		::System::Void Method_5_C114A1F8E08B6F92(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLAYOUTTWEEN_METHOD_5_C114A1F8E08B6F92_OFFSET))(this, a1);
		}

		::System::Void Method_5_C114A1F8E08B6F92_1(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLAYOUTTWEEN_METHOD_5_C114A1F8E08B6F92_1_OFFSET))(this, a1);
		}

		::System::Void Method_5_497833CF065C1894()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLAYOUTTWEEN_METHOD_5_497833CF065C1894_OFFSET))(this);
		}

		::System::Void Method_5_41A074549EF25F63()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLAYOUTTWEEN_METHOD_5_41A074549EF25F63_OFFSET))(this);
		}

		::System::Boolean Method_5_1D4018D4200358D0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLAYOUTTWEEN_METHOD_5_1D4018D4200358D0_OFFSET))(this);
		}

		::DG::Tweening::Tweener* Method_5_7BD3449C94EB28DC(::UnityEngine::UI::LayoutElement* a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::DG::Tweening::Tweener*(*)(::PVOID, ::UnityEngine::UI::LayoutElement*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLAYOUTTWEEN_METHOD_5_7BD3449C94EB28DC_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_5_A1739D86623C0116(::UnityEngine::GameObject* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLAYOUTTWEEN_METHOD_5_A1739D86623C0116_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_E7F1AECA7CFF8AAD(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLAYOUTTWEEN_METHOD_5_E7F1AECA7CFF8AAD_OFFSET))(this, a1);
		}

		::System::Void Method_5_3CCA0B8A31B650A8()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLAYOUTTWEEN_METHOD_5_3CCA0B8A31B650A8_OFFSET))(this);
		}

		::UnityEngine::GameObject* Method_5_2C9E083DC9C549F9()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLAYOUTTWEEN_METHOD_5_2C9E083DC9C549F9_OFFSET))(this);
		}
	};
}
