#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_545352D1BF1C6114.h"

namespace MoleMole { class UIWindowController; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_98EE7E9B2CE0B1EF_METHOD_2_2523B847D801AC07_1_OFFSET UNITYSDK_OFFSET(0x132B50F0)
#define CLASS_2_98EE7E9B2CE0B1EF_METHOD_2_2523B847D801AC07_OFFSET UNITYSDK_OFFSET(0x132B4B20)
#define CLASS_2_98EE7E9B2CE0B1EF_METHOD_2_400819C30A4FB018_OFFSET UNITYSDK_OFFSET(0x132B4960)
#define CLASS_2_98EE7E9B2CE0B1EF_METHOD_2_977CCB4CAD845D8E_OFFSET UNITYSDK_OFFSET(0x132B4BB0)
#define CLASS_2_98EE7E9B2CE0B1EF_METHOD_2_C4E59810E5712586_OFFSET UNITYSDK_OFFSET(0x132B4680)
#define CLASS_2_98EE7E9B2CE0B1EF__CTOR_OFFSET UNITYSDK_OFFSET(0x132B49F0)

inline static constexpr unsigned int Class_2_98EE7E9B2CE0B1EF_TypeDefinitionIndex = 56824;

class Class_2_98EE7E9B2CE0B1EF : public ::Class_1_545352D1BF1C6114
{
public:
	::System::Collections::Generic::List_1<::MoleMole::UIWindowController*>* Field_2_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_98EE7E9B2CE0B1EF__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_C4E59810E5712586(::MoleMole::UIWindowController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + CLASS_2_98EE7E9B2CE0B1EF_METHOD_2_C4E59810E5712586_OFFSET))(this, a1);
	}

	::System::Void Method_2_400819C30A4FB018(::MoleMole::UIWindowController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + CLASS_2_98EE7E9B2CE0B1EF_METHOD_2_400819C30A4FB018_OFFSET))(this, a1);
	}

	::System::Void Method_2_2523B847D801AC07(::MoleMole::UIWindowController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + CLASS_2_98EE7E9B2CE0B1EF_METHOD_2_2523B847D801AC07_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::MoleMole::UIWindowController*>* Method_2_977CCB4CAD845D8E()
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::UIWindowController*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_98EE7E9B2CE0B1EF_METHOD_2_977CCB4CAD845D8E_OFFSET))(this);
	}

	::System::Void Method_2_2523B847D801AC07_1(::MoleMole::UIWindowController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + CLASS_2_98EE7E9B2CE0B1EF_METHOD_2_2523B847D801AC07_1_OFFSET))(this, a1);
	}
};
