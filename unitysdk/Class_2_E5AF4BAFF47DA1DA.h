#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C36D127C88299910.h"
#include "unitysdk/Class_1_C36D127C88299910_Enum_3_267898ADE98304D3.h"
#include "unitysdk/MoleMole/UICameraAtom.h"

class Class_0_16E4307DCC419505_186;
namespace MoleMole { class ConfigAnimationCurveGroup; }
namespace System { class String; }

#define CLASS_2_E5AF4BAFF47DA1DA_METHOD_2_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x16B200F0)
#define CLASS_2_E5AF4BAFF47DA1DA_METHOD_2_2ACF2A61FB239D23_OFFSET UNITYSDK_OFFSET(0x16B1FE10)
#define CLASS_2_E5AF4BAFF47DA1DA_METHOD_2_45A4CA3368909146_OFFSET UNITYSDK_OFFSET(0x16B1FF50)
#define CLASS_2_E5AF4BAFF47DA1DA_METHOD_2_7D201B4343E63821_OFFSET UNITYSDK_OFFSET(0x16B200E0)
#define CLASS_2_E5AF4BAFF47DA1DA_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x16B1FE20)
#define CLASS_2_E5AF4BAFF47DA1DA_METHOD_2_FAA467B366751BE1_OFFSET UNITYSDK_OFFSET(0x16B1FE30)
#define CLASS_2_E5AF4BAFF47DA1DA__CTOR_OFFSET UNITYSDK_OFFSET(0x16B200D0)

inline static constexpr unsigned int Class_2_E5AF4BAFF47DA1DA_TypeDefinitionIndex = 69889;

class Class_2_E5AF4BAFF47DA1DA : public ::Class_1_C36D127C88299910
{
public:
	::System::String* Field_2_0; // 0x78
	::MoleMole::ConfigAnimationCurveGroup* Field_2_1; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E5AF4BAFF47DA1DA__CTOR_OFFSET))(this);
	}

	::Class_1_C36D127C88299910_Enum_3_267898ADE98304D3 Method_2_2ACF2A61FB239D23()
	{
		return ((::Class_1_C36D127C88299910_Enum_3_267898ADE98304D3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E5AF4BAFF47DA1DA_METHOD_2_2ACF2A61FB239D23_OFFSET))(this);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E5AF4BAFF47DA1DA_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_2_FAA467B366751BE1(::MoleMole::UICameraAtom a1, ::MoleMole::UICameraAtom a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UICameraAtom, ::MoleMole::UICameraAtom))((::PBYTE)hIl2Cpp + CLASS_2_E5AF4BAFF47DA1DA_METHOD_2_FAA467B366751BE1_OFFSET))(this, a1, a2);
	}

	::Class_0_16E4307DCC419505_186* Method_2_45A4CA3368909146(::MoleMole::UICameraAtom a1, ::MoleMole::UICameraAtom a2)
	{
		return ((::Class_0_16E4307DCC419505_186*(*)(::PVOID, ::MoleMole::UICameraAtom, ::MoleMole::UICameraAtom))((::PBYTE)hIl2Cpp + CLASS_2_E5AF4BAFF47DA1DA_METHOD_2_45A4CA3368909146_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_7D201B4343E63821(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_E5AF4BAFF47DA1DA_METHOD_2_7D201B4343E63821_OFFSET))(this, a1);
	}

	::System::String* Method_2_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E5AF4BAFF47DA1DA_METHOD_2_126AB3935214AA22_OFFSET))(this);
	}
};
