#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_631700BC8A8FBE1D.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"
#include "unitysdk/Struct_2_E147DFD2A4EE8B0B.h"

class Class_1_01A26C1CBD4846A2;
class Class_1_8FBDD7D8E0EE0B49;
class Class_3_24D8B6D1AB5590E1;
namespace System::Collections { class IList; }

#define CLASS_4_425BBC3CBFD638A0_2_METHOD_4_14382E1EA2C39697_OFFSET UNITYSDK_OFFSET(0x10DCC920)
#define CLASS_4_425BBC3CBFD638A0_2_METHOD_4_A495A59559F5ED4D_OFFSET UNITYSDK_OFFSET(0x10DA9C70)
#define CLASS_4_425BBC3CBFD638A0_2__CTOR_OFFSET UNITYSDK_OFFSET(0x10DAA120)

inline static constexpr unsigned int Class_4_425BBC3CBFD638A0_2_TypeDefinitionIndex = 50846;

class Class_4_425BBC3CBFD638A0_2 : public ::Class_3_631700BC8A8FBE1D
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_425BBC3CBFD638A0_2__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_14382E1EA2C39697(::Struct_2_29439DBE2B63DCF3& a1, ::Struct_2_29439DBE2B63DCF3& a2, ::Class_3_24D8B6D1AB5590E1* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&, ::Struct_2_29439DBE2B63DCF3&, ::Class_3_24D8B6D1AB5590E1*))((::PBYTE)hIl2Cpp + CLASS_4_425BBC3CBFD638A0_2_METHOD_4_14382E1EA2C39697_OFFSET))(this, a1, a2, a3);
	}

	::System::Collections::IList* Method_4_A495A59559F5ED4D(::Struct_2_29439DBE2B63DCF3& a1, ::Struct_2_E147DFD2A4EE8B0B& a2)
	{
		return ((::System::Collections::IList*(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&, ::Struct_2_E147DFD2A4EE8B0B&))((::PBYTE)hIl2Cpp + CLASS_4_425BBC3CBFD638A0_2_METHOD_4_A495A59559F5ED4D_OFFSET))(this, a1, a2);
	}
};
