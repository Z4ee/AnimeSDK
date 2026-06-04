#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PenaconyEndmostChronicleEventType.h"
#include "unitysdk/RPG/Client/PenaconyEndmostChronicleOpenType.h"
#include "unitysdk/RPG/Client/UIController_TransitionStyle.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class PenaconyEndmostChronicleEvent; }
namespace RPG::Client { class PenaconyEndmostChronicleMoveAnimData; }
namespace RPG::Client { class PenaconyEndmostChroniclePathData; }
namespace RPG::Client { class UIController; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace TMPro { class TMP_FontAsset; }
namespace XLua { class LuaTable; }

#define RPG_CLIENT_PENACONYENDMOSTCHRONICLECONTEXT_ASYNCSHOWENDMOSTCHRONICLEPAGE_OFFSET UNITYSDK_OFFSET(0xC356000)
#define RPG_CLIENT_PENACONYENDMOSTCHRONICLECONTEXT_CREATEDEFAULT_OFFSET UNITYSDK_OFFSET(0xC355F80)
#define RPG_CLIENT_PENACONYENDMOSTCHRONICLECONTEXT_CREATE_OFFSET UNITYSDK_OFFSET(0xC355EF0)
#define RPG_CLIENT_PENACONYENDMOSTCHRONICLECONTEXT_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC356370)
#define RPG_CLIENT_PENACONYENDMOSTCHRONICLECONTEXT_FIREEVENT_OFFSET UNITYSDK_OFFSET(0xC356400)
#define RPG_CLIENT_PENACONYENDMOSTCHRONICLECONTEXT_GETCHAPTERID_OFFSET UNITYSDK_OFFSET(0xC356DF0)
#define RPG_CLIENT_PENACONYENDMOSTCHRONICLECONTEXT_GETSDFFONTASSET_OFFSET UNITYSDK_OFFSET(0xC356E90)
#define RPG_CLIENT_PENACONYENDMOSTCHRONICLECONTEXT_GET_INITPOSITIONCONFIG_OFFSET UNITYSDK_OFFSET(0xC357040)
#define RPG_CLIENT_PENACONYENDMOSTCHRONICLECONTEXT_GET_INITSCALE_OFFSET UNITYSDK_OFFSET(0xC357020)
#define RPG_CLIENT_PENACONYENDMOSTCHRONICLECONTEXT_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0xC357000)
#define RPG_CLIENT_PENACONYENDMOSTCHRONICLECONTEXT_GET_INTERACTABLE_OFFSET UNITYSDK_OFFSET(0xC357060)
#define RPG_CLIENT_PENACONYENDMOSTCHRONICLECONTEXT_GET_ISINPERFORMANCE_OFFSET UNITYSDK_OFFSET(0xC357080)
#define RPG_CLIENT_PENACONYENDMOSTCHRONICLECONTEXT_GET_ISOPENMISSIONDETAIL_OFFSET UNITYSDK_OFFSET(0xC3570A0)
#define RPG_CLIENT_PENACONYENDMOSTCHRONICLECONTEXT_GET_OPENTYPE_OFFSET UNITYSDK_OFFSET(0xC3570C0)
#define RPG_CLIENT_PENACONYENDMOSTCHRONICLECONTEXT_GET_TRANSITIONSTYLE_OFFSET UNITYSDK_OFFSET(0xC3570E0)
#define RPG_CLIENT_PENACONYENDMOSTCHRONICLECONTEXT_HASCONNECTION_OFFSET UNITYSDK_OFFSET(0xC3568C0)
#define RPG_CLIENT_PENACONYENDMOSTCHRONICLECONTEXT_ISCHRONICLEPATHDATASHOWBYID_OFFSET UNITYSDK_OFFSET(0xC3566F0)
#define RPG_CLIENT_PENACONYENDMOSTCHRONICLECONTEXT_ISCHRONICLEPATHDATASHOW_OFFSET UNITYSDK_OFFSET(0xC3565C0)
#define RPG_CLIENT_PENACONYENDMOSTCHRONICLECONTEXT_ISDISABLEGOTO_OFFSET UNITYSDK_OFFSET(0xC356C70)
#define RPG_CLIENT_PENACONYENDMOSTCHRONICLECONTEXT_REGISTEREVENTHANDLER_OFFSET UNITYSDK_OFFSET(0xC356560)
#define RPG_CLIENT_PENACONYENDMOSTCHRONICLECONTEXT_REMOVECUSTOMHIDECHRONICLEID_OFFSET UNITYSDK_OFFSET(0xC356B40)
#define RPG_CLIENT_PENACONYENDMOSTCHRONICLECONTEXT_SETCUSTOMHIDECHRONICLEIDS_OFFSET UNITYSDK_OFFSET(0xC356A10)
#define RPG_CLIENT_PENACONYENDMOSTCHRONICLECONTEXT_SETINTERACTABLE_OFFSET UNITYSDK_OFFSET(0xC356BA0)
#define RPG_CLIENT_PENACONYENDMOSTCHRONICLECONTEXT_SETISINPERFORMANCE_OFFSET UNITYSDK_OFFSET(0xC356BF0)
#define RPG_CLIENT_PENACONYENDMOSTCHRONICLECONTEXT_SET_INITPOSITIONCONFIG_OFFSET UNITYSDK_OFFSET(0xC357050)
#define RPG_CLIENT_PENACONYENDMOSTCHRONICLECONTEXT_SET_INITSCALE_OFFSET UNITYSDK_OFFSET(0xC357030)
#define RPG_CLIENT_PENACONYENDMOSTCHRONICLECONTEXT_SET_INSTANCE_OFFSET UNITYSDK_OFFSET(0xC357010)
#define RPG_CLIENT_PENACONYENDMOSTCHRONICLECONTEXT_SET_INTERACTABLE_OFFSET UNITYSDK_OFFSET(0xC357070)
#define RPG_CLIENT_PENACONYENDMOSTCHRONICLECONTEXT_SET_ISINPERFORMANCE_OFFSET UNITYSDK_OFFSET(0xC357090)
#define RPG_CLIENT_PENACONYENDMOSTCHRONICLECONTEXT_SET_ISOPENMISSIONDETAIL_OFFSET UNITYSDK_OFFSET(0xC3570B0)
#define RPG_CLIENT_PENACONYENDMOSTCHRONICLECONTEXT_SET_OPENTYPE_OFFSET UNITYSDK_OFFSET(0xC3570D0)
#define RPG_CLIENT_PENACONYENDMOSTCHRONICLECONTEXT_SET_TRANSITIONSTYLE_OFFSET UNITYSDK_OFFSET(0xC3570F0)
#define RPG_CLIENT_PENACONYENDMOSTCHRONICLECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xC355ED0)
#define RPG_CLIENT_PENACONYENDMOSTCHRONICLECONTEXT__ISCHRONICLEPATHHIDE_OFFSET UNITYSDK_OFFSET(0xC356680)

namespace RPG::Client
{
	inline static constexpr unsigned int PenaconyEndmostChronicleContext_TypeDefinitionIndex = 61799;

	class PenaconyEndmostChronicleContext : public ::System::Object
	{
	public:
		static ::RPG::Client::PenaconyEndmostChronicleContext** StaticGet__Instance_k__BackingField()
		{
			return (::RPG::Client::PenaconyEndmostChronicleContext**)Il2CppClass::FromTypeDefinitionIndex(PenaconyEndmostChronicleContext_TypeDefinitionIndex)->GetStaticField(0x2EC0);
		}
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _CustomHideChronicleIDs; // 0x10
		::XLua::LuaTable* _LuaTable; // 0x18
		::RPG::Client::PenaconyEndmostChronicleMoveAnimData* _InitPositionConfig_k__BackingField; // 0x20
		::TMPro::TMP_FontAsset* _SDFFontAsset; // 0x28
		::System::Action_2<::XLua::LuaTable*, ::RPG::Client::PenaconyEndmostChronicleEvent*>* _OnEvent; // 0x30
		::RPG::Client::UIController_TransitionStyle _TransitionStyle_k__BackingField; // 0x38
		::System::Single _InitScale_k__BackingField; // 0x3C
		::System::Boolean _IsInPerformance_k__BackingField; // 0x40
		::System::Boolean _IsOpenMissionDetail_k__BackingField; // 0x41
		::System::Boolean _Interactable_k__BackingField; // 0x42
		::RPG::Client::PenaconyEndmostChronicleOpenType _OpenType_k__BackingField; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PENACONYENDMOSTCHRONICLECONTEXT__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::PenaconyEndmostChronicleContext* Create()
		{
			return ((::RPG::Client::PenaconyEndmostChronicleContext*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PENACONYENDMOSTCHRONICLECONTEXT_CREATE_OFFSET))();
		}

		static ::RPG::Client::PenaconyEndmostChronicleContext* CreateDefault()
		{
			return ((::RPG::Client::PenaconyEndmostChronicleContext*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PENACONYENDMOSTCHRONICLECONTEXT_CREATEDEFAULT_OFFSET))();
		}

		static ::RPG::Client::UIController* AsyncShowEndmostChroniclePage(::RPG::Client::PenaconyEndmostChronicleOpenType a1, ::RPG::Client::PenaconyEndmostChronicleContext* a2, ::System::Boolean a3)
		{
			return ((::RPG::Client::UIController*(*)(::RPG::Client::PenaconyEndmostChronicleOpenType, ::RPG::Client::PenaconyEndmostChronicleContext*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PENACONYENDMOSTCHRONICLECONTEXT_ASYNCSHOWENDMOSTCHRONICLEPAGE_OFFSET))(a1, a2, a3);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PENACONYENDMOSTCHRONICLECONTEXT_DISPOSE_OFFSET))(this);
		}

		::System::Void FireEvent(::RPG::Client::PenaconyEndmostChronicleEventType a1, ::System::Object* a2, ::System::Action* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PenaconyEndmostChronicleEventType, ::System::Object*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PENACONYENDMOSTCHRONICLECONTEXT_FIREEVENT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void RegisterEventHandler(::System::Action_2<::XLua::LuaTable*, ::RPG::Client::PenaconyEndmostChronicleEvent*>* a1, ::XLua::LuaTable* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::XLua::LuaTable*, ::RPG::Client::PenaconyEndmostChronicleEvent*>*, ::XLua::LuaTable*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PENACONYENDMOSTCHRONICLECONTEXT_REGISTEREVENTHANDLER_OFFSET))(this, a1, a2);
		}

		::System::Boolean IsChroniclePathDataShow(::RPG::Client::PenaconyEndmostChroniclePathData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::PenaconyEndmostChroniclePathData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PENACONYENDMOSTCHRONICLECONTEXT_ISCHRONICLEPATHDATASHOW_OFFSET))(this, a1);
		}

		::System::Boolean IsChroniclePathDataShowByID(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PENACONYENDMOSTCHRONICLECONTEXT_ISCHRONICLEPATHDATASHOWBYID_OFFSET))(this, a1);
		}

		::System::Boolean HasConnection(::RPG::Client::PenaconyEndmostChroniclePathData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::PenaconyEndmostChroniclePathData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PENACONYENDMOSTCHRONICLECONTEXT_HASCONNECTION_OFFSET))(this, a1);
		}

		::System::Void SetCustomHideChronicleIDs(::System::Collections::Generic::IList_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PENACONYENDMOSTCHRONICLECONTEXT_SETCUSTOMHIDECHRONICLEIDS_OFFSET))(this, a1);
		}

		::System::Void RemoveCustomHideChronicleID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PENACONYENDMOSTCHRONICLECONTEXT_REMOVECUSTOMHIDECHRONICLEID_OFFSET))(this, a1);
		}

		::System::Void SetInteractable(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PENACONYENDMOSTCHRONICLECONTEXT_SETINTERACTABLE_OFFSET))(this, a1);
		}

		::System::Void SetIsInPerformance(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PENACONYENDMOSTCHRONICLECONTEXT_SETISINPERFORMANCE_OFFSET))(this, a1);
		}

		::System::Boolean IsDisableGoto(::System::String*& a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_PENACONYENDMOSTCHRONICLECONTEXT_ISDISABLEGOTO_OFFSET))(this, a1);
		}

		::System::UInt32 GetChapterID(::RPG::Client::PenaconyEndmostChroniclePathData* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::PenaconyEndmostChroniclePathData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PENACONYENDMOSTCHRONICLECONTEXT_GETCHAPTERID_OFFSET))(this, a1);
		}

		::TMPro::TMP_FontAsset* GetSDFFontAsset()
		{
			return ((::TMPro::TMP_FontAsset*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PENACONYENDMOSTCHRONICLECONTEXT_GETSDFFONTASSET_OFFSET))(this);
		}

		::System::Boolean _IsChroniclePathHide(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PENACONYENDMOSTCHRONICLECONTEXT__ISCHRONICLEPATHHIDE_OFFSET))(this, a1);
		}

		static ::RPG::Client::PenaconyEndmostChronicleContext* get_Instance()
		{
			return ((::RPG::Client::PenaconyEndmostChronicleContext*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PENACONYENDMOSTCHRONICLECONTEXT_GET_INSTANCE_OFFSET))();
		}

		static ::System::Void set_Instance(::RPG::Client::PenaconyEndmostChronicleContext* a1)
		{
			return ((::System::Void(*)(::RPG::Client::PenaconyEndmostChronicleContext*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PENACONYENDMOSTCHRONICLECONTEXT_SET_INSTANCE_OFFSET))(a1);
		}

		::System::Single get_InitScale()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PENACONYENDMOSTCHRONICLECONTEXT_GET_INITSCALE_OFFSET))(this);
		}

		::System::Void set_InitScale(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PENACONYENDMOSTCHRONICLECONTEXT_SET_INITSCALE_OFFSET))(this, a1);
		}

		::RPG::Client::PenaconyEndmostChronicleMoveAnimData* get_InitPositionConfig()
		{
			return ((::RPG::Client::PenaconyEndmostChronicleMoveAnimData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PENACONYENDMOSTCHRONICLECONTEXT_GET_INITPOSITIONCONFIG_OFFSET))(this);
		}

		::System::Void set_InitPositionConfig(::RPG::Client::PenaconyEndmostChronicleMoveAnimData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PenaconyEndmostChronicleMoveAnimData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PENACONYENDMOSTCHRONICLECONTEXT_SET_INITPOSITIONCONFIG_OFFSET))(this, a1);
		}

		::System::Boolean get_Interactable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PENACONYENDMOSTCHRONICLECONTEXT_GET_INTERACTABLE_OFFSET))(this);
		}

		::System::Void set_Interactable(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PENACONYENDMOSTCHRONICLECONTEXT_SET_INTERACTABLE_OFFSET))(this, a1);
		}

		::System::Boolean get_IsInPerformance()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PENACONYENDMOSTCHRONICLECONTEXT_GET_ISINPERFORMANCE_OFFSET))(this);
		}

		::System::Void set_IsInPerformance(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PENACONYENDMOSTCHRONICLECONTEXT_SET_ISINPERFORMANCE_OFFSET))(this, a1);
		}

		::System::Boolean get_IsOpenMissionDetail()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PENACONYENDMOSTCHRONICLECONTEXT_GET_ISOPENMISSIONDETAIL_OFFSET))(this);
		}

		::System::Void set_IsOpenMissionDetail(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PENACONYENDMOSTCHRONICLECONTEXT_SET_ISOPENMISSIONDETAIL_OFFSET))(this, a1);
		}

		::RPG::Client::PenaconyEndmostChronicleOpenType get_OpenType()
		{
			return ((::RPG::Client::PenaconyEndmostChronicleOpenType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PENACONYENDMOSTCHRONICLECONTEXT_GET_OPENTYPE_OFFSET))(this);
		}

		::System::Void set_OpenType(::RPG::Client::PenaconyEndmostChronicleOpenType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PenaconyEndmostChronicleOpenType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PENACONYENDMOSTCHRONICLECONTEXT_SET_OPENTYPE_OFFSET))(this, a1);
		}

		::RPG::Client::UIController_TransitionStyle get_TransitionStyle()
		{
			return ((::RPG::Client::UIController_TransitionStyle(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PENACONYENDMOSTCHRONICLECONTEXT_GET_TRANSITIONSTYLE_OFFSET))(this);
		}

		::System::Void set_TransitionStyle(::RPG::Client::UIController_TransitionStyle a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController_TransitionStyle))((::PBYTE)hIl2Cpp + RPG_CLIENT_PENACONYENDMOSTCHRONICLECONTEXT_SET_TRANSITIONSTYLE_OFFSET))(this, a1);
		}
	};
}
