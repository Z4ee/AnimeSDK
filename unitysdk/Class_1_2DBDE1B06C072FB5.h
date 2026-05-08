#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_A47ACAABA9AAFE92.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_2DBDE1B06C072FB5_METHOD_1_2502C6C7BB219178_OFFSET UNITYSDK_OFFSET(0x104F75B0)
#define CLASS_1_2DBDE1B06C072FB5_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x104F7630)
#define CLASS_1_2DBDE1B06C072FB5_METHOD_1_D910F4D36FEA1766_OFFSET UNITYSDK_OFFSET(0x104F74B0)
#define CLASS_1_2DBDE1B06C072FB5__CTOR_OFFSET UNITYSDK_OFFSET(0x104F7460)

inline static constexpr unsigned int Class_1_2DBDE1B06C072FB5_TypeDefinitionIndex = 55370;

class Class_1_2DBDE1B06C072FB5 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_0 = 0x20; // 0x0
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Struct_2_A47ACAABA9AAFE92>* Field_1_1; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2DBDE1B06C072FB5__CTOR_OFFSET))(this);
	}

	::Struct_2_A47ACAABA9AAFE92 Method_1_D910F4D36FEA1766(::System::Int32 a1)
	{
		return ((::Struct_2_A47ACAABA9AAFE92(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_2DBDE1B06C072FB5_METHOD_1_D910F4D36FEA1766_OFFSET))(this, a1);
	}

	::System::Void Method_1_2502C6C7BB219178(::System::Int32 a1, ::Struct_2_A47ACAABA9AAFE92& a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Struct_2_A47ACAABA9AAFE92&))((::PBYTE)hIl2Cpp + CLASS_1_2DBDE1B06C072FB5_METHOD_1_2502C6C7BB219178_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2DBDE1B06C072FB5_METHOD_1_30D1209326FA87FC_OFFSET))(this);
	}
};
