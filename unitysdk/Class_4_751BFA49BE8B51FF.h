#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/NPCCrowd/Ability/EMontageEndBehavior.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

class Class_1_E4DCFD174698F990;
template <typename T> class Class_4_F91115D9A1F02F5F;

#define CLASS_4_751BFA49BE8B51FF_METHOD_4_0FD0EC313FAAB75A_OFFSET UNITYSDK_OFFSET(0x17005530)
#define CLASS_4_751BFA49BE8B51FF_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x170060A0)
#define CLASS_4_751BFA49BE8B51FF_METHOD_4_A1FD9D0D444C792B_OFFSET UNITYSDK_OFFSET(0x17005350)
#define CLASS_4_751BFA49BE8B51FF_METHOD_4_A93516BEA542C51D_OFFSET UNITYSDK_OFFSET(0x17005E60)
#define CLASS_4_751BFA49BE8B51FF_METHOD_4_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0x170060B0)
#define CLASS_4_751BFA49BE8B51FF_METHOD_4_FB81EBE81ABB70A0_OFFSET UNITYSDK_OFFSET(0x170057A0)
#define CLASS_4_751BFA49BE8B51FF__CTOR_OFFSET UNITYSDK_OFFSET(0x17005EC0)

inline static constexpr unsigned int Class_4_751BFA49BE8B51FF_TypeDefinitionIndex = 83661;

class Class_4_751BFA49BE8B51FF : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_F91115D9A1F02F5F<::System::Boolean>* Field_4_2; // 0x28
	::Class_4_F91115D9A1F02F5F<::System::Int32>* Field_4_4; // 0x30
	::Class_4_F91115D9A1F02F5F<::MoleMole::EntityHandle>* Field_4_0; // 0x38
	::Class_4_F91115D9A1F02F5F<::System::Boolean>* Field_4_3; // 0x40
	::Class_4_F91115D9A1F02F5F<::System::Int32>* Field_4_1; // 0x48
	::Class_4_F91115D9A1F02F5F<::System::Int32>* Field_4_5; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_751BFA49BE8B51FF__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_A1FD9D0D444C792B(::Class_1_E4DCFD174698F990* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E4DCFD174698F990*))((::PBYTE)hIl2Cpp + CLASS_4_751BFA49BE8B51FF_METHOD_4_A1FD9D0D444C792B_OFFSET))(this, a1);
	}

	::System::Void Method_4_0FD0EC313FAAB75A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_751BFA49BE8B51FF_METHOD_4_0FD0EC313FAAB75A_OFFSET))(this);
	}

	::System::Void Method_4_FB81EBE81ABB70A0(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_4_751BFA49BE8B51FF_METHOD_4_FB81EBE81ABB70A0_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_751BFA49BE8B51FF_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}

	::System::Void Method_4_E9A575D18A0748D9(::Class_1_E4DCFD174698F990* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E4DCFD174698F990*))((::PBYTE)hIl2Cpp + CLASS_4_751BFA49BE8B51FF_METHOD_4_E9A575D18A0748D9_OFFSET))(this, a1);
	}

	static ::NPCCrowd::Ability::EMontageEndBehavior Method_4_A93516BEA542C51D(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::NPCCrowd::Ability::EMontageEndBehavior(*)(::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_4_751BFA49BE8B51FF_METHOD_4_A93516BEA542C51D_OFFSET))(a1, a2);
	}
};
