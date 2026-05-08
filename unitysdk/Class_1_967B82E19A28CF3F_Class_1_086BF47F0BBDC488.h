#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

class Class_1_967B82E19A28CF3F_Class_1_4C8BDA2D1EF71B8C_7;
namespace MoleMole::Config { class ConfigShaderCustomFogMap; }

#define CLASS_1_967B82E19A28CF3F_CLASS_1_086BF47F0BBDC488_METHOD_1_DA51619E29CD8156_OFFSET UNITYSDK_OFFSET(0x18D378F0)
#define CLASS_1_967B82E19A28CF3F_CLASS_1_086BF47F0BBDC488__CTOR_OFFSET UNITYSDK_OFFSET(0x18D378E0)

inline static constexpr unsigned int Class_1_967B82E19A28CF3F_Class_1_086BF47F0BBDC488_TypeDefinitionIndex = 60575;

class Class_1_967B82E19A28CF3F_Class_1_086BF47F0BBDC488 : public ::System::Object
{
public:
	::Class_1_967B82E19A28CF3F_Class_1_4C8BDA2D1EF71B8C_7* Field_1_1; // 0x10
	::Foundation::AssetPath Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_967B82E19A28CF3F_CLASS_1_086BF47F0BBDC488__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_DA51619E29CD8156(::MoleMole::Config::ConfigShaderCustomFogMap* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigShaderCustomFogMap*))((::PBYTE)hIl2Cpp + CLASS_1_967B82E19A28CF3F_CLASS_1_086BF47F0BBDC488_METHOD_1_DA51619E29CD8156_OFFSET))(this, a1);
	}
};
