#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_1_22F64F3BD12DE7B2_METHOD_1_B6625D5E21D5F348_OFFSET UNITYSDK_OFFSET(0x1CB72170)
#define CLASS_1_22F64F3BD12DE7B2__CTOR_OFFSET UNITYSDK_OFFSET(0x1CB72360)

inline static constexpr unsigned int Class_1_22F64F3BD12DE7B2_TypeDefinitionIndex = 11543;

class Class_1_22F64F3BD12DE7B2 : public ::System::Object
{
public:
	::System::UInt32 AAGKEBFHLMC; // 0x10
	::RPG::Client::TextID POLNOFFLNID; // 0x18
	::RPG::Client::TextID NIHODMLGCIK; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_22F64F3BD12DE7B2__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_B6625D5E21D5F348(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_22F64F3BD12DE7B2*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_22F64F3BD12DE7B2*&))((::PBYTE)hIl2Cpp + CLASS_1_22F64F3BD12DE7B2_METHOD_1_B6625D5E21D5F348_OFFSET))(a1, a2);
	}
};
