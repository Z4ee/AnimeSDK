#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_ABF277A1ED07907B;
namespace RPG::GameCore { class LittleGameLevelVariableCollection; }

#define CLASS_1_CBE705B7AA4359C1_CLEAR_OFFSET UNITYSDK_OFFSET(0x1CB5EE50)
#define CLASS_1_CBE705B7AA4359C1__CTOR_OFFSET UNITYSDK_OFFSET(0x1CB5EEB0)

inline static constexpr unsigned int Class_1_CBE705B7AA4359C1_TypeDefinitionIndex = 42067;

class Class_1_CBE705B7AA4359C1 : public ::System::Object
{
public:
	::RPG::GameCore::LittleGameLevelVariableCollection* EABKOHGCHFP; // 0x10
	::Class_1_ABF277A1ED07907B* KKNCHPMEJFN; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CBE705B7AA4359C1__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CBE705B7AA4359C1_CLEAR_OFFSET))(this);
	}
};
