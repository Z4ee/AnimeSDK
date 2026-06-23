#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/BaseViewObjectComponent_1.h"
#include "unitysdk/Foundation/ViewObject/CombineTriggerListenParam.h"
#include "unitysdk/MoleMole/EntityHandle.h"

class Class_0_16E4307DCC419505_299;
namespace MoleMole { class MonoTriggerEventDispatcher; }
namespace MoleMole::Config { class ConfigTriggerControlTrait; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_3_154930AD49B9B200_METHOD_3_000C2E651A2AED0D_OFFSET UNITYSDK_OFFSET(0x1173C210)
#define CLASS_3_154930AD49B9B200_METHOD_3_039B2A1772CE5EC9_OFFSET UNITYSDK_OFFSET(0x1173BBC0)
#define CLASS_3_154930AD49B9B200_METHOD_3_05007635340C6239_OFFSET UNITYSDK_OFFSET(0x1173BBB0)
#define CLASS_3_154930AD49B9B200_METHOD_3_1A75CA240222EA22_OFFSET UNITYSDK_OFFSET(0x1173CB20)
#define CLASS_3_154930AD49B9B200_METHOD_3_2C825E716CE9F2F9_OFFSET UNITYSDK_OFFSET(0x1173BDD0)
#define CLASS_3_154930AD49B9B200_METHOD_3_6EA5794C5301E81E_OFFSET UNITYSDK_OFFSET(0x1173C1B0)
#define CLASS_3_154930AD49B9B200_METHOD_3_832295EC279E5994_1_OFFSET UNITYSDK_OFFSET(0x1173CB00)
#define CLASS_3_154930AD49B9B200_METHOD_3_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x1173C200)
#define CLASS_3_154930AD49B9B200_METHOD_3_A4B772292CEAD156_OFFSET UNITYSDK_OFFSET(0x1173CB10)
#define CLASS_3_154930AD49B9B200_METHOD_3_DFEC27F1F6CA5A80_OFFSET UNITYSDK_OFFSET(0x1173C270)
#define CLASS_3_154930AD49B9B200_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1173B6D0)
#define CLASS_3_154930AD49B9B200_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x1173B5B0)
#define CLASS_3_154930AD49B9B200__CTOR_OFFSET UNITYSDK_OFFSET(0x1173BA40)

inline static constexpr unsigned int Class_3_154930AD49B9B200_TypeDefinitionIndex = 57860;

class Class_3_154930AD49B9B200 : public ::Foundation::ViewObject::BaseViewObjectComponent_1<::Class_3_154930AD49B9B200*>
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::MonoTriggerEventDispatcher*>* Field_3_2; // 0x20
	::MoleMole::Config::ConfigTriggerControlTrait* Field_3_0; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_0_16E4307DCC419505_299*>* Field_3_1; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_154930AD49B9B200__CTOR_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_154930AD49B9B200_ONRECYCLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_154930AD49B9B200_ONDISABLE_OFFSET))(this);
	}

	::System::Void Method_3_05007635340C6239(::MoleMole::Config::ConfigTriggerControlTrait* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigTriggerControlTrait*))((::PBYTE)hIl2Cpp + CLASS_3_154930AD49B9B200_METHOD_3_05007635340C6239_OFFSET))(this, a1);
	}

	::System::Void Method_3_039B2A1772CE5EC9(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_154930AD49B9B200_METHOD_3_039B2A1772CE5EC9_OFFSET))(this, a1);
	}

	::System::Void Method_3_2C825E716CE9F2F9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_154930AD49B9B200_METHOD_3_2C825E716CE9F2F9_OFFSET))(this);
	}

	::System::Void Method_3_6EA5794C5301E81E(::MoleMole::Config::ConfigTriggerControlTrait* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigTriggerControlTrait*))((::PBYTE)hIl2Cpp + CLASS_3_154930AD49B9B200_METHOD_3_6EA5794C5301E81E_OFFSET))(this, a1);
	}

	::System::Void Method_3_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_154930AD49B9B200_METHOD_3_832295EC279E5994_OFFSET))(this);
	}

	::System::Void Method_3_000C2E651A2AED0D(::MoleMole::EntityHandle a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + CLASS_3_154930AD49B9B200_METHOD_3_000C2E651A2AED0D_OFFSET))(this, a1);
	}

	::System::Void Method_3_832295EC279E5994_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_154930AD49B9B200_METHOD_3_832295EC279E5994_1_OFFSET))(this);
	}

	::MoleMole::Config::ConfigTriggerControlTrait* Method_3_A4B772292CEAD156()
	{
		return ((::MoleMole::Config::ConfigTriggerControlTrait*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_154930AD49B9B200_METHOD_3_A4B772292CEAD156_OFFSET))(this);
	}

	::System::Void Method_3_DFEC27F1F6CA5A80()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_154930AD49B9B200_METHOD_3_DFEC27F1F6CA5A80_OFFSET))(this);
	}

	::System::Boolean Method_3_1A75CA240222EA22(::Foundation::ViewObject::CombineTriggerListenParam a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::CombineTriggerListenParam))((::PBYTE)hIl2Cpp + CLASS_3_154930AD49B9B200_METHOD_3_1A75CA240222EA22_OFFSET))(this, a1);
	}
};
