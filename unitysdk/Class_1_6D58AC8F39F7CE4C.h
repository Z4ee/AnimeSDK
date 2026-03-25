#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class BlockNodeConfig; }
namespace RPG::GameCore { class StageGrassOverrideConfig; }
namespace System { class String; }

#define CLASS_1_6D58AC8F39F7CE4C__CTOR_OFFSET UNITYSDK_OFFSET(0x8DF6370)

inline static constexpr unsigned int Class_1_6D58AC8F39F7CE4C_TypeDefinitionIndex = 60602;

class Class_1_6D58AC8F39F7CE4C : public ::System::Object
{
public:
	::RPG::GameCore::StageGrassOverrideConfig* Field_1_2; // 0x10
	::System::String* Field_1_1; // 0x18
	::Il2CppArray<::RPG::GameCore::BlockNodeConfig*>* Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6D58AC8F39F7CE4C__CTOR_OFFSET))(this);
	}
};
