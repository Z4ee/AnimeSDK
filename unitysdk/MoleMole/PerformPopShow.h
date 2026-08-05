#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CCCAB3E4083DDEA7_Enum_3_ADC58E3C0DCF5F77.h"
#include "unitysdk/MoleMole/DisplayMessageBase.h"

class Class_1_3A46F934F31B990A;
class Class_1_5CFE684023F165BE;
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_PERFORMPOPSHOW_DOWAIT_OFFSET UNITYSDK_OFFSET(0x17928A00)
#define MOLEMOLE_PERFORMPOPSHOW_ENABLESTATE_OFFSET UNITYSDK_OFFSET(0x179292D0)
#define MOLEMOLE_PERFORMPOPSHOW_GET_ISTRIGGERINLOADING_OFFSET UNITYSDK_OFFSET(0x17928720)
#define MOLEMOLE_PERFORMPOPSHOW_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x17928730)
#define MOLEMOLE_PERFORMPOPSHOW_INVOKEFINISHCALLBACK_OFFSET UNITYSDK_OFFSET(0x179291E0)
#define MOLEMOLE_PERFORMPOPSHOW_INVOKEFINISHSYNCDATACALLBACK_OFFSET UNITYSDK_OFFSET(0x17929240)
#define MOLEMOLE_PERFORMPOPSHOW_ONPROCESS_OFFSET UNITYSDK_OFFSET(0x17928950)
#define MOLEMOLE_PERFORMPOPSHOW_PLAY_OFFSET UNITYSDK_OFFSET(0x17928C60)
#define MOLEMOLE_PERFORMPOPSHOW__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17928810)
#define MOLEMOLE_PERFORMPOPSHOW__CTOR_OFFSET UNITYSDK_OFFSET(0x17928740)
#define MOLEMOLE_PERFORMPOPSHOW__ONPROCESS_B__16_0_OFFSET UNITYSDK_OFFSET(0x179293A0)

namespace MoleMole
{
	inline static constexpr unsigned int PerformPopShow_TypeDefinitionIndex = 43758;

	class PerformPopShow : public ::MoleMole::DisplayMessageBase
	{
	public:
		::System::Action_1<::Class_1_5CFE684023F165BE*>* finishSyncDataCallback; // 0x28
		::System::Action* executeWhenStartFadeOutAction; // 0x30
		::System::Collections::Generic::List_1<::System::Int32>* performIDs; // 0x38
		::System::Action* finishCallback; // 0x40
		::System::Int32 transitionID; // 0x48
		::System::Int32 _waitTime; // 0x4C
		::System::Int32 _triggerGroupID; // 0x50
		::System::Boolean _useWhiteMaskFadeOut; // 0x54
		::System::Boolean _blackMaskFadein; // 0x55
		::System::Boolean _useBlackOrWhiteMaskFadeOut; // 0x56

		::System::Void _ctor(::System::Collections::Generic::List_1<::System::Int32>* performs, ::System::Action* finishCallback, ::System::Action* finishFadeCallback, ::System::Boolean blackMaskFadein, ::System::Action_1<::Class_1_5CFE684023F165BE*>* finishSyncDataCallback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Action*, ::System::Action*, ::System::Boolean, ::System::Action_1<::Class_1_5CFE684023F165BE*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_PERFORMPOPSHOW__CTOR_OFFSET))(this, performs, finishCallback, finishFadeCallback, blackMaskFadein, finishSyncDataCallback);
		}

		::System::Void _ctor_1(::Class_1_3A46F934F31B990A* performActionParams, ::System::Action* finishCallback, ::System::Action* finishFadeCallback, ::System::Int32 transitionID, ::System::Action_1<::Class_1_5CFE684023F165BE*>* finishSyncDataCallback)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_3A46F934F31B990A*, ::System::Action*, ::System::Action*, ::System::Int32, ::System::Action_1<::Class_1_5CFE684023F165BE*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_PERFORMPOPSHOW__CTOR_1_OFFSET))(this, performActionParams, finishCallback, finishFadeCallback, transitionID, finishSyncDataCallback);
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

		::System::Void InvokeFinishCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PERFORMPOPSHOW_INVOKEFINISHCALLBACK_OFFSET))(this);
		}

		::System::Void InvokeFinishSyncDataCallback(::Class_1_5CFE684023F165BE* syncData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_5CFE684023F165BE*))((::PBYTE)hIl2Cpp + MOLEMOLE_PERFORMPOPSHOW_INVOKEFINISHSYNCDATACALLBACK_OFFSET))(this, syncData);
		}

		static ::System::Void DoWait(::System::Int32 waitTime, ::Class_1_CCCAB3E4083DDEA7_Enum_3_ADC58E3C0DCF5F77 stopSource, ::System::Action* onPlay)
		{
			return ((::System::Void(*)(::System::Int32, ::Class_1_CCCAB3E4083DDEA7_Enum_3_ADC58E3C0DCF5F77, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_PERFORMPOPSHOW_DOWAIT_OFFSET))(waitTime, stopSource, onPlay);
		}

		static ::System::Void EnableState(::System::Boolean state)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_PERFORMPOPSHOW_ENABLESTATE_OFFSET))(state);
		}

		::System::Void Play(::System::Boolean finishChat)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_PERFORMPOPSHOW_PLAY_OFFSET))(this, finishChat);
		}

		::System::Void _OnProcess_b__16_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PERFORMPOPSHOW__ONPROCESS_B__16_0_OFFSET))(this);
		}
	};
}
