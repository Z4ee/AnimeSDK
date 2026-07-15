#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_20E36FD2269615D8;
namespace RPG::GameCore { class FiveDimLightningConfig; }

#define CLASS_1_8ED7122CF0F1CE6E_CLEAR_OFFSET UNITYSDK_OFFSET(0x1AE44BC0)
#define CLASS_1_8ED7122CF0F1CE6E__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE44C20)

inline static constexpr unsigned int Class_1_8ED7122CF0F1CE6E_TypeDefinitionIndex = 40918;

class Class_1_8ED7122CF0F1CE6E : public ::System::Object
{
public:
	::RPG::GameCore::FiveDimLightningConfig* Field_1_0; // 0x10
	::Class_1_20E36FD2269615D8* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8ED7122CF0F1CE6E__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8ED7122CF0F1CE6E_CLEAR_OFFSET))(this);
	}
};
