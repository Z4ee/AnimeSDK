#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1258;
namespace RPG::Client::ActivityHipplen { class ActivityHipplenEffectResultData; }
namespace RPG::GameCore { class ActivityHipplenWorkRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENWORKDATA_GET_EFFECTS_OFFSET UNITYSDK_OFFSET(0xC55BBD0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENWORKDATA_GET_EFFECTVIEWDATA_OFFSET UNITYSDK_OFFSET(0xC55BBF0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENWORKDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0xC55BB10)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENWORKDATA_GET_ISEXTRA_OFFSET UNITYSDK_OFFSET(0xC55BBB0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENWORKDATA_GET_ISFINISH_OFFSET UNITYSDK_OFFSET(0xC55BB90)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENWORKDATA_GET_ISFIXED_OFFSET UNITYSDK_OFFSET(0xC55BB50)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENWORKDATA_GET_ISRECOMMEND_OFFSET UNITYSDK_OFFSET(0xC55BB70)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENWORKDATA_GET_WORKROW_OFFSET UNITYSDK_OFFSET(0xC55BB30)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENWORKDATA_SET_EFFECTS_OFFSET UNITYSDK_OFFSET(0xC55BBE0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENWORKDATA_SET_EFFECTVIEWDATA_OFFSET UNITYSDK_OFFSET(0xC55BC00)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENWORKDATA_SET_ID_OFFSET UNITYSDK_OFFSET(0xC55BB20)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENWORKDATA_SET_ISEXTRA_OFFSET UNITYSDK_OFFSET(0xC55BBC0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENWORKDATA_SET_ISFINISH_OFFSET UNITYSDK_OFFSET(0xC55BBA0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENWORKDATA_SET_ISFIXED_OFFSET UNITYSDK_OFFSET(0xC55BB60)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENWORKDATA_SET_ISRECOMMEND_OFFSET UNITYSDK_OFFSET(0xC55BB80)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENWORKDATA_SET_WORKROW_OFFSET UNITYSDK_OFFSET(0xC55BB40)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENWORKDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC545CA0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENWORKDATA__INITWORKEFFECTS_OFFSET UNITYSDK_OFFSET(0xC545F50)

namespace RPG::Client::ActivityHipplen
{
	inline static constexpr unsigned int ActivityHipplenWorkData_TypeDefinitionIndex = 75311;

	class ActivityHipplenWorkData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_1258*>* _Effects_k__BackingField; // 0x10
		::RPG::GameCore::ActivityHipplenWorkRow* _WorkRow_k__BackingField; // 0x18
		::RPG::Client::ActivityHipplen::ActivityHipplenEffectResultData* _EffectViewData_k__BackingField; // 0x20
		::System::UInt32 _ID_k__BackingField; // 0x28
		::System::Boolean _IsRecommend_k__BackingField; // 0x2C
		::System::Boolean _IsFinish_k__BackingField; // 0x2D
		::System::Boolean _IsFixed_k__BackingField; // 0x2E
		::System::Boolean _IsExtra_k__BackingField; // 0x2F

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

		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_1258*>* get_Effects()
		{
			return ((::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_1258*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENWORKDATA_GET_EFFECTS_OFFSET))(this);
		}

		::System::Void set_Effects(::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_1258*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_1258*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENWORKDATA_SET_EFFECTS_OFFSET))(this, a1);
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
