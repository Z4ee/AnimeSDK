#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_6AF92A74E815B48E;
namespace RPG::GameCore { class FiveDimOneSidePassConfig; }

#define CLASS_1_0A375F255DF0006F_CLEAR_OFFSET UNITYSDK_OFFSET(0x17F29FE0)
#define CLASS_1_0A375F255DF0006F__CTOR_OFFSET UNITYSDK_OFFSET(0x17F2A040)

inline static constexpr unsigned int Class_1_0A375F255DF0006F_TypeDefinitionIndex = 39275;

class Class_1_0A375F255DF0006F : public ::System::Object
{
public:
	::Class_1_6AF92A74E815B48E* Field_1_1; // 0x10
	::RPG::GameCore::FiveDimOneSidePassConfig* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A375F255DF0006F__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A375F255DF0006F_CLEAR_OFFSET))(this);
	}
};
