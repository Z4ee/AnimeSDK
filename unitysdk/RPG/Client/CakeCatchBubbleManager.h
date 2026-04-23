#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CakeBubbleOffset.h"
#include "unitysdk/RPG/Client/CakeCatchBubbleType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_8FA131E93D046711;
class Class_1_902742FEC03162EB;
class Class_1_D3D14052A5904019;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define RPG_CLIENT_CAKECATCHBUBBLEMANAGER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x9ECC1A0)
#define RPG_CLIENT_CAKECATCHBUBBLEMANAGER_INTERRUPTALL_OFFSET UNITYSDK_OFFSET(0x9ECC500)
#define RPG_CLIENT_CAKECATCHBUBBLEMANAGER_PLAYDIALOGUEGROUP_OFFSET UNITYSDK_OFFSET(0x9ECC480)
#define RPG_CLIENT_CAKECATCHBUBBLEMANAGER_SHOWCAKEIDENTITYBUBBLE_OFFSET UNITYSDK_OFFSET(0x9ECD0A0)
#define RPG_CLIENT_CAKECATCHBUBBLEMANAGER__BUILDPENDINGQUEUE_OFFSET UNITYSDK_OFFSET(0x9ECC680)
#define RPG_CLIENT_CAKECATCHBUBBLEMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x9ECC240)
#define RPG_CLIENT_CAKECATCHBUBBLEMANAGER__GETDEFAULTBUBBLEOFFSET_OFFSET UNITYSDK_OFFSET(0x9ECCF70)
#define RPG_CLIENT_CAKECATCHBUBBLEMANAGER__ONBUBBLECOMPLETE_OFFSET UNITYSDK_OFFSET(0x9ECC8A0)
#define RPG_CLIENT_CAKECATCHBUBBLEMANAGER__PLAYNEXTDIALOGUE_OFFSET UNITYSDK_OFFSET(0x9ECC7E0)
#define RPG_CLIENT_CAKECATCHBUBBLEMANAGER__RESOLVEBUBBLEOFFSET_OFFSET UNITYSDK_OFFSET(0x9ECCCD0)
#define RPG_CLIENT_CAKECATCHBUBBLEMANAGER__SHOWCAKEDIALOGUEBUBBLE_OFFSET UNITYSDK_OFFSET(0x9ECC8F0)

namespace RPG::Client
{
	inline static constexpr unsigned int CakeCatchBubbleManager_TypeDefinitionIndex = 57997;

	class CakeCatchBubbleManager : public ::System::Object
	{
	public:
		static ::RPG::Client::CakeCatchBubbleManager** StaticGet__instance()
		{
			return (::RPG::Client::CakeCatchBubbleManager**)Il2CppClass::FromTypeDefinitionIndex(CakeCatchBubbleManager_TypeDefinitionIndex)->GetStaticField(0x41550);
		}
		// static const ::System::Int32 _INVALID_RUNTIME_ID = 0xFFFFFFFF; // 0x0
		// static const ::System::Int32 _INVALID_BUBBLE_TIMER_ID = 0x0; // 0x0
		::System::Collections::Generic::Queue_1<::Class_1_8FA131E93D046711*>* _PendingQueue; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::CakeBubbleOffset>* _SlotOffsetDict; // 0x18
		::System::Action* _OnDialogueGroupEnd; // 0x20
		::System::Int32 _CurrentRuntimeID; // 0x28
		::System::Boolean _IsPlayingDialogue; // 0x2C
		::System::Int32 _BubbleTimerID; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHBUBBLEMANAGER__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::CakeCatchBubbleManager* get_Instance()
		{
			return ((::RPG::Client::CakeCatchBubbleManager*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHBUBBLEMANAGER_GET_INSTANCE_OFFSET))();
		}

		::System::Void PlayDialogueGroup(::Class_1_D3D14052A5904019* dialogueGroup, ::System::Action* OnComplete)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D3D14052A5904019*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHBUBBLEMANAGER_PLAYDIALOGUEGROUP_OFFSET))(this, dialogueGroup, OnComplete);
		}

		::System::Void InterruptAll()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHBUBBLEMANAGER_INTERRUPTALL_OFFSET))(this);
		}

		::System::Void _BuildPendingQueue(::System::Collections::Generic::List_1<::Class_1_8FA131E93D046711*>* dialogueDatas)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_8FA131E93D046711*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHBUBBLEMANAGER__BUILDPENDINGQUEUE_OFFSET))(this, dialogueDatas);
		}

		::System::Void _OnBubbleComplete()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHBUBBLEMANAGER__ONBUBBLECOMPLETE_OFFSET))(this);
		}

		::System::Void _PlayNextDialogue()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHBUBBLEMANAGER__PLAYNEXTDIALOGUE_OFFSET))(this);
		}

		::System::Void _ShowCakeDialogueBubble(::Class_1_8FA131E93D046711* data)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_8FA131E93D046711*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHBUBBLEMANAGER__SHOWCAKEDIALOGUEBUBBLE_OFFSET))(this, data);
		}

		::System::ValueTuple_2<::RPG::Client::CakeBubbleOffset, ::RPG::Client::CakeCatchBubbleType> _ResolveBubbleOffset(::Class_1_902742FEC03162EB* positionInfo)
		{
			return ((::System::ValueTuple_2<::RPG::Client::CakeBubbleOffset, ::RPG::Client::CakeCatchBubbleType>(*)(::PVOID, ::Class_1_902742FEC03162EB*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHBUBBLEMANAGER__RESOLVEBUBBLEOFFSET_OFFSET))(this, positionInfo);
		}

		::System::ValueTuple_2<::RPG::Client::CakeBubbleOffset, ::RPG::Client::CakeCatchBubbleType> _GetDefaultBubbleOffset()
		{
			return ((::System::ValueTuple_2<::RPG::Client::CakeBubbleOffset, ::RPG::Client::CakeCatchBubbleType>(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHBUBBLEMANAGER__GETDEFAULTBUBBLEOFFSET_OFFSET))(this);
		}

		::System::Void ShowCakeIdentityBubble(::System::UInt32 runtimeID, ::System::UInt32 slotID, ::System::Boolean isShowPic)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHBUBBLEMANAGER_SHOWCAKEIDENTITYBUBBLE_OFFSET))(this, runtimeID, slotID, isShowPic);
		}
	};
}
