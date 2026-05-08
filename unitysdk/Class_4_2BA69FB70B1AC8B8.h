#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_4_2FF7D360A2F3EC48;

#define CLASS_4_2BA69FB70B1AC8B8_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x120AC250)
#define CLASS_4_2BA69FB70B1AC8B8_METHOD_4_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x120ABD90)
#define CLASS_4_2BA69FB70B1AC8B8_METHOD_4_A32C34C28EBFFA29_OFFSET UNITYSDK_OFFSET(0x120ABE70)
#define CLASS_4_2BA69FB70B1AC8B8__CTOR_OFFSET UNITYSDK_OFFSET(0x120AC160)

inline static constexpr unsigned int Class_4_2BA69FB70B1AC8B8_TypeDefinitionIndex = 46514;

class Class_4_2BA69FB70B1AC8B8 : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_2FF7D360A2F3EC48<::System::Boolean>* Field_4_1; // 0x28
	::Class_4_2FF7D360A2F3EC48<::System::Collections::Generic::List_1<::System::String*>*>* Field_4_0; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_2BA69FB70B1AC8B8__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_2BA69FB70B1AC8B8_METHOD_4_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_4_A32C34C28EBFFA29(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_4_2BA69FB70B1AC8B8_METHOD_4_A32C34C28EBFFA29_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_2BA69FB70B1AC8B8_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}
};
