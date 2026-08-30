#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1E1630E070C4D708_Class_3_50D343C44D28BEFB_13;
namespace Entitas { class IEntity; }
namespace RPG::Client::LittleGame::Ability { template <typename T> class ILittleGameAbilityValueGetter_1; }
namespace RPG::GameCore { class BaseLittleGameAbilityValueGetterConfig; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_1E1630E070C4D708_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18754A70)
#define CLASS_1_1E1630E070C4D708_METHOD_1_008568C4B76C327D_OFFSET UNITYSDK_OFFSET(0x18754B10)
#define CLASS_1_1E1630E070C4D708_METHOD_1_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0x18754340)
#define CLASS_1_1E1630E070C4D708__CTOR_OFFSET UNITYSDK_OFFSET(0x187542A0)

inline static constexpr unsigned int Class_1_1E1630E070C4D708_TypeDefinitionIndex = 76918;

class Class_1_1E1630E070C4D708 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Type*, ::Class_1_1E1630E070C4D708_Class_3_50D343C44D28BEFB_13*>* BBCBMBIGEPH; // 0x10
	::System::Boolean LINNHMPNCJG; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1E1630E070C4D708__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_A239DF324AF4215D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1E1630E070C4D708_METHOD_1_A239DF324AF4215D_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1E1630E070C4D708_DISPOSE_OFFSET))(this);
	}

	::RPG::Client::LittleGame::Ability::ILittleGameAbilityValueGetter_1<::Entitas::IEntity*>* Method_1_008568C4B76C327D(::RPG::GameCore::BaseLittleGameAbilityValueGetterConfig* a1)
	{
		return ((::RPG::Client::LittleGame::Ability::ILittleGameAbilityValueGetter_1<::Entitas::IEntity*>*(*)(::PVOID, ::RPG::GameCore::BaseLittleGameAbilityValueGetterConfig*))((::PBYTE)hIl2Cpp + CLASS_1_1E1630E070C4D708_METHOD_1_008568C4B76C327D_OFFSET))(this, a1);
	}
};
