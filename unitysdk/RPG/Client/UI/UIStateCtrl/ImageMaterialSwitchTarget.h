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

#define RPG_CLIENT_UI_UISTATECTRL_IMAGEMATERIALSWITCHTARGET_METHOD_2_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0xCB04160)
#define RPG_CLIENT_UI_UISTATECTRL_IMAGEMATERIALSWITCHTARGET_METHOD_2_1E1B584909E026DF_OFFSET UNITYSDK_OFFSET(0xCB03C10)
#define RPG_CLIENT_UI_UISTATECTRL_IMAGEMATERIALSWITCHTARGET_METHOD_2_29ED79A4693535A3_OFFSET UNITYSDK_OFFSET(0xCB04220)
#define RPG_CLIENT_UI_UISTATECTRL_IMAGEMATERIALSWITCHTARGET_METHOD_2_2D99CA5EA537015F_OFFSET UNITYSDK_OFFSET(0xCB039B0)
#define RPG_CLIENT_UI_UISTATECTRL_IMAGEMATERIALSWITCHTARGET_METHOD_2_3AFE2A3ED13F591D_OFFSET UNITYSDK_OFFSET(0xCB03ED0)
#define RPG_CLIENT_UI_UISTATECTRL_IMAGEMATERIALSWITCHTARGET_METHOD_2_4FB5F56430673EA6_OFFSET UNITYSDK_OFFSET(0xCB03B00)
#define RPG_CLIENT_UI_UISTATECTRL_IMAGEMATERIALSWITCHTARGET_METHOD_2_6424DA16BE1ACD1D_OFFSET UNITYSDK_OFFSET(0xCB04470)
#define RPG_CLIENT_UI_UISTATECTRL_IMAGEMATERIALSWITCHTARGET_METHOD_2_9266F3BE59C4767E_OFFSET UNITYSDK_OFFSET(0xCB042E0)
#define RPG_CLIENT_UI_UISTATECTRL_IMAGEMATERIALSWITCHTARGET_METHOD_2_AC3BD55C31CE6E12_OFFSET UNITYSDK_OFFSET(0xCB03D50)
#define RPG_CLIENT_UI_UISTATECTRL_IMAGEMATERIALSWITCHTARGET_METHOD_2_B7BFE5D35A542E8B_OFFSET UNITYSDK_OFFSET(0xCB041C0)
#define RPG_CLIENT_UI_UISTATECTRL_IMAGEMATERIALSWITCHTARGET_METHOD_2_B9C4D591B9874ECB_OFFSET UNITYSDK_OFFSET(0xCB03B60)
#define RPG_CLIENT_UI_UISTATECTRL_IMAGEMATERIALSWITCHTARGET_METHOD_2_C0E38207B3D4D2DF_OFFSET UNITYSDK_OFFSET(0xCB043B0)
#define RPG_CLIENT_UI_UISTATECTRL_IMAGEMATERIALSWITCHTARGET_METHOD_2_FBAC2F70799E5CFB_OFFSET UNITYSDK_OFFSET(0xCB04020)
#define RPG_CLIENT_UI_UISTATECTRL_IMAGEMATERIALSWITCHTARGET__CTOR_1_OFFSET UNITYSDK_OFFSET(0xCB039A0)
#define RPG_CLIENT_UI_UISTATECTRL_IMAGEMATERIALSWITCHTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0xCB03980)

namespace RPG::Client::UI::UIStateCtrl
{
	inline static constexpr unsigned int ImageMaterialSwitchTarget_TypeDefinitionIndex = 69152;

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

		static ::System::Collections::Generic::List_1<::RPG::Client::UI::UIStateCtrl::MaterialSwitchTarget*>* Method_2_2D99CA5EA537015F(::UnityEngine::Component* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::UI::UIStateCtrl::MaterialSwitchTarget*>*(*)(::UnityEngine::Component*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_IMAGEMATERIALSWITCHTARGET_METHOD_2_2D99CA5EA537015F_OFFSET))(a1);
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

		::System::Void Method_2_29ED79A4693535A3(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_IMAGEMATERIALSWITCHTARGET_METHOD_2_29ED79A4693535A3_OFFSET))(this, a1, a2);
		}

		::System::Void Method_2_9266F3BE59C4767E(::System::String* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_IMAGEMATERIALSWITCHTARGET_METHOD_2_9266F3BE59C4767E_OFFSET))(this, a1, a2);
		}

		::System::Void Method_2_C0E38207B3D4D2DF(::System::String* a1, ::UnityEngine::Color a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_IMAGEMATERIALSWITCHTARGET_METHOD_2_C0E38207B3D4D2DF_OFFSET))(this, a1, a2);
		}

		::System::Void Method_2_6424DA16BE1ACD1D(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_IMAGEMATERIALSWITCHTARGET_METHOD_2_6424DA16BE1ACD1D_OFFSET))(this, a1, a2);
		}
	};
}
