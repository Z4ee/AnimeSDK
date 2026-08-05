#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

class Class_1_FD6C96CB8C168B19_Class_1_F6CF446D65DF58A2_5;
namespace MoleMole { class ConfigGalGameAvatarShowSettings; }

#define CLASS_1_FD6C96CB8C168B19_CLASS_1_92653E0568F0BA50_METHOD_1_5EFCA8E8C8BB5BD7_OFFSET UNITYSDK_OFFSET(0x1A8CEE40)
#define CLASS_1_FD6C96CB8C168B19_CLASS_1_92653E0568F0BA50__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8CEE30)

inline static constexpr unsigned int Class_1_FD6C96CB8C168B19_Class_1_92653E0568F0BA50_TypeDefinitionIndex = 52968;

class Class_1_FD6C96CB8C168B19_Class_1_92653E0568F0BA50 : public ::System::Object
{
public:
	::Class_1_FD6C96CB8C168B19_Class_1_F6CF446D65DF58A2_5* Field_1_0; // 0x10
	::Foundation::AssetPath Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FD6C96CB8C168B19_CLASS_1_92653E0568F0BA50__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_5EFCA8E8C8BB5BD7(::MoleMole::ConfigGalGameAvatarShowSettings* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigGalGameAvatarShowSettings*))((::PBYTE)hIl2Cpp + CLASS_1_FD6C96CB8C168B19_CLASS_1_92653E0568F0BA50_METHOD_1_5EFCA8E8C8BB5BD7_OFFSET))(this, a1);
	}
};
