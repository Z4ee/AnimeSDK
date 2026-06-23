#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_20524E1B140AC181.h"
#include "unitysdk/Struct_2_28E2D68EF264D80E.h"
#include "unitysdk/Struct_2_3A7FF3B65F3D3C52.h"
#include "unitysdk/Struct_2_40104C4E149E5544.h"
#include "unitysdk/Struct_2_543941C333C5A7A7.h"
#include "unitysdk/Struct_2_6E84059A56082F8E.h"
#include "unitysdk/Struct_2_6E84059A56082F8E_1.h"
#include "unitysdk/Struct_2_884D1F4F7FF83019.h"
#include "unitysdk/Struct_2_884D1F4F7FF83019_1.h"
#include "unitysdk/Struct_2_EADB70559B2B5513_1.h"
#include "unitysdk/Struct_2_EADB70559B2B5513_2.h"
#include "unitysdk/Struct_2_EADB70559B2B5513_3.h"
#include "unitysdk/System/ValueType.h"

template <typename T> class Class_1_83FB69413114C146;

#define STRUCT_2_C45849FBFBFEF213_DISPOSE_OFFSET UNITYSDK_OFFSET(0x91C370)
#define STRUCT_2_C45849FBFBFEF213_METHOD_2_6AA5B6B083414777_OFFSET UNITYSDK_OFFSET(0x1B7089A0)

inline static constexpr unsigned int Struct_2_C45849FBFBFEF213_TypeDefinitionIndex = 88304;

struct alignas(8) Struct_2_C45849FBFBFEF213
{
	::Class_1_83FB69413114C146<::Struct_2_EADB70559B2B5513_1>* Field_2_0; // 0x10
	::Class_1_83FB69413114C146<::Struct_2_6E84059A56082F8E_1>* Field_2_1; // 0x18
	::Class_1_83FB69413114C146<::Struct_2_28E2D68EF264D80E>* Field_2_2; // 0x20
	::Class_1_83FB69413114C146<::Struct_2_6E84059A56082F8E>* Field_2_3; // 0x28
	::Class_1_83FB69413114C146<::Struct_2_40104C4E149E5544>* Field_2_4; // 0x30
	::Class_1_83FB69413114C146<::Struct_2_3A7FF3B65F3D3C52>* Field_2_5; // 0x38
	::Class_1_83FB69413114C146<::Struct_2_EADB70559B2B5513_2>* Field_2_6; // 0x40
	::Class_1_83FB69413114C146<::Struct_2_EADB70559B2B5513_3>* Field_2_7; // 0x48
	::Class_1_83FB69413114C146<::Struct_2_543941C333C5A7A7>* Field_2_8; // 0x50
	::Class_1_83FB69413114C146<::Struct_2_884D1F4F7FF83019_1>* Field_2_9; // 0x58
	::Class_1_83FB69413114C146<::Struct_2_884D1F4F7FF83019>* Field_2_10; // 0x60
	::Class_1_83FB69413114C146<::Struct_2_20524E1B140AC181>* Field_2_11; // 0x68

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_C45849FBFBFEF213_DISPOSE_OFFSET))(this);
	}

	static ::Struct_2_C45849FBFBFEF213 Method_2_6AA5B6B083414777(::System::Int32 a1)
	{
		return ((::Struct_2_C45849FBFBFEF213(*)(::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_C45849FBFBFEF213_METHOD_2_6AA5B6B083414777_OFFSET))(a1);
	}
};
