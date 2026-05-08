#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CCCAB3E4083DDEA7_Enum_3_ADB48E3C0DC0EC24.h"
#include "unitysdk/MoleMole/DisplayMessageBase.h"

class Class_1_3A46F934F31B990A;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_PERFORMPOPSHOW_DOWAIT_OFFSET UNITYSDK_OFFSET(0x10BE4630)
#define MOLEMOLE_PERFORMPOPSHOW_ENABLESTATE_OFFSET UNITYSDK_OFFSET(0x10BE4DD0)
#define MOLEMOLE_PERFORMPOPSHOW_GET_ISTRIGGERINLOADING_OFFSET UNITYSDK_OFFSET(0x10BE43A0)
#define MOLEMOLE_PERFORMPOPSHOW_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x10BE43B0)
#define MOLEMOLE_PERFORMPOPSHOW_ONPROCESS_OFFSET UNITYSDK_OFFSET(0x10BE4580)
#define MOLEMOLE_PERFORMPOPSHOW_PLAY_OFFSET UNITYSDK_OFFSET(0x10BE4890)
#define MOLEMOLE_PERFORMPOPSHOW__CTOR_1_OFFSET UNITYSDK_OFFSET(0x10BE4480)
#define MOLEMOLE_PERFORMPOPSHOW__CTOR_OFFSET UNITYSDK_OFFSET(0x10BE43C0)
#define MOLEMOLE_PERFORMPOPSHOW__ONPROCESS_B__14_0_OFFSET UNITYSDK_OFFSET(0x10BE4EA0)

namespace MoleMole
{
	inline static constexpr unsigned int PerformPopShow_TypeDefinitionIndex = 54943;

	class PerformPopShow : public ::MoleMole::DisplayMessageBase
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* performIDs; // 0x28
		::System::Action* finishCallback; // 0x30
		::System::Action* executeWhenStartFadeOutAction; // 0x38
		::System::Boolean _useBlackMaskFadeOut; // 0x40
		::System::Boolean _blackMaskFadein; // 0x41
		::System::Int32 _triggerGroupID; // 0x44
		::System::Int32 _waitTime; // 0x48
		::System::Int32 transitionID; // 0x4C

		::System::Void _ctor(::System::Collections::Generic::List_1<::System::Int32>* performs, ::System::Action* finishCallback, ::System::Action* finishFadeCallback, ::System::Boolean blackMaskFadein)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Action*, ::System::Action*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_PERFORMPOPSHOW__CTOR_OFFSET))(this, performs, finishCallback, finishFadeCallback, blackMaskFadein);
		}

		::System::Void _ctor_1(::Class_1_3A46F934F31B990A* performActionParams, ::System::Action* finishCallback, ::System::Action* finishFadeCallback, ::System::Int32 transitionID)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_3A46F934F31B990A*, ::System::Action*, ::System::Action*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_PERFORMPOPSHOW__CTOR_1_OFFSET))(this, performActionParams, finishCallback, finishFadeCallback, transitionID);
		}

		::System::Boolean get_IsTriggerInLoading()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PERFORMPOPSHOW_GET_ISTRIGGERINLOADING_OFFSET))(this);
		}

		::System::Int32 get_Priority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PERFORMPOPSHOW_GET_PRIORITY_OFFSET))(this);
		}

		::System::Void OnProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PERFORMPOPSHOW_ONPROCESS_OFFSET))(this);
		}

		static ::System::Void DoWait(::System::Int32 waitTime, ::Class_1_CCCAB3E4083DDEA7_Enum_3_ADB48E3C0DC0EC24 stopSource, ::System::Action* onPlay)
		{
			return ((::System::Void(*)(::System::Int32, ::Class_1_CCCAB3E4083DDEA7_Enum_3_ADB48E3C0DC0EC24, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_PERFORMPOPSHOW_DOWAIT_OFFSET))(waitTime, stopSource, onPlay);
		}

		static ::System::Void EnableState(::System::Boolean state)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_PERFORMPOPSHOW_ENABLESTATE_OFFSET))(state);
		}

		::System::Void Play(::System::Boolean finishChat)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_PERFORMPOPSHOW_PLAY_OFFSET))(this, finishChat);
		}

		::System::Void _OnProcess_b__14_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PERFORMPOPSHOW__ONPROCESS_B__14_0_OFFSET))(this);
		}
	};
}
