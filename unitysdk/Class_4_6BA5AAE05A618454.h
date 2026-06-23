#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_4_F91115D9A1F02F5F;

#define CLASS_4_6BA5AAE05A618454_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x1336A810)
#define CLASS_4_6BA5AAE05A618454_METHOD_4_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x1336A080)
#define CLASS_4_6BA5AAE05A618454_METHOD_4_7A00E552FBB51A60_OFFSET UNITYSDK_OFFSET(0x1336A160)
#define CLASS_4_6BA5AAE05A618454__CTOR_OFFSET UNITYSDK_OFFSET(0x1336A720)

inline static constexpr unsigned int Class_4_6BA5AAE05A618454_TypeDefinitionIndex = 49513;

class Class_4_6BA5AAE05A618454 : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_F91115D9A1F02F5F<::MoleMole::EntityHandle>* Field_4_0; // 0x28
	::Class_4_F91115D9A1F02F5F<::System::Collections::Generic::List_1<::System::String*>*>* Field_4_1; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_6BA5AAE05A618454__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_6BA5AAE05A618454_METHOD_4_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_4_7A00E552FBB51A60(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_4_6BA5AAE05A618454_METHOD_4_7A00E552FBB51A60_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_6BA5AAE05A618454_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}
};
