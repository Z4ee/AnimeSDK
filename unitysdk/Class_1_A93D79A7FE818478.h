#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_E59F92993EBA43C9;
namespace RPG::GameCore { class FiveDimGravityFieldRingConfig; }

#define CLASS_1_A93D79A7FE818478_CLEAR_OFFSET UNITYSDK_OFFSET(0x18CC9E80)
#define CLASS_1_A93D79A7FE818478__CTOR_OFFSET UNITYSDK_OFFSET(0x18CC9F00)

inline static constexpr unsigned int Class_1_A93D79A7FE818478_TypeDefinitionIndex = 40098;

class Class_1_A93D79A7FE818478 : public ::System::Object
{
public:
	::Class_1_E59F92993EBA43C9* Field_1_0; // 0x10
	::RPG::GameCore::FiveDimGravityFieldRingConfig* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A93D79A7FE818478__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A93D79A7FE818478_CLEAR_OFFSET))(this);
	}
};
