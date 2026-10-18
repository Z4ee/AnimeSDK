#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_E70C193A39BC645E.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_1_2201B1A0B73C7EF3;
class Class_1_3185B7D04F177583;
namespace Sofa { class BaseSofaWindow; }
namespace System { class IDisposable; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }
template <typename T> class Class_1_534BBA4C76709F67;

#define SOFA_BASESOFACONTROL_BINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xE968CE0)
#define SOFA_BASESOFACONTROL_BIND_OFFSET UNITYSDK_OFFSET(0xE9692D0)
#define SOFA_BASESOFACONTROL_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE968E50)
#define SOFA_BASESOFACONTROL_GET_DATACONTEXT_OFFSET UNITYSDK_OFFSET(0xE968AA0)
#define SOFA_BASESOFACONTROL_GET_VIEWTRANSFORM_OFFSET UNITYSDK_OFFSET(0xE968A50)
#define SOFA_BASESOFACONTROL_GET__CONTROLHOST_OFFSET UNITYSDK_OFFSET(0xE968C40)
#define SOFA_BASESOFACONTROL_INITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xE968AC0)
#define SOFA_BASESOFACONTROL_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xE968FE0)
#define SOFA_BASESOFACONTROL_SET_DATACONTEXT_OFFSET UNITYSDK_OFFSET(0xE968AB0)
#define SOFA_BASESOFACONTROL__ADDCHILD_OFFSET UNITYSDK_OFFSET(0xE9690F0)
#define SOFA_BASESOFACONTROL__ASYNCLOADSPRITETO_OFFSET UNITYSDK_OFFSET(0xE9693C0)
#define SOFA_BASESOFACONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xE969450)
#define SOFA_BASESOFACONTROL__GET__CONTROLHOST_B__27_0_OFFSET UNITYSDK_OFFSET(0xE969480)
#define SOFA_BASESOFACONTROL__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xE969070)
#define SOFA_BASESOFACONTROL__ONDESTROY_OFFSET UNITYSDK_OFFSET(0xE9690B0)
#define SOFA_BASESOFACONTROL__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xE969030)
#define SOFA_BASESOFACONTROL__REMOVECHILD_OFFSET UNITYSDK_OFFSET(0xE9691E0)

namespace Sofa
{
	inline static constexpr unsigned int BaseSofaControl_TypeDefinitionIndex = 49681;

	class BaseSofaControl : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Object* _DataContext_k__BackingField; // 0x18
		::System::Boolean _Disposed; // 0x20
		::Class_1_2201B1A0B73C7EF3* _AssetLoader; // 0x28
		::Class_1_3185B7D04F177583* _ControlHostInstance; // 0x30
		::Sofa::BaseSofaWindow* OwnerWindow; // 0x38

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

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SOFA_BASESOFACONTROL_DISPOSE_OFFSET))(this);
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

		::System::IDisposable* Bind(::System::Object* a1, ::Struct_2_E70C193A39BC645E a2)
		{
			return ((::System::IDisposable*(*)(::PVOID, ::System::Object*, ::Struct_2_E70C193A39BC645E))((::PBYTE)hIl2Cpp + SOFA_BASESOFACONTROL_BIND_OFFSET))(this, a1, a2);
		}

		::System::Void _AsyncLoadSpriteTo(::UnityEngine::UI::Image* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Image*, ::System::String*))((::PBYTE)hIl2Cpp + SOFA_BASESOFACONTROL__ASYNCLOADSPRITETO_OFFSET))(this, a1, a2);
		}

		::Class_1_3185B7D04F177583* get__ControlHost()
		{
			return ((::Class_1_3185B7D04F177583*(*)(::PVOID))((::PBYTE)hIl2Cpp + SOFA_BASESOFACONTROL_GET__CONTROLHOST_OFFSET))(this);
		}

		::System::Void _get__ControlHost_b__27_0(::Sofa::BaseSofaControl* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Sofa::BaseSofaControl*))((::PBYTE)hIl2Cpp + SOFA_BASESOFACONTROL__GET__CONTROLHOST_B__27_0_OFFSET))(this, a1);
		}
	};
}
