#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_F00DC819D834EFD2.h"
#include "unitysdk/Foundation/Unreal/FTransform3D.h"
#include "unitysdk/MoleMole/ChatPopShow_ChatCameraType.h"
#include "unitysdk/MoleMole/DisplayMessageBase.h"

class Class_1_3A46F934F31B990A;
class Class_1_D65512A83CF70AB7;
namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsWorld; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CHATPOPSHOW_GENERATECHATFLAG_OFFSET UNITYSDK_OFFSET(0xE956910)
#define MOLEMOLE_CHATPOPSHOW_GETCHATCAMERATYPE_OFFSET UNITYSDK_OFFSET(0xE955070)
#define MOLEMOLE_CHATPOPSHOW_GETCHATENTITIES_OFFSET UNITYSDK_OFFSET(0xE955CA0)
#define MOLEMOLE_CHATPOPSHOW_GETENTITY_OFFSET UNITYSDK_OFFSET(0xE955B80)
#define MOLEMOLE_CHATPOPSHOW_GETTAGMAP_OFFSET UNITYSDK_OFFSET(0xE955540)
#define MOLEMOLE_CHATPOPSHOW_GET_ISTRIGGERINLOADING_OFFSET UNITYSDK_OFFSET(0xE955060)
#define MOLEMOLE_CHATPOPSHOW_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0xE956990)
#define MOLEMOLE_CHATPOPSHOW_ONPLAYCHAT_OFFSET UNITYSDK_OFFSET(0xE956E80)
#define MOLEMOLE_CHATPOPSHOW_ONPROCESS_OFFSET UNITYSDK_OFFSET(0xE956AD0)
#define MOLEMOLE_CHATPOPSHOW_PLAYCHATWITHFIXEDCAMERA_OFFSET UNITYSDK_OFFSET(0xE956310)
#define MOLEMOLE_CHATPOPSHOW_PLAYCHATWITHMULTIPLECAMERA_OFFSET UNITYSDK_OFFSET(0xE956110)
#define MOLEMOLE_CHATPOPSHOW_PLAYCHATWITHSOLOCAMERA_OFFSET UNITYSDK_OFFSET(0xE955100)
#define MOLEMOLE_CHATPOPSHOW_PLAYCHAT_OFFSET UNITYSDK_OFFSET(0xE956BF0)
#define MOLEMOLE_CHATPOPSHOW__CTOR_OFFSET UNITYSDK_OFFSET(0xE9569A0)
#define MOLEMOLE_CHATPOPSHOW__PLAYCHATWITHFIXEDCAMERA_B__15_0_OFFSET UNITYSDK_OFFSET(0xE957090)
#define MOLEMOLE_CHATPOPSHOW__PLAYCHATWITHFIXEDCAMERA_G__GETTRANSFORM_15_1_OFFSET UNITYSDK_OFFSET(0xE956750)
#define MOLEMOLE_CHATPOPSHOW__PLAYCHATWITHMULTIPLECAMERA_B__14_0_OFFSET UNITYSDK_OFFSET(0xE957030)
#define MOLEMOLE_CHATPOPSHOW__PLAYCHATWITHSOLOCAMERA_B__10_0_OFFSET UNITYSDK_OFFSET(0xE956FD0)
#define MOLEMOLE_CHATPOPSHOW__PLAYCHAT_B__21_0_OFFSET UNITYSDK_OFFSET(0xE9570F0)

namespace MoleMole
{
	inline static constexpr unsigned int ChatPopShow_TypeDefinitionIndex = 64966;

	class ChatPopShow : public ::MoleMole::DisplayMessageBase
	{
	public:
		::Class_1_3A46F934F31B990A* _actionActionParams; // 0x28
		::System::Action_1<::Class_1_D65512A83CF70AB7*>* _finishCallback; // 0x30
		::System::Int32 _interactId; // 0x38
		::System::UInt32 _chatUid; // 0x3C
		::System::Int32 _targetUid; // 0x40
		::System::Int32 _endTransitionId; // 0x44

		::System::Void _ctor(::Class_1_3A46F934F31B990A* data, ::System::UInt32 chatUID, ::System::Int32 interactId, ::System::Int32 targetUID, ::System::Int32 endTransitionId, ::System::Action_1<::Class_1_D65512A83CF70AB7*>* finishCallback)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_3A46F934F31B990A*, ::System::UInt32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Action_1<::Class_1_D65512A83CF70AB7*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHATPOPSHOW__CTOR_OFFSET))(this, data, chatUID, interactId, targetUID, endTransitionId, finishCallback);
		}

		::System::Boolean get_IsTriggerInLoading()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHATPOPSHOW_GET_ISTRIGGERINLOADING_OFFSET))(this);
		}

		static ::MoleMole::ChatPopShow_ChatCameraType GetChatCameraType(::Class_1_3A46F934F31B990A* config)
		{
			return ((::MoleMole::ChatPopShow_ChatCameraType(*)(::Class_1_3A46F934F31B990A*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHATPOPSHOW_GETCHATCAMERATYPE_OFFSET))(config);
		}

		::System::Void PlayChatWithSoloCamera()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHATPOPSHOW_PLAYCHATWITHSOLOCAMERA_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* GetTagMap()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHATPOPSHOW_GETTAGMAP_OFFSET))(this);
		}

		::System::Boolean GetEntity(::System::Int32 tagId, ::MoleMole::Battle::Entity*& entity)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MoleMole::Battle::Entity*&))((::PBYTE)hIl2Cpp + MOLEMOLE_CHATPOPSHOW_GETENTITY_OFFSET))(this, tagId, entity);
		}

		::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* GetChatEntities()
		{
			return ((::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHATPOPSHOW_GETCHATENTITIES_OFFSET))(this);
		}

		::System::Void PlayChatWithMultipleCamera()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHATPOPSHOW_PLAYCHATWITHMULTIPLECAMERA_OFFSET))(this);
		}

		::System::Void PlayChatWithFixedCamera()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHATPOPSHOW_PLAYCHATWITHFIXEDCAMERA_OFFSET))(this);
		}

		::Enum_3_F00DC819D834EFD2 GenerateChatFlag()
		{
			return ((::Enum_3_F00DC819D834EFD2(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHATPOPSHOW_GENERATECHATFLAG_OFFSET))(this);
		}

		::System::Int32 get_Priority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHATPOPSHOW_GET_PRIORITY_OFFSET))(this);
		}

		::System::Void OnProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHATPOPSHOW_ONPROCESS_OFFSET))(this);
		}

		::System::Void PlayChat()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHATPOPSHOW_PLAYCHAT_OFFSET))(this);
		}

		::System::Void OnPlayChat()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHATPOPSHOW_ONPLAYCHAT_OFFSET))(this);
		}

		::System::Void _PlayChatWithSoloCamera_b__10_0(::Class_1_D65512A83CF70AB7* chatSyncData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D65512A83CF70AB7*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHATPOPSHOW__PLAYCHATWITHSOLOCAMERA_B__10_0_OFFSET))(this, chatSyncData);
		}

		::System::Void _PlayChatWithMultipleCamera_b__14_0(::Class_1_D65512A83CF70AB7* chatSyncData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D65512A83CF70AB7*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHATPOPSHOW__PLAYCHATWITHMULTIPLECAMERA_B__14_0_OFFSET))(this, chatSyncData);
		}

		::System::Void _PlayChatWithFixedCamera_b__15_0(::Class_1_D65512A83CF70AB7* chatSyncData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D65512A83CF70AB7*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHATPOPSHOW__PLAYCHATWITHFIXEDCAMERA_B__15_0_OFFSET))(this, chatSyncData);
		}

		static ::Foundation::Unreal::FTransform3D _PlayChatWithFixedCamera_g__GetTransform_15_1(::System::String* transformId, ::Nap::NapECS::EcsWorld* world)
		{
			return ((::Foundation::Unreal::FTransform3D(*)(::System::String*, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHATPOPSHOW__PLAYCHATWITHFIXEDCAMERA_G__GETTRANSFORM_15_1_OFFSET))(transformId, world);
		}

		::System::Void _PlayChat_b__21_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHATPOPSHOW__PLAYCHAT_B__21_0_OFFSET))(this);
		}
	};
}
