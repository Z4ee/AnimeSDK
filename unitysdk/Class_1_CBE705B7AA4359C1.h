#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_BFC94D6B3CE54520;
namespace RPG::GameCore { class LittleGameLevelVariableCollection; }

#define CLASS_1_CBE705B7AA4359C1_CLEAR_OFFSET UNITYSDK_OFFSET(0x1678B3F0)
#define CLASS_1_CBE705B7AA4359C1__CTOR_OFFSET UNITYSDK_OFFSET(0x1678B450)

inline static constexpr unsigned int Class_1_CBE705B7AA4359C1_TypeDefinitionIndex = 32332;

class Class_1_CBE705B7AA4359C1 : public ::System::Object
{
public:
	::Class_1_BFC94D6B3CE54520* Field_1_1; // 0x10
	::RPG::GameCore::LittleGameLevelVariableCollection* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CBE705B7AA4359C1__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CBE705B7AA4359C1_CLEAR_OFFSET))(this);
	}
};
