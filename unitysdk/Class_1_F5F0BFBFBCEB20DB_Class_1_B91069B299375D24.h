#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigUIPortrait; }
namespace System { class Action; }

#define CLASS_1_F5F0BFBFBCEB20DB_CLASS_1_B91069B299375D24_METHOD_1_113CA959BC85025B_OFFSET UNITYSDK_OFFSET(0x1A7DC020)
#define CLASS_1_F5F0BFBFBCEB20DB_CLASS_1_B91069B299375D24__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7DC010)

inline static constexpr unsigned int Class_1_F5F0BFBFBCEB20DB_Class_1_B91069B299375D24_TypeDefinitionIndex = 76600;

class Class_1_F5F0BFBFBCEB20DB_Class_1_B91069B299375D24 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F5F0BFBFBCEB20DB_CLASS_1_B91069B299375D24__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_113CA959BC85025B(::MoleMole::Config::ConfigUIPortrait* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIPortrait*))((::PBYTE)hIl2Cpp + CLASS_1_F5F0BFBFBCEB20DB_CLASS_1_B91069B299375D24_METHOD_1_113CA959BC85025B_OFFSET))(this, a1);
	}
};
