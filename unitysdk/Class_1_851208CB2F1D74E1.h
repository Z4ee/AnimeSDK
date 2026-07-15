#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class FourRotateVoxelGuideHintBillboardConfig; }

#define CLASS_1_851208CB2F1D74E1__CTOR_OFFSET UNITYSDK_OFFSET(0x187B4BB0)

inline static constexpr unsigned int Class_1_851208CB2F1D74E1_TypeDefinitionIndex = 40644;

class Class_1_851208CB2F1D74E1 : public ::System::Object
{
public:
	::RPG::GameCore::FourRotateVoxelGuideHintBillboardConfig* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_851208CB2F1D74E1__CTOR_OFFSET))(this);
	}
};
