#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/DateTimePro.h"
#include "unitysdk/RPG/Client/MonoRemainTimerPositionStyle_FirstDisplayedTimeUnit.h"
#include "unitysdk/System/TimeSpan.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::UI { class Text; }
namespace XLua { class LuaTable; }

#define RPG_CLIENT_MONOREMAINTIMERPOSITIONSTYLE_CLEAR_OFFSET UNITYSDK_OFFSET(0x9D2E590)
#define RPG_CLIENT_MONOREMAINTIMERPOSITIONSTYLE_FORCEUPDATETIME_OFFSET UNITYSDK_OFFSET(0x9D2E380)
#define RPG_CLIENT_MONOREMAINTIMERPOSITIONSTYLE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x9D2E630)
#define RPG_CLIENT_MONOREMAINTIMERPOSITIONSTYLE_SETREMAINTIMEINSECONDS_OFFSET UNITYSDK_OFFSET(0x9D2E040)
#define RPG_CLIENT_MONOREMAINTIMERPOSITIONSTYLE_SETTARGETTIMEBYTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x9D2DF50)
#define RPG_CLIENT_MONOREMAINTIMERPOSITIONSTYLE_UPDATE_OFFSET UNITYSDK_OFFSET(0x9D2E5E0)
#define RPG_CLIENT_MONOREMAINTIMERPOSITIONSTYLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x9D2F1E0)
#define RPG_CLIENT_MONOREMAINTIMERPOSITIONSTYLE__CTOR_OFFSET UNITYSDK_OFFSET(0x9D2F1D0)
#define RPG_CLIENT_MONOREMAINTIMERPOSITIONSTYLE__INITTRANSFORM_OFFSET UNITYSDK_OFFSET(0x9D2E680)
#define RPG_CLIENT_MONOREMAINTIMERPOSITIONSTYLE__SETREMAINTIME_OFFSET UNITYSDK_OFFSET(0x9D2E0E0)
#define RPG_CLIENT_MONOREMAINTIMERPOSITIONSTYLE__SETSLOTACTIVE_OFFSET UNITYSDK_OFFSET(0x9D2EE20)
#define RPG_CLIENT_MONOREMAINTIMERPOSITIONSTYLE__SETSLOTNUMANDTEXT_OFFSET UNITYSDK_OFFSET(0x9D2EEF0)
#define RPG_CLIENT_MONOREMAINTIMERPOSITIONSTYLE__SETSLOTSVIEW_OFFSET UNITYSDK_OFFSET(0x9D2EC30)
#define RPG_CLIENT_MONOREMAINTIMERPOSITIONSTYLE__UPDATETIME_OFFSET UNITYSDK_OFFSET(0x9D2E3D0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoRemainTimerPositionStyle_TypeDefinitionIndex = 59496;

	class MonoRemainTimerPositionStyle : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Collections::Generic::List_1<::System::String*>** StaticGet__TimeUnitTextIDs()
		{
			return (::System::Collections::Generic::List_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MonoRemainTimerPositionStyle_TypeDefinitionIndex)->GetStaticField(0x40AD0);
		}
		::System::Boolean _IsTransformInited; // 0x18
		::System::Collections::Generic::List_1<::UnityEngine::UI::Text*>* _NumberSlots; // 0x20
		::System::Collections::Generic::List_1<::UnityEngine::UI::Text*>* _TextSlots; // 0x28
		::RPG::Client::DateTimePro _TargetTime; // 0x30
		::XLua::LuaTable* _LuaTable; // 0x38
		::System::Action_1<::XLua::LuaTable*>* _TimeOutCallBack; // 0x40
		::System::Int32 _MaxShowSlotNum; // 0x48
		::RPG::Client::MonoRemainTimerPositionStyle_FirstDisplayedTimeUnit _FirstDisplayedTimeUnit; // 0x4C
		::System::Boolean _KeepFullDigits; // 0x50
		::System::Boolean _IsUpdating; // 0x51
		::System::Collections::Generic::List_1<::System::Int32>* _NumbersFromRemainTime; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOREMAINTIMERPOSITIONSTYLE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOREMAINTIMERPOSITIONSTYLE__CCTOR_OFFSET))();
		}

		::System::Void SetTargetTimeByTimeStamp(::System::UInt32 targetTimeStamp, ::System::Action_1<::XLua::LuaTable*>* timeOutCallback, ::XLua::LuaTable* luaTable, ::System::Int32 maxShowSlotNum, ::RPG::Client::MonoRemainTimerPositionStyle_FirstDisplayedTimeUnit firstDisplayedTimeUnit, ::System::Boolean keepFullDigits)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Action_1<::XLua::LuaTable*>*, ::XLua::LuaTable*, ::System::Int32, ::RPG::Client::MonoRemainTimerPositionStyle_FirstDisplayedTimeUnit, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOREMAINTIMERPOSITIONSTYLE_SETTARGETTIMEBYTIMESTAMP_OFFSET))(this, targetTimeStamp, timeOutCallback, luaTable, maxShowSlotNum, firstDisplayedTimeUnit, keepFullDigits);
		}

		::System::Void SetRemainTimeInSeconds(::System::Double seconds, ::System::Int32 maxShowSlotNum, ::RPG::Client::MonoRemainTimerPositionStyle_FirstDisplayedTimeUnit firstDisplayedTimeUnit, ::System::Boolean keepFullDigit)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double, ::System::Int32, ::RPG::Client::MonoRemainTimerPositionStyle_FirstDisplayedTimeUnit, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOREMAINTIMERPOSITIONSTYLE_SETREMAINTIMEINSECONDS_OFFSET))(this, seconds, maxShowSlotNum, firstDisplayedTimeUnit, keepFullDigit);
		}

		::System::Void ForceUpdateTime()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOREMAINTIMERPOSITIONSTYLE_FORCEUPDATETIME_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOREMAINTIMERPOSITIONSTYLE_CLEAR_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOREMAINTIMERPOSITIONSTYLE_UPDATE_OFFSET))(this);
		}

		::System::Void _UpdateTime()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOREMAINTIMERPOSITIONSTYLE__UPDATETIME_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOREMAINTIMERPOSITIONSTYLE_ONDESTROY_OFFSET))(this);
		}

		::System::Void _InitTransform()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOREMAINTIMERPOSITIONSTYLE__INITTRANSFORM_OFFSET))(this);
		}

		::System::Void _SetRemainTime(::System::TimeSpan remainTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::TimeSpan))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOREMAINTIMERPOSITIONSTYLE__SETREMAINTIME_OFFSET))(this, remainTime);
		}

		::System::Void _SetSlotsView(::System::Int32 beginTimeIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOREMAINTIMERPOSITIONSTYLE__SETSLOTSVIEW_OFFSET))(this, beginTimeIndex);
		}

		::System::Void _SetSlotNumAndText(::System::Int32 slotIndex, ::System::Int32 timeIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOREMAINTIMERPOSITIONSTYLE__SETSLOTNUMANDTEXT_OFFSET))(this, slotIndex, timeIndex);
		}

		::System::Void _SetSlotActive(::System::Int32 slotIndex, ::System::Boolean isActive)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOREMAINTIMERPOSITIONSTYLE__SETSLOTACTIVE_OFFSET))(this, slotIndex, isActive);
		}
	};
}
