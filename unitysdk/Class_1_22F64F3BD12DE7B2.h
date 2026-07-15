#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_1_22F64F3BD12DE7B2_METHOD_1_B6625D5E21D5F348_OFFSET UNITYSDK_OFFSET(0x1B564070)
#define CLASS_1_22F64F3BD12DE7B2__CTOR_OFFSET UNITYSDK_OFFSET(0x1B564260)

inline static constexpr unsigned int Class_1_22F64F3BD12DE7B2_TypeDefinitionIndex = 11154;

class Class_1_22F64F3BD12DE7B2 : public ::System::Object
{
public:
	::RPG::Client::TextID Field_1_0; // 0x10
	::RPG::Client::TextID Field_1_1; // 0x20
	::System::UInt32 Field_1_2; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_22F64F3BD12DE7B2__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_B6625D5E21D5F348(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_22F64F3BD12DE7B2*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_22F64F3BD12DE7B2*&))((::PBYTE)hIl2Cpp + CLASS_1_22F64F3BD12DE7B2_METHOD_1_B6625D5E21D5F348_OFFSET))(a1, a2);
	}
};
