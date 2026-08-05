#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C36D127C88299910.h"
#include "unitysdk/Class_1_C36D127C88299910_Enum_3_267898ADE98304D3.h"
#include "unitysdk/MoleMole/UICameraAtom.h"

class Class_0_16E4307DCC419505_230;
namespace MoleMole::Config { class ConfigHollowCameraStretchV2; }

#define CLASS_2_F2AC6F0DCAE995E0_METHOD_2_1167B82216E9F065_OFFSET UNITYSDK_OFFSET(0x18778290)
#define CLASS_2_F2AC6F0DCAE995E0_METHOD_2_13645C12D16CC0E9_OFFSET UNITYSDK_OFFSET(0x18778400)
#define CLASS_2_F2AC6F0DCAE995E0_METHOD_2_2ACF2A61FB239D23_OFFSET UNITYSDK_OFFSET(0x18778270)
#define CLASS_2_F2AC6F0DCAE995E0_METHOD_2_45A4CA3368909146_OFFSET UNITYSDK_OFFSET(0x18778300)
#define CLASS_2_F2AC6F0DCAE995E0_METHOD_2_D98B150ACCD4D2CA_OFFSET UNITYSDK_OFFSET(0x18778410)
#define CLASS_2_F2AC6F0DCAE995E0_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x18778280)
#define CLASS_2_F2AC6F0DCAE995E0__CTOR_OFFSET UNITYSDK_OFFSET(0x187783F0)

inline static constexpr unsigned int Class_2_F2AC6F0DCAE995E0_TypeDefinitionIndex = 67743;

class Class_2_F2AC6F0DCAE995E0 : public ::Class_1_C36D127C88299910
{
public:
	::MoleMole::Config::ConfigHollowCameraStretchV2* Field_2_0; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F2AC6F0DCAE995E0__CTOR_OFFSET))(this);
	}

	::Class_1_C36D127C88299910_Enum_3_267898ADE98304D3 Method_2_2ACF2A61FB239D23()
	{
		return ((::Class_1_C36D127C88299910_Enum_3_267898ADE98304D3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F2AC6F0DCAE995E0_METHOD_2_2ACF2A61FB239D23_OFFSET))(this);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F2AC6F0DCAE995E0_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_2_1167B82216E9F065(::MoleMole::UICameraAtom a1, ::MoleMole::UICameraAtom a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UICameraAtom, ::MoleMole::UICameraAtom))((::PBYTE)hIl2Cpp + CLASS_2_F2AC6F0DCAE995E0_METHOD_2_1167B82216E9F065_OFFSET))(this, a1, a2);
	}

	::Class_0_16E4307DCC419505_230* Method_2_45A4CA3368909146(::MoleMole::UICameraAtom a1, ::MoleMole::UICameraAtom a2)
	{
		return ((::Class_0_16E4307DCC419505_230*(*)(::PVOID, ::MoleMole::UICameraAtom, ::MoleMole::UICameraAtom))((::PBYTE)hIl2Cpp + CLASS_2_F2AC6F0DCAE995E0_METHOD_2_45A4CA3368909146_OFFSET))(this, a1, a2);
	}

	::MoleMole::Config::ConfigHollowCameraStretchV2* Method_2_13645C12D16CC0E9()
	{
		return ((::MoleMole::Config::ConfigHollowCameraStretchV2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F2AC6F0DCAE995E0_METHOD_2_13645C12D16CC0E9_OFFSET))(this);
	}

	::System::Void Method_2_D98B150ACCD4D2CA(::MoleMole::Config::ConfigHollowCameraStretchV2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigHollowCameraStretchV2*))((::PBYTE)hIl2Cpp + CLASS_2_F2AC6F0DCAE995E0_METHOD_2_D98B150ACCD4D2CA_OFFSET))(this, a1);
	}
};
