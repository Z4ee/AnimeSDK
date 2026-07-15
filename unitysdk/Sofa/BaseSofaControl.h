#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_1_6CC143B9599F1FCA;
namespace Sofa { class BaseSofaWindow; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }
template <typename T> class Class_1_534BBA4C76709F67;

#define SOFA_BASESOFACONTROL_BINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x14EBABB0)
#define SOFA_BASESOFACONTROL_GET_DATACONTEXT_OFFSET UNITYSDK_OFFSET(0x19F7B030)
#define SOFA_BASESOFACONTROL_GET_VIEWTRANSFORM_OFFSET UNITYSDK_OFFSET(0x19F7AFE0)
#define SOFA_BASESOFACONTROL_INITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0x19F7B0C0)
#define SOFA_BASESOFACONTROL_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x14EBAD50)
#define SOFA_BASESOFACONTROL_SET_DATACONTEXT_OFFSET UNITYSDK_OFFSET(0x19F7B070)
#define SOFA_BASESOFACONTROL__ADDCHILD_OFFSET UNITYSDK_OFFSET(0x14EBAEE0)
#define SOFA_BASESOFACONTROL__ASYNCLOADSPRITETO_OFFSET UNITYSDK_OFFSET(0x14EBB0C0)
#define SOFA_BASESOFACONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x14EBB150)
#define SOFA_BASESOFACONTROL__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x14EBAE60)
#define SOFA_BASESOFACONTROL__ONDESTROY_OFFSET UNITYSDK_OFFSET(0x14EBAEA0)
#define SOFA_BASESOFACONTROL__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0x14EBAE20)
#define SOFA_BASESOFACONTROL__REMOVECHILD_OFFSET UNITYSDK_OFFSET(0x14EBB010)

namespace Sofa
{
	inline static constexpr unsigned int BaseSofaControl_TypeDefinitionIndex = 45908;

	class BaseSofaControl : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Object* _DataContext; // 0x18
		::System::Collections::Generic::List_1<::Sofa::BaseSofaControl*>* _ChildUIControls; // 0x20
		::Class_1_6CC143B9599F1FCA* _AssetLoader; // 0x28
		::Sofa::BaseSofaWindow* OwnerWindow; // 0x30

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

		::System::Void set_DataContext(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SOFA_BASESOFACONTROL_SET_DATACONTEXT_OFFSET))(this, a1);
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

		::System::Void _AddChild(::Sofa::BaseSofaControl* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Sofa::BaseSofaControl*))((::PBYTE)hIl2Cpp + SOFA_BASESOFACONTROL__ADDCHILD_OFFSET))(this, a1);
		}

		::System::Void _RemoveChild(::Sofa::BaseSofaControl* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Sofa::BaseSofaControl*))((::PBYTE)hIl2Cpp + SOFA_BASESOFACONTROL__REMOVECHILD_OFFSET))(this, a1);
		}

		::System::Void _AsyncLoadSpriteTo(::UnityEngine::UI::Image* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Image*, ::System::String*))((::PBYTE)hIl2Cpp + SOFA_BASESOFACONTROL__ASYNCLOADSPRITETO_OFFSET))(this, a1, a2);
		}
	};
}
