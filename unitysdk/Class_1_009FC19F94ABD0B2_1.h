#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class UIController; }
namespace System { class Action; }
namespace System { class String; }

#define CLASS_1_009FC19F94ABD0B2_1_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0xA78C020)
#define CLASS_1_009FC19F94ABD0B2_1_METHOD_1_256B6E165124982E_1_OFFSET UNITYSDK_OFFSET(0xA78C1C0)
#define CLASS_1_009FC19F94ABD0B2_1_METHOD_1_256B6E165124982E_OFFSET UNITYSDK_OFFSET(0xA78C120)
#define CLASS_1_009FC19F94ABD0B2_1_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0xA78BF00)
#define CLASS_1_009FC19F94ABD0B2_1_METHOD_1_3B7145E79424FB75_OFFSET UNITYSDK_OFFSET(0xA78C060)
#define CLASS_1_009FC19F94ABD0B2_1_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xA78C180)
#define CLASS_1_009FC19F94ABD0B2_1_METHOD_1_D1305BC17A89C222_OFFSET UNITYSDK_OFFSET(0xA78BF40)
#define CLASS_1_009FC19F94ABD0B2_1__CTOR_OFFSET UNITYSDK_OFFSET(0xA78BEF0)

inline static constexpr unsigned int Class_1_009FC19F94ABD0B2_1_TypeDefinitionIndex = 56516;

class Class_1_009FC19F94ABD0B2_1 : public ::System::Object
{
public:
	::RPG::Client::UIController* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_009FC19F94ABD0B2_1__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_009FC19F94ABD0B2_1_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_1_D1305BC17A89C222()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_009FC19F94ABD0B2_1_METHOD_1_D1305BC17A89C222_OFFSET))(this);
	}

	::System::Void Method_1_3B7145E79424FB75()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_009FC19F94ABD0B2_1_METHOD_1_3B7145E79424FB75_OFFSET))(this);
	}

	::System::Void Method_1_256B6E165124982E(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_009FC19F94ABD0B2_1_METHOD_1_256B6E165124982E_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_009FC19F94ABD0B2_1_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_256B6E165124982E_1(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_009FC19F94ABD0B2_1_METHOD_1_256B6E165124982E_1_OFFSET))(this, a1);
	}

	::System::String* Method_1_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_009FC19F94ABD0B2_1_METHOD_1_128774387667156B_OFFSET))(this);
	}
};
