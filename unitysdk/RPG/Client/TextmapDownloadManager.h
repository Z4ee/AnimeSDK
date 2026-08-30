#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextmapDownloadManager_TextmapApplyChangeErrorCode.h"
#include "unitysdk/RPG/Client/TextmapDownloadManager_TextmapDownloadState.h"
#include "unitysdk/RPG/Client/TextmapDownloadManager_TextmapSizeErrorCode.h"
#include "unitysdk/System/Object.h"

class Class_1_0AD1433F85E9FBFC;
class Class_1_B76B01F33EAE3251;
class Class_2_BF47C01E9CFEA39C;
namespace RPG::Client { class TextmapLanguageItem; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Threading { class SynchronizationContext; }

#define RPG_CLIENT_TEXTMAPDOWNLOADMANAGER_APPLYTEXTLANGUAGE_OFFSET UNITYSDK_OFFSET(0x1ACB4090)
#define RPG_CLIENT_TEXTMAPDOWNLOADMANAGER_ASYNCAPPLYTEXTLANGUAGE_OFFSET UNITYSDK_OFFSET(0x1ACB4440)
#define RPG_CLIENT_TEXTMAPDOWNLOADMANAGER_ASYNCUPDATELANGSIZE_1_OFFSET UNITYSDK_OFFSET(0x1ACB3260)
#define RPG_CLIENT_TEXTMAPDOWNLOADMANAGER_ASYNCUPDATELANGSIZE_OFFSET UNITYSDK_OFFSET(0x1ACB3160)
#define RPG_CLIENT_TEXTMAPDOWNLOADMANAGER_BEGINDOWNLOADSESSION_OFFSET UNITYSDK_OFFSET(0x1ACB3F00)
#define RPG_CLIENT_TEXTMAPDOWNLOADMANAGER_CANCELASYNCAPPLYTEXTLANGUAGE_OFFSET UNITYSDK_OFFSET(0x1ACB1E90)
#define RPG_CLIENT_TEXTMAPDOWNLOADMANAGER_CANDELETE_OFFSET UNITYSDK_OFFSET(0x1ACB4960)
#define RPG_CLIENT_TEXTMAPDOWNLOADMANAGER_DELETETEXTMAPPACK_OFFSET UNITYSDK_OFFSET(0x1ACB2E90)
#define RPG_CLIENT_TEXTMAPDOWNLOADMANAGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1ACB1C80)
#define RPG_CLIENT_TEXTMAPDOWNLOADMANAGER_ENDDOWNLOADSESSION_OFFSET UNITYSDK_OFFSET(0x1ACB2DE0)
#define RPG_CLIENT_TEXTMAPDOWNLOADMANAGER_ENTERDOWNLOADING_OFFSET UNITYSDK_OFFSET(0x1ACB3F90)
#define RPG_CLIENT_TEXTMAPDOWNLOADMANAGER_ENTERIDLE_OFFSET UNITYSDK_OFFSET(0x1ACB4000)
#define RPG_CLIENT_TEXTMAPDOWNLOADMANAGER_GETDOWNLOADEDTEXTMAPCOUNT_OFFSET UNITYSDK_OFFSET(0x1ACB4910)
#define RPG_CLIENT_TEXTMAPDOWNLOADMANAGER_GETDOWNLOADEDTEXTMAPITEMS_OFFSET UNITYSDK_OFFSET(0x1ACB4C00)
#define RPG_CLIENT_TEXTMAPDOWNLOADMANAGER_GETDOWNLOADSTAGE_OFFSET UNITYSDK_OFFSET(0x1ACB1C20)
#define RPG_CLIENT_TEXTMAPDOWNLOADMANAGER_GETPARTIALDOWNLOADEDTEXTMAPITEMS_OFFSET UNITYSDK_OFFSET(0x1ACB4E30)
#define RPG_CLIENT_TEXTMAPDOWNLOADMANAGER_GETTEXTMAPITEMBYKEY_OFFSET UNITYSDK_OFFSET(0x1ACB4B20)
#define RPG_CLIENT_TEXTMAPDOWNLOADMANAGER_GETTEXTMAPSIZE_OFFSET UNITYSDK_OFFSET(0x1ACB3540)
#define RPG_CLIENT_TEXTMAPDOWNLOADMANAGER_GET_ISSESSIONDOWNLOADING_OFFSET UNITYSDK_OFFSET(0x1ACB1C70)
#define RPG_CLIENT_TEXTMAPDOWNLOADMANAGER_GET_ISSESSIONIDLE_OFFSET UNITYSDK_OFFSET(0x1ACB1C60)
#define RPG_CLIENT_TEXTMAPDOWNLOADMANAGER_GET_ISVALIDATINGTEXTLANGUAGE_OFFSET UNITYSDK_OFFSET(0x1ACB4690)
#define RPG_CLIENT_TEXTMAPDOWNLOADMANAGER_ISTEXTMAPDOWNLOADED_OFFSET UNITYSDK_OFFSET(0x1ACB3E90)
#define RPG_CLIENT_TEXTMAPDOWNLOADMANAGER_ISTEXTMAPPARTIALDOWNLOADED_OFFSET UNITYSDK_OFFSET(0x1ACB4870)
#define RPG_CLIENT_TEXTMAPDOWNLOADMANAGER_ONTEXTMAPSIZEFAIL_OFFSET UNITYSDK_OFFSET(0x1ACB3960)
#define RPG_CLIENT_TEXTMAPDOWNLOADMANAGER_ONTEXTMAPSIZESUCCESS_OFFSET UNITYSDK_OFFSET(0x1ACB3680)
#define RPG_CLIENT_TEXTMAPDOWNLOADMANAGER_PAUSE_OFFSET UNITYSDK_OFFSET(0x1ACB2B10)
#define RPG_CLIENT_TEXTMAPDOWNLOADMANAGER_PLACEHOLDTEXTMAPPACK_OFFSET UNITYSDK_OFFSET(0x1ACB30B0)
#define RPG_CLIENT_TEXTMAPDOWNLOADMANAGER_PREPAREDOWNLOAD_OFFSET UNITYSDK_OFFSET(0x1ACB2AC0)
#define RPG_CLIENT_TEXTMAPDOWNLOADMANAGER_PREPARETEXTMAPDOWNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1ACB1F30)
#define RPG_CLIENT_TEXTMAPDOWNLOADMANAGER_RESUME_OFFSET UNITYSDK_OFFSET(0x1ACB2B60)
#define RPG_CLIENT_TEXTMAPDOWNLOADMANAGER_SHOWSIZE_OFFSET UNITYSDK_OFFSET(0x1ACB49A0)
#define RPG_CLIENT_TEXTMAPDOWNLOADMANAGER_STARTDOWNLOAD_OFFSET UNITYSDK_OFFSET(0x1ACB3A70)
#define RPG_CLIENT_TEXTMAPDOWNLOADMANAGER_STOPDOWNLOAD_OFFSET UNITYSDK_OFFSET(0x1ACB2BB0)
#define RPG_CLIENT_TEXTMAPDOWNLOADMANAGER_UPDATEPARTIALDOWNLOADTEXTMAPLANG_OFFSET UNITYSDK_OFFSET(0x1ACB5060)
#define RPG_CLIENT_TEXTMAPDOWNLOADMANAGER_UPDATETEXTMAPDOWNLOADSTATE_OFFSET UNITYSDK_OFFSET(0x1ACB2700)
#define RPG_CLIENT_TEXTMAPDOWNLOADMANAGER__ASYNCUPDATELANGSIZE_B__31_0_OFFSET UNITYSDK_OFFSET(0x1ACB58D0)
#define RPG_CLIENT_TEXTMAPDOWNLOADMANAGER__CLEARASYNCAPPLYCALLBACKS_OFFSET UNITYSDK_OFFSET(0x1ACB1EE0)
#define RPG_CLIENT_TEXTMAPDOWNLOADMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1ACB55C0)
#define RPG_CLIENT_TEXTMAPDOWNLOADMANAGER__DISPOSEUPDATEASSETCORE_OFFSET UNITYSDK_OFFSET(0x1ACB2D80)
#define RPG_CLIENT_TEXTMAPDOWNLOADMANAGER__DISPOSEUPDATEASSET_OFFSET UNITYSDK_OFFSET(0x1ACB1DB0)
#define RPG_CLIENT_TEXTMAPDOWNLOADMANAGER__ONTEXTMAPPACKDOWNLOADFAILED_OFFSET UNITYSDK_OFFSET(0x1ACB5400)
#define RPG_CLIENT_TEXTMAPDOWNLOADMANAGER__ONTEXTMAPPACKDOWNLOADSUCCEED_OFFSET UNITYSDK_OFFSET(0x1ACB5160)
#define RPG_CLIENT_TEXTMAPDOWNLOADMANAGER__POSTTOMAINTHREAD_OFFSET UNITYSDK_OFFSET(0x1ACB46E0)
#define RPG_CLIENT_TEXTMAPDOWNLOADMANAGER__STRICTVALIDATETEXTLANGUAGE_OFFSET UNITYSDK_OFFSET(0x1ACB4350)

namespace RPG::Client
{
	inline static constexpr unsigned int TextmapDownloadManager_TypeDefinitionIndex = 61336;

	class TextmapDownloadManager : public ::System::Object
	{
	public:
		::Class_1_0AD1433F85E9FBFC* _langSizeLoader; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int64>* _textmapDict; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::TextmapLanguageItem*>* _itemListCache; // 0x20
		::System::Action_1<::RPG::Client::TextmapDownloadManager_TextmapSizeErrorCode>* _sizeCb; // 0x28
		::System::Collections::Generic::HashSet_1<::System::String*>* _partialDownloadedLanguage; // 0x30
		::System::Collections::Generic::HashSet_1<::System::String*>* _downloadedLanguage; // 0x38
		::System::Action_1<::RPG::Client::TextmapDownloadManager_TextmapApplyChangeErrorCode>* _applyCallback; // 0x40
		::Class_1_B76B01F33EAE3251* _updateOneTextmapLangAsset; // 0x48
		::System::String* _activeDownloadLangKey; // 0x50
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::Client::TextmapLanguageItem*>* _languageItems; // 0x58
		::RPG::Client::TextmapDownloadManager_TextmapDownloadState _sessionState; // 0x60
		::System::Boolean _showSizeState; // 0x64
		::System::Boolean _showSizeDirty; // 0x65
		::System::Boolean _cancelValidation; // 0x66
		::System::Boolean _isValidating; // 0x67

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTMAPDOWNLOADMANAGER__CTOR_OFFSET))(this);
		}

		::RPG::Client::TextmapDownloadManager_TextmapDownloadState GetDownloadStage()
		{
			return ((::RPG::Client::TextmapDownloadManager_TextmapDownloadState(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTMAPDOWNLOADMANAGER_GETDOWNLOADSTAGE_OFFSET))(this);
		}

		::System::Boolean get_IsSessionIdle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTMAPDOWNLOADMANAGER_GET_ISSESSIONIDLE_OFFSET))(this);
		}

		::System::Boolean get_IsSessionDownloading()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTMAPDOWNLOADMANAGER_GET_ISSESSIONDOWNLOADING_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTMAPDOWNLOADMANAGER_DISPOSE_OFFSET))(this);
		}

		::System::Void PrepareTextmapDownloadData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTMAPDOWNLOADMANAGER_PREPARETEXTMAPDOWNLOADDATA_OFFSET))(this);
		}

		::System::Void UpdateTextmapDownloadState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTMAPDOWNLOADMANAGER_UPDATETEXTMAPDOWNLOADSTATE_OFFSET))(this);
		}

		::System::Void PrepareDownload()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTMAPDOWNLOADMANAGER_PREPAREDOWNLOAD_OFFSET))(this);
		}

		::System::Void Pause()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTMAPDOWNLOADMANAGER_PAUSE_OFFSET))(this);
		}

		::System::Void Resume()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTMAPDOWNLOADMANAGER_RESUME_OFFSET))(this);
		}

		::System::Void StopDownload()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTMAPDOWNLOADMANAGER_STOPDOWNLOAD_OFFSET))(this);
		}

		::System::Void DeleteTextmapPack(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTMAPDOWNLOADMANAGER_DELETETEXTMAPPACK_OFFSET))(this, a1);
		}

		::System::Void PlaceholdTextmapPack(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTMAPDOWNLOADMANAGER_PLACEHOLDTEXTMAPPACK_OFFSET))(this, a1);
		}

		::System::Boolean AsyncUpdateLangSize(::System::Action* a1, ::System::Action* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTMAPDOWNLOADMANAGER_ASYNCUPDATELANGSIZE_OFFSET))(this, a1, a2);
		}

		::System::Boolean AsyncUpdateLangSize_1(::System::Action_1<::RPG::Client::TextmapDownloadManager_TextmapSizeErrorCode>* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Action_1<::RPG::Client::TextmapDownloadManager_TextmapSizeErrorCode>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTMAPDOWNLOADMANAGER_ASYNCUPDATELANGSIZE_1_OFFSET))(this, a1);
		}

		::System::String* GetTextmapSize(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTMAPDOWNLOADMANAGER_GETTEXTMAPSIZE_OFFSET))(this, a1);
		}

		::System::Void OnTextmapSizeSuccess(::RPG::Client::TextmapDownloadManager_TextmapSizeErrorCode a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextmapDownloadManager_TextmapSizeErrorCode))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTMAPDOWNLOADMANAGER_ONTEXTMAPSIZESUCCESS_OFFSET))(this, a1);
		}

		::System::Void OnTextmapSizeFail(::Class_2_BF47C01E9CFEA39C* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_BF47C01E9CFEA39C*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTMAPDOWNLOADMANAGER_ONTEXTMAPSIZEFAIL_OFFSET))(this, a1);
		}

		::System::Void StartDownload(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTMAPDOWNLOADMANAGER_STARTDOWNLOAD_OFFSET))(this, a1);
		}

		::System::Void BeginDownloadSession(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTMAPDOWNLOADMANAGER_BEGINDOWNLOADSESSION_OFFSET))(this, a1);
		}

		::System::Void EndDownloadSession()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTMAPDOWNLOADMANAGER_ENDDOWNLOADSESSION_OFFSET))(this);
		}

		::System::Boolean ApplyTextLanguage(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTMAPDOWNLOADMANAGER_APPLYTEXTLANGUAGE_OFFSET))(this, a1);
		}

		::System::Void AsyncApplyTextLanguage(::System::String* a1, ::System::Action_1<::RPG::Client::TextmapDownloadManager_TextmapApplyChangeErrorCode>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::RPG::Client::TextmapDownloadManager_TextmapApplyChangeErrorCode>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTMAPDOWNLOADMANAGER_ASYNCAPPLYTEXTLANGUAGE_OFFSET))(this, a1, a2);
		}

		::System::Void CancelAsyncApplyTextLanguage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTMAPDOWNLOADMANAGER_CANCELASYNCAPPLYTEXTLANGUAGE_OFFSET))(this);
		}

		::System::Boolean get_IsValidatingTextLanguage()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTMAPDOWNLOADMANAGER_GET_ISVALIDATINGTEXTLANGUAGE_OFFSET))(this);
		}

		::System::Void _ClearAsyncApplyCallbacks()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTMAPDOWNLOADMANAGER__CLEARASYNCAPPLYCALLBACKS_OFFSET))(this);
		}

		::System::Void _PostToMainThread(::System::Threading::SynchronizationContext* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::SynchronizationContext*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTMAPDOWNLOADMANAGER__POSTTOMAINTHREAD_OFFSET))(this, a1, a2);
		}

		::System::Boolean _StrictValidateTextLanguage(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTMAPDOWNLOADMANAGER__STRICTVALIDATETEXTLANGUAGE_OFFSET))(this, a1);
		}

		::System::Boolean IsTextmapDownloaded(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTMAPDOWNLOADMANAGER_ISTEXTMAPDOWNLOADED_OFFSET))(this, a1);
		}

		::System::Boolean IsTextmapPartialDownloaded(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTMAPDOWNLOADMANAGER_ISTEXTMAPPARTIALDOWNLOADED_OFFSET))(this, a1);
		}

		::System::Int32 GetDownloadedTextmapCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTMAPDOWNLOADMANAGER_GETDOWNLOADEDTEXTMAPCOUNT_OFFSET))(this);
		}

		::System::Boolean CanDelete()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTMAPDOWNLOADMANAGER_CANDELETE_OFFSET))(this);
		}

		::System::Boolean ShowSize()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTMAPDOWNLOADMANAGER_SHOWSIZE_OFFSET))(this);
		}

		::RPG::Client::TextmapLanguageItem* GetTextmapItemByKey(::System::String* a1)
		{
			return ((::RPG::Client::TextmapLanguageItem*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTMAPDOWNLOADMANAGER_GETTEXTMAPITEMBYKEY_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::TextmapLanguageItem*>* GetDownloadedTextmapItems()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::TextmapLanguageItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTMAPDOWNLOADMANAGER_GETDOWNLOADEDTEXTMAPITEMS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::TextmapLanguageItem*>* GetPartialDownloadedTextmapItems()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::TextmapLanguageItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTMAPDOWNLOADMANAGER_GETPARTIALDOWNLOADEDTEXTMAPITEMS_OFFSET))(this);
		}

		::System::Void EnterIdle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTMAPDOWNLOADMANAGER_ENTERIDLE_OFFSET))(this);
		}

		::System::Void EnterDownloading(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTMAPDOWNLOADMANAGER_ENTERDOWNLOADING_OFFSET))(this, a1);
		}

		::System::Void UpdatePartialDownloadTextmapLang(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTMAPDOWNLOADMANAGER_UPDATEPARTIALDOWNLOADTEXTMAPLANG_OFFSET))(this, a1);
		}

		::System::Void _DisposeUpdateAssetCore()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTMAPDOWNLOADMANAGER__DISPOSEUPDATEASSETCORE_OFFSET))(this);
		}

		::System::Void _DisposeUpdateAsset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTMAPDOWNLOADMANAGER__DISPOSEUPDATEASSET_OFFSET))(this);
		}

		::System::Void _OnTextmapPackDownloadSucceed(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTMAPDOWNLOADMANAGER__ONTEXTMAPPACKDOWNLOADSUCCEED_OFFSET))(this, a1);
		}

		::System::Void _OnTextmapPackDownloadFailed(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTMAPDOWNLOADMANAGER__ONTEXTMAPPACKDOWNLOADFAILED_OFFSET))(this, a1);
		}

		::System::Void _AsyncUpdateLangSize_b__31_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTMAPDOWNLOADMANAGER__ASYNCUPDATELANGSIZE_B__31_0_OFFSET))(this);
		}
	};
}
