#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

namespace MoleMole { class BubbleGroupPlayGraphContent; }
namespace System { class String; }
template <typename T> class Class_4_F91115D9A1F02F5F;

#define CLASS_4_B499DEAB29FE2737_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x1606C3F0)
#define CLASS_4_B499DEAB29FE2737_METHOD_4_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x1606BA70)
#define CLASS_4_B499DEAB29FE2737_METHOD_4_D36F1AC51FF9E63B_OFFSET UNITYSDK_OFFSET(0x1606BB50)
#define CLASS_4_B499DEAB29FE2737__CTOR_OFFSET UNITYSDK_OFFSET(0x1606C300)

inline static constexpr unsigned int Class_4_B499DEAB29FE2737_TypeDefinitionIndex = 49357;

class Class_4_B499DEAB29FE2737 : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_F91115D9A1F02F5F<::System::String*>* Field_4_0; // 0x28
	::Class_4_F91115D9A1F02F5F<::MoleMole::BubbleGroupPlayGraphContent*>* Field_4_1; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_B499DEAB29FE2737__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_B499DEAB29FE2737_METHOD_4_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_4_D36F1AC51FF9E63B(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_4_B499DEAB29FE2737_METHOD_4_D36F1AC51FF9E63B_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_B499DEAB29FE2737_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}
};
