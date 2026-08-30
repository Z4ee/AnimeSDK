#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class BlockNodeConfig; }
namespace RPG::GameCore { class StageGrassOverrideConfig; }
namespace System { class String; }

#define CLASS_1_6D58AC8F39F7CE4C__CTOR_OFFSET UNITYSDK_OFFSET(0xB9001C0)

inline static constexpr unsigned int Class_1_6D58AC8F39F7CE4C_TypeDefinitionIndex = 73816;

class Class_1_6D58AC8F39F7CE4C : public ::System::Object
{
public:
	::Il2CppArray<::RPG::GameCore::BlockNodeConfig*>* AKIEBMCJMFD; // 0x10
	::System::String* ONIAAMLDBLJ; // 0x18
	::RPG::GameCore::StageGrassOverrideConfig* IGAEFMFMKOM; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6D58AC8F39F7CE4C__CTOR_OFFSET))(this);
	}
};
