#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UI/UIStateCtrl/MaterialSwitchTarget.h"

namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Component; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MeshRenderer; }

#define RPG_CLIENT_UI_UISTATECTRL_MESHRENDERERMATERIALSWITCHTARGET_METHOD_2_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0xB3A5560)
#define RPG_CLIENT_UI_UISTATECTRL_MESHRENDERERMATERIALSWITCHTARGET_METHOD_2_4FB5F56430673EA6_OFFSET UNITYSDK_OFFSET(0xB3A53E0)
#define RPG_CLIENT_UI_UISTATECTRL_MESHRENDERERMATERIALSWITCHTARGET_METHOD_2_B7BFE5D35A542E8B_OFFSET UNITYSDK_OFFSET(0xB3A55C0)
#define RPG_CLIENT_UI_UISTATECTRL_MESHRENDERERMATERIALSWITCHTARGET_METHOD_2_FC4C9700F424F5C9_OFFSET UNITYSDK_OFFSET(0xB3A5290)
#define RPG_CLIENT_UI_UISTATECTRL_MESHRENDERERMATERIALSWITCHTARGET_METHOD_2_FEC28CECAEED4E11_OFFSET UNITYSDK_OFFSET(0xB3A5450)
#define RPG_CLIENT_UI_UISTATECTRL_MESHRENDERERMATERIALSWITCHTARGET__CTOR_1_OFFSET UNITYSDK_OFFSET(0xB3A5280)
#define RPG_CLIENT_UI_UISTATECTRL_MESHRENDERERMATERIALSWITCHTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0xB3A5270)

namespace RPG::Client::UI::UIStateCtrl
{
	inline static constexpr unsigned int MeshRendererMaterialSwitchTarget_TypeDefinitionIndex = 68181;

	class MeshRendererMaterialSwitchTarget : public ::RPG::Client::UI::UIStateCtrl::MaterialSwitchTarget
	{
	public:
		::UnityEngine::MeshRenderer* TargetRenderer; // 0x10
		::System::Int32 MaterialIndex; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_MESHRENDERERMATERIALSWITCHTARGET__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::UnityEngine::MeshRenderer* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MeshRenderer*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_MESHRENDERERMATERIALSWITCHTARGET__CTOR_1_OFFSET))(this, a1, a2);
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::UI::UIStateCtrl::MaterialSwitchTarget*>* Method_2_FC4C9700F424F5C9(::UnityEngine::Component* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::UI::UIStateCtrl::MaterialSwitchTarget*>*(*)(::UnityEngine::Component*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_MESHRENDERERMATERIALSWITCHTARGET_METHOD_2_FC4C9700F424F5C9_OFFSET))(a1);
		}

		::System::Type* Method_2_4FB5F56430673EA6()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_MESHRENDERERMATERIALSWITCHTARGET_METHOD_2_4FB5F56430673EA6_OFFSET))(this);
		}

		::System::Void Method_2_FEC28CECAEED4E11(::UnityEngine::Material* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_MESHRENDERERMATERIALSWITCHTARGET_METHOD_2_FEC28CECAEED4E11_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_2_1D4018D4200358D0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_MESHRENDERERMATERIALSWITCHTARGET_METHOD_2_1D4018D4200358D0_OFFSET))(this);
		}

		::UnityEngine::GameObject* Method_2_B7BFE5D35A542E8B()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_MESHRENDERERMATERIALSWITCHTARGET_METHOD_2_B7BFE5D35A542E8B_OFFSET))(this);
		}
	};
}
