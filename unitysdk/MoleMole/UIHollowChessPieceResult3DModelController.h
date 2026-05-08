#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIBase3DModelController.h"
#include "unitysdk/MonoHollowResultPageConfig_BlinkConfig.h"
#include "unitysdk/MonoHollowResultPageConfig_HueAndLight.h"
#include "unitysdk/Struct_2_395B739A1AC58399.h"
#include "unitysdk/Struct_2_3BFB14B0511B64BC_2.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_927FD65E44A20102;
class Class_2_D68EC59F0214DAC2_13;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class MeshRenderer; }

#define MOLEMOLE_UIHOLLOWCHESSPIECERESULT3DMODELCONTROLLER_ADJUSTPOS_OFFSET UNITYSDK_OFFSET(0x162E8E10)
#define MOLEMOLE_UIHOLLOWCHESSPIECERESULT3DMODELCONTROLLER_BLINK_OFFSET UNITYSDK_OFFSET(0x162E9170)
#define MOLEMOLE_UIHOLLOWCHESSPIECERESULT3DMODELCONTROLLER_CENTER_OFFSET UNITYSDK_OFFSET(0x162E8BD0)
#define MOLEMOLE_UIHOLLOWCHESSPIECERESULT3DMODELCONTROLLER_GET_BOUNDS_OFFSET UNITYSDK_OFFSET(0x162E85D0)
#define MOLEMOLE_UIHOLLOWCHESSPIECERESULT3DMODELCONTROLLER_GET_FRONTRECTPOINTSWORLD_OFFSET UNITYSDK_OFFSET(0x162E9B00)
#define MOLEMOLE_UIHOLLOWCHESSPIECERESULT3DMODELCONTROLLER_GET_FRONTRECT_OFFSET UNITYSDK_OFFSET(0x162E9990)
#define MOLEMOLE_UIHOLLOWCHESSPIECERESULT3DMODELCONTROLLER_GET_FULLINDEX_OFFSET UNITYSDK_OFFSET(0x162E8700)
#define MOLEMOLE_UIHOLLOWCHESSPIECERESULT3DMODELCONTROLLER_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x162E86F0)
#define MOLEMOLE_UIHOLLOWCHESSPIECERESULT3DMODELCONTROLLER_INIT_OFFSET UNITYSDK_OFFSET(0x162E8A60)
#define MOLEMOLE_UIHOLLOWCHESSPIECERESULT3DMODELCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x162E8710)
#define MOLEMOLE_UIHOLLOWCHESSPIECERESULT3DMODELCONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x162E8900)
#define MOLEMOLE_UIHOLLOWCHESSPIECERESULT3DMODELCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x162E8990)
#define MOLEMOLE_UIHOLLOWCHESSPIECERESULT3DMODELCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x162E87A0)
#define MOLEMOLE_UIHOLLOWCHESSPIECERESULT3DMODELCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x162E88B0)
#define MOLEMOLE_UIHOLLOWCHESSPIECERESULT3DMODELCONTROLLER_PERFORM_OFFSET UNITYSDK_OFFSET(0x162E94D0)
#define MOLEMOLE_UIHOLLOWCHESSPIECERESULT3DMODELCONTROLLER_SETBRIGHTNESS_OFFSET UNITYSDK_OFFSET(0x162E8F50)
#define MOLEMOLE_UIHOLLOWCHESSPIECERESULT3DMODELCONTROLLER_SETSATURATION_OFFSET UNITYSDK_OFFSET(0x162E9060)
#define MOLEMOLE_UIHOLLOWCHESSPIECERESULT3DMODELCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x162E89F0)
#define MOLEMOLE_UIHOLLOWCHESSPIECERESULT3DMODELCONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x162E9DB0)
#define MOLEMOLE_UIHOLLOWCHESSPIECERESULT3DMODELCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x162E9D40)
#define MOLEMOLE_UIHOLLOWCHESSPIECERESULT3DMODELCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x162E9E70)
#define MOLEMOLE_UIHOLLOWCHESSPIECERESULT3DMODELCONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x162E9F00)
#define MOLEMOLE_UIHOLLOWCHESSPIECERESULT3DMODELCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x162E9FC0)
#define MOLEMOLE_UIHOLLOWCHESSPIECERESULT3DMODELCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x162E9FD0)
#define MOLEMOLE_UIHOLLOWCHESSPIECERESULT3DMODELCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x162E9FE0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowChessPieceResult3DModelController_TypeDefinitionIndex = 78397;

	class UIHollowChessPieceResult3DModelController : public ::MoleMole::UIBase3DModelController
	{
	public:
		static ::System::Int32* StaticGet_MatSccSaturationID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIHollowChessPieceResult3DModelController_TypeDefinitionIndex)->GetStaticField(0xAB00);
		}
		static ::System::Int32* StaticGet_MatScreenHueID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIHollowChessPieceResult3DModelController_TypeDefinitionIndex)->GetStaticField(0xAB04);
		}
		static ::System::Int32* StaticGet_MatCustomScreenMapSeq_STId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIHollowChessPieceResult3DModelController_TypeDefinitionIndex)->GetStaticField(0xAB08);
		}
		static ::System::Int32* StaticGet_MatOverallOpacity()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIHollowChessPieceResult3DModelController_TypeDefinitionIndex)->GetStaticField(0xAB0C);
		}
		static ::System::Int32* StaticGet_MatScreenColorID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIHollowChessPieceResult3DModelController_TypeDefinitionIndex)->GetStaticField(0xAB10);
		}
		static ::System::Int32* StaticGet_MatUVAnimationForSequenceToggleId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIHollowChessPieceResult3DModelController_TypeDefinitionIndex)->GetStaticField(0xAB14);
		}
		static ::System::Int32* StaticGet_MatScreenBrightID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIHollowChessPieceResult3DModelController_TypeDefinitionIndex)->GetStaticField(0xAB18);
		}
		::Class_2_D68EC59F0214DAC2_13* _view; // 0x358
		::Class_1_927FD65E44A20102* _textureSheetAnimation; // 0x360
		::System::Int16 _index; // 0x368
		::System::Int16 _fullIndex; // 0x36A
		::UnityEngine::MeshRenderer* _meshRenderer; // 0x370

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSPIECERESULT3DMODELCONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSPIECERESULT3DMODELCONTROLLER__CCTOR_OFFSET))();
		}

		::UnityEngine::Bounds get_bounds()
		{
			return ((::UnityEngine::Bounds(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSPIECERESULT3DMODELCONTROLLER_GET_BOUNDS_OFFSET))(this);
		}

		::System::Int16 get_Index()
		{
			return ((::System::Int16(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSPIECERESULT3DMODELCONTROLLER_GET_INDEX_OFFSET))(this);
		}

		::System::Int16 get_FullIndex()
		{
			return ((::System::Int16(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSPIECERESULT3DMODELCONTROLLER_GET_FULLINDEX_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSPIECERESULT3DMODELCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSPIECERESULT3DMODELCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSPIECERESULT3DMODELCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSPIECERESULT3DMODELCONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSPIECERESULT3DMODELCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSPIECERESULT3DMODELCONTROLLER_UPDATE_OFFSET))(this);
		}

		::System::Void Init(::System::Int16 idx, ::System::Int16 fullIdx)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int16, ::System::Int16))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSPIECERESULT3DMODELCONTROLLER_INIT_OFFSET))(this, idx, fullIdx);
		}

		::System::Void Center()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSPIECERESULT3DMODELCONTROLLER_CENTER_OFFSET))(this);
		}

		::System::Void AdjustPos(::UnityEngine::Vector3 worldPosOffset)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSPIECERESULT3DMODELCONTROLLER_ADJUSTPOS_OFFSET))(this, worldPosOffset);
		}

		::System::Void SetBrightness(::System::Single v)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSPIECERESULT3DMODELCONTROLLER_SETBRIGHTNESS_OFFSET))(this, v);
		}

		::System::Void SetSaturation(::System::Single v)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSPIECERESULT3DMODELCONTROLLER_SETSATURATION_OFFSET))(this, v);
		}

		::System::Void Blink(::System::Collections::Generic::List_1<::System::String*>* pool, ::MonoHollowResultPageConfig_BlinkConfig config, ::UnityEngine::Color blinkColor, ::MonoHollowResultPageConfig_HueAndLight hue1, ::System::Single hue2, ::System::Single saturationCon)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*, ::MonoHollowResultPageConfig_BlinkConfig, ::UnityEngine::Color, ::MonoHollowResultPageConfig_HueAndLight, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSPIECERESULT3DMODELCONTROLLER_BLINK_OFFSET))(this, pool, config, blinkColor, hue1, hue2, saturationCon);
		}

		::System::Void Perform(::System::Collections::Generic::List_1<::System::String*>* pool, ::System::Int32 textIndex, ::UnityEngine::Color blinkColor, ::System::Single hue2, ::System::Single saturationCon, ::System::Single brightness)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Int32, ::UnityEngine::Color, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSPIECERESULT3DMODELCONTROLLER_PERFORM_OFFSET))(this, pool, textIndex, blinkColor, hue2, saturationCon, brightness);
		}

		::Struct_2_3BFB14B0511B64BC_2 get_FrontRect()
		{
			return ((::Struct_2_3BFB14B0511B64BC_2(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSPIECERESULT3DMODELCONTROLLER_GET_FRONTRECT_OFFSET))(this);
		}

		::Struct_2_395B739A1AC58399 get_FrontRectPointsWorld()
		{
			return ((::Struct_2_395B739A1AC58399(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSPIECERESULT3DMODELCONTROLLER_GET_FRONTRECTPOINTSWORLD_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSPIECERESULT3DMODELCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSPIECERESULT3DMODELCONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSPIECERESULT3DMODELCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSPIECERESULT3DMODELCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSPIECERESULT3DMODELCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
