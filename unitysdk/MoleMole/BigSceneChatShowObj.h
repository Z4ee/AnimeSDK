#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_F00DC819D834EFD2.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MoleMole/DisplayMessageBase.h"
#include "unitysdk/MoleMole/EntityHandle.h"

class Class_1_73F7DED90F9FA901;
class Class_1_D65512A83CF70AB7;
class Class_1_DD623DBDE484C8A1;
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_BIGSCENECHATSHOWOBJ_GENCHATFLAG_OFFSET UNITYSDK_OFFSET(0x11006AD0)
#define MOLEMOLE_BIGSCENECHATSHOWOBJ_GETENTITYHANDLEFROMVO_OFFSET UNITYSDK_OFFSET(0x11006A00)
#define MOLEMOLE_BIGSCENECHATSHOWOBJ_GET_ISTRIGGERINLOADING_OFFSET UNITYSDK_OFFSET(0x11005F90)
#define MOLEMOLE_BIGSCENECHATSHOWOBJ_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x11005F80)
#define MOLEMOLE_BIGSCENECHATSHOWOBJ_ONPLAYCHAT_OFFSET UNITYSDK_OFFSET(0x11006290)
#define MOLEMOLE_BIGSCENECHATSHOWOBJ_ONPROCESS_OFFSET UNITYSDK_OFFSET(0x11006000)
#define MOLEMOLE_BIGSCENECHATSHOWOBJ_PLAYCHATWITHFIXEDCAMERA_OFFSET UNITYSDK_OFFSET(0x11006B30)
#define MOLEMOLE_BIGSCENECHATSHOWOBJ_PLAYCHATWITHMULTIPLECAMERA_OFFSET UNITYSDK_OFFSET(0x11006660)
#define MOLEMOLE_BIGSCENECHATSHOWOBJ_PLAYCHATWITHSOLOCAMERA_OFFSET UNITYSDK_OFFSET(0x11006350)
#define MOLEMOLE_BIGSCENECHATSHOWOBJ_PLAYCHAT_OFFSET UNITYSDK_OFFSET(0x11006050)
#define MOLEMOLE_BIGSCENECHATSHOWOBJ__CTOR_OFFSET UNITYSDK_OFFSET(0x11005FA0)
#define MOLEMOLE_BIGSCENECHATSHOWOBJ__PLAYCHATWITHMULTIPLECAMERA_B__12_0_OFFSET UNITYSDK_OFFSET(0x11006BD0)
#define MOLEMOLE_BIGSCENECHATSHOWOBJ__PLAYCHATWITHSOLOCAMERA_B__11_0_OFFSET UNITYSDK_OFFSET(0x11006B70)

namespace MoleMole
{
	inline static constexpr unsigned int BigSceneChatShowObj_TypeDefinitionIndex = 53481;

	class BigSceneChatShowObj : public ::MoleMole::DisplayMessageBase
	{
	public:
		::System::Collections::Generic::List_1<::Foundation::ViewObject::ViewObjectHandle>* _viewObjectHandles; // 0x28
		::Class_1_73F7DED90F9FA901* _chatParams; // 0x30
		::System::Action_1<::Class_1_D65512A83CF70AB7*>* _finishCallback; // 0x38

		::System::Void _ctor(::Class_1_73F7DED90F9FA901* chatParams)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_73F7DED90F9FA901*))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENECHATSHOWOBJ__CTOR_OFFSET))(this, chatParams);
		}

		::System::Int32 get_Priority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENECHATSHOWOBJ_GET_PRIORITY_OFFSET))(this);
		}

		::System::Boolean get_IsTriggerInLoading()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENECHATSHOWOBJ_GET_ISTRIGGERINLOADING_OFFSET))(this);
		}

		::System::Void OnProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENECHATSHOWOBJ_ONPROCESS_OFFSET))(this);
		}

		::System::Void PlayChat()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENECHATSHOWOBJ_PLAYCHAT_OFFSET))(this);
		}

		::System::Void OnPlayChat()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENECHATSHOWOBJ_ONPLAYCHAT_OFFSET))(this);
		}

		::System::Void PlayChatWithSoloCamera()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENECHATSHOWOBJ_PLAYCHATWITHSOLOCAMERA_OFFSET))(this);
		}

		::System::Void PlayChatWithMultipleCamera()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENECHATSHOWOBJ_PLAYCHATWITHMULTIPLECAMERA_OFFSET))(this);
		}

		::Enum_3_F00DC819D834EFD2 GenChatFlag(::Class_1_DD623DBDE484C8A1* config)
		{
			return ((::Enum_3_F00DC819D834EFD2(*)(::PVOID, ::Class_1_DD623DBDE484C8A1*))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENECHATSHOWOBJ_GENCHATFLAG_OFFSET))(this, config);
		}

		::System::Void PlayChatWithFixedCamera()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENECHATSHOWOBJ_PLAYCHATWITHFIXEDCAMERA_OFFSET))(this);
		}

		::MoleMole::EntityHandle GetEntityHandleFromVO(::Foundation::ViewObject::ViewObjectHandle viewObjectHandle)
		{
			return ((::MoleMole::EntityHandle(*)(::PVOID, ::Foundation::ViewObject::ViewObjectHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENECHATSHOWOBJ_GETENTITYHANDLEFROMVO_OFFSET))(this, viewObjectHandle);
		}

		::System::Void _PlayChatWithSoloCamera_b__11_0(::Class_1_D65512A83CF70AB7* chatSyncData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D65512A83CF70AB7*))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENECHATSHOWOBJ__PLAYCHATWITHSOLOCAMERA_B__11_0_OFFSET))(this, chatSyncData);
		}

		::System::Void _PlayChatWithMultipleCamera_b__12_0(::Class_1_D65512A83CF70AB7* chatSyncData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D65512A83CF70AB7*))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENECHATSHOWOBJ__PLAYCHATWITHMULTIPLECAMERA_B__12_0_OFFSET))(this, chatSyncData);
		}
	};
}
