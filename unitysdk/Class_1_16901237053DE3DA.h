#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_D645B4E0B73852B6_5.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_799;
class Class_0_16E4307DCC419505_800;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_16901237053DE3DA_METHOD_1_0F6FD1F742C0BF62_OFFSET UNITYSDK_OFFSET(0x1A0E6050)
#define CLASS_1_16901237053DE3DA_METHOD_1_62FFA09507112A7C_OFFSET UNITYSDK_OFFSET(0x1A0E61C0)
#define CLASS_1_16901237053DE3DA__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0E5F90)

inline static constexpr unsigned int Class_1_16901237053DE3DA_TypeDefinitionIndex = 62906;

class Class_1_16901237053DE3DA : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::Struct_2_D645B4E0B73852B6_5, ::Class_0_16E4307DCC419505_799*>* BDBOGJHLEIG; // 0x10
	::Class_0_16E4307DCC419505_800* MGBPOBFFCHD; // 0x18

	::System::Void _ctor(::Class_0_16E4307DCC419505_800* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_800*))((::PBYTE)hIl2Cpp + CLASS_1_16901237053DE3DA__CTOR_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_799* Method_1_0F6FD1F742C0BF62(::Struct_2_D645B4E0B73852B6_5& a1)
	{
		return ((::Class_0_16E4307DCC419505_799*(*)(::PVOID, ::Struct_2_D645B4E0B73852B6_5&))((::PBYTE)hIl2Cpp + CLASS_1_16901237053DE3DA_METHOD_1_0F6FD1F742C0BF62_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_799* Method_1_62FFA09507112A7C(::Struct_2_D645B4E0B73852B6_5& a1)
	{
		return ((::Class_0_16E4307DCC419505_799*(*)(::PVOID, ::Struct_2_D645B4E0B73852B6_5&))((::PBYTE)hIl2Cpp + CLASS_1_16901237053DE3DA_METHOD_1_62FFA09507112A7C_OFFSET))(this, a1);
	}
};
