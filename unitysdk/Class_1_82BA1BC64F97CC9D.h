#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_1_82BA1BC64F97CC9D_METHOD_1_417A218C63D0B3DA_OFFSET UNITYSDK_OFFSET(0x1D00FE10)
#define CLASS_1_82BA1BC64F97CC9D__CTOR_OFFSET UNITYSDK_OFFSET(0x1D010040)

inline static constexpr unsigned int Class_1_82BA1BC64F97CC9D_TypeDefinitionIndex = 11547;

class Class_1_82BA1BC64F97CC9D : public ::System::Object
{
public:
	::Il2CppArray<::System::UInt32>* CJEEEFLFFOL; // 0x10
	::System::UInt32 PHFMCACHFIJ; // 0x18
	::RPG::Client::TextID OENAMINOLLF; // 0x20
	::System::UInt32 AJCDFGPPLJP; // 0x30
	::System::UInt32 LIPCDDAPHNF; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_82BA1BC64F97CC9D__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_417A218C63D0B3DA(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_82BA1BC64F97CC9D*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_82BA1BC64F97CC9D*&))((::PBYTE)hIl2Cpp + CLASS_1_82BA1BC64F97CC9D_METHOD_1_417A218C63D0B3DA_OFFSET))(a1, a2);
	}
};
