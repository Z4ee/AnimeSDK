#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1152;
namespace RPG::Client::ActivityHipplen { class ActivityHipplenEffectResultData; }
namespace RPG::GameCore { class ActivityHipplenWorkRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENWORKDATA_GET_EFFECTS_OFFSET UNITYSDK_OFFSET(0xB0E62B0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENWORKDATA_GET_EFFECTVIEWDATA_OFFSET UNITYSDK_OFFSET(0xB0E62D0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENWORKDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0xB0E61F0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENWORKDATA_GET_ISEXTRA_OFFSET UNITYSDK_OFFSET(0xB0E6290)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENWORKDATA_GET_ISFINISH_OFFSET UNITYSDK_OFFSET(0xB0E6270)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENWORKDATA_GET_ISFIXED_OFFSET UNITYSDK_OFFSET(0xB0E6230)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENWORKDATA_GET_ISRECOMMEND_OFFSET UNITYSDK_OFFSET(0xB0E6250)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENWORKDATA_GET_WORKROW_OFFSET UNITYSDK_OFFSET(0xB0E6210)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENWORKDATA_SET_EFFECTS_OFFSET UNITYSDK_OFFSET(0xB0E62C0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENWORKDATA_SET_EFFECTVIEWDATA_OFFSET UNITYSDK_OFFSET(0xB0E62E0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENWORKDATA_SET_ID_OFFSET UNITYSDK_OFFSET(0xB0E6200)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENWORKDATA_SET_ISEXTRA_OFFSET UNITYSDK_OFFSET(0xB0E62A0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENWORKDATA_SET_ISFINISH_OFFSET UNITYSDK_OFFSET(0xB0E6280)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENWORKDATA_SET_ISFIXED_OFFSET UNITYSDK_OFFSET(0xB0E6240)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENWORKDATA_SET_ISRECOMMEND_OFFSET UNITYSDK_OFFSET(0xB0E6260)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENWORKDATA_SET_WORKROW_OFFSET UNITYSDK_OFFSET(0xB0E6220)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENWORKDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xB0D1490)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENWORKDATA__INITWORKEFFECTS_OFFSET UNITYSDK_OFFSET(0xB0D16E0)

namespace RPG::Client::ActivityHipplen
{
	inline static constexpr unsigned int ActivityHipplenWorkData_TypeDefinitionIndex = 70481;

	class ActivityHipplenWorkData : public ::System::Object
	{
	public:
		::RPG::GameCore::ActivityHipplenWorkRow* _WorkRow_k__BackingField; // 0x10
		::RPG::Client::ActivityHipplen::ActivityHipplenEffectResultData* _EffectViewData_k__BackingField; // 0x18
		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_1152*>* _Effects_k__BackingField; // 0x20
		::System::Boolean _IsFinish_k__BackingField; // 0x28
		::System::Boolean _IsFixed_k__BackingField; // 0x29
		::System::Boolean _IsRecommend_k__BackingField; // 0x2A
		::System::Boolean _IsExtra_k__BackingField; // 0x2B
		::System::UInt32 _ID_k__BackingField; // 0x2C

		::System::Void _ctor(::System::UInt32 a1, ::System::Boolean a2, ::System::Boolean a3, ::System::Boolean a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENWORKDATA__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void _InitWorkEffects()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENWORKDATA__INITWORKEFFECTS_OFFSET))(this);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENWORKDATA_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENWORKDATA_SET_ID_OFFSET))(this, a1);
		}

		::RPG::GameCore::ActivityHipplenWorkRow* get_WorkRow()
		{
			return ((::RPG::GameCore::ActivityHipplenWorkRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENWORKDATA_GET_WORKROW_OFFSET))(this);
		}

		::System::Void set_WorkRow(::RPG::GameCore::ActivityHipplenWorkRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ActivityHipplenWorkRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENWORKDATA_SET_WORKROW_OFFSET))(this, a1);
		}

		::System::Boolean get_IsFixed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENWORKDATA_GET_ISFIXED_OFFSET))(this);
		}

		::System::Void set_IsFixed(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENWORKDATA_SET_ISFIXED_OFFSET))(this, a1);
		}

		::System::Boolean get_IsRecommend()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENWORKDATA_GET_ISRECOMMEND_OFFSET))(this);
		}

		::System::Void set_IsRecommend(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENWORKDATA_SET_ISRECOMMEND_OFFSET))(this, a1);
		}

		::System::Boolean get_IsFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENWORKDATA_GET_ISFINISH_OFFSET))(this);
		}

		::System::Void set_IsFinish(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENWORKDATA_SET_ISFINISH_OFFSET))(this, a1);
		}

		::System::Boolean get_IsExtra()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENWORKDATA_GET_ISEXTRA_OFFSET))(this);
		}

		::System::Void set_IsExtra(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENWORKDATA_SET_ISEXTRA_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_1152*>* get_Effects()
		{
			return ((::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_1152*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENWORKDATA_GET_EFFECTS_OFFSET))(this);
		}

		::System::Void set_Effects(::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_1152*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_1152*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENWORKDATA_SET_EFFECTS_OFFSET))(this, a1);
		}

		::RPG::Client::ActivityHipplen::ActivityHipplenEffectResultData* get_EffectViewData()
		{
			return ((::RPG::Client::ActivityHipplen::ActivityHipplenEffectResultData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENWORKDATA_GET_EFFECTVIEWDATA_OFFSET))(this);
		}

		::System::Void set_EffectViewData(::RPG::Client::ActivityHipplen::ActivityHipplenEffectResultData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityHipplen::ActivityHipplenEffectResultData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENWORKDATA_SET_EFFECTVIEWDATA_OFFSET))(this, a1);
		}
	};
}
