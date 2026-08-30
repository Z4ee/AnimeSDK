#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_57578741329DF018.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_F973475E4025ACC3;
namespace System { class String; }

#define CLASS_2_9B30E005F2C90F81_METHOD_2_188D35F3C5CFFF2E_OFFSET UNITYSDK_OFFSET(0x160C2180)
#define CLASS_2_9B30E005F2C90F81_METHOD_2_49AA86D9F19FB057_OFFSET UNITYSDK_OFFSET(0x160C2240)
#define CLASS_2_9B30E005F2C90F81_METHOD_2_8542E37E74FDE1B5_OFFSET UNITYSDK_OFFSET(0x160C20C0)
#define CLASS_2_9B30E005F2C90F81_METHOD_2_8D61BE16C9463302_OFFSET UNITYSDK_OFFSET(0x160C2050)
#define CLASS_2_9B30E005F2C90F81_METHOD_2_98CD66A7F3C102A5_OFFSET UNITYSDK_OFFSET(0x160C2130)
#define CLASS_2_9B30E005F2C90F81__CTOR_OFFSET UNITYSDK_OFFSET(0x160C23C0)

inline static constexpr unsigned int Class_2_9B30E005F2C90F81_TypeDefinitionIndex = 54169;

class Class_2_9B30E005F2C90F81 : public ::Class_1_57578741329DF018
{
public:
	::Class_1_F973475E4025ACC3* LMCGNOKGHBN; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9B30E005F2C90F81__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_8D61BE16C9463302()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9B30E005F2C90F81_METHOD_2_8D61BE16C9463302_OFFSET))(this);
	}

	::System::Void Method_2_8542E37E74FDE1B5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9B30E005F2C90F81_METHOD_2_8542E37E74FDE1B5_OFFSET))(this);
	}

	::System::Void Method_2_98CD66A7F3C102A5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9B30E005F2C90F81_METHOD_2_98CD66A7F3C102A5_OFFSET))(this);
	}

	::System::Void Method_2_188D35F3C5CFFF2E(::System::Single a1, ::System::Single a2, ::System::String* a3, ::RPG::MVector3 a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::String*, ::RPG::MVector3))((::PBYTE)hIl2Cpp + CLASS_2_9B30E005F2C90F81_METHOD_2_188D35F3C5CFFF2E_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_49AA86D9F19FB057(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_9B30E005F2C90F81_METHOD_2_49AA86D9F19FB057_OFFSET))(this, a1);
	}
};
