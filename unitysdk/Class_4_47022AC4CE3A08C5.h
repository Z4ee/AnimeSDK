#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

template <typename T> class Class_4_F91115D9A1F02F5F;

#define CLASS_4_47022AC4CE3A08C5_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x117792D0)
#define CLASS_4_47022AC4CE3A08C5_METHOD_4_751B1703A5F2D6A6_OFFSET UNITYSDK_OFFSET(0x11777F60)
#define CLASS_4_47022AC4CE3A08C5_METHOD_4_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x11777ED0)
#define CLASS_4_47022AC4CE3A08C5_METHOD_4_B03854BB27F7E9FC_OFFSET UNITYSDK_OFFSET(0x117786C0)
#define CLASS_4_47022AC4CE3A08C5__CTOR_OFFSET UNITYSDK_OFFSET(0x11779230)

inline static constexpr unsigned int Class_4_47022AC4CE3A08C5_TypeDefinitionIndex = 68915;

class Class_4_47022AC4CE3A08C5 : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_F91115D9A1F02F5F<::System::Boolean>* Field_4_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_47022AC4CE3A08C5__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_47022AC4CE3A08C5_METHOD_4_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_4_751B1703A5F2D6A6(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_4_47022AC4CE3A08C5_METHOD_4_751B1703A5F2D6A6_OFFSET))(this, a1);
	}

	static ::System::Void Method_4_B03854BB27F7E9FC(::MoleMole::EntityHandle a1)
	{
		return ((::System::Void(*)(::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + CLASS_4_47022AC4CE3A08C5_METHOD_4_B03854BB27F7E9FC_OFFSET))(a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_47022AC4CE3A08C5_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}
};
