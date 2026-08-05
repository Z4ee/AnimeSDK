#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_178572AA7B5DCE11.h"
#include "unitysdk/Enum_3_3855198EDB5CF06A_2.h"
#include "unitysdk/Enum_3_84EF80B5EAF22C03.h"
#include "unitysdk/Enum_3_DAFCB1AA7EAADD66.h"
#include "unitysdk/Foundation/ViewObject/GroupMemberIdentifier.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define STRUCT_2_54020DF043CED641_METHOD_2_391A84BCD9F51317_1_OFFSET UNITYSDK_OFFSET(0x870410)
#define STRUCT_2_54020DF043CED641_METHOD_2_391A84BCD9F51317_2_OFFSET UNITYSDK_OFFSET(0x8704C0)
#define STRUCT_2_54020DF043CED641_METHOD_2_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x8703C0)
#define STRUCT_2_54020DF043CED641_METHOD_2_A3FAE12D7B6ACD62_OFFSET UNITYSDK_OFFSET(0x870460)
#define STRUCT_2_54020DF043CED641__CTOR_OFFSET UNITYSDK_OFFSET(0x870340)

inline static constexpr unsigned int Struct_2_54020DF043CED641_TypeDefinitionIndex = 90022;

struct alignas(8) Struct_2_54020DF043CED641
{
	::System::Int32 Field_2_2; // 0x10
	::Foundation::ViewObject::GroupMemberIdentifier Field_2_1; // 0x14
	::System::String* Field_2_0; // 0x20
	::System::Int32 Field_2_7; // 0x28
	::System::Int32 Field_2_6; // 0x2C
	::Enum_3_DAFCB1AA7EAADD66 Field_2_5; // 0x30
	::System::Boolean Field_2_4; // 0x34
	::System::Single Field_2_11; // 0x38
	::Enum_3_3855198EDB5CF06A_2 Field_2_10; // 0x3C
	::Enum_3_178572AA7B5DCE11 Field_2_9; // 0x40
	::System::Int32 Field_2_8; // 0x44
	::System::String* Field_2_15; // 0x48
	::Enum_3_84EF80B5EAF22C03 Field_2_14; // 0x50

	::System::Void _ctor(::System::Int32 a1, ::Foundation::ViewObject::GroupMemberIdentifier a2, ::System::Int32 a3, ::System::Int32 a4, ::System::String* a5, ::Enum_3_DAFCB1AA7EAADD66 a6, ::System::Boolean a7, ::System::Single a8, ::Enum_3_3855198EDB5CF06A_2 a9, ::Enum_3_178572AA7B5DCE11 a10, ::System::Int32 a11, ::System::String* a12, ::Enum_3_84EF80B5EAF22C03 a13)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Foundation::ViewObject::GroupMemberIdentifier, ::System::Int32, ::System::Int32, ::System::String*, ::Enum_3_DAFCB1AA7EAADD66, ::System::Boolean, ::System::Single, ::Enum_3_3855198EDB5CF06A_2, ::Enum_3_178572AA7B5DCE11, ::System::Int32, ::System::String*, ::Enum_3_84EF80B5EAF22C03))((::PBYTE)hIl2Cpp + STRUCT_2_54020DF043CED641__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13);
	}

	::System::Boolean Method_2_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_54020DF043CED641_METHOD_2_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Boolean Method_2_391A84BCD9F51317_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_54020DF043CED641_METHOD_2_391A84BCD9F51317_1_OFFSET))(this);
	}

	::System::Boolean Method_2_A3FAE12D7B6ACD62()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_54020DF043CED641_METHOD_2_A3FAE12D7B6ACD62_OFFSET))(this);
	}

	::System::Boolean Method_2_391A84BCD9F51317_2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_54020DF043CED641_METHOD_2_391A84BCD9F51317_2_OFFSET))(this);
	}
};
