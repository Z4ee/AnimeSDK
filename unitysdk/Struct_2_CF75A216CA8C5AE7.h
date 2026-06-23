#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DAFCB1AA7EAADD66.h"
#include "unitysdk/Foundation/ViewObject/GroupMemberIdentifier.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define STRUCT_2_CF75A216CA8C5AE7_METHOD_2_A3FAE12D7B6ACD62_OFFSET UNITYSDK_OFFSET(0x7D0FE0)
#define STRUCT_2_CF75A216CA8C5AE7__CTOR_OFFSET UNITYSDK_OFFSET(0x7D0F70)

inline static constexpr unsigned int Struct_2_CF75A216CA8C5AE7_TypeDefinitionIndex = 70140;

struct alignas(8) Struct_2_CF75A216CA8C5AE7
{
	::System::Int32 Field_2_0; // 0x10
	::Foundation::ViewObject::GroupMemberIdentifier Field_2_1; // 0x14
	::System::String* Field_2_2; // 0x20
	::System::Int32 Field_2_3; // 0x28
	::System::Int32 Field_2_4; // 0x2C
	::Enum_3_DAFCB1AA7EAADD66 Field_2_5; // 0x30
	::System::Boolean Field_2_6; // 0x34
	::System::Single Field_2_7; // 0x38
	::System::Boolean Field_2_8; // 0x3C
	::System::Boolean Field_2_9; // 0x3D
	::System::Int32 Field_2_10; // 0x40
	::System::String* Field_2_11; // 0x48

	::System::Void _ctor(::System::Int32 a1, ::Foundation::ViewObject::GroupMemberIdentifier a2, ::System::Int32 a3, ::System::Int32 a4, ::System::String* a5, ::Enum_3_DAFCB1AA7EAADD66 a6, ::System::Boolean a7, ::System::Single a8, ::System::Boolean a9, ::System::Boolean a10, ::System::Int32 a11, ::System::String* a12)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Foundation::ViewObject::GroupMemberIdentifier, ::System::Int32, ::System::Int32, ::System::String*, ::Enum_3_DAFCB1AA7EAADD66, ::System::Boolean, ::System::Single, ::System::Boolean, ::System::Boolean, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + STRUCT_2_CF75A216CA8C5AE7__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
	}

	::System::Boolean Method_2_A3FAE12D7B6ACD62()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_CF75A216CA8C5AE7_METHOD_2_A3FAE12D7B6ACD62_OFFSET))(this);
	}
};
