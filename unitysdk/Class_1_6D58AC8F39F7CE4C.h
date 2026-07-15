#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class BlockNodeConfig; }
namespace RPG::GameCore { class StageGrassOverrideConfig; }
namespace System { class String; }

#define CLASS_1_6D58AC8F39F7CE4C__CTOR_OFFSET UNITYSDK_OFFSET(0x18F07A50)

inline static constexpr unsigned int Class_1_6D58AC8F39F7CE4C_TypeDefinitionIndex = 70517;

class Class_1_6D58AC8F39F7CE4C : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::RPG::GameCore::StageGrassOverrideConfig* Field_1_1; // 0x18
	::Il2CppArray<::RPG::GameCore::BlockNodeConfig*>* Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6D58AC8F39F7CE4C__CTOR_OFFSET))(this);
	}
};
