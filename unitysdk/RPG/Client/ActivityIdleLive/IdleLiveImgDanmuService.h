#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1254;
class Class_1_7B630EA0921A5074;
namespace RPG::Client::ActivityIdleLive { class IdleLiveDanmuContentData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEIMGDANMUSERVICE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC5CC0C0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEIMGDANMUSERVICE_GETIMAGEDANMU_OFFSET UNITYSDK_OFFSET(0xC5CBE60)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEIMGDANMUSERVICE__ADDIMAGEDANMU_OFFSET UNITYSDK_OFFSET(0xC5CC6B0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEIMGDANMUSERVICE__CLEARCREATEDTRIGGERS_OFFSET UNITYSDK_OFFSET(0xC5CC260)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEIMGDANMUSERVICE__CLEARENDEDIMAGEDANMUS_OFFSET UNITYSDK_OFFSET(0xC5CBF60)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEIMGDANMUSERVICE__CTOR_OFFSET UNITYSDK_OFFSET(0xC5CB990)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEIMGDANMUSERVICE__INITUNLOCKIDMAPPING_OFFSET UNITYSDK_OFFSET(0xC5CBB10)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEIMGDANMUSERVICE__ONSETDANMUENABLE_OFFSET UNITYSDK_OFFSET(0xC5CC960)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEIMGDANMUSERVICE__ONUNLOCKIDUPDATED_OFFSET UNITYSDK_OFFSET(0xC5CC4E0)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveImgDanmuService_TypeDefinitionIndex = 75050;

	class IdleLiveImgDanmuService : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_1254*>* _CreatedTriggers; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>* _UnlockIdToImgDanmuIds; // 0x18
		::System::Collections::Generic::List_1<::Class_1_7B630EA0921A5074*>* _ActiveImageDanmus; // 0x20
		::System::Boolean _IsDisposed; // 0x28
		::System::Boolean _IsEnable; // 0x29

		::System::Void _ctor(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEIMGDANMUSERVICE__CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::ActivityIdleLive::IdleLiveDanmuContentData* GetImageDanmu()
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveDanmuContentData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEIMGDANMUSERVICE_GETIMAGEDANMU_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEIMGDANMUSERVICE_DISPOSE_OFFSET))(this);
		}

		::System::Void _ClearCreatedTriggers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEIMGDANMUSERVICE__CLEARCREATEDTRIGGERS_OFFSET))(this);
		}

		::System::Void _InitUnlockIdMapping()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEIMGDANMUSERVICE__INITUNLOCKIDMAPPING_OFFSET))(this);
		}

		::System::Void _OnUnlockIdUpdated(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEIMGDANMUSERVICE__ONUNLOCKIDUPDATED_OFFSET))(this, a1);
		}

		::System::Void _AddImageDanmu(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEIMGDANMUSERVICE__ADDIMAGEDANMU_OFFSET))(this, a1);
		}

		::System::Void _OnSetDanmuEnable(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEIMGDANMUSERVICE__ONSETDANMUENABLE_OFFSET))(this, a1);
		}

		::System::Void _ClearEndedImageDanmus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEIMGDANMUSERVICE__CLEARENDEDIMAGEDANMUS_OFFSET))(this);
		}
	};
}
