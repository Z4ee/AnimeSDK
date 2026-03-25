#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BC389B37BA981479_Enum_3_82A7959B7D4CD9A7.h"
#include "unitysdk/Enum_3_63BCB6C405BA8A1D_1.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_700;
class Class_0_16E4307DCC419505_701;
class Class_1_BC389B37BA981479;
class Class_3_E5512583829E22AE;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_A6B8F408D493727C_METHOD_1_24A3A6A415892EF6_OFFSET UNITYSDK_OFFSET(0x9ED3F00)
#define CLASS_1_A6B8F408D493727C_METHOD_1_79E06619EB5BCD2A_OFFSET UNITYSDK_OFFSET(0x9ED4080)
#define CLASS_1_A6B8F408D493727C__CTOR_OFFSET UNITYSDK_OFFSET(0x9ED3E80)

inline static constexpr unsigned int Class_1_A6B8F408D493727C_TypeDefinitionIndex = 54630;

class Class_1_A6B8F408D493727C : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::Class_1_BC389B37BA981479_Enum_3_82A7959B7D4CD9A7, ::Class_3_E5512583829E22AE*>* Field_1_1; // 0x10
	::Class_0_16E4307DCC419505_701* Field_1_0; // 0x18

	::System::Void _ctor(::Class_0_16E4307DCC419505_701* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_701*))((::PBYTE)hIl2Cpp + CLASS_1_A6B8F408D493727C__CTOR_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_700* Method_1_24A3A6A415892EF6(::Enum_3_63BCB6C405BA8A1D_1 a1, ::Class_1_BC389B37BA981479* a2)
	{
		return ((::Class_0_16E4307DCC419505_700*(*)(::PVOID, ::Enum_3_63BCB6C405BA8A1D_1, ::Class_1_BC389B37BA981479*))((::PBYTE)hIl2Cpp + CLASS_1_A6B8F408D493727C_METHOD_1_24A3A6A415892EF6_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_79E06619EB5BCD2A(::Class_1_BC389B37BA981479_Enum_3_82A7959B7D4CD9A7 a1, ::Class_3_E5512583829E22AE* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_BC389B37BA981479_Enum_3_82A7959B7D4CD9A7, ::Class_3_E5512583829E22AE*))((::PBYTE)hIl2Cpp + CLASS_1_A6B8F408D493727C_METHOD_1_79E06619EB5BCD2A_OFFSET))(this, a1, a2);
	}
};
