#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_7F489DAFAFC6BD02;
class Class_1_A047EA5169B6B30F;
class Class_1_E9529ED64113E4E9;
class Class_2_0A55B5A82A61DAFA;
class Class_2_1A39E1B51756BF41;
class Class_2_208CC9941471731A_406;
class Class_2_3015A1CEA116F463;
class Class_2_47BEEACD66EA947F;
class Class_2_79AE422BA06F6D26_110;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIHollowTaskDialogPopWindowController; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine::UI { class RawImage; }

#define MOLEMOLE_UIROLECHALLENGEVIDEOINFOWIDGETCONTROLLER_CLOSEVIDEO_OFFSET UNITYSDK_OFFSET(0x1380AAC0)
#define MOLEMOLE_UIROLECHALLENGEVIDEOINFOWIDGETCONTROLLER_GETYOROZUYAVIDEOURL_OFFSET UNITYSDK_OFFSET(0x1380A530)
#define MOLEMOLE_UIROLECHALLENGEVIDEOINFOWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x13808B10)
#define MOLEMOLE_UIROLECHALLENGEVIDEOINFOWIDGETCONTROLLER_ONHIDE_OFFSET UNITYSDK_OFFSET(0x1380B320)
#define MOLEMOLE_UIROLECHALLENGEVIDEOINFOWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1380B3A0)
#define MOLEMOLE_UIROLECHALLENGEVIDEOINFOWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x13808BA0)
#define MOLEMOLE_UIROLECHALLENGEVIDEOINFOWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x13808F80)
#define MOLEMOLE_UIROLECHALLENGEVIDEOINFOWIDGETCONTROLLER_OVERRIDELOOPTEXT_OFFSET UNITYSDK_OFFSET(0x1380AD00)
#define MOLEMOLE_UIROLECHALLENGEVIDEOINFOWIDGETCONTROLLER_PLAYMAPLOGO_OFFSET UNITYSDK_OFFSET(0x1380B1F0)
#define MOLEMOLE_UIROLECHALLENGEVIDEOINFOWIDGETCONTROLLER_SETLEVELINFO_OFFSET UNITYSDK_OFFSET(0x13809410)
#define MOLEMOLE_UIROLECHALLENGEVIDEOINFOWIDGETCONTROLLER_SETLOGOINFO_OFFSET UNITYSDK_OFFSET(0x13809BA0)
#define MOLEMOLE_UIROLECHALLENGEVIDEOINFOWIDGETCONTROLLER_SETNOISE_OFFSET UNITYSDK_OFFSET(0x1380AD50)
#define MOLEMOLE_UIROLECHALLENGEVIDEOINFOWIDGETCONTROLLER_SETPROGRESS_OFFSET UNITYSDK_OFFSET(0x13809D30)
#define MOLEMOLE_UIROLECHALLENGEVIDEOINFOWIDGETCONTROLLER_SETTIMECOST_OFFSET UNITYSDK_OFFSET(0x1380A970)
#define MOLEMOLE_UIROLECHALLENGEVIDEOINFOWIDGETCONTROLLER_SETVIDEINFO_OFFSET UNITYSDK_OFFSET(0x13809680)
#define MOLEMOLE_UIROLECHALLENGEVIDEOINFOWIDGETCONTROLLER_UPDATELEFTVIEW_OFFSET UNITYSDK_OFFSET(0x13808FF0)
#define MOLEMOLE_UIROLECHALLENGEVIDEOINFOWIDGETCONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1380B740)
#define MOLEMOLE_UIROLECHALLENGEVIDEOINFOWIDGETCONTROLLER__CLOSEVIDEO_B__14_0_OFFSET UNITYSDK_OFFSET(0x1380B7A0)
#define MOLEMOLE_UIROLECHALLENGEVIDEOINFOWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1380B600)
#define MOLEMOLE_UIROLECHALLENGEVIDEOINFOWIDGETCONTROLLER__SETVIDEINFO_B__7_0_OFFSET UNITYSDK_OFFSET(0x1380B760)
#define MOLEMOLE_UIROLECHALLENGEVIDEOINFOWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1380B7D0)
#define MOLEMOLE_UIROLECHALLENGEVIDEOINFOWIDGETCONTROLLER___BASE_ONHIDE_OFFSET UNITYSDK_OFFSET(0x1380B860)
#define MOLEMOLE_UIROLECHALLENGEVIDEOINFOWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1380B8F0)
#define MOLEMOLE_UIROLECHALLENGEVIDEOINFOWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1380B980)
#define MOLEMOLE_UIROLECHALLENGEVIDEOINFOWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1380BA10)

namespace MoleMole
{
	inline static constexpr unsigned int UIRoleChallengeVideoInfoWidgetController_TypeDefinitionIndex = 77002;

	class UIRoleChallengeVideoInfoWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		static ::UnityEngine::Vector3* StaticGet_DEFAULT_NEEDLE_ANGLE()
		{
			return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(UIRoleChallengeVideoInfoWidgetController_TypeDefinitionIndex)->GetStaticField(0x128E0);
		}
		// static const ::System::Int32 MAX_RECOMMENDEDHITTYPES_COUNT = 0x2; // 0x0
		// static const ::System::Int32 MAX_HOLLOW_ABILITY_TAGS_COUNT = 0x3; // 0x0
		::Class_2_79AE422BA06F6D26_110* _view; // 0x2C0
		::System::Int32 hangState; // 0x2C8
		::System::Collections::Generic::List_1<::Class_1_7F489DAFAFC6BD02*>* challInfoList; // 0x2D0
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* lastSelectVideoDir; // 0x2D8
		::UnityEngine::UI::RawImage* _videoRawImg; // 0x2E0
		::Foundation::AssetRequestHandle _videoRequest; // 0x2E8
		::Class_1_E9529ED64113E4E9* _playerHelper; // 0x308
		::Il2CppArray<::Class_2_1A39E1B51756BF41*>* _rewardTypeIcons; // 0x310
		::Class_2_0A55B5A82A61DAFA* _selectQuestConfig; // 0x318
		::Class_2_208CC9941471731A_406* _selectHollowExcelConfig; // 0x320
		::Class_1_A047EA5169B6B30F* _selectQuestInfo; // 0x328
		::Class_2_3015A1CEA116F463* questModel; // 0x330
		::Class_2_47BEEACD66EA947F* _yorozuyaModel; // 0x338
		::System::Boolean isOpenVideoPanel; // 0x340
		::System::UInt32 leftVideoSoundPlayID; // 0x344
		::MoleMole::UIHollowTaskDialogPopWindowController* _taskDialog; // 0x348
		::UnityEngine::Material* difficutyVideoMaterial; // 0x350
		::Foundation::AssetRequestHandle _aniCloneMatHandle; // 0x358
		::System::String* lastNeedleType; // 0x378

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLECHALLENGEVIDEOINFOWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLECHALLENGEVIDEOINFOWIDGETCONTROLLER__CCTOR_OFFSET))();
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLECHALLENGEVIDEOINFOWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLECHALLENGEVIDEOINFOWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLECHALLENGEVIDEOINFOWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void UpdateLeftView(::Class_2_0A55B5A82A61DAFA* _questConfig)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_0A55B5A82A61DAFA*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLECHALLENGEVIDEOINFOWIDGETCONTROLLER_UPDATELEFTVIEW_OFFSET))(this, _questConfig);
		}

		::System::Void SetVideInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLECHALLENGEVIDEOINFOWIDGETCONTROLLER_SETVIDEINFO_OFFSET))(this);
		}

		::System::String* GetYorozuyaVideoUrl(::System::Int32 hollowConfigID)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLECHALLENGEVIDEOINFOWIDGETCONTROLLER_GETYOROZUYAVIDEOURL_OFFSET))(this, hollowConfigID);
		}

		::System::Void SetProgress()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLECHALLENGEVIDEOINFOWIDGETCONTROLLER_SETPROGRESS_OFFSET))(this);
		}

		::System::Void SetTimeCost(::System::Int32 c)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLECHALLENGEVIDEOINFOWIDGETCONTROLLER_SETTIMECOST_OFFSET))(this, c);
		}

		::System::Void SetLogoInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLECHALLENGEVIDEOINFOWIDGETCONTROLLER_SETLOGOINFO_OFFSET))(this);
		}

		::System::Void SetLevelInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLECHALLENGEVIDEOINFOWIDGETCONTROLLER_SETLEVELINFO_OFFSET))(this);
		}

		::System::Void CloseVideo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLECHALLENGEVIDEOINFOWIDGETCONTROLLER_CLOSEVIDEO_OFFSET))(this);
		}

		::System::Void OverrideLoopText(::System::String* text)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLECHALLENGEVIDEOINFOWIDGETCONTROLLER_OVERRIDELOOPTEXT_OFFSET))(this, text);
		}

		::System::Void SetNoise()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLECHALLENGEVIDEOINFOWIDGETCONTROLLER_SETNOISE_OFFSET))(this);
		}

		::System::Void PlayMapLogo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLECHALLENGEVIDEOINFOWIDGETCONTROLLER_PLAYMAPLOGO_OFFSET))(this);
		}

		::System::Void OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLECHALLENGEVIDEOINFOWIDGETCONTROLLER_ONHIDE_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLECHALLENGEVIDEOINFOWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void _SetVideInfo_b__7_0(::Class_1_E9529ED64113E4E9* vp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_E9529ED64113E4E9*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLECHALLENGEVIDEOINFOWIDGETCONTROLLER__SETVIDEINFO_B__7_0_OFFSET))(this, vp);
		}

		::System::Void _CloseVideo_b__14_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLECHALLENGEVIDEOINFOWIDGETCONTROLLER__CLOSEVIDEO_B__14_0_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLECHALLENGEVIDEOINFOWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLECHALLENGEVIDEOINFOWIDGETCONTROLLER___BASE_ONHIDE_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLECHALLENGEVIDEOINFOWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLECHALLENGEVIDEOINFOWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLECHALLENGEVIDEOINFOWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
