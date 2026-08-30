#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_1_FB89C8AC7AFEDB7F_METHOD_1_975B9AC31CF05C24_OFFSET UNITYSDK_OFFSET(0x1CC70720)
#define CLASS_1_FB89C8AC7AFEDB7F__CTOR_OFFSET UNITYSDK_OFFSET(0x1CC708A0)

inline static constexpr unsigned int Class_1_FB89C8AC7AFEDB7F_TypeDefinitionIndex = 11495;

class Class_1_FB89C8AC7AFEDB7F : public ::System::Object
{
public:
	::System::UInt32 LOEPLBPFMEN; // 0x10
	::RPG::Client::TextID FNBIFDIHIJH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FB89C8AC7AFEDB7F__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_975B9AC31CF05C24(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_FB89C8AC7AFEDB7F*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_FB89C8AC7AFEDB7F*&))((::PBYTE)hIl2Cpp + CLASS_1_FB89C8AC7AFEDB7F_METHOD_1_975B9AC31CF05C24_OFFSET))(a1, a2);
	}
};
