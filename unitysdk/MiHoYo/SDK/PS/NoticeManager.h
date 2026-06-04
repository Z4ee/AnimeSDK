#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class JSONNode; }
namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace System { class String; }

#define MIHOYO_SDK_PS_NOTICEMANAGER_CHECKPOPNOTICE_OFFSET UNITYSDK_OFFSET(0x183B3F90)
#define MIHOYO_SDK_PS_NOTICEMANAGER_GETNOTICEURL_OFFSET UNITYSDK_OFFSET(0x183B7E50)
#define MIHOYO_SDK_PS_NOTICEMANAGER_GETURLSTRING_OFFSET UNITYSDK_OFFSET(0x183B74A0)
#define MIHOYO_SDK_PS_NOTICEMANAGER_ONGETCHECKPOPNOTICE_OFFSET UNITYSDK_OFFSET(0x183B8910)
#define MIHOYO_SDK_PS_NOTICEMANAGER_SHOWNOTICE_OFFSET UNITYSDK_OFFSET(0x183B36C0)
#define MIHOYO_SDK_PS_NOTICEMANAGER_SHOWPOPNOTICE_OFFSET UNITYSDK_OFFSET(0x183B3A00)
#define MIHOYO_SDK_PS_NOTICEMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x183B8D50)
#define MIHOYO_SDK_PS_NOTICEMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x183B8D40)
#define MIHOYO_SDK_PS_NOTICEMANAGER__SHOWNOTICE_B__4_0_OFFSET UNITYSDK_OFFSET(0x183B8DA0)

namespace MiHoYo::SDK::PS
{
	inline static constexpr unsigned int NoticeManager_TypeDefinitionIndex = 8572;

	class NoticeManager : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::PS::NoticeManager** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::PS::NoticeManager**)Il2CppClass::FromTypeDefinitionIndex(NoticeManager_TypeDefinitionIndex)->GetStaticField(0x18830);
		}
		static ::System::Boolean* StaticGet_isShowPopNotice()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NoticeManager_TypeDefinitionIndex)->GetStaticField(0x8320);
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

		::System::Void ShowNotice(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_NOTICEMANAGER_SHOWNOTICE_OFFSET))(this, a1);
		}

		::System::String* GetNoticeURL(::System::String* a1, ::MiHoYo::SDK::JSONNode* a2)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_NOTICEMANAGER_GETNOTICEURL_OFFSET))(this, a1, a2);
		}

		::System::Void CheckPopNotice()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_NOTICEMANAGER_CHECKPOPNOTICE_OFFSET))(this);
		}

		::System::Void OnGetCheckPopNotice(::MiHoYo::SDK::NetworkResponseModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_NOTICEMANAGER_ONGETCHECKPOPNOTICE_OFFSET))(this, a1);
		}

		::System::String* GetURLString(::System::String* a1, ::System::String* a2)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_NOTICEMANAGER_GETURLSTRING_OFFSET))(this, a1, a2);
		}

		::System::Void _ShowNotice_b__4_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_NOTICEMANAGER__SHOWNOTICE_B__4_0_OFFSET))(this);
		}
	};
}
