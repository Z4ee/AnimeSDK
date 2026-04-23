#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/VCameraChangeDataState.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class CameraBlendCurve; }
namespace RPG::GameCore { class VCameraFloatChangeParam; }

#define CLASS_1_87463E766B62F093_DISPOSE_OFFSET UNITYSDK_OFFSET(0x96BD360)
#define CLASS_1_87463E766B62F093_GET_KEEPDURATION_OFFSET UNITYSDK_OFFSET(0x96BDCA0)
#define CLASS_1_87463E766B62F093_GET_STATE_OFFSET UNITYSDK_OFFSET(0x96BDC10)
#define CLASS_1_87463E766B62F093_GET_TRANSITINTIME_OFFSET UNITYSDK_OFFSET(0x96BDC60)
#define CLASS_1_87463E766B62F093_GET_TRANSITOUTTIME_OFFSET UNITYSDK_OFFSET(0x96BDC80)
#define CLASS_1_87463E766B62F093_METHOD_1_0E142E3463F30350_OFFSET UNITYSDK_OFFSET(0x96BDA30)
#define CLASS_1_87463E766B62F093_METHOD_1_2685B6183E614529_1_OFFSET UNITYSDK_OFFSET(0x96BD9D0)
#define CLASS_1_87463E766B62F093_METHOD_1_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x96BD5B0)
#define CLASS_1_87463E766B62F093_METHOD_1_5323F2DF46A044DA_1_OFFSET UNITYSDK_OFFSET(0x96BDC50)
#define CLASS_1_87463E766B62F093_METHOD_1_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0x96BDC40)
#define CLASS_1_87463E766B62F093_METHOD_1_5E5FAAAE21B44BAE_1_OFFSET UNITYSDK_OFFSET(0x96BD7D0)
#define CLASS_1_87463E766B62F093_METHOD_1_5E5FAAAE21B44BAE_OFFSET UNITYSDK_OFFSET(0x96BD8D0)
#define CLASS_1_87463E766B62F093_METHOD_1_9681042564541CD6_1_OFFSET UNITYSDK_OFFSET(0x96BDB90)
#define CLASS_1_87463E766B62F093_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x96BDAE0)
#define CLASS_1_87463E766B62F093_METHOD_1_D2335C42A042CB9B_OFFSET UNITYSDK_OFFSET(0x96BD470)
#define CLASS_1_87463E766B62F093_METHOD_1_D437D090E63BE8A7_OFFSET UNITYSDK_OFFSET(0x96BD620)
#define CLASS_1_87463E766B62F093_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x96BDC30)
#define CLASS_1_87463E766B62F093_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x96BD590)
#define CLASS_1_87463E766B62F093_SET_KEEPDURATION_OFFSET UNITYSDK_OFFSET(0x96BDCB0)
#define CLASS_1_87463E766B62F093_SET_STATE_OFFSET UNITYSDK_OFFSET(0x96BDC20)
#define CLASS_1_87463E766B62F093_SET_TRANSITINTIME_OFFSET UNITYSDK_OFFSET(0x96BDC70)
#define CLASS_1_87463E766B62F093_SET_TRANSITOUTTIME_OFFSET UNITYSDK_OFFSET(0x96BDC90)
#define CLASS_1_87463E766B62F093__CTOR_OFFSET UNITYSDK_OFFSET(0x96BD300)

inline static constexpr unsigned int Class_1_87463E766B62F093_TypeDefinitionIndex = 64087;

class Class_1_87463E766B62F093 : public ::System::Object
{
public:
	::RPG::Client::CameraBlendCurve* Field_1_9; // 0x10
	::RPG::GameCore::VCameraFloatChangeParam* Field_1_11; // 0x18
	::RPG::Client::CameraBlendCurve* Field_1_8; // 0x20
	::System::Single Field_1_5; // 0x28
	::System::Single _KeepDuration_k__BackingField; // 0x2C
	::System::Single _TransitOutTime_k__BackingField; // 0x30
	::System::Single _TransitInTime_k__BackingField; // 0x34
	::System::Single Field_1_4; // 0x38
	::System::Single Field_1_7; // 0x3C
	::System::Single Field_1_6; // 0x40
	::System::Single Field_1_10; // 0x44
	::RPG::Client::VCameraChangeDataState _State_k__BackingField; // 0x48

	::System::Void _ctor(::RPG::GameCore::VCameraFloatChangeParam* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::VCameraFloatChangeParam*))((::PBYTE)hIl2Cpp + CLASS_1_87463E766B62F093__CTOR_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_87463E766B62F093_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_D2335C42A042CB9B(::System::Single a1, ::System::Nullable_1<::System::Single> a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Nullable_1<::System::Single>))((::PBYTE)hIl2Cpp + CLASS_1_87463E766B62F093_METHOD_1_D2335C42A042CB9B_OFFSET))(this, a1, a2);
	}

	::System::Single Method_1_D437D090E63BE8A7(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_87463E766B62F093_METHOD_1_D437D090E63BE8A7_OFFSET))(this, a1);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_87463E766B62F093_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_1_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_87463E766B62F093_METHOD_1_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Void Method_1_9681042564541CD6_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_87463E766B62F093_METHOD_1_9681042564541CD6_1_OFFSET))(this);
	}

	::System::Void Method_1_5E5FAAAE21B44BAE(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_87463E766B62F093_METHOD_1_5E5FAAAE21B44BAE_OFFSET))(this, a1);
	}

	::System::Void Method_1_5E5FAAAE21B44BAE_1(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_87463E766B62F093_METHOD_1_5E5FAAAE21B44BAE_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_2685B6183E614529_1(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_87463E766B62F093_METHOD_1_2685B6183E614529_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_0E142E3463F30350()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_87463E766B62F093_METHOD_1_0E142E3463F30350_OFFSET))(this);
	}

	::RPG::Client::VCameraChangeDataState get_State()
	{
		return ((::RPG::Client::VCameraChangeDataState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_87463E766B62F093_GET_STATE_OFFSET))(this);
	}

	::System::Void set_State(::RPG::Client::VCameraChangeDataState value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::VCameraChangeDataState))((::PBYTE)hIl2Cpp + CLASS_1_87463E766B62F093_SET_STATE_OFFSET))(this, value);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_87463E766B62F093_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Single Method_1_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_87463E766B62F093_METHOD_1_5323F2DF46A044DA_OFFSET))(this);
	}

	::System::Single Method_1_5323F2DF46A044DA_1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_87463E766B62F093_METHOD_1_5323F2DF46A044DA_1_OFFSET))(this);
	}

	::System::Single get_TransitInTime()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_87463E766B62F093_GET_TRANSITINTIME_OFFSET))(this);
	}

	::System::Void set_TransitInTime(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_87463E766B62F093_SET_TRANSITINTIME_OFFSET))(this, value);
	}

	::System::Single get_TransitOutTime()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_87463E766B62F093_GET_TRANSITOUTTIME_OFFSET))(this);
	}

	::System::Void set_TransitOutTime(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_87463E766B62F093_SET_TRANSITOUTTIME_OFFSET))(this, value);
	}

	::System::Single get_KeepDuration()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_87463E766B62F093_GET_KEEPDURATION_OFFSET))(this);
	}

	::System::Void set_KeepDuration(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_87463E766B62F093_SET_KEEPDURATION_OFFSET))(this, value);
	}

	::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_87463E766B62F093_METHOD_1_F0E307B84478A272_OFFSET))(this);
	}
};
