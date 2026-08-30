#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UIController.h"
#include "unitysdk/RPG/GameCore/TeamType.h"

class Class_2_5A0CFCCE9DEA8840;

#define CLASS_2_8424C507D90D78A0_METHOD_2_08A44229CA25E941_OFFSET UNITYSDK_OFFSET(0x19AE9460)
#define CLASS_2_8424C507D90D78A0_METHOD_2_A1ADC999CFACEB89_OFFSET UNITYSDK_OFFSET(0x19AE9FD0)
#define CLASS_2_8424C507D90D78A0_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x19AE92C0)
#define CLASS_2_8424C507D90D78A0__CTOR_OFFSET UNITYSDK_OFFSET(0x19AE9210)
#define CLASS_2_8424C507D90D78A0__CUSTOMBINDVIEW_OFFSET UNITYSDK_OFFSET(0x19AE9310)
#define CLASS_2_8424C507D90D78A0__ONEXITFINALSTEP_OFFSET UNITYSDK_OFFSET(0x19AEA130)
#define CLASS_2_8424C507D90D78A0__ONTICK_OFFSET UNITYSDK_OFFSET(0x19AE9830)
#define CLASS_2_8424C507D90D78A0__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x19AE94F0)

inline static constexpr unsigned int Class_2_8424C507D90D78A0_TypeDefinitionIndex = 72289;

class Class_2_8424C507D90D78A0 : public ::RPG::Client::UIController
{
public:
	// static const ::System::Single KMOOHJLOMBD; // 0x0
	// static const ::System::Single FGDGKFPBMDE; // 0x0
	::System::Single AANLLNPJMPE; // 0x188
	::System::Boolean DNBIKOHBBBI; // 0x18C
	::System::Int32 FFIGJKHKODC; // 0x190
	::System::Single EGPDMFEDJEI; // 0x194

	::System::Void _ctor(::RPG::GameCore::TeamType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TeamType))((::PBYTE)hIl2Cpp + CLASS_2_8424C507D90D78A0__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8424C507D90D78A0_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void _CustomBindView()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8424C507D90D78A0__CUSTOMBINDVIEW_OFFSET))(this);
	}

	::System::Void _SetupView()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8424C507D90D78A0__SETUPVIEW_OFFSET))(this);
	}

	::System::Void _OnTick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_8424C507D90D78A0__ONTICK_OFFSET))(this, a1);
	}

	::System::Void _OnExitFinalStep()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8424C507D90D78A0__ONEXITFINALSTEP_OFFSET))(this);
	}

	::System::Void Method_2_A1ADC999CFACEB89()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8424C507D90D78A0_METHOD_2_A1ADC999CFACEB89_OFFSET))(this);
	}

	::Class_2_5A0CFCCE9DEA8840* Method_2_08A44229CA25E941()
	{
		return ((::Class_2_5A0CFCCE9DEA8840*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8424C507D90D78A0_METHOD_2_08A44229CA25E941_OFFSET))(this);
	}
};
