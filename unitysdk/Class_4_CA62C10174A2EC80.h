#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

template <typename T> class Class_4_2FF7D360A2F3EC48;

#define CLASS_4_CA62C10174A2EC80_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x12DA6A80)
#define CLASS_4_CA62C10174A2EC80_METHOD_4_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x12DA66D0)
#define CLASS_4_CA62C10174A2EC80_METHOD_4_9AB87E6FBE1EB9E8_OFFSET UNITYSDK_OFFSET(0x12DA67B0)
#define CLASS_4_CA62C10174A2EC80__CTOR_OFFSET UNITYSDK_OFFSET(0x12DA6990)

inline static constexpr unsigned int Class_4_CA62C10174A2EC80_TypeDefinitionIndex = 58991;

class Class_4_CA62C10174A2EC80 : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_2FF7D360A2F3EC48<::MoleMole::EntityHandle>* Field_4_1; // 0x28
	::Class_4_2FF7D360A2F3EC48<::System::Boolean>* Field_4_0; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_CA62C10174A2EC80__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_CA62C10174A2EC80_METHOD_4_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_4_9AB87E6FBE1EB9E8(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_4_CA62C10174A2EC80_METHOD_4_9AB87E6FBE1EB9E8_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_CA62C10174A2EC80_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}
};
