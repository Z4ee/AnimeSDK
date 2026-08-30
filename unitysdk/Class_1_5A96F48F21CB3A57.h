#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class AbilityPropertyValue; }
namespace System { class String; }

#define CLASS_1_5A96F48F21CB3A57__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFF7210)

inline static constexpr unsigned int Class_1_5A96F48F21CB3A57_TypeDefinitionIndex = 15290;

class Class_1_5A96F48F21CB3A57 : public ::System::Object
{
public:
	::Il2CppArray<::System::UInt32>* KPHIIIDGLEB; // 0x10
	::System::String* KNNCCLDKFGO; // 0x18
	::Il2CppArray<::RPG::GameCore::AbilityPropertyValue*>* EABDPMABDHO; // 0x20
	::System::UInt32 DPKHKFBMIKD; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5A96F48F21CB3A57__CTOR_OFFSET))(this);
	}
};
