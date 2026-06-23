#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigCommonEntityAnimEvents; }
namespace System { class Action; }
namespace System { class String; }

#define CLASS_1_5E43193B7E7BBE0F_CLASS_1_06348F922649182D_METHOD_1_EE2139472879CEE2_OFFSET UNITYSDK_OFFSET(0x1954FB10)
#define CLASS_1_5E43193B7E7BBE0F_CLASS_1_06348F922649182D__CTOR_OFFSET UNITYSDK_OFFSET(0x1954FB00)

inline static constexpr unsigned int Class_1_5E43193B7E7BBE0F_Class_1_06348F922649182D_TypeDefinitionIndex = 78874;

class Class_1_5E43193B7E7BBE0F_Class_1_06348F922649182D : public ::System::Object
{
public:
	::System::Action* Field_1_1; // 0x10
	::System::String* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5E43193B7E7BBE0F_CLASS_1_06348F922649182D__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_EE2139472879CEE2(::MoleMole::Config::ConfigCommonEntityAnimEvents* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigCommonEntityAnimEvents*))((::PBYTE)hIl2Cpp + CLASS_1_5E43193B7E7BBE0F_CLASS_1_06348F922649182D_METHOD_1_EE2139472879CEE2_OFFSET))(this, a1);
	}
};
