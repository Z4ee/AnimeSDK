#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

template <typename T> class Class_4_F91115D9A1F02F5F;

#define CLASS_4_12FD80499BC1F30B_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0xFBF31F0)
#define CLASS_4_12FD80499BC1F30B_METHOD_4_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xFBF2FC0)
#define CLASS_4_12FD80499BC1F30B_METHOD_4_FCA7C739F8E5F729_OFFSET UNITYSDK_OFFSET(0xFBF3050)
#define CLASS_4_12FD80499BC1F30B__CTOR_OFFSET UNITYSDK_OFFSET(0xFBF3150)

inline static constexpr unsigned int Class_4_12FD80499BC1F30B_TypeDefinitionIndex = 45807;

class Class_4_12FD80499BC1F30B : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_F91115D9A1F02F5F<::MoleMole::EntityHandle>* Field_4_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_12FD80499BC1F30B__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_12FD80499BC1F30B_METHOD_4_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_4_FCA7C739F8E5F729(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_4_12FD80499BC1F30B_METHOD_4_FCA7C739F8E5F729_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_12FD80499BC1F30B_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}
};
