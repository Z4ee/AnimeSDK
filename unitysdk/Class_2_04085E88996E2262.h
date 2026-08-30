#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C334CFF1D200F9CE.h"

namespace System { class String; }

#define CLASS_2_04085E88996E2262_METHOD_2_5AFFCF6F18A4FE2B_OFFSET UNITYSDK_OFFSET(0x130BC580)
#define CLASS_2_04085E88996E2262_METHOD_2_F07840BBC25636A7_OFFSET UNITYSDK_OFFSET(0x130BC640)
#define CLASS_2_04085E88996E2262__CTOR_OFFSET UNITYSDK_OFFSET(0x130BC570)

inline static constexpr unsigned int Class_2_04085E88996E2262_TypeDefinitionIndex = 53845;

class Class_2_04085E88996E2262 : public ::Class_1_C334CFF1D200F9CE
{
public:
	::System::Single PGMIOKKLHIE; // 0x20

	::System::Void _ctor(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_04085E88996E2262__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_5AFFCF6F18A4FE2B(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_04085E88996E2262_METHOD_2_5AFFCF6F18A4FE2B_OFFSET))(this, a1);
	}

	::System::Void Method_2_F07840BBC25636A7(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_04085E88996E2262_METHOD_2_F07840BBC25636A7_OFFSET))(this, a1);
	}
};
