#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Vector3.h"

class BloodFlowDrawInstance;
class BloodFlowManager;
namespace UnityEngine { class MonoBehaviour; }
namespace UnityEngine { class Transform; }

#define CLASS_2_C7CF51A975AD5398_DISPOSE_OFFSET UNITYSDK_OFFSET(0xFA85A80)
#define CLASS_2_C7CF51A975AD5398_METHOD_2_0243795532BFB57F_OFFSET UNITYSDK_OFFSET(0xFA84B00)
#define CLASS_2_C7CF51A975AD5398_METHOD_2_08BBACE844405300_OFFSET UNITYSDK_OFFSET(0xFA844A0)
#define CLASS_2_C7CF51A975AD5398_METHOD_2_4BA9A4703E30DBF9_OFFSET UNITYSDK_OFFSET(0xFA85800)
#define CLASS_2_C7CF51A975AD5398_METHOD_2_7EAA8879197594BA_OFFSET UNITYSDK_OFFSET(0xFA84250)
#define CLASS_2_C7CF51A975AD5398_METHOD_2_8DC652D916C182B2_OFFSET UNITYSDK_OFFSET(0xFA83A90)
#define CLASS_2_C7CF51A975AD5398_METHOD_2_92E054007D8985DE_OFFSET UNITYSDK_OFFSET(0xFA85350)
#define CLASS_2_C7CF51A975AD5398_METHOD_2_AFE20ADEA685809F_OFFSET UNITYSDK_OFFSET(0xFA83A20)
#define CLASS_2_C7CF51A975AD5398_METHOD_2_DE84643B5B2F37F6_OFFSET UNITYSDK_OFFSET(0xFA834B0)
#define CLASS_2_C7CF51A975AD5398_METHOD_2_E5553ECD866EC205_OFFSET UNITYSDK_OFFSET(0xFA85990)
#define CLASS_2_C7CF51A975AD5398__CTOR_OFFSET UNITYSDK_OFFSET(0xFA85AF0)

inline static constexpr unsigned int Class_2_C7CF51A975AD5398_TypeDefinitionIndex = 70324;

class Class_2_C7CF51A975AD5398 : public ::RPG::Client::BehaviorBase
{
public:
	::UnityEngine::Bounds NMIECBBDMOF; // 0x18
	::UnityEngine::Vector3 KFEJGBAKKEF; // 0x30

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

	::System::Void Method_2_0243795532BFB57F(::BloodFlowDrawInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::BloodFlowDrawInstance*))((::PBYTE)hIl2Cpp + CLASS_2_C7CF51A975AD5398_METHOD_2_0243795532BFB57F_OFFSET))(this, a1);
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
};
