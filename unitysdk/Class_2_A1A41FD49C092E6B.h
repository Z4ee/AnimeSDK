#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_4252C4B7F9BB7BE7.h"
#include "unitysdk/Enum_3_DBF2701137F18AA6.h"

namespace System { class EventArgs; }
namespace System { class String; }

#define CLASS_2_A1A41FD49C092E6B_METHOD_2_0B7E3489D2C0938B_OFFSET UNITYSDK_OFFSET(0x1576D810)
#define CLASS_2_A1A41FD49C092E6B_METHOD_2_59FA93071C10B0D7_OFFSET UNITYSDK_OFFSET(0x1576DD10)
#define CLASS_2_A1A41FD49C092E6B_METHOD_2_813D2C93BFE6E56D_OFFSET UNITYSDK_OFFSET(0x1576DE30)
#define CLASS_2_A1A41FD49C092E6B_METHOD_2_C638E91FC0D3A13A_OFFSET UNITYSDK_OFFSET(0x1576D590)
#define CLASS_2_A1A41FD49C092E6B_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1576DDA0)
#define CLASS_2_A1A41FD49C092E6B__CTOR_OFFSET UNITYSDK_OFFSET(0x1576DCD0)

inline static constexpr unsigned int Class_2_A1A41FD49C092E6B_TypeDefinitionIndex = 91406;

class Class_2_A1A41FD49C092E6B : public ::Class_1_4252C4B7F9BB7BE7
{
public:
	::System::String* Field_2_1; // 0x38
	::System::String* Field_2_2; // 0x40
	::Enum_3_DBF2701137F18AA6 Field_2_0; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A1A41FD49C092E6B__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_C638E91FC0D3A13A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A1A41FD49C092E6B_METHOD_2_C638E91FC0D3A13A_OFFSET))(this);
	}

	::System::Void Method_2_0B7E3489D2C0938B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A1A41FD49C092E6B_METHOD_2_0B7E3489D2C0938B_OFFSET))(this);
	}

	::System::Void Method_2_59FA93071C10B0D7(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_2_A1A41FD49C092E6B_METHOD_2_59FA93071C10B0D7_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A1A41FD49C092E6B_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_813D2C93BFE6E56D(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_2_A1A41FD49C092E6B_METHOD_2_813D2C93BFE6E56D_OFFSET))(this, a1);
	}
};
