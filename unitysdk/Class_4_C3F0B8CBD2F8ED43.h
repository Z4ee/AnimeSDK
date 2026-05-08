#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

class Class_4_5B5E82918BC44D6E;
namespace System { class String; }
template <typename T> class Class_4_2FF7D360A2F3EC48;

#define CLASS_4_C3F0B8CBD2F8ED43_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x1533D9B0)
#define CLASS_4_C3F0B8CBD2F8ED43_METHOD_4_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x1533D5D0)
#define CLASS_4_C3F0B8CBD2F8ED43_METHOD_4_42AE4B7779F3CD9E_OFFSET UNITYSDK_OFFSET(0x1533D6B0)
#define CLASS_4_C3F0B8CBD2F8ED43__CTOR_OFFSET UNITYSDK_OFFSET(0x1533D900)

inline static constexpr unsigned int Class_4_C3F0B8CBD2F8ED43_TypeDefinitionIndex = 49195;

class Class_4_C3F0B8CBD2F8ED43 : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_5B5E82918BC44D6E* Field_4_1; // 0x28
	::Class_4_2FF7D360A2F3EC48<::System::String*>* Field_4_0; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_C3F0B8CBD2F8ED43__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_C3F0B8CBD2F8ED43_METHOD_4_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_4_42AE4B7779F3CD9E(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_4_C3F0B8CBD2F8ED43_METHOD_4_42AE4B7779F3CD9E_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_C3F0B8CBD2F8ED43_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}
};
