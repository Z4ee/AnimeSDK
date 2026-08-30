#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class FourRotateVoxelEntityStateConfig; }

#define CLASS_1_0C0EE688F216E2AF__CTOR_OFFSET UNITYSDK_OFFSET(0x1D39E080)

inline static constexpr unsigned int Class_1_0C0EE688F216E2AF_TypeDefinitionIndex = 41590;

class Class_1_0C0EE688F216E2AF : public ::System::Object
{
public:
	::RPG::GameCore::FourRotateVoxelEntityStateConfig* DOCBCODGIEH; // 0x10
	::System::Boolean IIDHHGEICBB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0C0EE688F216E2AF__CTOR_OFFSET))(this);
	}
};
