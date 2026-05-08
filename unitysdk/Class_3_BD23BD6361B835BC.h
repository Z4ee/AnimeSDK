#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_40CD888D5D4FCB5B.h"

#define CLASS_3_BD23BD6361B835BC_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x16A588C0)
#define CLASS_3_BD23BD6361B835BC_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x16A58A10)
#define CLASS_3_BD23BD6361B835BC__CTOR_OFFSET UNITYSDK_OFFSET(0x16A589C0)

inline static constexpr unsigned int Class_3_BD23BD6361B835BC_TypeDefinitionIndex = 78526;

class Class_3_BD23BD6361B835BC : public ::Class_2_40CD888D5D4FCB5B
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BD23BD6361B835BC__CTOR_OFFSET))(this);
	}

	::System::Void FixedUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BD23BD6361B835BC_FIXEDUPDATE_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BD23BD6361B835BC_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
