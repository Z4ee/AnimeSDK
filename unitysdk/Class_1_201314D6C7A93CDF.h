#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/VCameraChangeDataState.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class CameraBlendCurve; }
namespace RPG::GameCore { class VCameraVector3ChangeParam; }

#define CLASS_1_201314D6C7A93CDF_GET_KEEPDURATION_OFFSET UNITYSDK_OFFSET(0x15694E20)
#define CLASS_1_201314D6C7A93CDF_GET_OFFSETFORWARD_OFFSET UNITYSDK_OFFSET(0x15694DB0)
#define CLASS_1_201314D6C7A93CDF_GET_STATE_OFFSET UNITYSDK_OFFSET(0x15694D40)
#define CLASS_1_201314D6C7A93CDF_GET_TRANSITINTIME_OFFSET UNITYSDK_OFFSET(0x15694DE0)
#define CLASS_1_201314D6C7A93CDF_GET_TRANSITOUTTIME_OFFSET UNITYSDK_OFFSET(0x15694E00)
#define CLASS_1_201314D6C7A93CDF_METHOD_1_0E142E3463F30350_OFFSET UNITYSDK_OFFSET(0x156949F0)
#define CLASS_1_201314D6C7A93CDF_METHOD_1_2685B6183E614529_1_OFFSET UNITYSDK_OFFSET(0x15694C10)
#define CLASS_1_201314D6C7A93CDF_METHOD_1_2685B6183E614529_2_OFFSET UNITYSDK_OFFSET(0x15694C70)
#define CLASS_1_201314D6C7A93CDF_METHOD_1_2685B6183E614529_3_OFFSET UNITYSDK_OFFSET(0x15694990)
#define CLASS_1_201314D6C7A93CDF_METHOD_1_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x15694BB0)
#define CLASS_1_201314D6C7A93CDF_METHOD_1_479759059E440327_OFFSET UNITYSDK_OFFSET(0x156946D0)
#define CLASS_1_201314D6C7A93CDF_METHOD_1_5E5FAAAE21B44BAE_OFFSET UNITYSDK_OFFSET(0x15694840)
#define CLASS_1_201314D6C7A93CDF_METHOD_1_8C89FB35CA96C314_OFFSET UNITYSDK_OFFSET(0x15694500)
#define CLASS_1_201314D6C7A93CDF_METHOD_1_9681042564541CD6_1_OFFSET UNITYSDK_OFFSET(0x15694270)
#define CLASS_1_201314D6C7A93CDF_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x15694AA0)
#define CLASS_1_201314D6C7A93CDF_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x15694B60)
#define CLASS_1_201314D6C7A93CDF_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x156942F0)
#define CLASS_1_201314D6C7A93CDF_METHOD_1_CA6BDDCC5F7CE11E_OFFSET UNITYSDK_OFFSET(0x15694CD0)
#define CLASS_1_201314D6C7A93CDF_METHOD_1_E0BEC1E3FD58C4E0_OFFSET UNITYSDK_OFFSET(0x15694340)
#define CLASS_1_201314D6C7A93CDF_METHOD_1_E3FE109D06BE7F76_OFFSET UNITYSDK_OFFSET(0x15694D70)
#define CLASS_1_201314D6C7A93CDF_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x15694D60)
#define CLASS_1_201314D6C7A93CDF_METHOD_1_F0E307B84478A272_1_OFFSET UNITYSDK_OFFSET(0x15694470)
#define CLASS_1_201314D6C7A93CDF_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x15694D90)
#define CLASS_1_201314D6C7A93CDF_METHOD_1_F3128993D13DA20E_OFFSET UNITYSDK_OFFSET(0x15694490)
#define CLASS_1_201314D6C7A93CDF_SET_KEEPDURATION_OFFSET UNITYSDK_OFFSET(0x15694E30)
#define CLASS_1_201314D6C7A93CDF_SET_OFFSETFORWARD_OFFSET UNITYSDK_OFFSET(0x15694DD0)
#define CLASS_1_201314D6C7A93CDF_SET_STATE_OFFSET UNITYSDK_OFFSET(0x15694D50)
#define CLASS_1_201314D6C7A93CDF_SET_TRANSITINTIME_OFFSET UNITYSDK_OFFSET(0x15694DF0)
#define CLASS_1_201314D6C7A93CDF_SET_TRANSITOUTTIME_OFFSET UNITYSDK_OFFSET(0x15694E10)
#define CLASS_1_201314D6C7A93CDF__CTOR_OFFSET UNITYSDK_OFFSET(0x15694200)

inline static constexpr unsigned int Class_1_201314D6C7A93CDF_TypeDefinitionIndex = 69509;

class Class_1_201314D6C7A93CDF : public ::System::Object
{
public:
	::RPG::GameCore::VCameraVector3ChangeParam* IGHAHBNLIJA; // 0x10
	::RPG::Client::CameraBlendCurve* NGKJBNDABEP; // 0x18
	::RPG::Client::CameraBlendCurve* GEGCJHJJGBG; // 0x20
	::RPG::Client::VCameraChangeDataState _State_k__BackingField; // 0x28
	::UnityEngine::Vector3 _OffsetForward_k__BackingField; // 0x2C
	::System::Single _TransitOutTime_k__BackingField; // 0x38
	::RPG::MVector3 EJNMGLJJEOO; // 0x3C
	::System::Single _KeepDuration_k__BackingField; // 0x48
	::RPG::MVector3 ACBGOJKPEEG; // 0x4C
	::System::Single _TransitInTime_k__BackingField; // 0x58
	::RPG::MVector3 DNPHGOELBMH; // 0x5C
	::System::Single GDAHOGKBPCP; // 0x68
	::RPG::MVector3 GDFKMHHCGMJ; // 0x6C

	::System::Void _ctor(::RPG::GameCore::VCameraVector3ChangeParam* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::VCameraVector3ChangeParam*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_201314D6C7A93CDF__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_201314D6C7A93CDF_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_E0BEC1E3FD58C4E0(::RPG::MVector3 a1, ::System::Nullable_1<::RPG::MVector3> a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::MVector3, ::System::Nullable_1<::RPG::MVector3>))((::PBYTE)hIl2Cpp + CLASS_1_201314D6C7A93CDF_METHOD_1_E0BEC1E3FD58C4E0_OFFSET))(this, a1, a2);
	}

	::RPG::MVector3 Method_1_8C89FB35CA96C314(::System::Single a1)
	{
		return ((::RPG::MVector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_201314D6C7A93CDF_METHOD_1_8C89FB35CA96C314_OFFSET))(this, a1);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_201314D6C7A93CDF_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_1_F3128993D13DA20E(::RPG::MVector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::MVector3))((::PBYTE)hIl2Cpp + CLASS_1_201314D6C7A93CDF_METHOD_1_F3128993D13DA20E_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_201314D6C7A93CDF_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_1_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_201314D6C7A93CDF_METHOD_1_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Void Method_1_2685B6183E614529_1(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_201314D6C7A93CDF_METHOD_1_2685B6183E614529_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_2685B6183E614529_2(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_201314D6C7A93CDF_METHOD_1_2685B6183E614529_2_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA6BDDCC5F7CE11E(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_201314D6C7A93CDF_METHOD_1_CA6BDDCC5F7CE11E_OFFSET))(this, a1);
	}

	::System::Void Method_1_9681042564541CD6_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_201314D6C7A93CDF_METHOD_1_9681042564541CD6_1_OFFSET))(this);
	}

	::System::Void Method_1_5E5FAAAE21B44BAE(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_201314D6C7A93CDF_METHOD_1_5E5FAAAE21B44BAE_OFFSET))(this, a1);
	}

	::System::Void Method_1_479759059E440327(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_201314D6C7A93CDF_METHOD_1_479759059E440327_OFFSET))(this, a1);
	}

	::System::Void Method_1_2685B6183E614529_3(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_201314D6C7A93CDF_METHOD_1_2685B6183E614529_3_OFFSET))(this, a1);
	}

	::System::Void Method_1_0E142E3463F30350()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_201314D6C7A93CDF_METHOD_1_0E142E3463F30350_OFFSET))(this);
	}

	::RPG::Client::VCameraChangeDataState get_State()
	{
		return ((::RPG::Client::VCameraChangeDataState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_201314D6C7A93CDF_GET_STATE_OFFSET))(this);
	}

	::System::Void set_State(::RPG::Client::VCameraChangeDataState a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::VCameraChangeDataState))((::PBYTE)hIl2Cpp + CLASS_1_201314D6C7A93CDF_SET_STATE_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_201314D6C7A93CDF_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::RPG::MVector3 Method_1_E3FE109D06BE7F76()
	{
		return ((::RPG::MVector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_201314D6C7A93CDF_METHOD_1_E3FE109D06BE7F76_OFFSET))(this);
	}

	::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_201314D6C7A93CDF_METHOD_1_F0E307B84478A272_OFFSET))(this);
	}

	::UnityEngine::Vector3 get_OffsetForward()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_201314D6C7A93CDF_GET_OFFSETFORWARD_OFFSET))(this);
	}

	::System::Void set_OffsetForward(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_201314D6C7A93CDF_SET_OFFSETFORWARD_OFFSET))(this, a1);
	}

	::System::Single get_TransitInTime()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_201314D6C7A93CDF_GET_TRANSITINTIME_OFFSET))(this);
	}

	::System::Void set_TransitInTime(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_201314D6C7A93CDF_SET_TRANSITINTIME_OFFSET))(this, a1);
	}

	::System::Single get_TransitOutTime()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_201314D6C7A93CDF_GET_TRANSITOUTTIME_OFFSET))(this);
	}

	::System::Void set_TransitOutTime(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_201314D6C7A93CDF_SET_TRANSITOUTTIME_OFFSET))(this, a1);
	}

	::System::Single get_KeepDuration()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_201314D6C7A93CDF_GET_KEEPDURATION_OFFSET))(this);
	}

	::System::Void set_KeepDuration(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_201314D6C7A93CDF_SET_KEEPDURATION_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0E307B84478A272_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_201314D6C7A93CDF_METHOD_1_F0E307B84478A272_1_OFFSET))(this);
	}
};
