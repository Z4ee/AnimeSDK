#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_F00DC819D834EFD2.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MoleMole/DisplayMessageBase.h"
#include "unitysdk/MoleMole/EntityHandle.h"

class Class_1_6B8B8EFC8C59DAD1;
class Class_1_DD623DBDE484C8A1;
class Class_2_CEC585D0736F3660;
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_BIGSCENECHATSHOWOBJ_GENCHATFLAG_OFFSET UNITYSDK_OFFSET(0x1623A0B0)
#define MOLEMOLE_BIGSCENECHATSHOWOBJ_GETENTITYHANDLEFROMVO_OFFSET UNITYSDK_OFFSET(0x1623A110)
#define MOLEMOLE_BIGSCENECHATSHOWOBJ_GET_ISTRIGGERINLOADING_OFFSET UNITYSDK_OFFSET(0x16239280)
#define MOLEMOLE_BIGSCENECHATSHOWOBJ_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x16239270)
#define MOLEMOLE_BIGSCENECHATSHOWOBJ_ONPLAYCHAT_OFFSET UNITYSDK_OFFSET(0x16239580)
#define MOLEMOLE_BIGSCENECHATSHOWOBJ_ONPROCESS_OFFSET UNITYSDK_OFFSET(0x162392F0)
#define MOLEMOLE_BIGSCENECHATSHOWOBJ_PLAYCHATWITHFIXEDCAMERA_OFFSET UNITYSDK_OFFSET(0x1623A250)
#define MOLEMOLE_BIGSCENECHATSHOWOBJ_PLAYCHATWITHMULTIPLECAMERA_OFFSET UNITYSDK_OFFSET(0x16239C90)
#define MOLEMOLE_BIGSCENECHATSHOWOBJ_PLAYCHATWITHNONCAMERA_OFFSET UNITYSDK_OFFSET(0x16239640)
#define MOLEMOLE_BIGSCENECHATSHOWOBJ_PLAYCHATWITHSOLOCAMERA_OFFSET UNITYSDK_OFFSET(0x16239900)
#define MOLEMOLE_BIGSCENECHATSHOWOBJ_PLAYCHAT_OFFSET UNITYSDK_OFFSET(0x16239340)
#define MOLEMOLE_BIGSCENECHATSHOWOBJ__CTOR_OFFSET UNITYSDK_OFFSET(0x16239290)
#define MOLEMOLE_BIGSCENECHATSHOWOBJ__PLAYCHATWITHMULTIPLECAMERA_B__14_0_OFFSET UNITYSDK_OFFSET(0x1623A350)
#define MOLEMOLE_BIGSCENECHATSHOWOBJ__PLAYCHATWITHNONCAMERA_B__12_0_OFFSET UNITYSDK_OFFSET(0x1623A290)
#define MOLEMOLE_BIGSCENECHATSHOWOBJ__PLAYCHATWITHSOLOCAMERA_B__13_0_OFFSET UNITYSDK_OFFSET(0x1623A2F0)

namespace MoleMole
{
	inline static constexpr unsigned int BigSceneChatShowObj_TypeDefinitionIndex = 73076;

	class BigSceneChatShowObj : public ::MoleMole::DisplayMessageBase
	{
	public:
		::Class_1_6B8B8EFC8C59DAD1* _chatParams; // 0x28
		::MoleMole::EntityHandle _playerEntity; // 0x30
		::System::Collections::Generic::List_1<::Foundation::ViewObject::ViewObjectHandle>* _viewObjectHandles; // 0x40
		::System::Action_1<::Class_2_CEC585D0736F3660*>* _finishCallback; // 0x48

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

		::System::Void _PlayChatWithNonCamera_b__12_0(::Class_2_CEC585D0736F3660* chatSyncData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_CEC585D0736F3660*))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENECHATSHOWOBJ__PLAYCHATWITHNONCAMERA_B__12_0_OFFSET))(this, chatSyncData);
		}

		::System::Void _PlayChatWithSoloCamera_b__13_0(::Class_2_CEC585D0736F3660* chatSyncData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_CEC585D0736F3660*))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENECHATSHOWOBJ__PLAYCHATWITHSOLOCAMERA_B__13_0_OFFSET))(this, chatSyncData);
		}

		::System::Void _PlayChatWithMultipleCamera_b__14_0(::Class_2_CEC585D0736F3660* chatSyncData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_CEC585D0736F3660*))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENECHATSHOWOBJ__PLAYCHATWITHMULTIPLECAMERA_B__14_0_OFFSET))(this, chatSyncData);
		}
	};
}
