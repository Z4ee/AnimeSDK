#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ComicImgPart.h"
#include "unitysdk/MoleMole/ComicImgStyle___c__DisplayClass8_0.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ComicImgUITransformData; }
namespace MoleMole { class ComicPartInfo; }
namespace MoleMole { class ComicScreenInfo; }
namespace MoleMole { class ComicShakeInfo; }
namespace MoleMole { class ComicTweenMoveAnimSeq; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_COMICIMGSTYLE_CLEARUSELESSDATA_OFFSET UNITYSDK_OFFSET(0x1C285840)
#define MOLEMOLE_COMICIMGSTYLE_CREATENEWANIMINFO_OFFSET UNITYSDK_OFFSET(0x1C286CA0)
#define MOLEMOLE_COMICIMGSTYLE_GETDEFAULTIMGLISTORDERFROMPREFAB_OFFSET UNITYSDK_OFFSET(0x1C284ED0)
#define MOLEMOLE_COMICIMGSTYLE_GETINITDATAFROMPREFAB_OFFSET UNITYSDK_OFFSET(0x1C284C90)
#define MOLEMOLE_COMICIMGSTYLE_GETINITSCREENINFO_OFFSET UNITYSDK_OFFSET(0x1C286030)
#define MOLEMOLE_COMICIMGSTYLE_GETORIGINTRANSFORMINFOSFROMPREFAB_OFFSET UNITYSDK_OFFSET(0x1C285160)
#define MOLEMOLE_COMICIMGSTYLE_ONPREFABCHANGE_OFFSET UNITYSDK_OFFSET(0x1C284C80)
#define MOLEMOLE_COMICIMGSTYLE_ONSCREENINFOITEMBEGINGUI_OFFSET UNITYSDK_OFFSET(0x1C285740)
#define MOLEMOLE_COMICIMGSTYLE_ONSCREENINFOITEMENDGUI_OFFSET UNITYSDK_OFFSET(0x1C285750)
#define MOLEMOLE_COMICIMGSTYLE_RECOVERPREFABTOINIT_OFFSET UNITYSDK_OFFSET(0x1C285760)
#define MOLEMOLE_COMICIMGSTYLE_SETTOTARGETINFO_OFFSET UNITYSDK_OFFSET(0x1C286530)
#define MOLEMOLE_COMICIMGSTYLE__CLEARUSELESSDATA_G__DOCLEAR_8_0_OFFSET UNITYSDK_OFFSET(0x1C286130)
#define MOLEMOLE_COMICIMGSTYLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C287140)
#define MOLEMOLE_COMICIMGSTYLE__GETEASYPREVIEWBTNNAME_OFFSET UNITYSDK_OFFSET(0x1C287090)
#define MOLEMOLE_COMICIMGSTYLE__ONPREVIEWSHOWIDCHANGE_OFFSET UNITYSDK_OFFSET(0x1C2870D0)
#define MOLEMOLE_COMICIMGSTYLE__PREVIEWINSHOWID_OFFSET UNITYSDK_OFFSET(0x1C287110)
#define MOLEMOLE_COMICIMGSTYLE__SETTOTARGETINFO_G__GETINFOS_9_0_OFFSET UNITYSDK_OFFSET(0x1C286C20)
#define MOLEMOLE_COMICIMGSTYLE__STARTEASYPREVIEW_OFFSET UNITYSDK_OFFSET(0x1C287070)
#define MOLEMOLE_COMICIMGSTYLE__UPDATETIME_OFFSET UNITYSDK_OFFSET(0x1C286FB0)

namespace MoleMole
{
	inline static constexpr unsigned int ComicImgStyle_TypeDefinitionIndex = 30582;

	class ComicImgStyle : public ::System::Object
	{
	public:
		// static const ::System::String* PRVIEW_ID_GROUP_NAME; // 0x0
		::System::Collections::Generic::List_1<::MoleMole::ComicShakeInfo*>* shakeInfos; // 0x10
		::System::Collections::Generic::List_1<::MoleMole::ComicTweenMoveAnimSeq*>* seqList; // 0x18
		::System::Collections::Generic::List_1<::MoleMole::ComicImgUITransformData*>* originTransformInfos; // 0x20
		::System::Collections::Generic::List_1<::MoleMole::ComicImgPart>* imgListOrder; // 0x28
		::System::String* prefabPath; // 0x30
		::UnityEngine::GameObject* _testObj; // 0x38
		::System::Collections::Generic::List_1<::MoleMole::ComicScreenInfo*>* screenInfos; // 0x40
		::System::Collections::Generic::List_1<::MoleMole::ComicPartInfo*>* initInfo; // 0x48
		::UnityEngine::GameObject* prefab; // 0x50
		::System::Single _testTime; // 0x58
		::System::Int32 _stateID; // 0x5C
		::System::Boolean _inEsayPreview; // 0x60
		::System::Int32 _previewShowID; // 0x64

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMICIMGSTYLE__CTOR_OFFSET))(this);
		}

		::System::Void OnPrefabChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMICIMGSTYLE_ONPREFABCHANGE_OFFSET))(this);
		}

		::System::Void GetInitDataFromPrefab()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMICIMGSTYLE_GETINITDATAFROMPREFAB_OFFSET))(this);
		}

		::System::Void GetDefaultImgListOrderFromPrefab()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMICIMGSTYLE_GETDEFAULTIMGLISTORDERFROMPREFAB_OFFSET))(this);
		}

		::System::Void GetOriginTransformInfosFromPrefab()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMICIMGSTYLE_GETORIGINTRANSFORMINFOSFROMPREFAB_OFFSET))(this);
		}

		::System::Void OnScreenInfoItemBeginGUI(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_COMICIMGSTYLE_ONSCREENINFOITEMBEGINGUI_OFFSET))(this, index);
		}

		::System::Void OnScreenInfoItemEndGUI(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_COMICIMGSTYLE_ONSCREENINFOITEMENDGUI_OFFSET))(this, index);
		}

		::System::Void RecoverPrefabToInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMICIMGSTYLE_RECOVERPREFABTOINIT_OFFSET))(this);
		}

		::MoleMole::ComicScreenInfo* GetInitScreenInfo()
		{
			return ((::MoleMole::ComicScreenInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMICIMGSTYLE_GETINITSCREENINFO_OFFSET))(this);
		}

		::System::Void ClearUselessData(::System::Boolean showDialog)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_COMICIMGSTYLE_CLEARUSELESSDATA_OFFSET))(this, showDialog);
		}

		::System::Void SetToTargetInfo(::System::Int32 fromID, ::System::Int32 toID, ::System::Single rate)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_COMICIMGSTYLE_SETTOTARGETINFO_OFFSET))(this, fromID, toID, rate);
		}

		::System::Void CreateNewAnimInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMICIMGSTYLE_CREATENEWANIMINFO_OFFSET))(this);
		}

		::System::Boolean _UpdateTime()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMICIMGSTYLE__UPDATETIME_OFFSET))(this);
		}

		::System::Void _StartEasyPreview()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMICIMGSTYLE__STARTEASYPREVIEW_OFFSET))(this);
		}

		::System::String* _GetEasyPreViewBtnName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMICIMGSTYLE__GETEASYPREVIEWBTNNAME_OFFSET))(this);
		}

		::System::Void _OnPreviewShowIDChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMICIMGSTYLE__ONPREVIEWSHOWIDCHANGE_OFFSET))(this);
		}

		::System::Void _PreviewInShowID()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMICIMGSTYLE__PREVIEWINSHOWID_OFFSET))(this);
		}

		::System::Void _ClearUselessData_g__DoClear_8_0(::MoleMole::ComicImgStyle___c__DisplayClass8_0& a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ComicImgStyle___c__DisplayClass8_0&))((::PBYTE)hIl2Cpp + MOLEMOLE_COMICIMGSTYLE__CLEARUSELESSDATA_G__DOCLEAR_8_0_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::MoleMole::ComicPartInfo*>* _SetToTargetInfo_g__GetInfos_9_0(::System::Int32 _pid)
		{
			return ((::System::Collections::Generic::List_1<::MoleMole::ComicPartInfo*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_COMICIMGSTYLE__SETTOTARGETINFO_G__GETINFOS_9_0_OFFSET))(this, _pid);
		}
	};
}
