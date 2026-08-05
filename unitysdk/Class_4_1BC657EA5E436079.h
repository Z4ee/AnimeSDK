#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

template <typename T> class Class_4_2FF7D360A2F3EC48;

#define CLASS_4_1BC657EA5E436079_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x15B91620)
#define CLASS_4_1BC657EA5E436079_METHOD_4_8795D3CE29993C8B_OFFSET UNITYSDK_OFFSET(0x15B91390)
#define CLASS_4_1BC657EA5E436079_METHOD_4_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x15B91300)
#define CLASS_4_1BC657EA5E436079__CTOR_OFFSET UNITYSDK_OFFSET(0x15B91580)

inline static constexpr unsigned int Class_4_1BC657EA5E436079_TypeDefinitionIndex = 79160;

class Class_4_1BC657EA5E436079 : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_2FF7D360A2F3EC48<::MoleMole::EntityHandle>* Field_4_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_1BC657EA5E436079__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_1BC657EA5E436079_METHOD_4_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_4_8795D3CE29993C8B(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_4_1BC657EA5E436079_METHOD_4_8795D3CE29993C8B_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_1BC657EA5E436079_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}
};
