#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5BE136E515AF9A61_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_037EA204E69EBC75;

#define CLASS_2_A72D0519C5AA20F6_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1CA49610)
#define CLASS_2_A72D0519C5AA20F6_METHOD_2_521267F2AEE4A422_OFFSET UNITYSDK_OFFSET(0x1CA4A020)
#define CLASS_2_A72D0519C5AA20F6_METHOD_2_CEA32FF190776922_OFFSET UNITYSDK_OFFSET(0x1CA496C0)
#define CLASS_2_A72D0519C5AA20F6__CTOR_OFFSET UNITYSDK_OFFSET(0x1CA49600)

inline static constexpr unsigned int Class_2_A72D0519C5AA20F6_TypeDefinitionIndex = 42472;

class Class_2_A72D0519C5AA20F6 : public ::Class_1_5BE136E515AF9A61_1
{
public:
	::Class_2_037EA204E69EBC75* LBNBPMIFDHI; // 0x18
	::System::Boolean GHIJIBBNKGC; // 0x20
	::System::Boolean MMPGCFBENLO; // 0x21
	::System::Boolean NFPOGHKELGL; // 0x22
	::UnityEngine::Vector3 PDJBFBPEHFE; // 0x24
	::UnityEngine::Vector3 NAMGGEJCDMP; // 0x30
	::System::Single PGMIOKKLHIE; // 0x3C
	::System::UInt32 BAJEFBLFOLC; // 0x40

	::System::Void _ctor(::System::UInt32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_A72D0519C5AA20F6__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A72D0519C5AA20F6_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_CEA32FF190776922()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A72D0519C5AA20F6_METHOD_2_CEA32FF190776922_OFFSET))(this);
	}

	::System::Void Method_2_521267F2AEE4A422(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_A72D0519C5AA20F6_METHOD_2_521267F2AEE4A422_OFFSET))(this, a1);
	}
};
