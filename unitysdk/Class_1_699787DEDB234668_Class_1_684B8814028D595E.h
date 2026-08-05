#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/DisplayCase/DisplayColliderCfgData.h"
#include "unitysdk/MoleMole/Config/DisplayCase/DisplayColliderCfgData_PanelSettle.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_699787DEDB234668_CLASS_1_684B8814028D595E_METHOD_1_400B2A2EA362C54B_OFFSET UNITYSDK_OFFSET(0x10B2AFC0)
#define CLASS_1_699787DEDB234668_CLASS_1_684B8814028D595E_METHOD_1_66D696BA9C7F9D12_OFFSET UNITYSDK_OFFSET(0x10B2B040)
#define CLASS_1_699787DEDB234668_CLASS_1_684B8814028D595E__CTOR_OFFSET UNITYSDK_OFFSET(0x10B2AFB0)

inline static constexpr unsigned int Class_1_699787DEDB234668_Class_1_684B8814028D595E_TypeDefinitionIndex = 47028;

class Class_1_699787DEDB234668_Class_1_684B8814028D595E : public ::System::Object
{
public:
	::System::Func_2<::MoleMole::Config::DisplayCase::DisplayColliderCfgData_PanelSettle, ::System::Boolean>* Field_1_7; // 0x10
	::System::Int32 Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_699787DEDB234668_CLASS_1_684B8814028D595E__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_400B2A2EA362C54B(::MoleMole::Config::DisplayCase::DisplayColliderCfgData a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::DisplayCase::DisplayColliderCfgData))((::PBYTE)hIl2Cpp + CLASS_1_699787DEDB234668_CLASS_1_684B8814028D595E_METHOD_1_400B2A2EA362C54B_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_66D696BA9C7F9D12(::MoleMole::Config::DisplayCase::DisplayColliderCfgData_PanelSettle a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::DisplayCase::DisplayColliderCfgData_PanelSettle))((::PBYTE)hIl2Cpp + CLASS_1_699787DEDB234668_CLASS_1_684B8814028D595E_METHOD_1_66D696BA9C7F9D12_OFFSET))(this, a1);
	}
};
