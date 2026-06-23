#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_4_B51FB35349ACD175;
template <typename T> class Class_4_F91115D9A1F02F5F;

#define CLASS_4_2844C479AAC2E390_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x11769330)
#define CLASS_4_2844C479AAC2E390_METHOD_4_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x11768E00)
#define CLASS_4_2844C479AAC2E390_METHOD_4_652514A15DC5E0CD_OFFSET UNITYSDK_OFFSET(0x11768FB0)
#define CLASS_4_2844C479AAC2E390__CTOR_OFFSET UNITYSDK_OFFSET(0x117691D0)

inline static constexpr unsigned int Class_4_2844C479AAC2E390_TypeDefinitionIndex = 77529;

class Class_4_2844C479AAC2E390 : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_F91115D9A1F02F5F<::System::Int32>* Field_4_2; // 0x28
	::Class_4_B51FB35349ACD175<::System::Boolean>* Field_4_3; // 0x30
	::Class_4_F91115D9A1F02F5F<::System::Collections::Generic::List_1<::System::String*>*>* Field_4_1; // 0x38
	::Class_4_F91115D9A1F02F5F<::MoleMole::EntityHandle>* Field_4_0; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_2844C479AAC2E390__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_2844C479AAC2E390_METHOD_4_41A074549EF25F63_OFFSET))(this);
	}

	::System::Void Method_4_652514A15DC5E0CD(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_4_2844C479AAC2E390_METHOD_4_652514A15DC5E0CD_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_2844C479AAC2E390_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}
};
