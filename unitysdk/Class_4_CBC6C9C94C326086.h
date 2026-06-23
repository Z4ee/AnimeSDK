#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

class Class_3_CF43FA1E89397A1C;
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_4_F91115D9A1F02F5F;

#define CLASS_4_CBC6C9C94C326086_METHOD_4_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x11E856D0)
#define CLASS_4_CBC6C9C94C326086_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x11E85DD0)
#define CLASS_4_CBC6C9C94C326086_METHOD_4_729CCA2968BE806F_OFFSET UNITYSDK_OFFSET(0x11E85820)
#define CLASS_4_CBC6C9C94C326086__CTOR_OFFSET UNITYSDK_OFFSET(0x11E85C40)

inline static constexpr unsigned int Class_4_CBC6C9C94C326086_TypeDefinitionIndex = 41691;

class Class_4_CBC6C9C94C326086 : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_F91115D9A1F02F5F<::System::Collections::Generic::List_1<::System::Int32>*>* Field_4_0; // 0x28
	::Class_3_CF43FA1E89397A1C* Field_4_2; // 0x30
	::Class_3_CF43FA1E89397A1C* Field_4_1; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_CBC6C9C94C326086__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_CBC6C9C94C326086_METHOD_4_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_4_729CCA2968BE806F(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_4_CBC6C9C94C326086_METHOD_4_729CCA2968BE806F_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_CBC6C9C94C326086_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}
};
