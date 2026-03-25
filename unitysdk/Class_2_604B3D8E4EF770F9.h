#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Vector3.h"

class BloodFlowDrawInstance;
class BloodFlowManager;
namespace UnityEngine { class MonoBehaviour; }
namespace UnityEngine { class Transform; }

#define CLASS_2_604B3D8E4EF770F9_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8A9A580)
#define CLASS_2_604B3D8E4EF770F9_METHOD_2_19FB5FBEA9EA66CD_OFFSET UNITYSDK_OFFSET(0x8A98510)
#define CLASS_2_604B3D8E4EF770F9_METHOD_2_514BE4DD58C1234D_OFFSET UNITYSDK_OFFSET(0x8A97F60)
#define CLASS_2_604B3D8E4EF770F9_METHOD_2_55331FBEA66C0FB6_OFFSET UNITYSDK_OFFSET(0x8A984A0)
#define CLASS_2_604B3D8E4EF770F9_METHOD_2_66F42CE2EDA79734_OFFSET UNITYSDK_OFFSET(0x8A98F10)
#define CLASS_2_604B3D8E4EF770F9_METHOD_2_8E9E3E0D1D6E6E24_OFFSET UNITYSDK_OFFSET(0x8A99150)
#define CLASS_2_604B3D8E4EF770F9_METHOD_2_90D019D81149A8BA_OFFSET UNITYSDK_OFFSET(0x8A9A600)
#define CLASS_2_604B3D8E4EF770F9_METHOD_2_92E054007D8985DE_OFFSET UNITYSDK_OFFSET(0x8A99E70)
#define CLASS_2_604B3D8E4EF770F9_METHOD_2_B63F1BBC08AA7025_OFFSET UNITYSDK_OFFSET(0x8A9A320)
#define CLASS_2_604B3D8E4EF770F9_METHOD_2_E5553ECD866EC205_OFFSET UNITYSDK_OFFSET(0x8A9A490)
#define CLASS_2_604B3D8E4EF770F9_METHOD_2_F8A2DD03553CB301_OFFSET UNITYSDK_OFFSET(0x8A99770)
#define CLASS_2_604B3D8E4EF770F9__CTOR_OFFSET UNITYSDK_OFFSET(0x8A9A5F0)
#define CLASS_2_604B3D8E4EF770F9___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8A9A670)

inline static constexpr unsigned int Class_2_604B3D8E4EF770F9_TypeDefinitionIndex = 57599;

class Class_2_604B3D8E4EF770F9 : public ::RPG::Client::BehaviorBase
{
public:
	::UnityEngine::Vector3 Field_2_1; // 0x18
	::UnityEngine::Bounds Field_2_0; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_604B3D8E4EF770F9__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_514BE4DD58C1234D(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_604B3D8E4EF770F9_METHOD_2_514BE4DD58C1234D_OFFSET))(this, a1);
	}

	::System::Void Method_2_66F42CE2EDA79734()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_604B3D8E4EF770F9_METHOD_2_66F42CE2EDA79734_OFFSET))(this);
	}

	::System::Void Method_2_19FB5FBEA9EA66CD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_604B3D8E4EF770F9_METHOD_2_19FB5FBEA9EA66CD_OFFSET))(this);
	}

	::System::Void Method_2_F8A2DD03553CB301(::BloodFlowDrawInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::BloodFlowDrawInstance*))((::PBYTE)hIl2Cpp + CLASS_2_604B3D8E4EF770F9_METHOD_2_F8A2DD03553CB301_OFFSET))(this, a1);
	}

	::System::Single Method_2_92E054007D8985DE(::UnityEngine::Transform* a1)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_2_604B3D8E4EF770F9_METHOD_2_92E054007D8985DE_OFFSET))(this, a1);
	}

	::System::Void Method_2_8E9E3E0D1D6E6E24()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_604B3D8E4EF770F9_METHOD_2_8E9E3E0D1D6E6E24_OFFSET))(this);
	}

	::System::Void Method_2_B63F1BBC08AA7025(::BloodFlowDrawInstance* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::BloodFlowDrawInstance*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_604B3D8E4EF770F9_METHOD_2_B63F1BBC08AA7025_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_E5553ECD866EC205(::BloodFlowDrawInstance* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::BloodFlowDrawInstance*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_604B3D8E4EF770F9_METHOD_2_E5553ECD866EC205_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_604B3D8E4EF770F9_DISPOSE_OFFSET))(this);
	}

	::BloodFlowManager* Method_2_55331FBEA66C0FB6()
	{
		return ((::BloodFlowManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_604B3D8E4EF770F9_METHOD_2_55331FBEA66C0FB6_OFFSET))(this);
	}

	::System::Void Method_2_90D019D81149A8BA(::UnityEngine::MonoBehaviour* P0)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_604B3D8E4EF770F9_METHOD_2_90D019D81149A8BA_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_604B3D8E4EF770F9___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
