#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UIController.h"
#include "unitysdk/RPG/GameCore/TeamType.h"

class Class_2_5A0CFCCE9DEA8840;

#define CLASS_2_8424C507D90D78A0_METHOD_2_08A44229CA25E941_OFFSET UNITYSDK_OFFSET(0x17529130)
#define CLASS_2_8424C507D90D78A0_METHOD_2_A1ADC999CFACEB89_OFFSET UNITYSDK_OFFSET(0x17529CA0)
#define CLASS_2_8424C507D90D78A0_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x17529010)
#define CLASS_2_8424C507D90D78A0__CTOR_OFFSET UNITYSDK_OFFSET(0x17528F60)
#define CLASS_2_8424C507D90D78A0__CUSTOMBINDVIEW_OFFSET UNITYSDK_OFFSET(0x17529060)
#define CLASS_2_8424C507D90D78A0__ONEXITFINALSTEP_OFFSET UNITYSDK_OFFSET(0x17529E00)
#define CLASS_2_8424C507D90D78A0__ONTICK_OFFSET UNITYSDK_OFFSET(0x17529500)
#define CLASS_2_8424C507D90D78A0__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x175291C0)

inline static constexpr unsigned int Class_2_8424C507D90D78A0_TypeDefinitionIndex = 69089;

class Class_2_8424C507D90D78A0 : public ::RPG::Client::UIController
{
public:
	// static const ::System::Single Field_2_0; // 0x0
	// static const ::System::Single Field_2_1; // 0x0
	::System::Int32 Field_2_2; // 0x180
	::System::Single Field_2_3; // 0x184
	::System::Single Field_2_4; // 0x188
	::System::Boolean Field_2_5; // 0x18C

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
