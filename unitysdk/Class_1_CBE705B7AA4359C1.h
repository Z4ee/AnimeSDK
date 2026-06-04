#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_F431D4103CAD3F1C;
namespace RPG::GameCore { class LittleGameLevelVariableCollection; }

#define CLASS_1_CBE705B7AA4359C1_CLEAR_OFFSET UNITYSDK_OFFSET(0x18E3CC00)
#define CLASS_1_CBE705B7AA4359C1__CTOR_OFFSET UNITYSDK_OFFSET(0x18E3CC60)

inline static constexpr unsigned int Class_1_CBE705B7AA4359C1_TypeDefinitionIndex = 38793;

class Class_1_CBE705B7AA4359C1 : public ::System::Object
{
public:
	::RPG::GameCore::LittleGameLevelVariableCollection* Field_1_0; // 0x10
	::Class_1_F431D4103CAD3F1C* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CBE705B7AA4359C1__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CBE705B7AA4359C1_CLEAR_OFFSET))(this);
	}
};
