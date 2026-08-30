#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D17272E82AE804C2_57;

#define RPG_CLIENT_CAKECATCHCLIMBINGFRAMEDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A1304B0)
#define RPG_CLIENT_CAKECATCHCLIMBINGFRAMEDATA_GET_CAKEID_OFFSET UNITYSDK_OFFSET(0x1A130540)
#define RPG_CLIENT_CAKECATCHCLIMBINGFRAMEDATA_GET_SLOT_OFFSET UNITYSDK_OFFSET(0x1A130560)
#define RPG_CLIENT_CAKECATCHCLIMBINGFRAMEDATA_SETCAKEID_OFFSET UNITYSDK_OFFSET(0x1A1304F0)
#define RPG_CLIENT_CAKECATCHCLIMBINGFRAMEDATA_SET_CAKEID_OFFSET UNITYSDK_OFFSET(0x1A130550)
#define RPG_CLIENT_CAKECATCHCLIMBINGFRAMEDATA_SET_SLOT_OFFSET UNITYSDK_OFFSET(0x1A130570)
#define RPG_CLIENT_CAKECATCHCLIMBINGFRAMEDATA_SYNCFROMPROTO_OFFSET UNITYSDK_OFFSET(0x1A130450)
#define RPG_CLIENT_CAKECATCHCLIMBINGFRAMEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1A130440)

namespace RPG::Client
{
	inline static constexpr unsigned int CakeCatchClimbingFrameData_TypeDefinitionIndex = 63049;

	class CakeCatchClimbingFrameData : public ::System::Object
	{
	public:
		::System::UInt32 _Slot_k__BackingField; // 0x10
		::System::UInt32 _CakeId_k__BackingField; // 0x14

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
