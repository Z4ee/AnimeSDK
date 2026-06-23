#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_F00DC819D834EFD2.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MoleMole/DisplayMessageBase.h"
#include "unitysdk/MoleMole/EntityHandle.h"

class Class_1_6B8B8EFC8C59DAD1;
class Class_1_D65512A83CF70AB7;
class Class_1_DD623DBDE484C8A1;
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_BIGSCENECHATSHOWOBJ_GENCHATFLAG_OFFSET UNITYSDK_OFFSET(0x13EBEF50)
#define MOLEMOLE_BIGSCENECHATSHOWOBJ_GETENTITYHANDLEFROMVO_OFFSET UNITYSDK_OFFSET(0x13EBEFB0)
#define MOLEMOLE_BIGSCENECHATSHOWOBJ_GET_ISTRIGGERINLOADING_OFFSET UNITYSDK_OFFSET(0x13EBE140)
#define MOLEMOLE_BIGSCENECHATSHOWOBJ_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x13EBE130)
#define MOLEMOLE_BIGSCENECHATSHOWOBJ_ONPLAYCHAT_OFFSET UNITYSDK_OFFSET(0x13EBE440)
#define MOLEMOLE_BIGSCENECHATSHOWOBJ_ONPROCESS_OFFSET UNITYSDK_OFFSET(0x13EBE1B0)
#define MOLEMOLE_BIGSCENECHATSHOWOBJ_PLAYCHATWITHFIXEDCAMERA_OFFSET UNITYSDK_OFFSET(0x13EBF080)
#define MOLEMOLE_BIGSCENECHATSHOWOBJ_PLAYCHATWITHMULTIPLECAMERA_OFFSET UNITYSDK_OFFSET(0x13EBEB50)
#define MOLEMOLE_BIGSCENECHATSHOWOBJ_PLAYCHATWITHNONCAMERA_OFFSET UNITYSDK_OFFSET(0x13EBE500)
#define MOLEMOLE_BIGSCENECHATSHOWOBJ_PLAYCHATWITHSOLOCAMERA_OFFSET UNITYSDK_OFFSET(0x13EBE7C0)
#define MOLEMOLE_BIGSCENECHATSHOWOBJ_PLAYCHAT_OFFSET UNITYSDK_OFFSET(0x13EBE200)
#define MOLEMOLE_BIGSCENECHATSHOWOBJ__CTOR_OFFSET UNITYSDK_OFFSET(0x13EBE150)
#define MOLEMOLE_BIGSCENECHATSHOWOBJ__PLAYCHATWITHMULTIPLECAMERA_B__14_0_OFFSET UNITYSDK_OFFSET(0x13EBF180)
#define MOLEMOLE_BIGSCENECHATSHOWOBJ__PLAYCHATWITHNONCAMERA_B__12_0_OFFSET UNITYSDK_OFFSET(0x13EBF0C0)
#define MOLEMOLE_BIGSCENECHATSHOWOBJ__PLAYCHATWITHSOLOCAMERA_B__13_0_OFFSET UNITYSDK_OFFSET(0x13EBF120)

namespace MoleMole
{
	inline static constexpr unsigned int BigSceneChatShowObj_TypeDefinitionIndex = 42121;

	class BigSceneChatShowObj : public ::MoleMole::DisplayMessageBase
	{
	public:
		::System::Collections::Generic::List_1<::Foundation::ViewObject::ViewObjectHandle>* _viewObjectHandles; // 0x28
		::System::Action_1<::Class_1_D65512A83CF70AB7*>* _finishCallback; // 0x30
		::MoleMole::EntityHandle _playerEntity; // 0x38
		::Class_1_6B8B8EFC8C59DAD1* _chatParams; // 0x48

		::System::Void _ctor(::Class_1_6B8B8EFC8C59DAD1* chatParams)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_6B8B8EFC8C59DAD1*))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENECHATSHOWOBJ__CTOR_OFFSET))(this, chatParams);
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

		::System::Void PlayChatWithNonCamera()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENECHATSHOWOBJ_PLAYCHATWITHNONCAMERA_OFFSET))(this);
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

		::System::Void _PlayChatWithNonCamera_b__12_0(::Class_1_D65512A83CF70AB7* chatSyncData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D65512A83CF70AB7*))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENECHATSHOWOBJ__PLAYCHATWITHNONCAMERA_B__12_0_OFFSET))(this, chatSyncData);
		}

		::System::Void _PlayChatWithSoloCamera_b__13_0(::Class_1_D65512A83CF70AB7* chatSyncData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D65512A83CF70AB7*))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENECHATSHOWOBJ__PLAYCHATWITHSOLOCAMERA_B__13_0_OFFSET))(this, chatSyncData);
		}

		::System::Void _PlayChatWithMultipleCamera_b__14_0(::Class_1_D65512A83CF70AB7* chatSyncData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D65512A83CF70AB7*))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENECHATSHOWOBJ__PLAYCHATWITHMULTIPLECAMERA_B__14_0_OFFSET))(this, chatSyncData);
		}
	};
}
