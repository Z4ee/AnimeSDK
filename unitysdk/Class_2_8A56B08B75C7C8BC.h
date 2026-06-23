#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C36D127C88299910.h"
#include "unitysdk/Class_1_C36D127C88299910_Enum_3_267898ADE98304D3.h"
#include "unitysdk/MoleMole/UICameraAtom.h"
#include "unitysdk/Struct_2_519740F826A15881.h"

class Class_0_16E4307DCC419505_190;
namespace MoleMole::Config { class ConfigHollowCameraShake; }

#define CLASS_2_8A56B08B75C7C8BC_METHOD_2_0CAD65B68E26D548_OFFSET UNITYSDK_OFFSET(0x15667C90)
#define CLASS_2_8A56B08B75C7C8BC_METHOD_2_1167B82216E9F065_OFFSET UNITYSDK_OFFSET(0x15667800)
#define CLASS_2_8A56B08B75C7C8BC_METHOD_2_2ACF2A61FB239D23_OFFSET UNITYSDK_OFFSET(0x156677E0)
#define CLASS_2_8A56B08B75C7C8BC_METHOD_2_3302777B3F94C762_OFFSET UNITYSDK_OFFSET(0x15667DF0)
#define CLASS_2_8A56B08B75C7C8BC_METHOD_2_3B9A0ED1BDA79D53_OFFSET UNITYSDK_OFFSET(0x15667DE0)
#define CLASS_2_8A56B08B75C7C8BC_METHOD_2_530316D0AFF9D418_OFFSET UNITYSDK_OFFSET(0x15667E50)
#define CLASS_2_8A56B08B75C7C8BC_METHOD_2_9A8E671C8138BCE2_OFFSET UNITYSDK_OFFSET(0x15667870)
#define CLASS_2_8A56B08B75C7C8BC_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x156677F0)
#define CLASS_2_8A56B08B75C7C8BC__CTOR_OFFSET UNITYSDK_OFFSET(0x15667DD0)

inline static constexpr unsigned int Class_2_8A56B08B75C7C8BC_TypeDefinitionIndex = 64269;

class Class_2_8A56B08B75C7C8BC : public ::Class_1_C36D127C88299910
{
public:
	::MoleMole::Config::ConfigHollowCameraShake* Field_2_0; // 0x78
	::System::Single Field_2_1; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8A56B08B75C7C8BC__CTOR_OFFSET))(this);
	}

	::Class_1_C36D127C88299910_Enum_3_267898ADE98304D3 Method_2_2ACF2A61FB239D23()
	{
		return ((::Class_1_C36D127C88299910_Enum_3_267898ADE98304D3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8A56B08B75C7C8BC_METHOD_2_2ACF2A61FB239D23_OFFSET))(this);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8A56B08B75C7C8BC_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_2_1167B82216E9F065(::MoleMole::UICameraAtom a1, ::MoleMole::UICameraAtom a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UICameraAtom, ::MoleMole::UICameraAtom))((::PBYTE)hIl2Cpp + CLASS_2_8A56B08B75C7C8BC_METHOD_2_1167B82216E9F065_OFFSET))(this, a1, a2);
	}

	::Class_0_16E4307DCC419505_190* Method_2_9A8E671C8138BCE2(::MoleMole::UICameraAtom a1, ::MoleMole::UICameraAtom a2)
	{
		return ((::Class_0_16E4307DCC419505_190*(*)(::PVOID, ::MoleMole::UICameraAtom, ::MoleMole::UICameraAtom))((::PBYTE)hIl2Cpp + CLASS_2_8A56B08B75C7C8BC_METHOD_2_9A8E671C8138BCE2_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_0CAD65B68E26D548(::System::Single a1, ::System::Single a2, ::MoleMole::UICameraAtom a3, ::MoleMole::UICameraAtom a4, ::Struct_2_519740F826A15881& a5)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single, ::MoleMole::UICameraAtom, ::MoleMole::UICameraAtom, ::Struct_2_519740F826A15881&))((::PBYTE)hIl2Cpp + CLASS_2_8A56B08B75C7C8BC_METHOD_2_0CAD65B68E26D548_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_3B9A0ED1BDA79D53(::MoleMole::Config::ConfigHollowCameraShake* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigHollowCameraShake*))((::PBYTE)hIl2Cpp + CLASS_2_8A56B08B75C7C8BC_METHOD_2_3B9A0ED1BDA79D53_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_3302777B3F94C762(::System::Single a1, ::System::Single a2, ::MoleMole::UICameraAtom a3, ::MoleMole::UICameraAtom a4, ::Struct_2_519740F826A15881& a5)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single, ::MoleMole::UICameraAtom, ::MoleMole::UICameraAtom, ::Struct_2_519740F826A15881&))((::PBYTE)hIl2Cpp + CLASS_2_8A56B08B75C7C8BC_METHOD_2_3302777B3F94C762_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::MoleMole::Config::ConfigHollowCameraShake* Method_2_530316D0AFF9D418()
	{
		return ((::MoleMole::Config::ConfigHollowCameraShake*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8A56B08B75C7C8BC_METHOD_2_530316D0AFF9D418_OFFSET))(this);
	}
};
