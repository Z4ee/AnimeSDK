#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_1.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_1_65910C68B617EC70_METHOD_1_81F3FEDEB8077FC5_OFFSET UNITYSDK_OFFSET(0x1CF05C10)
#define CLASS_1_65910C68B617EC70__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF05DD0)

inline static constexpr unsigned int Class_1_65910C68B617EC70_TypeDefinitionIndex = 14399;

class Class_1_65910C68B617EC70 : public ::System::Object
{
public:
	::System::String* ACJDHMPPCCI; // 0x10
	::System::UInt32 CMNOEFFFNPE; // 0x18
	::Enum_3_0A3761FE34514D6C_1 GMPGDEINODK; // 0x1C
	::System::UInt32 PBLDLDIEFNC; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_65910C68B617EC70__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_81F3FEDEB8077FC5(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_65910C68B617EC70*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_65910C68B617EC70*&))((::PBYTE)hIl2Cpp + CLASS_1_65910C68B617EC70_METHOD_1_81F3FEDEB8077FC5_OFFSET))(a1, a2);
	}
};
