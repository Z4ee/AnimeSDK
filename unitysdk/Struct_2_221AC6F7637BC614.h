#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_8DC301C6C91BF83F.h"
#include "unitysdk/Struct_2_97F90E6FB4F6D559.h"
#include "unitysdk/System/ValueType.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define STRUCT_2_221AC6F7637BC614_METHOD_2_021AE0D0A2AA70A4_OFFSET UNITYSDK_OFFSET(0x75A020)
#define STRUCT_2_221AC6F7637BC614_METHOD_2_ADF4AD3331B4D7AD_OFFSET UNITYSDK_OFFSET(0x759FD0)
#define STRUCT_2_221AC6F7637BC614_METHOD_2_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x2E87C0)
#define STRUCT_2_221AC6F7637BC614_METHOD_2_F3BC99EBA2904CDA_OFFSET UNITYSDK_OFFSET(0x759F30)
#define STRUCT_2_221AC6F7637BC614__CTOR_OFFSET UNITYSDK_OFFSET(0x759F20)

inline static constexpr unsigned int Struct_2_221AC6F7637BC614_TypeDefinitionIndex = 63455;

struct alignas(8) Struct_2_221AC6F7637BC614
{
	::System::Int32 Field_2_0; // 0x10
	::System::Collections::Generic::List_1<::Struct_2_97F90E6FB4F6D559>* Field_2_1; // 0x18

	::System::Void _ctor(::System::Collections::Generic::List_1<::Struct_2_97F90E6FB4F6D559>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Struct_2_97F90E6FB4F6D559>*))((::PBYTE)hIl2Cpp + STRUCT_2_221AC6F7637BC614__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_F3BC99EBA2904CDA(::Enum_3_8DC301C6C91BF83F a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_8DC301C6C91BF83F, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_221AC6F7637BC614_METHOD_2_F3BC99EBA2904CDA_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Int32 Method_2_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_221AC6F7637BC614_METHOD_2_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Void Method_2_ADF4AD3331B4D7AD(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_221AC6F7637BC614_METHOD_2_ADF4AD3331B4D7AD_OFFSET))(this, a1);
	}

	::System::UInt16 Method_2_021AE0D0A2AA70A4(::System::UInt16 a1)
	{
		return ((::System::UInt16(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + STRUCT_2_221AC6F7637BC614_METHOD_2_021AE0D0A2AA70A4_OFFSET))(this, a1);
	}
};
