#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class CameraNormalConfigData; }
namespace RPG::GameCore { class VCameraBlend; }
namespace RPG::GameCore { class VCameraNoiseChange; }

#define CLASS_1_C3A033C60E10FDC7_CLEAR_OFFSET UNITYSDK_OFFSET(0x17080AE0)
#define CLASS_1_C3A033C60E10FDC7__CTOR_OFFSET UNITYSDK_OFFSET(0x17080B30)

inline static constexpr unsigned int Class_1_C3A033C60E10FDC7_TypeDefinitionIndex = 69496;

class Class_1_C3A033C60E10FDC7 : public ::System::Object
{
public:
	::RPG::GameCore::VCameraNoiseChange* FNPOMHPFKAO; // 0x10
	::RPG::Client::CameraNormalConfigData* HBILPEKJFNM; // 0x18
	::RPG::GameCore::VCameraBlend* HCHJHLOHCMI; // 0x20
	::System::Boolean HHMIBOCMBPI; // 0x28
	::System::Single IFEPJHGNCOI; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C3A033C60E10FDC7__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C3A033C60E10FDC7_CLEAR_OFFSET))(this);
	}
};
