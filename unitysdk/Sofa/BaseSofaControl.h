#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace Sofa { class BaseSofaWindow; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }
template <typename T> class Class_1_534BBA4C76709F67;

#define SOFA_BASESOFACONTROL_BINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xB945E30)
#define SOFA_BASESOFACONTROL_GET_DATACONTEXT_OFFSET UNITYSDK_OFFSET(0xB945CB0)
#define SOFA_BASESOFACONTROL_GET_VIEWTRANSFORM_OFFSET UNITYSDK_OFFSET(0xB945CA0)
#define SOFA_BASESOFACONTROL_INITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xB945CD0)
#define SOFA_BASESOFACONTROL_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xB945F90)
#define SOFA_BASESOFACONTROL_SET_DATACONTEXT_OFFSET UNITYSDK_OFFSET(0xB945CC0)
#define SOFA_BASESOFACONTROL__ADDCHILD_OFFSET UNITYSDK_OFFSET(0xB9460A0)
#define SOFA_BASESOFACONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xB946230)
#define SOFA_BASESOFACONTROL__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xB946020)
#define SOFA_BASESOFACONTROL__ONDESTROY_OFFSET UNITYSDK_OFFSET(0xB946060)
#define SOFA_BASESOFACONTROL__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xB945FE0)
#define SOFA_BASESOFACONTROL__REMOVECHILD_OFFSET UNITYSDK_OFFSET(0xB946180)

namespace Sofa
{
	inline static constexpr unsigned int BaseSofaControl_TypeDefinitionIndex = 44444;

	class BaseSofaControl : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Object* _DataContext; // 0x18
		::System::Collections::Generic::List_1<::Sofa::BaseSofaControl*>* _ChildUIControls; // 0x20
		::Sofa::BaseSofaWindow* OwnerWindow; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SOFA_BASESOFACONTROL__CTOR_OFFSET))(this);
		}

		::UnityEngine::Transform* get_ViewTransform()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + SOFA_BASESOFACONTROL_GET_VIEWTRANSFORM_OFFSET))(this);
		}

		::System::Object* get_DataContext()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SOFA_BASESOFACONTROL_GET_DATACONTEXT_OFFSET))(this);
		}

		::System::Void set_DataContext(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SOFA_BASESOFACONTROL_SET_DATACONTEXT_OFFSET))(this, value);
		}

		::System::Void InitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SOFA_BASESOFACONTROL_INITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void BindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SOFA_BASESOFACONTROL_BINDVIEWMODEL_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SOFA_BASESOFACONTROL_ONDESTROY_OFFSET))(this);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SOFA_BASESOFACONTROL__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SOFA_BASESOFACONTROL__ONBINDVIEWMODEL_OFFSET))(this);
		}

		::System::Void _OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SOFA_BASESOFACONTROL__ONDESTROY_OFFSET))(this);
		}

		::System::Void _AddChild(::Sofa::BaseSofaControl* child)
		{
			return ((::System::Void(*)(::PVOID, ::Sofa::BaseSofaControl*))((::PBYTE)hIl2Cpp + SOFA_BASESOFACONTROL__ADDCHILD_OFFSET))(this, child);
		}

		::System::Void _RemoveChild(::Sofa::BaseSofaControl* child)
		{
			return ((::System::Void(*)(::PVOID, ::Sofa::BaseSofaControl*))((::PBYTE)hIl2Cpp + SOFA_BASESOFACONTROL__REMOVECHILD_OFFSET))(this, child);
		}
	};
}
