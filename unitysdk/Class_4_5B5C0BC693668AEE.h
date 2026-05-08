#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"
#include "unitysdk/UnityEngine/Vector3.h"

template <typename T> class Class_4_2FF7D360A2F3EC48;

#define CLASS_4_5B5C0BC693668AEE_METHOD_4_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x118CCD20)
#define CLASS_4_5B5C0BC693668AEE_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x118CD120)
#define CLASS_4_5B5C0BC693668AEE_METHOD_4_5101A696E42CF1C8_OFFSET UNITYSDK_OFFSET(0x118CCE70)
#define CLASS_4_5B5C0BC693668AEE__CTOR_OFFSET UNITYSDK_OFFSET(0x118CCFF0)

inline static constexpr unsigned int Class_4_5B5C0BC693668AEE_TypeDefinitionIndex = 65284;

class Class_4_5B5C0BC693668AEE : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_2FF7D360A2F3EC48<::MoleMole::EntityHandle>* Field_4_2; // 0x28
	::Class_4_2FF7D360A2F3EC48<::UnityEngine::Vector3>* Field_4_1; // 0x30
	::Class_4_2FF7D360A2F3EC48<::System::Int32>* Field_4_0; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_5B5C0BC693668AEE__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_5B5C0BC693668AEE_METHOD_4_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_4_5101A696E42CF1C8(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_4_5B5C0BC693668AEE_METHOD_4_5101A696E42CF1C8_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_5B5C0BC693668AEE_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}
};
