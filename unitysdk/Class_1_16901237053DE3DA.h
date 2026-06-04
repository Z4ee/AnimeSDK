#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_019938BC9C50B169_6.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_725;
class Class_0_16E4307DCC419505_726;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_16901237053DE3DA_METHOD_1_0F6FD1F742C0BF62_OFFSET UNITYSDK_OFFSET(0xC1DED60)
#define CLASS_1_16901237053DE3DA_METHOD_1_62FFA09507112A7C_OFFSET UNITYSDK_OFFSET(0xC1DEED0)
#define CLASS_1_16901237053DE3DA__CTOR_OFFSET UNITYSDK_OFFSET(0xC1DECA0)

inline static constexpr unsigned int Class_1_16901237053DE3DA_TypeDefinitionIndex = 58789;

class Class_1_16901237053DE3DA : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::Struct_2_019938BC9C50B169_6, ::Class_0_16E4307DCC419505_725*>* Field_1_0; // 0x10
	::Class_0_16E4307DCC419505_726* Field_1_1; // 0x18

	::System::Void _ctor(::Class_0_16E4307DCC419505_726* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_726*))((::PBYTE)hIl2Cpp + CLASS_1_16901237053DE3DA__CTOR_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_725* Method_1_0F6FD1F742C0BF62(::Struct_2_019938BC9C50B169_6& a1)
	{
		return ((::Class_0_16E4307DCC419505_725*(*)(::PVOID, ::Struct_2_019938BC9C50B169_6&))((::PBYTE)hIl2Cpp + CLASS_1_16901237053DE3DA_METHOD_1_0F6FD1F742C0BF62_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_725* Method_1_62FFA09507112A7C(::Struct_2_019938BC9C50B169_6& a1)
	{
		return ((::Class_0_16E4307DCC419505_725*(*)(::PVOID, ::Struct_2_019938BC9C50B169_6&))((::PBYTE)hIl2Cpp + CLASS_1_16901237053DE3DA_METHOD_1_62FFA09507112A7C_OFFSET))(this, a1);
	}
};
