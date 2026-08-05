#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/BaseViewObjectComponent_1.h"
#include "unitysdk/Foundation/ViewObject/CombineTriggerListenParam.h"
#include "unitysdk/MoleMole/EntityHandle.h"

class Class_0_16E4307DCC419505_245;
namespace MoleMole { class MonoTriggerEventDispatcher; }
namespace MoleMole::Config { class ConfigTriggerControlTrait; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_3_154930AD49B9B200_METHOD_3_000C2E651A2AED0D_OFFSET UNITYSDK_OFFSET(0x11EB5410)
#define CLASS_3_154930AD49B9B200_METHOD_3_05007635340C6239_OFFSET UNITYSDK_OFFSET(0x11EB4C60)
#define CLASS_3_154930AD49B9B200_METHOD_3_234A8211CB010521_OFFSET UNITYSDK_OFFSET(0x11EB4C70)
#define CLASS_3_154930AD49B9B200_METHOD_3_4358F70A163BCEAE_OFFSET UNITYSDK_OFFSET(0x11EB5D00)
#define CLASS_3_154930AD49B9B200_METHOD_3_6EA5794C5301E81E_OFFSET UNITYSDK_OFFSET(0x11EB60A0)
#define CLASS_3_154930AD49B9B200_METHOD_3_713F600BBDEA9274_OFFSET UNITYSDK_OFFSET(0x11EB4A50)
#define CLASS_3_154930AD49B9B200_METHOD_3_832295EC279E5994_1_OFFSET UNITYSDK_OFFSET(0x11EB4C50)
#define CLASS_3_154930AD49B9B200_METHOD_3_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x11EB4A40)
#define CLASS_3_154930AD49B9B200_METHOD_3_A4B772292CEAD156_OFFSET UNITYSDK_OFFSET(0x11EB60F0)
#define CLASS_3_154930AD49B9B200_METHOD_3_DFEC27F1F6CA5A80_OFFSET UNITYSDK_OFFSET(0x11EB5470)
#define CLASS_3_154930AD49B9B200_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x11EB45E0)
#define CLASS_3_154930AD49B9B200_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x11EB44C0)
#define CLASS_3_154930AD49B9B200__CTOR_OFFSET UNITYSDK_OFFSET(0x11EB4920)

inline static constexpr unsigned int Class_3_154930AD49B9B200_TypeDefinitionIndex = 42252;

class Class_3_154930AD49B9B200 : public ::Foundation::ViewObject::BaseViewObjectComponent_1<::Class_3_154930AD49B9B200*>
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_0_16E4307DCC419505_245*>* Field_3_1; // 0x20
	::MoleMole::Config::ConfigTriggerControlTrait* Field_3_2; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::MonoTriggerEventDispatcher*>* Field_3_0; // 0x30

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

	::System::Void Method_3_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_154930AD49B9B200_METHOD_3_832295EC279E5994_OFFSET))(this);
	}

	::System::Void Method_3_713F600BBDEA9274(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_154930AD49B9B200_METHOD_3_713F600BBDEA9274_OFFSET))(this, a1);
	}

	::System::Void Method_3_832295EC279E5994_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_154930AD49B9B200_METHOD_3_832295EC279E5994_1_OFFSET))(this);
	}

	::System::Void Method_3_05007635340C6239(::MoleMole::Config::ConfigTriggerControlTrait* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigTriggerControlTrait*))((::PBYTE)hIl2Cpp + CLASS_3_154930AD49B9B200_METHOD_3_05007635340C6239_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_234A8211CB010521(::Foundation::ViewObject::CombineTriggerListenParam a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::CombineTriggerListenParam))((::PBYTE)hIl2Cpp + CLASS_3_154930AD49B9B200_METHOD_3_234A8211CB010521_OFFSET))(this, a1);
	}

	::System::Void Method_3_000C2E651A2AED0D(::MoleMole::EntityHandle a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + CLASS_3_154930AD49B9B200_METHOD_3_000C2E651A2AED0D_OFFSET))(this, a1);
	}

	::System::Void Method_3_DFEC27F1F6CA5A80()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_154930AD49B9B200_METHOD_3_DFEC27F1F6CA5A80_OFFSET))(this);
	}

	::System::Void Method_3_4358F70A163BCEAE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_154930AD49B9B200_METHOD_3_4358F70A163BCEAE_OFFSET))(this);
	}

	::System::Void Method_3_6EA5794C5301E81E(::MoleMole::Config::ConfigTriggerControlTrait* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigTriggerControlTrait*))((::PBYTE)hIl2Cpp + CLASS_3_154930AD49B9B200_METHOD_3_6EA5794C5301E81E_OFFSET))(this, a1);
	}

	::MoleMole::Config::ConfigTriggerControlTrait* Method_3_A4B772292CEAD156()
	{
		return ((::MoleMole::Config::ConfigTriggerControlTrait*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_154930AD49B9B200_METHOD_3_A4B772292CEAD156_OFFSET))(this);
	}
};
