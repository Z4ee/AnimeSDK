#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_AB4261DB06E3A6BD.h"

namespace System { class Action; }

#define CLASS_3_0EED6B9CBFE9D313_METHOD_3_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x153E12D0)
#define CLASS_3_0EED6B9CBFE9D313_METHOD_3_479759059E440327_OFFSET UNITYSDK_OFFSET(0x153E1220)
#define CLASS_3_0EED6B9CBFE9D313_METHOD_3_C561FF611C07A44C_OFFSET UNITYSDK_OFFSET(0x153E1340)
#define CLASS_3_0EED6B9CBFE9D313__CTOR_OFFSET UNITYSDK_OFFSET(0x153E1110)

inline static constexpr unsigned int Class_3_0EED6B9CBFE9D313_TypeDefinitionIndex = 76207;

class Class_3_0EED6B9CBFE9D313 : public ::Class_2_AB4261DB06E3A6BD
{
public:
	::System::Action* Field_3_5; // 0x40
	::System::Single Field_3_0; // 0x48
	::System::Single Field_3_6; // 0x4C
	::System::Single Field_3_7; // 0x50

	::System::Void _ctor(::System::Single a1, ::System::Single a2, ::System::Action* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_3_0EED6B9CBFE9D313__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_479759059E440327(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_0EED6B9CBFE9D313_METHOD_3_479759059E440327_OFFSET))(this, a1);
	}

	::System::Void Method_3_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0EED6B9CBFE9D313_METHOD_3_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_3_C561FF611C07A44C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0EED6B9CBFE9D313_METHOD_3_C561FF611C07A44C_OFFSET))(this);
	}
};
