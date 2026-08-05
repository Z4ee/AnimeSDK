#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_02EF86795D3EB47B.h"
#include "unitysdk/System/Object.h"

class Class_1_F12BC47CCA0DE65F;
namespace System { template <typename T> class Predicate_1; }

#define CLASS_2_B409DBFA8836BCDE_CLASS_1_1B53996866701A58_METHOD_1_38F1B0E000BF87F1_OFFSET UNITYSDK_OFFSET(0xF1043F0)
#define CLASS_2_B409DBFA8836BCDE_CLASS_1_1B53996866701A58_METHOD_1_53FADCED337E5C9E_OFFSET UNITYSDK_OFFSET(0xF1043C0)
#define CLASS_2_B409DBFA8836BCDE_CLASS_1_1B53996866701A58__CTOR_OFFSET UNITYSDK_OFFSET(0xF1043B0)

inline static constexpr unsigned int Class_2_B409DBFA8836BCDE_Class_1_1B53996866701A58_TypeDefinitionIndex = 75208;

class Class_2_B409DBFA8836BCDE_Class_1_1B53996866701A58 : public ::System::Object
{
public:
	::System::Predicate_1<::Struct_2_02EF86795D3EB47B>* Field_1_1; // 0x10
	::Class_1_F12BC47CCA0DE65F* Field_1_2; // 0x18
	::System::Predicate_1<::Struct_2_02EF86795D3EB47B>* Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B409DBFA8836BCDE_CLASS_1_1B53996866701A58__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_53FADCED337E5C9E(::Struct_2_02EF86795D3EB47B a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_02EF86795D3EB47B))((::PBYTE)hIl2Cpp + CLASS_2_B409DBFA8836BCDE_CLASS_1_1B53996866701A58_METHOD_1_53FADCED337E5C9E_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_38F1B0E000BF87F1(::Struct_2_02EF86795D3EB47B a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_02EF86795D3EB47B))((::PBYTE)hIl2Cpp + CLASS_2_B409DBFA8836BCDE_CLASS_1_1B53996866701A58_METHOD_1_38F1B0E000BF87F1_OFFSET))(this, a1);
	}
};
