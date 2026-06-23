#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

template <typename T> class Class_4_B51FB35349ACD175;

#define CLASS_4_03B78BD0497439FC_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x15AE6650)
#define CLASS_4_03B78BD0497439FC_METHOD_4_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x15AE6240)
#define CLASS_4_03B78BD0497439FC_METHOD_4_F370E675AD59DD8F_OFFSET UNITYSDK_OFFSET(0x15AE62D0)
#define CLASS_4_03B78BD0497439FC__CTOR_OFFSET UNITYSDK_OFFSET(0x15AE65B0)

inline static constexpr unsigned int Class_4_03B78BD0497439FC_TypeDefinitionIndex = 71169;

class Class_4_03B78BD0497439FC : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_B51FB35349ACD175<::MoleMole::EntityHandle>* Field_4_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_03B78BD0497439FC__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_03B78BD0497439FC_METHOD_4_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_4_F370E675AD59DD8F(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_4_03B78BD0497439FC_METHOD_4_F370E675AD59DD8F_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_03B78BD0497439FC_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}
};
