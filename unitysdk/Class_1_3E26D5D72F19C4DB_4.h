#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_019938BC9C50B169_6.h"
#include "unitysdk/System/Object.h"

class Class_1_61097837E1D530F4;
class Class_1_6869ECCA5B46F302_3;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_3E26D5D72F19C4DB_4_METHOD_1_4D5BEDC75B4151A4_OFFSET UNITYSDK_OFFSET(0x13976C30)
#define CLASS_1_3E26D5D72F19C4DB_4_METHOD_1_DDD01EA0C1E2DD26_OFFSET UNITYSDK_OFFSET(0x13976DA0)
#define CLASS_1_3E26D5D72F19C4DB_4__CTOR_OFFSET UNITYSDK_OFFSET(0x13976B70)

inline static constexpr unsigned int Class_1_3E26D5D72F19C4DB_4_TypeDefinitionIndex = 58817;

class Class_1_3E26D5D72F19C4DB_4 : public ::System::Object
{
public:
	::Class_1_6869ECCA5B46F302_3* Field_1_0; // 0x10
	::System::Collections::Generic::Dictionary_2<::Struct_2_019938BC9C50B169_6, ::Class_1_61097837E1D530F4*>* Field_1_1; // 0x18

	::System::Void _ctor(::Class_1_6869ECCA5B46F302_3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6869ECCA5B46F302_3*))((::PBYTE)hIl2Cpp + CLASS_1_3E26D5D72F19C4DB_4__CTOR_OFFSET))(this, a1);
	}

	::Class_1_61097837E1D530F4* Method_1_4D5BEDC75B4151A4(::Struct_2_019938BC9C50B169_6& a1)
	{
		return ((::Class_1_61097837E1D530F4*(*)(::PVOID, ::Struct_2_019938BC9C50B169_6&))((::PBYTE)hIl2Cpp + CLASS_1_3E26D5D72F19C4DB_4_METHOD_1_4D5BEDC75B4151A4_OFFSET))(this, a1);
	}

	::Class_1_61097837E1D530F4* Method_1_DDD01EA0C1E2DD26(::Struct_2_019938BC9C50B169_6& a1)
	{
		return ((::Class_1_61097837E1D530F4*(*)(::PVOID, ::Struct_2_019938BC9C50B169_6&))((::PBYTE)hIl2Cpp + CLASS_1_3E26D5D72F19C4DB_4_METHOD_1_DDD01EA0C1E2DD26_OFFSET))(this, a1);
	}
};
