#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_D645B4E0B73852B6_5.h"
#include "unitysdk/System/Object.h"

class Class_1_65EF9EC87B818BF3;
class Class_1_6869ECCA5B46F302_3;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_3E26D5D72F19C4DB_4_METHOD_1_4D5BEDC75B4151A4_OFFSET UNITYSDK_OFFSET(0x15966A10)
#define CLASS_1_3E26D5D72F19C4DB_4_METHOD_1_DDD01EA0C1E2DD26_OFFSET UNITYSDK_OFFSET(0x15966B80)
#define CLASS_1_3E26D5D72F19C4DB_4__CTOR_OFFSET UNITYSDK_OFFSET(0x15966950)

inline static constexpr unsigned int Class_1_3E26D5D72F19C4DB_4_TypeDefinitionIndex = 62934;

class Class_1_3E26D5D72F19C4DB_4 : public ::System::Object
{
public:
	::Class_1_6869ECCA5B46F302_3* CLADMNGJHEJ; // 0x10
	::System::Collections::Generic::Dictionary_2<::Struct_2_D645B4E0B73852B6_5, ::Class_1_65EF9EC87B818BF3*>* BDBOGJHLEIG; // 0x18

	::System::Void _ctor(::Class_1_6869ECCA5B46F302_3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6869ECCA5B46F302_3*))((::PBYTE)hIl2Cpp + CLASS_1_3E26D5D72F19C4DB_4__CTOR_OFFSET))(this, a1);
	}

	::Class_1_65EF9EC87B818BF3* Method_1_4D5BEDC75B4151A4(::Struct_2_D645B4E0B73852B6_5& a1)
	{
		return ((::Class_1_65EF9EC87B818BF3*(*)(::PVOID, ::Struct_2_D645B4E0B73852B6_5&))((::PBYTE)hIl2Cpp + CLASS_1_3E26D5D72F19C4DB_4_METHOD_1_4D5BEDC75B4151A4_OFFSET))(this, a1);
	}

	::Class_1_65EF9EC87B818BF3* Method_1_DDD01EA0C1E2DD26(::Struct_2_D645B4E0B73852B6_5& a1)
	{
		return ((::Class_1_65EF9EC87B818BF3*(*)(::PVOID, ::Struct_2_D645B4E0B73852B6_5&))((::PBYTE)hIl2Cpp + CLASS_1_3E26D5D72F19C4DB_4_METHOD_1_DDD01EA0C1E2DD26_OFFSET))(this, a1);
	}
};
