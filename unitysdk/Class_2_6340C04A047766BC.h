#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C36D127C88299910.h"
#include "unitysdk/Class_1_C36D127C88299910_Enum_3_267898ADE98304D3.h"
#include "unitysdk/MoleMole/UICameraAtom.h"
#include "unitysdk/Struct_2_519740F826A15881.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_230;
namespace MoleMole::Config { class ConfigHollowCameraStretchV2; }
namespace System { class String; }

#define CLASS_2_6340C04A047766BC_METHOD_2_0CAD65B68E26D548_OFFSET UNITYSDK_OFFSET(0xF723F80)
#define CLASS_2_6340C04A047766BC_METHOD_2_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0xF724130)
#define CLASS_2_6340C04A047766BC_METHOD_2_2ACF2A61FB239D23_OFFSET UNITYSDK_OFFSET(0xF723D00)
#define CLASS_2_6340C04A047766BC_METHOD_2_3302777B3F94C762_OFFSET UNITYSDK_OFFSET(0xF7240C0)
#define CLASS_2_6340C04A047766BC_METHOD_2_45A4CA3368909146_OFFSET UNITYSDK_OFFSET(0xF723E90)
#define CLASS_2_6340C04A047766BC_METHOD_2_7D201B4343E63821_OFFSET UNITYSDK_OFFSET(0xF724140)
#define CLASS_2_6340C04A047766BC_METHOD_2_A49CFCC54F551DDE_OFFSET UNITYSDK_OFFSET(0xF723D20)
#define CLASS_2_6340C04A047766BC_METHOD_2_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0xF724120)
#define CLASS_2_6340C04A047766BC_METHOD_2_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0xF724150)
#define CLASS_2_6340C04A047766BC_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0xF723D10)
#define CLASS_2_6340C04A047766BC__CTOR_OFFSET UNITYSDK_OFFSET(0xF7240B0)

inline static constexpr unsigned int Class_2_6340C04A047766BC_TypeDefinitionIndex = 65699;

class Class_2_6340C04A047766BC : public ::Class_1_C36D127C88299910
{
public:
	::System::String* Field_2_1; // 0x78
	::MoleMole::Config::ConfigHollowCameraStretchV2* Field_2_6; // 0x80
	::System::Boolean Field_2_0; // 0x88
	::UnityEngine::Vector3 Field_2_7; // 0x8C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6340C04A047766BC__CTOR_OFFSET))(this);
	}

	::Class_1_C36D127C88299910_Enum_3_267898ADE98304D3 Method_2_2ACF2A61FB239D23()
	{
		return ((::Class_1_C36D127C88299910_Enum_3_267898ADE98304D3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6340C04A047766BC_METHOD_2_2ACF2A61FB239D23_OFFSET))(this);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6340C04A047766BC_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_2_A49CFCC54F551DDE(::MoleMole::UICameraAtom a1, ::MoleMole::UICameraAtom a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UICameraAtom, ::MoleMole::UICameraAtom))((::PBYTE)hIl2Cpp + CLASS_2_6340C04A047766BC_METHOD_2_A49CFCC54F551DDE_OFFSET))(this, a1, a2);
	}

	::Class_0_16E4307DCC419505_230* Method_2_45A4CA3368909146(::MoleMole::UICameraAtom a1, ::MoleMole::UICameraAtom a2)
	{
		return ((::Class_0_16E4307DCC419505_230*(*)(::PVOID, ::MoleMole::UICameraAtom, ::MoleMole::UICameraAtom))((::PBYTE)hIl2Cpp + CLASS_2_6340C04A047766BC_METHOD_2_45A4CA3368909146_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_0CAD65B68E26D548(::System::Single a1, ::System::Single a2, ::MoleMole::UICameraAtom a3, ::MoleMole::UICameraAtom a4, ::Struct_2_519740F826A15881& a5)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single, ::MoleMole::UICameraAtom, ::MoleMole::UICameraAtom, ::Struct_2_519740F826A15881&))((::PBYTE)hIl2Cpp + CLASS_2_6340C04A047766BC_METHOD_2_0CAD65B68E26D548_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Boolean Method_2_3302777B3F94C762(::System::Single a1, ::System::Single a2, ::MoleMole::UICameraAtom a3, ::MoleMole::UICameraAtom a4, ::Struct_2_519740F826A15881& a5)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single, ::MoleMole::UICameraAtom, ::MoleMole::UICameraAtom, ::Struct_2_519740F826A15881&))((::PBYTE)hIl2Cpp + CLASS_2_6340C04A047766BC_METHOD_2_3302777B3F94C762_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_6340C04A047766BC_METHOD_2_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::String* Method_2_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6340C04A047766BC_METHOD_2_126AB3935214AA22_OFFSET))(this);
	}

	::System::Void Method_2_7D201B4343E63821(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_6340C04A047766BC_METHOD_2_7D201B4343E63821_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6340C04A047766BC_METHOD_2_F0088C88851A7DFB_1_OFFSET))(this);
	}
};
