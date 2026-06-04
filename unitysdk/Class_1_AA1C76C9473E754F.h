#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_32BC7AB644206538.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class FiveDimCrystalConfig; }

#define CLASS_1_AA1C76C9473E754F_CLEAR_OFFSET UNITYSDK_OFFSET(0x18C1CE00)
#define CLASS_1_AA1C76C9473E754F__CTOR_OFFSET UNITYSDK_OFFSET(0x18C1CE50)

inline static constexpr unsigned int Class_1_AA1C76C9473E754F_TypeDefinitionIndex = 40101;

class Class_1_AA1C76C9473E754F : public ::System::Object
{
public:
	::RPG::GameCore::FiveDimCrystalConfig* Field_1_0; // 0x10
	::Struct_2_32BC7AB644206538 Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AA1C76C9473E754F__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AA1C76C9473E754F_CLEAR_OFFSET))(this);
	}
};
