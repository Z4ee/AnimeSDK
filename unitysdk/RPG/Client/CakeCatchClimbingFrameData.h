#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D17272E82AE804C2_47;

#define RPG_CLIENT_CAKECATCHCLIMBINGFRAMEDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9ECE830)
#define RPG_CLIENT_CAKECATCHCLIMBINGFRAMEDATA_GET_CAKEID_OFFSET UNITYSDK_OFFSET(0x9ECE8C0)
#define RPG_CLIENT_CAKECATCHCLIMBINGFRAMEDATA_GET_SLOT_OFFSET UNITYSDK_OFFSET(0x9ECE8E0)
#define RPG_CLIENT_CAKECATCHCLIMBINGFRAMEDATA_SETCAKEID_OFFSET UNITYSDK_OFFSET(0x9ECE870)
#define RPG_CLIENT_CAKECATCHCLIMBINGFRAMEDATA_SET_CAKEID_OFFSET UNITYSDK_OFFSET(0x9ECE8D0)
#define RPG_CLIENT_CAKECATCHCLIMBINGFRAMEDATA_SET_SLOT_OFFSET UNITYSDK_OFFSET(0x9ECE8F0)
#define RPG_CLIENT_CAKECATCHCLIMBINGFRAMEDATA_SYNCFROMPROTO_OFFSET UNITYSDK_OFFSET(0x9ECE7D0)
#define RPG_CLIENT_CAKECATCHCLIMBINGFRAMEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9ECE7C0)

namespace RPG::Client
{
	inline static constexpr unsigned int CakeCatchClimbingFrameData_TypeDefinitionIndex = 58014;

	class CakeCatchClimbingFrameData : public ::System::Object
	{
	public:
		::System::UInt32 _Slot_k__BackingField; // 0x10
		::System::UInt32 _CakeId_k__BackingField; // 0x14

		::System::Void _ctor(::System::UInt32 slotId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHCLIMBINGFRAMEDATA__CTOR_OFFSET))(this, slotId);
		}

		::System::Void SyncFromProto(::Class_1_D17272E82AE804C2_47* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_47*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHCLIMBINGFRAMEDATA_SYNCFROMPROTO_OFFSET))(this, proto);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHCLIMBINGFRAMEDATA_DISPOSE_OFFSET))(this);
		}

		::System::Void SetCakeId(::System::UInt32 cakeId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHCLIMBINGFRAMEDATA_SETCAKEID_OFFSET))(this, cakeId);
		}

		::System::UInt32 get_CakeId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHCLIMBINGFRAMEDATA_GET_CAKEID_OFFSET))(this);
		}

		::System::Void set_CakeId(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHCLIMBINGFRAMEDATA_SET_CAKEID_OFFSET))(this, value);
		}

		::System::UInt32 get_Slot()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHCLIMBINGFRAMEDATA_GET_SLOT_OFFSET))(this);
		}

		::System::Void set_Slot(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHCLIMBINGFRAMEDATA_SET_SLOT_OFFSET))(this, value);
		}
	};
}
