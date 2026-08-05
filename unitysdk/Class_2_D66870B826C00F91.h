#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_78.h"

class Class_2_7508BE2A53D69303;
class Class_3_0D78EA91F90092C6;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_D66870B826C00F91_METHOD_2_4A828BF29C56A5B8_OFFSET UNITYSDK_OFFSET(0x14DD50E0)
#define CLASS_2_D66870B826C00F91_METHOD_2_86BE8F724F18E05B_OFFSET UNITYSDK_OFFSET(0x14DD4D80)
#define CLASS_2_D66870B826C00F91__CTOR_OFFSET UNITYSDK_OFFSET(0x14DD5340)

inline static constexpr unsigned int Class_2_D66870B826C00F91_TypeDefinitionIndex = 73432;

class Class_2_D66870B826C00F91 : public ::Class_1_43BD383C98B4C0C5_78
{
public:
	::System::Collections::Generic::Dictionary_2<::Class_3_0D78EA91F90092C6*, ::Class_2_7508BE2A53D69303*>* Field_2_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D66870B826C00F91__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_86BE8F724F18E05B(::Class_3_0D78EA91F90092C6* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_0D78EA91F90092C6*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_D66870B826C00F91_METHOD_2_86BE8F724F18E05B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_4A828BF29C56A5B8(::Class_3_0D78EA91F90092C6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_0D78EA91F90092C6*))((::PBYTE)hIl2Cpp + CLASS_2_D66870B826C00F91_METHOD_2_4A828BF29C56A5B8_OFFSET))(this, a1);
	}
};
