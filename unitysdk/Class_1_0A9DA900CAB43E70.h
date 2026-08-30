#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class FourRotateVoxelLevelEnvConfig; }

#define CLASS_1_0A9DA900CAB43E70__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4364E0)

inline static constexpr unsigned int Class_1_0A9DA900CAB43E70_TypeDefinitionIndex = 41569;

class Class_1_0A9DA900CAB43E70 : public ::System::Object
{
public:
	::RPG::GameCore::FourRotateVoxelLevelEnvConfig* EBEFMPHHHKK; // 0x10
	::System::Int32 OAMBKLJCHFF; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A9DA900CAB43E70__CTOR_OFFSET))(this);
	}
};
