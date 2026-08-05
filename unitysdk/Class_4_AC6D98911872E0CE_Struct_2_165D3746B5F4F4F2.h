#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/TextureSheetType.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/ValueType.h"

class Class_0_16E4307DCC419505_599;
namespace MoleMole { class TextureSheetSkipFrameParam; }
namespace System { class String; }

#define CLASS_4_AC6D98911872E0CE_STRUCT_2_165D3746B5F4F4F2_METHOD_2_7EC95EBD0BDEF4C6_OFFSET UNITYSDK_OFFSET(0x45C240)
#define CLASS_4_AC6D98911872E0CE_STRUCT_2_165D3746B5F4F4F2_METHOD_2_C6DFF7E33D123993_OFFSET UNITYSDK_OFFSET(0x7BAEA0)
#define CLASS_4_AC6D98911872E0CE_STRUCT_2_165D3746B5F4F4F2__CTOR_OFFSET UNITYSDK_OFFSET(0x871E60)

inline static constexpr unsigned int Class_4_AC6D98911872E0CE_Struct_2_165D3746B5F4F4F2_TypeDefinitionIndex = 82796;

struct alignas(8) Class_4_AC6D98911872E0CE_Struct_2_165D3746B5F4F4F2
{
	::System::Int32 Field_2_0; // 0x10
	::System::String* Field_2_7; // 0x18
	::System::Boolean Field_2_6; // 0x20
	::MoleMole::TextureSheetType Field_2_5; // 0x24
	::System::Int32 Field_2_4; // 0x28
	::MoleMole::TextureSheetSkipFrameParam* Field_2_11; // 0x30
	::System::Int32 Field_2_10; // 0x38
	::Class_0_16E4307DCC419505_599* Field_2_9; // 0x40
	::System::Nullable_1<::System::Single> Field_2_8; // 0x48

	::System::Void _ctor(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_4_AC6D98911872E0CE_STRUCT_2_165D3746B5F4F4F2__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_C6DFF7E33D123993(::System::Nullable_1<::System::Single> a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Single>))((::PBYTE)hIl2Cpp + CLASS_4_AC6D98911872E0CE_STRUCT_2_165D3746B5F4F4F2_METHOD_2_C6DFF7E33D123993_OFFSET))(this, a1);
	}

	::System::Nullable_1<::System::Single> Method_2_7EC95EBD0BDEF4C6()
	{
		return ((::System::Nullable_1<::System::Single>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_AC6D98911872E0CE_STRUCT_2_165D3746B5F4F4F2_METHOD_2_7EC95EBD0BDEF4C6_OFFSET))(this);
	}
};
