#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class CameraNormalConfigData; }
namespace RPG::GameCore { class VCameraBlend; }
namespace RPG::GameCore { class VCameraNoiseChange; }

#define CLASS_1_C3A033C60E10FDC7_CLEAR_OFFSET UNITYSDK_OFFSET(0xAFD2E30)
#define CLASS_1_C3A033C60E10FDC7__CTOR_OFFSET UNITYSDK_OFFSET(0xAFD2E80)

inline static constexpr unsigned int Class_1_C3A033C60E10FDC7_TypeDefinitionIndex = 64998;

class Class_1_C3A033C60E10FDC7 : public ::System::Object
{
public:
	::RPG::GameCore::VCameraNoiseChange* Field_1_0; // 0x10
	::RPG::Client::CameraNormalConfigData* Field_1_1; // 0x18
	::RPG::GameCore::VCameraBlend* Field_1_2; // 0x20
	::System::Boolean Field_1_3; // 0x28
	::System::Single Field_1_4; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C3A033C60E10FDC7__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C3A033C60E10FDC7_CLEAR_OFFSET))(this);
	}
};
