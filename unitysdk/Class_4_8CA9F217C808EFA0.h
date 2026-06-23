#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_4_F91115D9A1F02F5F;

#define CLASS_4_8CA9F217C808EFA0_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x1357D660)
#define CLASS_4_8CA9F217C808EFA0_METHOD_4_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x1357C6D0)
#define CLASS_4_8CA9F217C808EFA0_METHOD_4_B03854BB27F7E9FC_OFFSET UNITYSDK_OFFSET(0x1357CA50)
#define CLASS_4_8CA9F217C808EFA0_METHOD_4_BA45C85D2944586C_OFFSET UNITYSDK_OFFSET(0x1357C760)
#define CLASS_4_8CA9F217C808EFA0__CTOR_OFFSET UNITYSDK_OFFSET(0x1357D5C0)

inline static constexpr unsigned int Class_4_8CA9F217C808EFA0_TypeDefinitionIndex = 84187;

class Class_4_8CA9F217C808EFA0 : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_F91115D9A1F02F5F<::System::Collections::Generic::List_1<::Foundation::ViewObject::ViewObjectHandle>*>* Field_4_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_8CA9F217C808EFA0__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_8CA9F217C808EFA0_METHOD_4_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_4_BA45C85D2944586C(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_4_8CA9F217C808EFA0_METHOD_4_BA45C85D2944586C_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_8CA9F217C808EFA0_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}

	static ::System::Void Method_4_B03854BB27F7E9FC(::MoleMole::EntityHandle a1)
	{
		return ((::System::Void(*)(::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + CLASS_4_8CA9F217C808EFA0_METHOD_4_B03854BB27F7E9FC_OFFSET))(a1);
	}
};
