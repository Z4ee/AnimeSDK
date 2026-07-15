#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class UIController; }
namespace System { class String; }

#define CLASS_1_EE0657F7A1442DC0_METHOD_1_391A84BCD9F51317_1_OFFSET UNITYSDK_OFFSET(0x15F2DFD0)
#define CLASS_1_EE0657F7A1442DC0_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x15F2DF90)
#define CLASS_1_EE0657F7A1442DC0_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x15F2E010)
#define CLASS_1_EE0657F7A1442DC0_TOSTRING_OFFSET UNITYSDK_OFFSET(0x15F2E060)
#define CLASS_1_EE0657F7A1442DC0__CTOR_OFFSET UNITYSDK_OFFSET(0x15F2DEC0)

inline static constexpr unsigned int Class_1_EE0657F7A1442DC0_TypeDefinitionIndex = 56631;

class Class_1_EE0657F7A1442DC0 : public ::System::Object
{
public:
	::RPG::Client::UIController* Field_1_0; // 0x10
	::System::Boolean Field_1_1; // 0x18

	::System::Void _ctor(::RPG::Client::UIController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + CLASS_1_EE0657F7A1442DC0__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EE0657F7A1442DC0_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EE0657F7A1442DC0_METHOD_1_391A84BCD9F51317_1_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EE0657F7A1442DC0_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EE0657F7A1442DC0_TOSTRING_OFFSET))(this);
	}
};
