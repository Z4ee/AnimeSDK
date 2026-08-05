#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

class Class_1_FD349A67543D0D1D_Class_1_AAAB45198E552E40;
namespace MoleMole::Config { class ConfigEntityTimeSlows; }

#define CLASS_1_FD349A67543D0D1D_CLASS_1_0A2FCA2A030BFEF9_METHOD_1_179519662ECB72F2_OFFSET UNITYSDK_OFFSET(0x177FE6F0)
#define CLASS_1_FD349A67543D0D1D_CLASS_1_0A2FCA2A030BFEF9__CTOR_OFFSET UNITYSDK_OFFSET(0x177FE6E0)

inline static constexpr unsigned int Class_1_FD349A67543D0D1D_Class_1_0A2FCA2A030BFEF9_TypeDefinitionIndex = 63376;

class Class_1_FD349A67543D0D1D_Class_1_0A2FCA2A030BFEF9 : public ::System::Object
{
public:
	::Class_1_FD349A67543D0D1D_Class_1_AAAB45198E552E40* Field_1_0; // 0x10
	::Foundation::AssetPath Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FD349A67543D0D1D_CLASS_1_0A2FCA2A030BFEF9__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_179519662ECB72F2(::MoleMole::Config::ConfigEntityTimeSlows* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntityTimeSlows*))((::PBYTE)hIl2Cpp + CLASS_1_FD349A67543D0D1D_CLASS_1_0A2FCA2A030BFEF9_METHOD_1_179519662ECB72F2_OFFSET))(this, a1);
	}
};
