#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D17272E82AE804C2_57;

#define RPG_CLIENT_CAKECATCHCLIMBINGFRAMEDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC9920F0)
#define RPG_CLIENT_CAKECATCHCLIMBINGFRAMEDATA_GET_CAKEID_OFFSET UNITYSDK_OFFSET(0xC992180)
#define RPG_CLIENT_CAKECATCHCLIMBINGFRAMEDATA_GET_SLOT_OFFSET UNITYSDK_OFFSET(0xC9921A0)
#define RPG_CLIENT_CAKECATCHCLIMBINGFRAMEDATA_SETCAKEID_OFFSET UNITYSDK_OFFSET(0xC992130)
#define RPG_CLIENT_CAKECATCHCLIMBINGFRAMEDATA_SET_CAKEID_OFFSET UNITYSDK_OFFSET(0xC992190)
#define RPG_CLIENT_CAKECATCHCLIMBINGFRAMEDATA_SET_SLOT_OFFSET UNITYSDK_OFFSET(0xC9921B0)
#define RPG_CLIENT_CAKECATCHCLIMBINGFRAMEDATA_SYNCFROMPROTO_OFFSET UNITYSDK_OFFSET(0xC992090)
#define RPG_CLIENT_CAKECATCHCLIMBINGFRAMEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC992080)

namespace RPG::Client
{
	inline static constexpr unsigned int CakeCatchClimbingFrameData_TypeDefinitionIndex = 63049;

	class CakeCatchClimbingFrameData : public ::System::Object
	{
	public:
		::System::UInt32 _CakeId_k__BackingField; // 0x10
		::System::UInt32 _Slot_k__BackingField; // 0x14

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHCLIMBINGFRAMEDATA__CTOR_OFFSET))(this, a1);
		}

		::System::Void SyncFromProto(::Class_1_D17272E82AE804C2_57* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_57*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHCLIMBINGFRAMEDATA_SYNCFROMPROTO_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHCLIMBINGFRAMEDATA_DISPOSE_OFFSET))(this);
		}

		::System::Void SetCakeId(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHCLIMBINGFRAMEDATA_SETCAKEID_OFFSET))(this, a1);
		}

		::System::UInt32 get_CakeId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHCLIMBINGFRAMEDATA_GET_CAKEID_OFFSET))(this);
		}

		::System::Void set_CakeId(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHCLIMBINGFRAMEDATA_SET_CAKEID_OFFSET))(this, a1);
		}

		::System::UInt32 get_Slot()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHCLIMBINGFRAMEDATA_GET_SLOT_OFFSET))(this);
		}

		::System::Void set_Slot(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHCLIMBINGFRAMEDATA_SET_SLOT_OFFSET))(this, a1);
		}
	};
}
