#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_545352D1BF1C6114.h"

namespace MoleMole { class UIWindowController; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_98EE7E9B2CE0B1EF_METHOD_2_14D9E673263B683B_OFFSET UNITYSDK_OFFSET(0x1554BB20)
#define CLASS_2_98EE7E9B2CE0B1EF_METHOD_2_2523B847D801AC07_1_OFFSET UNITYSDK_OFFSET(0x1554BA90)
#define CLASS_2_98EE7E9B2CE0B1EF_METHOD_2_2523B847D801AC07_OFFSET UNITYSDK_OFFSET(0x1554BA00)
#define CLASS_2_98EE7E9B2CE0B1EF_METHOD_2_400819C30A4FB018_OFFSET UNITYSDK_OFFSET(0x1554B840)
#define CLASS_2_98EE7E9B2CE0B1EF_METHOD_2_737FB48A538F8CF1_OFFSET UNITYSDK_OFFSET(0x1554B550)
#define CLASS_2_98EE7E9B2CE0B1EF__CTOR_OFFSET UNITYSDK_OFFSET(0x1554B8D0)

inline static constexpr unsigned int Class_2_98EE7E9B2CE0B1EF_TypeDefinitionIndex = 48345;

class Class_2_98EE7E9B2CE0B1EF : public ::Class_1_545352D1BF1C6114
{
public:
	::System::Collections::Generic::List_1<::MoleMole::UIWindowController*>* Field_2_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_98EE7E9B2CE0B1EF__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_737FB48A538F8CF1(::MoleMole::UIWindowController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + CLASS_2_98EE7E9B2CE0B1EF_METHOD_2_737FB48A538F8CF1_OFFSET))(this, a1);
	}

	::System::Void Method_2_400819C30A4FB018(::MoleMole::UIWindowController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + CLASS_2_98EE7E9B2CE0B1EF_METHOD_2_400819C30A4FB018_OFFSET))(this, a1);
	}

	::System::Void Method_2_2523B847D801AC07(::MoleMole::UIWindowController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + CLASS_2_98EE7E9B2CE0B1EF_METHOD_2_2523B847D801AC07_OFFSET))(this, a1);
	}

	::System::Void Method_2_2523B847D801AC07_1(::MoleMole::UIWindowController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + CLASS_2_98EE7E9B2CE0B1EF_METHOD_2_2523B847D801AC07_1_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::MoleMole::UIWindowController*>* Method_2_14D9E673263B683B()
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::UIWindowController*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_98EE7E9B2CE0B1EF_METHOD_2_14D9E673263B683B_OFFSET))(this);
	}
};
