#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_631700BC8A8FBE1D.h"
#include "unitysdk/Struct_2_174BD6D3EB04B2EE.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

class Class_1_01A26C1CBD4846A2;
class Class_1_8FBDD7D8E0EE0B49;
class Class_3_24D8B6D1AB5590E1;
namespace System::Collections { class IList; }

#define CLASS_4_425BBC3CBFD638A0_1_METHOD_4_14382E1EA2C39697_OFFSET UNITYSDK_OFFSET(0x1098B9F0)
#define CLASS_4_425BBC3CBFD638A0_1_METHOD_4_A495A59559F5ED4D_OFFSET UNITYSDK_OFFSET(0x1098BAA0)
#define CLASS_4_425BBC3CBFD638A0_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1098BA90)

inline static constexpr unsigned int Class_4_425BBC3CBFD638A0_1_TypeDefinitionIndex = 81171;

class Class_4_425BBC3CBFD638A0_1 : public ::Class_3_631700BC8A8FBE1D
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_425BBC3CBFD638A0_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_14382E1EA2C39697(::Struct_2_29439DBE2B63DCF3& a1, ::Struct_2_29439DBE2B63DCF3& a2, ::Class_3_24D8B6D1AB5590E1* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&, ::Struct_2_29439DBE2B63DCF3&, ::Class_3_24D8B6D1AB5590E1*))((::PBYTE)hIl2Cpp + CLASS_4_425BBC3CBFD638A0_1_METHOD_4_14382E1EA2C39697_OFFSET))(this, a1, a2, a3);
	}

	::System::Collections::IList* Method_4_A495A59559F5ED4D(::Struct_2_29439DBE2B63DCF3& a1, ::Struct_2_174BD6D3EB04B2EE& a2)
	{
		return ((::System::Collections::IList*(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&, ::Struct_2_174BD6D3EB04B2EE&))((::PBYTE)hIl2Cpp + CLASS_4_425BBC3CBFD638A0_1_METHOD_4_A495A59559F5ED4D_OFFSET))(this, a1, a2);
	}
};
