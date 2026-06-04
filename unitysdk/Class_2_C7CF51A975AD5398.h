#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Vector3.h"

class BloodFlowDrawInstance;
class BloodFlowManager;
namespace UnityEngine { class MonoBehaviour; }
namespace UnityEngine { class Transform; }

#define CLASS_2_C7CF51A975AD5398_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE495490)
#define CLASS_2_C7CF51A975AD5398_METHOD_2_08BBACE844405300_OFFSET UNITYSDK_OFFSET(0xE494040)
#define CLASS_2_C7CF51A975AD5398_METHOD_2_4BA9A4703E30DBF9_OFFSET UNITYSDK_OFFSET(0xE495210)
#define CLASS_2_C7CF51A975AD5398_METHOD_2_7EAA8879197594BA_OFFSET UNITYSDK_OFFSET(0xE493DF0)
#define CLASS_2_C7CF51A975AD5398_METHOD_2_8DC652D916C182B2_OFFSET UNITYSDK_OFFSET(0xE493630)
#define CLASS_2_C7CF51A975AD5398_METHOD_2_92E054007D8985DE_OFFSET UNITYSDK_OFFSET(0xE494D60)
#define CLASS_2_C7CF51A975AD5398_METHOD_2_AFE20ADEA685809F_OFFSET UNITYSDK_OFFSET(0xE4935C0)
#define CLASS_2_C7CF51A975AD5398_METHOD_2_DAC9CFD78D24D173_OFFSET UNITYSDK_OFFSET(0xE4946A0)
#define CLASS_2_C7CF51A975AD5398_METHOD_2_DE84643B5B2F37F6_OFFSET UNITYSDK_OFFSET(0xE493050)
#define CLASS_2_C7CF51A975AD5398_METHOD_2_DEDB6D705D6319DA_OFFSET UNITYSDK_OFFSET(0xE495510)
#define CLASS_2_C7CF51A975AD5398_METHOD_2_E5553ECD866EC205_OFFSET UNITYSDK_OFFSET(0xE4953A0)
#define CLASS_2_C7CF51A975AD5398__CTOR_OFFSET UNITYSDK_OFFSET(0xE495500)
#define CLASS_2_C7CF51A975AD5398___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE495570)

inline static constexpr unsigned int Class_2_C7CF51A975AD5398_TypeDefinitionIndex = 65788;

class Class_2_C7CF51A975AD5398 : public ::RPG::Client::BehaviorBase
{
public:
	::UnityEngine::Vector3 Field_2_0; // 0x18
	::UnityEngine::Bounds Field_2_1; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C7CF51A975AD5398__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_DE84643B5B2F37F6(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_C7CF51A975AD5398_METHOD_2_DE84643B5B2F37F6_OFFSET))(this, a1);
	}

	::System::Void Method_2_7EAA8879197594BA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C7CF51A975AD5398_METHOD_2_7EAA8879197594BA_OFFSET))(this);
	}

	::System::Void Method_2_8DC652D916C182B2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C7CF51A975AD5398_METHOD_2_8DC652D916C182B2_OFFSET))(this);
	}

	::System::Void Method_2_DAC9CFD78D24D173(::BloodFlowDrawInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::BloodFlowDrawInstance*))((::PBYTE)hIl2Cpp + CLASS_2_C7CF51A975AD5398_METHOD_2_DAC9CFD78D24D173_OFFSET))(this, a1);
	}

	::System::Single Method_2_92E054007D8985DE(::UnityEngine::Transform* a1)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_2_C7CF51A975AD5398_METHOD_2_92E054007D8985DE_OFFSET))(this, a1);
	}

	::System::Void Method_2_08BBACE844405300()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C7CF51A975AD5398_METHOD_2_08BBACE844405300_OFFSET))(this);
	}

	::System::Void Method_2_4BA9A4703E30DBF9(::BloodFlowDrawInstance* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::BloodFlowDrawInstance*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C7CF51A975AD5398_METHOD_2_4BA9A4703E30DBF9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_E5553ECD866EC205(::BloodFlowDrawInstance* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::BloodFlowDrawInstance*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C7CF51A975AD5398_METHOD_2_E5553ECD866EC205_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C7CF51A975AD5398_DISPOSE_OFFSET))(this);
	}

	::BloodFlowManager* Method_2_AFE20ADEA685809F()
	{
		return ((::BloodFlowManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C7CF51A975AD5398_METHOD_2_AFE20ADEA685809F_OFFSET))(this);
	}

	::System::Void Method_2_DEDB6D705D6319DA(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_C7CF51A975AD5398_METHOD_2_DEDB6D705D6319DA_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C7CF51A975AD5398___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
