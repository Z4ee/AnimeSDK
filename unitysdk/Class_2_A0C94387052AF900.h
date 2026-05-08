#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/BaseViewObjectComponent_1.h"
#include "unitysdk/Foundation/ViewObject/CombineTriggerListenParam.h"
#include "unitysdk/MoleMole/EntityHandle.h"

class Class_0_16E4307DCC419505_471;
namespace MoleMole { class MonoTriggerEventDispatcher; }
namespace MoleMole::Config { class ConfigTriggerControlTrait; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_A0C94387052AF900_METHOD_2_000C2E651A2AED0D_OFFSET UNITYSDK_OFFSET(0x12B94410)
#define CLASS_2_A0C94387052AF900_METHOD_2_05007635340C6239_OFFSET UNITYSDK_OFFSET(0x12B93B70)
#define CLASS_2_A0C94387052AF900_METHOD_2_1AC28CD34F71DC25_OFFSET UNITYSDK_OFFSET(0x12B94480)
#define CLASS_2_A0C94387052AF900_METHOD_2_2C825E716CE9F2F9_OFFSET UNITYSDK_OFFSET(0x12B94C80)
#define CLASS_2_A0C94387052AF900_METHOD_2_6EA5794C5301E81E_OFFSET UNITYSDK_OFFSET(0x12B93B20)
#define CLASS_2_A0C94387052AF900_METHOD_2_832295EC279E5994_1_OFFSET UNITYSDK_OFFSET(0x12B95060)
#define CLASS_2_A0C94387052AF900_METHOD_2_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x12B94470)
#define CLASS_2_A0C94387052AF900_METHOD_2_A4B772292CEAD156_OFFSET UNITYSDK_OFFSET(0x12B95070)
#define CLASS_2_A0C94387052AF900_METHOD_2_B0C43CECDD765C65_OFFSET UNITYSDK_OFFSET(0x12B93950)
#define CLASS_2_A0C94387052AF900_METHOD_2_DFEC27F1F6CA5A80_OFFSET UNITYSDK_OFFSET(0x12B93B80)
#define CLASS_2_A0C94387052AF900_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x12B934D0)
#define CLASS_2_A0C94387052AF900_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x12B933B0)
#define CLASS_2_A0C94387052AF900__CTOR_OFFSET UNITYSDK_OFFSET(0x12B93840)

inline static constexpr unsigned int Class_2_A0C94387052AF900_TypeDefinitionIndex = 71817;

class Class_2_A0C94387052AF900 : public ::Foundation::ViewObject::BaseViewObjectComponent_1<::Class_2_A0C94387052AF900*>
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::MonoTriggerEventDispatcher*>* Field_2_2; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_0_16E4307DCC419505_471*>* Field_2_1; // 0x28
	::MoleMole::Config::ConfigTriggerControlTrait* Field_2_0; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A0C94387052AF900__CTOR_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A0C94387052AF900_ONRECYCLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A0C94387052AF900_ONDISABLE_OFFSET))(this);
	}

	::System::Void Method_2_B0C43CECDD765C65(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_A0C94387052AF900_METHOD_2_B0C43CECDD765C65_OFFSET))(this, a1);
	}

	::System::Void Method_2_6EA5794C5301E81E(::MoleMole::Config::ConfigTriggerControlTrait* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigTriggerControlTrait*))((::PBYTE)hIl2Cpp + CLASS_2_A0C94387052AF900_METHOD_2_6EA5794C5301E81E_OFFSET))(this, a1);
	}

	::System::Void Method_2_05007635340C6239(::MoleMole::Config::ConfigTriggerControlTrait* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigTriggerControlTrait*))((::PBYTE)hIl2Cpp + CLASS_2_A0C94387052AF900_METHOD_2_05007635340C6239_OFFSET))(this, a1);
	}

	::System::Void Method_2_DFEC27F1F6CA5A80()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A0C94387052AF900_METHOD_2_DFEC27F1F6CA5A80_OFFSET))(this);
	}

	::System::Void Method_2_000C2E651A2AED0D(::MoleMole::EntityHandle a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + CLASS_2_A0C94387052AF900_METHOD_2_000C2E651A2AED0D_OFFSET))(this, a1);
	}

	::System::Void Method_2_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A0C94387052AF900_METHOD_2_832295EC279E5994_OFFSET))(this);
	}

	::System::Boolean Method_2_1AC28CD34F71DC25(::Foundation::ViewObject::CombineTriggerListenParam a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::CombineTriggerListenParam))((::PBYTE)hIl2Cpp + CLASS_2_A0C94387052AF900_METHOD_2_1AC28CD34F71DC25_OFFSET))(this, a1);
	}

	::System::Void Method_2_2C825E716CE9F2F9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A0C94387052AF900_METHOD_2_2C825E716CE9F2F9_OFFSET))(this);
	}

	::System::Void Method_2_832295EC279E5994_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A0C94387052AF900_METHOD_2_832295EC279E5994_1_OFFSET))(this);
	}

	::MoleMole::Config::ConfigTriggerControlTrait* Method_2_A4B772292CEAD156()
	{
		return ((::MoleMole::Config::ConfigTriggerControlTrait*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A0C94387052AF900_METHOD_2_A4B772292CEAD156_OFFSET))(this);
	}
};
