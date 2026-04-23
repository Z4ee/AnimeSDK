#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class AbilityPropertyValue; }
namespace System { class String; }

#define CLASS_1_5A96F48F21CB3A57__CTOR_OFFSET UNITYSDK_OFFSET(0x18243F60)

inline static constexpr unsigned int Class_1_5A96F48F21CB3A57_TypeDefinitionIndex = 23601;

class Class_1_5A96F48F21CB3A57 : public ::System::Object
{
public:
	::Il2CppArray<::RPG::GameCore::AbilityPropertyValue*>* Field_1_3; // 0x10
	::Il2CppArray<::System::UInt32>* Field_1_2; // 0x18
	::System::String* Field_1_1; // 0x20
	::System::UInt32 Field_1_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5A96F48F21CB3A57__CTOR_OFFSET))(this);
	}
};
