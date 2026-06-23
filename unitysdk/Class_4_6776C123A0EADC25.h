#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/MoleMole/InLevelCustomPerformerRunnerEnvironment.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

class Class_4_425BBC3CBFD638A0_2;
namespace System { class String; }
template <typename T> class Class_4_B51FB35349ACD175;
template <typename T> class Class_4_F91115D9A1F02F5F;

#define CLASS_4_6776C123A0EADC25_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0xC941BB0)
#define CLASS_4_6776C123A0EADC25_METHOD_4_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0xC9415C0)
#define CLASS_4_6776C123A0EADC25_METHOD_4_7A00E552FBB51A60_OFFSET UNITYSDK_OFFSET(0xC941770)
#define CLASS_4_6776C123A0EADC25__CTOR_OFFSET UNITYSDK_OFFSET(0xC941A70)

inline static constexpr unsigned int Class_4_6776C123A0EADC25_TypeDefinitionIndex = 67034;

class Class_4_6776C123A0EADC25 : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_F91115D9A1F02F5F<::MoleMole::InLevelCustomPerformerRunnerEnvironment>* Field_4_2; // 0x28
	::Class_4_425BBC3CBFD638A0_2* Field_4_1; // 0x30
	::Class_4_F91115D9A1F02F5F<::System::String*>* Field_4_0; // 0x38
	::Class_4_B51FB35349ACD175<::MoleMole::InLevelCustomPerformerRunnerEnvironment>* Field_4_3; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_6776C123A0EADC25__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_6776C123A0EADC25_METHOD_4_41A074549EF25F63_OFFSET))(this);
	}

	::System::Void Method_4_7A00E552FBB51A60(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_4_6776C123A0EADC25_METHOD_4_7A00E552FBB51A60_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_6776C123A0EADC25_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}
};
