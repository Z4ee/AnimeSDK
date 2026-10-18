#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_1.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_1_979433F5EFDD1C03_METHOD_1_0E3C9CE42200F670_OFFSET UNITYSDK_OFFSET(0x1D273C40)
#define CLASS_1_979433F5EFDD1C03__CTOR_OFFSET UNITYSDK_OFFSET(0x1D273F10)

inline static constexpr unsigned int Class_1_979433F5EFDD1C03_TypeDefinitionIndex = 14397;

class Class_1_979433F5EFDD1C03 : public ::System::Object
{
public:
	::Il2CppArray<::System::Single>* KHDOMCOJDMI; // 0x10
	::System::UInt32 AOBEAMFDGGC; // 0x18
	::Enum_3_0A3761FE34514D6C_1 GMPGDEINODK; // 0x1C
	::System::Boolean IFHBHIHHFBM; // 0x20
	::System::Int32 GBANBJFKIJL; // 0x24
	::RPG::Client::TextID OENAMINOLLF; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_979433F5EFDD1C03__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_0E3C9CE42200F670(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_979433F5EFDD1C03*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_979433F5EFDD1C03*&))((::PBYTE)hIl2Cpp + CLASS_1_979433F5EFDD1C03_METHOD_1_0E3C9CE42200F670_OFFSET))(a1, a2);
	}
};
