#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UI/UIStateCtrl/MaterialSwitchTarget.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Component; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine::UI { class Image; }

#define RPG_CLIENT_UI_UISTATECTRL_IMAGEMATERIALSWITCHTARGET_METHOD_2_0AE17D7C4FDD89E0_OFFSET UNITYSDK_OFFSET(0xB3A4680)
#define RPG_CLIENT_UI_UISTATECTRL_IMAGEMATERIALSWITCHTARGET_METHOD_2_0BA6280FFF5A0205_OFFSET UNITYSDK_OFFSET(0xB3A44F0)
#define RPG_CLIENT_UI_UISTATECTRL_IMAGEMATERIALSWITCHTARGET_METHOD_2_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0xB3A4370)
#define RPG_CLIENT_UI_UISTATECTRL_IMAGEMATERIALSWITCHTARGET_METHOD_2_1E1B584909E026DF_OFFSET UNITYSDK_OFFSET(0xB3A3E20)
#define RPG_CLIENT_UI_UISTATECTRL_IMAGEMATERIALSWITCHTARGET_METHOD_2_3AFE2A3ED13F591D_OFFSET UNITYSDK_OFFSET(0xB3A40E0)
#define RPG_CLIENT_UI_UISTATECTRL_IMAGEMATERIALSWITCHTARGET_METHOD_2_4DC6C8223E6D96A4_OFFSET UNITYSDK_OFFSET(0xB3A4430)
#define RPG_CLIENT_UI_UISTATECTRL_IMAGEMATERIALSWITCHTARGET_METHOD_2_4FB5F56430673EA6_OFFSET UNITYSDK_OFFSET(0xB3A3D00)
#define RPG_CLIENT_UI_UISTATECTRL_IMAGEMATERIALSWITCHTARGET_METHOD_2_6D6852DE599DD2A0_OFFSET UNITYSDK_OFFSET(0xB3A3C10)
#define RPG_CLIENT_UI_UISTATECTRL_IMAGEMATERIALSWITCHTARGET_METHOD_2_AC3BD55C31CE6E12_OFFSET UNITYSDK_OFFSET(0xB3A3F60)
#define RPG_CLIENT_UI_UISTATECTRL_IMAGEMATERIALSWITCHTARGET_METHOD_2_B7BFE5D35A542E8B_OFFSET UNITYSDK_OFFSET(0xB3A43D0)
#define RPG_CLIENT_UI_UISTATECTRL_IMAGEMATERIALSWITCHTARGET_METHOD_2_B9C4D591B9874ECB_OFFSET UNITYSDK_OFFSET(0xB3A3D70)
#define RPG_CLIENT_UI_UISTATECTRL_IMAGEMATERIALSWITCHTARGET_METHOD_2_ECAAF8189B4AAE80_OFFSET UNITYSDK_OFFSET(0xB3A45C0)
#define RPG_CLIENT_UI_UISTATECTRL_IMAGEMATERIALSWITCHTARGET_METHOD_2_FBAC2F70799E5CFB_OFFSET UNITYSDK_OFFSET(0xB3A4230)
#define RPG_CLIENT_UI_UISTATECTRL_IMAGEMATERIALSWITCHTARGET__CTOR_1_OFFSET UNITYSDK_OFFSET(0xB3A3C00)
#define RPG_CLIENT_UI_UISTATECTRL_IMAGEMATERIALSWITCHTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0xB3A3BE0)

namespace RPG::Client::UI::UIStateCtrl
{
	inline static constexpr unsigned int ImageMaterialSwitchTarget_TypeDefinitionIndex = 68178;

	class ImageMaterialSwitchTarget : public ::RPG::Client::UI::UIStateCtrl::MaterialSwitchTarget
	{
	public:
		::UnityEngine::UI::Image* TargetImage; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_IMAGEMATERIALSWITCHTARGET__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::UnityEngine::UI::Image* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Image*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_IMAGEMATERIALSWITCHTARGET__CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::UI::UIStateCtrl::MaterialSwitchTarget*>* Method_2_6D6852DE599DD2A0(::UnityEngine::Component* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::UI::UIStateCtrl::MaterialSwitchTarget*>*(*)(::UnityEngine::Component*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_IMAGEMATERIALSWITCHTARGET_METHOD_2_6D6852DE599DD2A0_OFFSET))(a1);
		}

		::System::Type* Method_2_4FB5F56430673EA6()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_IMAGEMATERIALSWITCHTARGET_METHOD_2_4FB5F56430673EA6_OFFSET))(this);
		}

		::System::Void Method_2_B9C4D591B9874ECB(::UnityEngine::Material* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_IMAGEMATERIALSWITCHTARGET_METHOD_2_B9C4D591B9874ECB_OFFSET))(this, a1, a2);
		}

		::System::Void Method_2_1E1B584909E026DF(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_IMAGEMATERIALSWITCHTARGET_METHOD_2_1E1B584909E026DF_OFFSET))(this, a1, a2);
		}

		::System::Void Method_2_AC3BD55C31CE6E12(::System::String* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_IMAGEMATERIALSWITCHTARGET_METHOD_2_AC3BD55C31CE6E12_OFFSET))(this, a1, a2);
		}

		::System::Void Method_2_3AFE2A3ED13F591D(::System::String* a1, ::UnityEngine::Color a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_IMAGEMATERIALSWITCHTARGET_METHOD_2_3AFE2A3ED13F591D_OFFSET))(this, a1, a2);
		}

		::System::Void Method_2_FBAC2F70799E5CFB(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_IMAGEMATERIALSWITCHTARGET_METHOD_2_FBAC2F70799E5CFB_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_2_1D4018D4200358D0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_IMAGEMATERIALSWITCHTARGET_METHOD_2_1D4018D4200358D0_OFFSET))(this);
		}

		::UnityEngine::GameObject* Method_2_B7BFE5D35A542E8B()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_IMAGEMATERIALSWITCHTARGET_METHOD_2_B7BFE5D35A542E8B_OFFSET))(this);
		}

		::System::Void Method_2_4DC6C8223E6D96A4(::System::String* P0, ::System::Single P1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_IMAGEMATERIALSWITCHTARGET_METHOD_2_4DC6C8223E6D96A4_OFFSET))(this, P0, P1);
		}

		::System::Void Method_2_0BA6280FFF5A0205(::System::String* P0, ::UnityEngine::Vector3 P1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_IMAGEMATERIALSWITCHTARGET_METHOD_2_0BA6280FFF5A0205_OFFSET))(this, P0, P1);
		}

		::System::Void Method_2_ECAAF8189B4AAE80(::System::String* P0, ::UnityEngine::Color P1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_IMAGEMATERIALSWITCHTARGET_METHOD_2_ECAAF8189B4AAE80_OFFSET))(this, P0, P1);
		}

		::System::Void Method_2_0AE17D7C4FDD89E0(::System::String* P0, ::System::Boolean P1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_IMAGEMATERIALSWITCHTARGET_METHOD_2_0AE17D7C4FDD89E0_OFFSET))(this, P0, P1);
		}
	};
}
