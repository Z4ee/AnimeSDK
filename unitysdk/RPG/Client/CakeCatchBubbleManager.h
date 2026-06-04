#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CakeBubbleOffset.h"
#include "unitysdk/RPG/Client/CakeCatchBubbleType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_1C87E05DC1AC3C04;
class Class_1_B9D6E7E76075C6E2;
class Class_1_CCF20DC2AAC0169A;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define RPG_CLIENT_CAKECATCHBUBBLEMANAGER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0xB4673B0)
#define RPG_CLIENT_CAKECATCHBUBBLEMANAGER_INTERRUPTALL_OFFSET UNITYSDK_OFFSET(0xB467700)
#define RPG_CLIENT_CAKECATCHBUBBLEMANAGER_PLAYDIALOGUEGROUP_OFFSET UNITYSDK_OFFSET(0xB467680)
#define RPG_CLIENT_CAKECATCHBUBBLEMANAGER_SHOWCAKEIDENTITYBUBBLE_OFFSET UNITYSDK_OFFSET(0xB467EB0)
#define RPG_CLIENT_CAKECATCHBUBBLEMANAGER__BUILDPENDINGQUEUE_OFFSET UNITYSDK_OFFSET(0xB467880)
#define RPG_CLIENT_CAKECATCHBUBBLEMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0xB467450)
#define RPG_CLIENT_CAKECATCHBUBBLEMANAGER__GETDEFAULTBUBBLEOFFSET_OFFSET UNITYSDK_OFFSET(0xB467DD0)
#define RPG_CLIENT_CAKECATCHBUBBLEMANAGER__ONBUBBLECOMPLETE_OFFSET UNITYSDK_OFFSET(0xB467A70)
#define RPG_CLIENT_CAKECATCHBUBBLEMANAGER__PLAYNEXTDIALOGUE_OFFSET UNITYSDK_OFFSET(0xB4679B0)
#define RPG_CLIENT_CAKECATCHBUBBLEMANAGER__RESOLVEBUBBLEOFFSET_OFFSET UNITYSDK_OFFSET(0xB467CD0)
#define RPG_CLIENT_CAKECATCHBUBBLEMANAGER__SHOWCAKEDIALOGUEBUBBLE_OFFSET UNITYSDK_OFFSET(0xB467AC0)

namespace RPG::Client
{
	inline static constexpr unsigned int CakeCatchBubbleManager_TypeDefinitionIndex = 58913;

	class CakeCatchBubbleManager : public ::System::Object
	{
	public:
		static ::RPG::Client::CakeCatchBubbleManager** StaticGet__instance()
		{
			return (::RPG::Client::CakeCatchBubbleManager**)Il2CppClass::FromTypeDefinitionIndex(CakeCatchBubbleManager_TypeDefinitionIndex)->GetStaticField(0x5B000);
		}
		// static const ::System::Int32 _INVALID_RUNTIME_ID = 0xFFFFFFFF; // 0x0
		// static const ::System::Int32 _INVALID_BUBBLE_TIMER_ID = 0x0; // 0x0
		::System::Action* _OnDialogueGroupEnd; // 0x10
		::System::Collections::Generic::Queue_1<::Class_1_1C87E05DC1AC3C04*>* _PendingQueue; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::CakeBubbleOffset>* _SlotOffsetDict; // 0x20
		::System::Int32 _BubbleTimerID; // 0x28
		::System::Int32 _CurrentRuntimeID; // 0x2C
		::System::Boolean _IsPlayingDialogue; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHBUBBLEMANAGER__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::CakeCatchBubbleManager* get_Instance()
		{
			return ((::RPG::Client::CakeCatchBubbleManager*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHBUBBLEMANAGER_GET_INSTANCE_OFFSET))();
		}

		::System::Void PlayDialogueGroup(::Class_1_B9D6E7E76075C6E2* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B9D6E7E76075C6E2*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHBUBBLEMANAGER_PLAYDIALOGUEGROUP_OFFSET))(this, a1, a2);
		}

		::System::Void InterruptAll()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHBUBBLEMANAGER_INTERRUPTALL_OFFSET))(this);
		}

		::System::Void _BuildPendingQueue(::System::Collections::Generic::List_1<::Class_1_1C87E05DC1AC3C04*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_1C87E05DC1AC3C04*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHBUBBLEMANAGER__BUILDPENDINGQUEUE_OFFSET))(this, a1);
		}

		::System::Void _OnBubbleComplete()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHBUBBLEMANAGER__ONBUBBLECOMPLETE_OFFSET))(this);
		}

		::System::Void _PlayNextDialogue()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHBUBBLEMANAGER__PLAYNEXTDIALOGUE_OFFSET))(this);
		}

		::System::Void _ShowCakeDialogueBubble(::Class_1_1C87E05DC1AC3C04* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_1C87E05DC1AC3C04*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHBUBBLEMANAGER__SHOWCAKEDIALOGUEBUBBLE_OFFSET))(this, a1);
		}

		::System::ValueTuple_2<::RPG::Client::CakeBubbleOffset, ::RPG::Client::CakeCatchBubbleType> _ResolveBubbleOffset(::Class_1_CCF20DC2AAC0169A* a1)
		{
			return ((::System::ValueTuple_2<::RPG::Client::CakeBubbleOffset, ::RPG::Client::CakeCatchBubbleType>(*)(::PVOID, ::Class_1_CCF20DC2AAC0169A*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHBUBBLEMANAGER__RESOLVEBUBBLEOFFSET_OFFSET))(this, a1);
		}

		::System::ValueTuple_2<::RPG::Client::CakeBubbleOffset, ::RPG::Client::CakeCatchBubbleType> _GetDefaultBubbleOffset()
		{
			return ((::System::ValueTuple_2<::RPG::Client::CakeBubbleOffset, ::RPG::Client::CakeCatchBubbleType>(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHBUBBLEMANAGER__GETDEFAULTBUBBLEOFFSET_OFFSET))(this);
		}

		::System::Void ShowCakeIdentityBubble(::System::UInt32 a1, ::System::UInt32 a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHBUBBLEMANAGER_SHOWCAKEIDENTITYBUBBLE_OFFSET))(this, a1, a2, a3);
		}
	};
}
