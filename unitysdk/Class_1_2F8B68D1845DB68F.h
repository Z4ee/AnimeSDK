#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_B136CFD8FB6B8F37.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class PerceptionSenseConfig; }

#define CLASS_1_2F8B68D1845DB68F__CTOR_OFFSET UNITYSDK_OFFSET(0x15175390)

inline static constexpr unsigned int Class_1_2F8B68D1845DB68F_TypeDefinitionIndex = 44211;

class Class_1_2F8B68D1845DB68F : public ::System::Object
{
public:
	::MoleMole::Config::PerceptionSenseConfig* Field_1_0; // 0x10
	::Struct_2_B136CFD8FB6B8F37 Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F8B68D1845DB68F__CTOR_OFFSET))(this);
	}
};
