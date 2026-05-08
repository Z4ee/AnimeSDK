#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ItemCollectEffectType.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_927FD65E44A20102;
class Class_2_953F7F7F60074197;
class Class_4_DA19DD65175B97CF;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole::Config { class ConfigHollowChessboard_ItemCollectConfigData; }
namespace MoleMole::Config { class ConfigHollowChessboard_ItemCollectEffectConfig; }
namespace MoleMole::Config { class ConfigHollowChessboard_ItemCollectLayerConfig; }
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class ParticleSystem; }

#define MOLEMOLE_UIHOLLOWITEMCOLLECTEFFECTWIDGETCONTROLLER_INITCONFIG_OFFSET UNITYSDK_OFFSET(0x15262370)
#define MOLEMOLE_UIHOLLOWITEMCOLLECTEFFECTWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x152622E0)
#define MOLEMOLE_UIHOLLOWITEMCOLLECTEFFECTWIDGETCONTROLLER_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x15263490)
#define MOLEMOLE_UIHOLLOWITEMCOLLECTEFFECTWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15263500)
#define MOLEMOLE_UIHOLLOWITEMCOLLECTEFFECTWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15261C50)
#define MOLEMOLE_UIHOLLOWITEMCOLLECTEFFECTWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x15262270)
#define MOLEMOLE_UIHOLLOWITEMCOLLECTEFFECTWIDGETCONTROLLER_SETPATH_OFFSET UNITYSDK_OFFSET(0x15262DE0)
#define MOLEMOLE_UIHOLLOWITEMCOLLECTEFFECTWIDGETCONTROLLER_SETTYPE_OFFSET UNITYSDK_OFFSET(0x15262410)
#define MOLEMOLE_UIHOLLOWITEMCOLLECTEFFECTWIDGETCONTROLLER_UPDATETEXTUREBYFRAME_OFFSET UNITYSDK_OFFSET(0x15263380)
#define MOLEMOLE_UIHOLLOWITEMCOLLECTEFFECTWIDGETCONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x15263AD0)
#define MOLEMOLE_UIHOLLOWITEMCOLLECTEFFECTWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x15263A50)
#define MOLEMOLE_UIHOLLOWITEMCOLLECTEFFECTWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15263AE0)
#define MOLEMOLE_UIHOLLOWITEMCOLLECTEFFECTWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15263B70)
#define MOLEMOLE_UIHOLLOWITEMCOLLECTEFFECTWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15263C00)
#define MOLEMOLE_UIHOLLOWITEMCOLLECTEFFECTWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x15263C90)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowItemCollectEffectWidgetController_TypeDefinitionIndex = 42465;

	class UIHollowItemCollectEffectWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		static ::System::Int32* StaticGet_CreateIndex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIHollowItemCollectEffectWidgetController_TypeDefinitionIndex)->GetStaticField(0x10D00);
		}
		::Class_2_953F7F7F60074197* _view; // 0x2B8
		::System::Int32 _effectIndex; // 0x2C0
		::System::Int32 _itemId; // 0x2C4
		::UnityEngine::Vector2 InvalidPos; // 0x2C8
		::UnityEngine::Material* _flashWhiteDefaultMat; // 0x2D0
		::System::Int32 ShaderOverrideColorId; // 0x2D8
		::UnityEngine::Material* _iconSeqMaterial; // 0x2E0
		::Class_1_927FD65E44A20102* _iconSeqTexture; // 0x2E8
		::UnityEngine::Material* _shadowSeqMaterial; // 0x2F0
		::Class_1_927FD65E44A20102* _shadowSeqTexture; // 0x2F8
		::UnityEngine::Material* _curIconMaterial; // 0x300
		::MoleMole::Config::ConfigHollowChessboard_ItemCollectConfigData* _itemCollectConfig; // 0x308
		::MoleMole::Config::ConfigHollowChessboard_ItemCollectEffectConfig* _itemCollectEffectConfig; // 0x310
		::System::Single _xRatio; // 0x318
		::System::Single _yRatio; // 0x31C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWITEMCOLLECTEFFECTWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWITEMCOLLECTEFFECTWIDGETCONTROLLER__CCTOR_OFFSET))();
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWITEMCOLLECTEFFECTWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWITEMCOLLECTEFFECTWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWITEMCOLLECTEFFECTWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void InitConfig(::MoleMole::Config::ConfigHollowChessboard_ItemCollectConfigData* config)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigHollowChessboard_ItemCollectConfigData*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWITEMCOLLECTEFFECTWIDGETCONTROLLER_INITCONFIG_OFFSET))(this, config);
		}

		::System::Boolean SetType(::System::Int32 itemId)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWITEMCOLLECTEFFECTWIDGETCONTROLLER_SETTYPE_OFFSET))(this, itemId);
		}

		::System::Void SetPath(::Class_4_DA19DD65175B97CF* piece, ::UnityEngine::Vector3 offset, ::UnityEngine::Vector3 finalPos, ::MoleMole::Config::ConfigHollowChessboard_ItemCollectLayerConfig* layerConfig, ::System::Func_2<::Class_4_DA19DD65175B97CF*, ::UnityEngine::Vector3>* GetPieceIndexUIPos, ::UnityEngine::Color overrideFadeInColor, ::System::Func_2<::MoleMole::ItemCollectEffectType, ::UnityEngine::ParticleSystem*>* getFadeOutEffectParticle, ::System::Action_2<::UnityEngine::ParticleSystem*, ::MoleMole::ItemCollectEffectType>* recycleFadeOutEffectParticle, ::System::Action* finishCallback, ::System::Action* recycleCallback)
		{
			return ((::System::Void(*)(::PVOID, ::Class_4_DA19DD65175B97CF*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::MoleMole::Config::ConfigHollowChessboard_ItemCollectLayerConfig*, ::System::Func_2<::Class_4_DA19DD65175B97CF*, ::UnityEngine::Vector3>*, ::UnityEngine::Color, ::System::Func_2<::MoleMole::ItemCollectEffectType, ::UnityEngine::ParticleSystem*>*, ::System::Action_2<::UnityEngine::ParticleSystem*, ::MoleMole::ItemCollectEffectType>*, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWITEMCOLLECTEFFECTWIDGETCONTROLLER_SETPATH_OFFSET))(this, piece, offset, finalPos, layerConfig, GetPieceIndexUIPos, overrideFadeInColor, getFadeOutEffectParticle, recycleFadeOutEffectParticle, finishCallback, recycleCallback);
		}

		::System::Void UpdateTextureByFrame(::System::Single time)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWITEMCOLLECTEFFECTWIDGETCONTROLLER_UPDATETEXTUREBYFRAME_OFFSET))(this, time);
		}

		::System::Void OnRecycle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWITEMCOLLECTEFFECTWIDGETCONTROLLER_ONRECYCLE_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWITEMCOLLECTEFFECTWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWITEMCOLLECTEFFECTWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWITEMCOLLECTEFFECTWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWITEMCOLLECTEFFECTWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWITEMCOLLECTEFFECTWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
