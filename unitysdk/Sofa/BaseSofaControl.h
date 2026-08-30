#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_F67EA3F2FFD139F6.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_1_3185B7D04F177583;
class Class_1_6CC143B9599F1FCA;
namespace Sofa { class BaseSofaWindow; }
namespace System { class IDisposable; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }
template <typename T> class Class_1_534BBA4C76709F67;

#define SOFA_BASESOFACONTROL_BINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1BF52CC0)
#define SOFA_BASESOFACONTROL_BIND_OFFSET UNITYSDK_OFFSET(0x1BF531B0)
#define SOFA_BASESOFACONTROL_GET_DATACONTEXT_OFFSET UNITYSDK_OFFSET(0x1BF52A90)
#define SOFA_BASESOFACONTROL_GET_VIEWTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1BF52A40)
#define SOFA_BASESOFACONTROL_GET__CONTROLHOST_OFFSET UNITYSDK_OFFSET(0x1BF52C20)
#define SOFA_BASESOFACONTROL_INITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0x1BF52AB0)
#define SOFA_BASESOFACONTROL_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1BF52E30)
#define SOFA_BASESOFACONTROL_SET_DATACONTEXT_OFFSET UNITYSDK_OFFSET(0x1BF52AA0)
#define SOFA_BASESOFACONTROL__ADDCHILD_OFFSET UNITYSDK_OFFSET(0x1BF52FD0)
#define SOFA_BASESOFACONTROL__ASYNCLOADSPRITETO_OFFSET UNITYSDK_OFFSET(0x1BF53290)
#define SOFA_BASESOFACONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF53320)
#define SOFA_BASESOFACONTROL__GET__CONTROLHOST_B__25_0_OFFSET UNITYSDK_OFFSET(0x1BF53350)
#define SOFA_BASESOFACONTROL__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1BF52F50)
#define SOFA_BASESOFACONTROL__ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1BF52F90)
#define SOFA_BASESOFACONTROL__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0x1BF52F10)
#define SOFA_BASESOFACONTROL__REMOVECHILD_OFFSET UNITYSDK_OFFSET(0x1BF530C0)

namespace Sofa
{
	inline static constexpr unsigned int BaseSofaControl_TypeDefinitionIndex = 50105;

	class BaseSofaControl : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Object* _DataContext_k__BackingField; // 0x18
		::Class_1_6CC143B9599F1FCA* _AssetLoader; // 0x20
		::Class_1_3185B7D04F177583* _ControlHostInstance; // 0x28
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

		::System::IDisposable* Bind(::System::Object* a1, ::Struct_2_F67EA3F2FFD139F6 a2)
		{
			return ((::System::IDisposable*(*)(::PVOID, ::System::Object*, ::Struct_2_F67EA3F2FFD139F6))((::PBYTE)hIl2Cpp + SOFA_BASESOFACONTROL_BIND_OFFSET))(this, a1, a2);
		}

		::System::Void _AsyncLoadSpriteTo(::UnityEngine::UI::Image* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Image*, ::System::String*))((::PBYTE)hIl2Cpp + SOFA_BASESOFACONTROL__ASYNCLOADSPRITETO_OFFSET))(this, a1, a2);
		}

		::Class_1_3185B7D04F177583* get__ControlHost()
		{
			return ((::Class_1_3185B7D04F177583*(*)(::PVOID))((::PBYTE)hIl2Cpp + SOFA_BASESOFACONTROL_GET__CONTROLHOST_OFFSET))(this);
		}

		::System::Void _get__ControlHost_b__25_0(::Sofa::BaseSofaControl* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Sofa::BaseSofaControl*))((::PBYTE)hIl2Cpp + SOFA_BASESOFACONTROL__GET__CONTROLHOST_B__25_0_OFFSET))(this, a1);
		}
	};
}
