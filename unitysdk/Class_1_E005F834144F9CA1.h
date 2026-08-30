#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class FourRotateVoxelViewCtrlConfig; }

#define CLASS_1_E005F834144F9CA1__CTOR_OFFSET UNITYSDK_OFFSET(0x1A613930)

inline static constexpr unsigned int Class_1_E005F834144F9CA1_TypeDefinitionIndex = 41603;

class Class_1_E005F834144F9CA1 : public ::System::Object
{
public:
	::RPG::GameCore::FourRotateVoxelViewCtrlConfig* DOCBCODGIEH; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E005F834144F9CA1__CTOR_OFFSET))(this);
	}
};
