#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class JSONNode; }
namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace System { class String; }

#define MIHOYO_SDK_PS_NOTICEMANAGER_CHECKPOPNOTICE_OFFSET UNITYSDK_OFFSET(0x1B6CEBD0)
#define MIHOYO_SDK_PS_NOTICEMANAGER_GETNOTICEURL_OFFSET UNITYSDK_OFFSET(0x1B6CDAC0)
#define MIHOYO_SDK_PS_NOTICEMANAGER_GETURLSTRING_OFFSET UNITYSDK_OFFSET(0x1B6CCAA0)
#define MIHOYO_SDK_PS_NOTICEMANAGER_ONGETCHECKPOPNOTICE_OFFSET UNITYSDK_OFFSET(0x1B6CEE40)
#define MIHOYO_SDK_PS_NOTICEMANAGER_SHOWNOTICE_OFFSET UNITYSDK_OFFSET(0x1B6CC870)
#define MIHOYO_SDK_PS_NOTICEMANAGER_SHOWPOPNOTICE_OFFSET UNITYSDK_OFFSET(0x1B6CC750)
#define MIHOYO_SDK_PS_NOTICEMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B6CF590)
#define MIHOYO_SDK_PS_NOTICEMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B6CF580)
#define MIHOYO_SDK_PS_NOTICEMANAGER__SHOWNOTICE_B__4_0_OFFSET UNITYSDK_OFFSET(0x1B6CF5E0)

namespace MiHoYo::SDK::PS
{
	inline static constexpr unsigned int NoticeManager_TypeDefinitionIndex = 20657;

	class NoticeManager : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::PS::NoticeManager** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::PS::NoticeManager**)Il2CppClass::FromTypeDefinitionIndex(NoticeManager_TypeDefinitionIndex)->GetStaticField(0xB070);
		}
		static ::System::Boolean* StaticGet_isShowPopNotice()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NoticeManager_TypeDefinitionIndex)->GetStaticField(0x4710);
		}
		::System::Boolean isFirstCheck; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_NOTICEMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_NOTICEMANAGER__CCTOR_OFFSET))();
		}

		::System::String* ShowPopNotice()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_NOTICEMANAGER_SHOWPOPNOTICE_OFFSET))(this);
		}

		::System::Void ShowNotice(::System::String* jsonString)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_NOTICEMANAGER_SHOWNOTICE_OFFSET))(this, jsonString);
		}

		::System::String* GetNoticeURL(::System::String* url, ::MiHoYo::SDK::JSONNode* data)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_NOTICEMANAGER_GETNOTICEURL_OFFSET))(this, url, data);
		}

		::System::Void CheckPopNotice()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_NOTICEMANAGER_CHECKPOPNOTICE_OFFSET))(this);
		}

		::System::Void OnGetCheckPopNotice(::MiHoYo::SDK::NetworkResponseModel* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_NOTICEMANAGER_ONGETCHECKPOPNOTICE_OFFSET))(this, response);
		}

		::System::String* GetURLString(::System::String* url, ::System::String* jsonString)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_NOTICEMANAGER_GETURLSTRING_OFFSET))(this, url, jsonString);
		}

		::System::Void _ShowNotice_b__4_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_NOTICEMANAGER__SHOWNOTICE_B__4_0_OFFSET))(this);
		}
	};
}
