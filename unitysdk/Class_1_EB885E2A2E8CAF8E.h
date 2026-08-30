#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/VCameraChangeDataState.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class CameraBlendCurve; }
namespace RPG::GameCore { class VCameraFloatChangeParam; }

#define CLASS_1_EB885E2A2E8CAF8E_DISPOSE_OFFSET UNITYSDK_OFFSET(0x177B04B0)
#define CLASS_1_EB885E2A2E8CAF8E_GET_KEEPDURATION_OFFSET UNITYSDK_OFFSET(0x177B0D10)
#define CLASS_1_EB885E2A2E8CAF8E_GET_STATE_OFFSET UNITYSDK_OFFSET(0x177B0C20)
#define CLASS_1_EB885E2A2E8CAF8E_GET_TRANSITINTIME_OFFSET UNITYSDK_OFFSET(0x177B0CD0)
#define CLASS_1_EB885E2A2E8CAF8E_GET_TRANSITOUTTIME_OFFSET UNITYSDK_OFFSET(0x177B0CF0)
#define CLASS_1_EB885E2A2E8CAF8E_METHOD_1_0E142E3463F30350_OFFSET UNITYSDK_OFFSET(0x177B0AC0)
#define CLASS_1_EB885E2A2E8CAF8E_METHOD_1_1C906FB2947E7F98_OFFSET UNITYSDK_OFFSET(0x177B0500)
#define CLASS_1_EB885E2A2E8CAF8E_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x177B0C50)
#define CLASS_1_EB885E2A2E8CAF8E_METHOD_1_2685B6183E614529_1_OFFSET UNITYSDK_OFFSET(0x177B0A60)
#define CLASS_1_EB885E2A2E8CAF8E_METHOD_1_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x177B0640)
#define CLASS_1_EB885E2A2E8CAF8E_METHOD_1_5323F2DF46A044DA_1_OFFSET UNITYSDK_OFFSET(0x177B0CC0)
#define CLASS_1_EB885E2A2E8CAF8E_METHOD_1_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0x177B0CB0)
#define CLASS_1_EB885E2A2E8CAF8E_METHOD_1_5E5FAAAE21B44BAE_1_OFFSET UNITYSDK_OFFSET(0x177B0860)
#define CLASS_1_EB885E2A2E8CAF8E_METHOD_1_5E5FAAAE21B44BAE_OFFSET UNITYSDK_OFFSET(0x177B0960)
#define CLASS_1_EB885E2A2E8CAF8E_METHOD_1_9681042564541CD6_1_OFFSET UNITYSDK_OFFSET(0x177B0430)
#define CLASS_1_EB885E2A2E8CAF8E_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x177B0B70)
#define CLASS_1_EB885E2A2E8CAF8E_METHOD_1_D437D090E63BE8A7_OFFSET UNITYSDK_OFFSET(0x177B06B0)
#define CLASS_1_EB885E2A2E8CAF8E_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x177B0C40)
#define CLASS_1_EB885E2A2E8CAF8E_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x177B0620)
#define CLASS_1_EB885E2A2E8CAF8E_SET_KEEPDURATION_OFFSET UNITYSDK_OFFSET(0x177B0D20)
#define CLASS_1_EB885E2A2E8CAF8E_SET_STATE_OFFSET UNITYSDK_OFFSET(0x177B0C30)
#define CLASS_1_EB885E2A2E8CAF8E_SET_TRANSITINTIME_OFFSET UNITYSDK_OFFSET(0x177B0CE0)
#define CLASS_1_EB885E2A2E8CAF8E_SET_TRANSITOUTTIME_OFFSET UNITYSDK_OFFSET(0x177B0D00)
#define CLASS_1_EB885E2A2E8CAF8E__CTOR_OFFSET UNITYSDK_OFFSET(0x177B03D0)

inline static constexpr unsigned int Class_1_EB885E2A2E8CAF8E_TypeDefinitionIndex = 69506;

class Class_1_EB885E2A2E8CAF8E : public ::System::Object
{
public:
	::RPG::Client::CameraBlendCurve* GEGCJHJJGBG; // 0x10
	::RPG::Client::CameraBlendCurve* NGKJBNDABEP; // 0x18
	::RPG::GameCore::VCameraFloatChangeParam* IGHAHBNLIJA; // 0x20
	::System::Single DNPHGOELBMH; // 0x28
	::System::Single GDFKMHHCGMJ; // 0x2C
	::System::Single GDAHOGKBPCP; // 0x30
	::RPG::Client::VCameraChangeDataState _State_k__BackingField; // 0x34
	::System::Single _TransitInTime_k__BackingField; // 0x38
	::System::Single ACBGOJKPEEG; // 0x3C
	::System::Single EJNMGLJJEOO; // 0x40
	::System::Single _KeepDuration_k__BackingField; // 0x44
	::System::Single _TransitOutTime_k__BackingField; // 0x48

	::System::Void _ctor(::RPG::GameCore::VCameraFloatChangeParam* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::VCameraFloatChangeParam*))((::PBYTE)hIl2Cpp + CLASS_1_EB885E2A2E8CAF8E__CTOR_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EB885E2A2E8CAF8E_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_1C906FB2947E7F98(::System::Single a1, ::System::Nullable_1<::System::Single> a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Nullable_1<::System::Single>))((::PBYTE)hIl2Cpp + CLASS_1_EB885E2A2E8CAF8E_METHOD_1_1C906FB2947E7F98_OFFSET))(this, a1, a2);
	}

	::System::Single Method_1_D437D090E63BE8A7(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_EB885E2A2E8CAF8E_METHOD_1_D437D090E63BE8A7_OFFSET))(this, a1);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EB885E2A2E8CAF8E_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_1_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_EB885E2A2E8CAF8E_METHOD_1_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Void Method_1_9681042564541CD6_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EB885E2A2E8CAF8E_METHOD_1_9681042564541CD6_1_OFFSET))(this);
	}

	::System::Void Method_1_5E5FAAAE21B44BAE(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_EB885E2A2E8CAF8E_METHOD_1_5E5FAAAE21B44BAE_OFFSET))(this, a1);
	}

	::System::Void Method_1_5E5FAAAE21B44BAE_1(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_EB885E2A2E8CAF8E_METHOD_1_5E5FAAAE21B44BAE_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_2685B6183E614529_1(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_EB885E2A2E8CAF8E_METHOD_1_2685B6183E614529_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_0E142E3463F30350()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EB885E2A2E8CAF8E_METHOD_1_0E142E3463F30350_OFFSET))(this);
	}

	::RPG::Client::VCameraChangeDataState get_State()
	{
		return ((::RPG::Client::VCameraChangeDataState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EB885E2A2E8CAF8E_GET_STATE_OFFSET))(this);
	}

	::System::Void set_State(::RPG::Client::VCameraChangeDataState a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::VCameraChangeDataState))((::PBYTE)hIl2Cpp + CLASS_1_EB885E2A2E8CAF8E_SET_STATE_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EB885E2A2E8CAF8E_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EB885E2A2E8CAF8E_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Single Method_1_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EB885E2A2E8CAF8E_METHOD_1_5323F2DF46A044DA_OFFSET))(this);
	}

	::System::Single Method_1_5323F2DF46A044DA_1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EB885E2A2E8CAF8E_METHOD_1_5323F2DF46A044DA_1_OFFSET))(this);
	}

	::System::Single get_TransitInTime()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EB885E2A2E8CAF8E_GET_TRANSITINTIME_OFFSET))(this);
	}

	::System::Void set_TransitInTime(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_EB885E2A2E8CAF8E_SET_TRANSITINTIME_OFFSET))(this, a1);
	}

	::System::Single get_TransitOutTime()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EB885E2A2E8CAF8E_GET_TRANSITOUTTIME_OFFSET))(this);
	}

	::System::Void set_TransitOutTime(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_EB885E2A2E8CAF8E_SET_TRANSITOUTTIME_OFFSET))(this, a1);
	}

	::System::Single get_KeepDuration()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EB885E2A2E8CAF8E_GET_KEEPDURATION_OFFSET))(this);
	}

	::System::Void set_KeepDuration(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_EB885E2A2E8CAF8E_SET_KEEPDURATION_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EB885E2A2E8CAF8E_METHOD_1_F0E307B84478A272_OFFSET))(this);
	}
};
