#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ProtoScript/HollowSystemType.h"
#include "unitysdk/ProtoScript/HollowSystemUIState.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_E55FE2C706238347__CTOR_OFFSET UNITYSDK_OFFSET(0x178F5E60)

inline static constexpr unsigned int Class_1_E55FE2C706238347_TypeDefinitionIndex = 74049;

class Class_1_E55FE2C706238347 : public ::System::Object
{
public:
	::ProtoScript::HollowSystemType Field_1_0; // 0x10
	::ProtoScript::HollowSystemUIState Field_1_7; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E55FE2C706238347__CTOR_OFFSET))(this);
	}
};
