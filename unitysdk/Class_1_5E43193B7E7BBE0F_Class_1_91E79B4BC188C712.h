#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigCommonEntityAnimEvents; }
namespace System { class Action; }
namespace System { class String; }

#define CLASS_1_5E43193B7E7BBE0F_CLASS_1_91E79B4BC188C712_METHOD_1_DF4E3DB428B2819F_OFFSET UNITYSDK_OFFSET(0x120F2120)
#define CLASS_1_5E43193B7E7BBE0F_CLASS_1_91E79B4BC188C712__CTOR_OFFSET UNITYSDK_OFFSET(0x120F2110)

inline static constexpr unsigned int Class_1_5E43193B7E7BBE0F_Class_1_91E79B4BC188C712_TypeDefinitionIndex = 57522;

class Class_1_5E43193B7E7BBE0F_Class_1_91E79B4BC188C712 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10
	::System::String* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5E43193B7E7BBE0F_CLASS_1_91E79B4BC188C712__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_DF4E3DB428B2819F(::MoleMole::Config::ConfigCommonEntityAnimEvents* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigCommonEntityAnimEvents*))((::PBYTE)hIl2Cpp + CLASS_1_5E43193B7E7BBE0F_CLASS_1_91E79B4BC188C712_METHOD_1_DF4E3DB428B2819F_OFFSET))(this, a1);
	}
};
