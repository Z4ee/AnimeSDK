#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_75E4C1FDC2086A0E;
namespace RPG::GameCore { class LittleGameEntityVarConfig; }

#define CLASS_1_4D55852270DA77E5_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C8EDCA0)
#define CLASS_1_4D55852270DA77E5__CTOR_OFFSET UNITYSDK_OFFSET(0x1C8EDD00)

inline static constexpr unsigned int Class_1_4D55852270DA77E5_TypeDefinitionIndex = 43340;

class Class_1_4D55852270DA77E5 : public ::System::Object
{
public:
	::RPG::GameCore::LittleGameEntityVarConfig* EABKOHGCHFP; // 0x10
	::Class_1_75E4C1FDC2086A0E* CNLHCKELLBE; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4D55852270DA77E5__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4D55852270DA77E5_CLEAR_OFFSET))(this);
	}
};
