#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_255;
class Class_1_1E1630E070C4D708;
namespace Entitas { class IEntity; }
namespace RPG::Client::LittleGame::Ability { template <typename T> class ILittleGameAbilityValueGetter_1; }
namespace RPG::GameCore { class BaseLittleGameAbilityValueGetterConfig; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_E59130C10EDDE9BC_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBC4BE70)
#define CLASS_1_E59130C10EDDE9BC_METHOD_1_36DE361EB4F54D6D_OFFSET UNITYSDK_OFFSET(0xBC4BA20)
#define CLASS_1_E59130C10EDDE9BC_METHOD_1_63981E3F33446912_OFFSET UNITYSDK_OFFSET(0xBC4BCD0)
#define CLASS_1_E59130C10EDDE9BC__CTOR_OFFSET UNITYSDK_OFFSET(0xBC4BF10)

inline static constexpr unsigned int Class_1_E59130C10EDDE9BC_TypeDefinitionIndex = 76922;

class Class_1_E59130C10EDDE9BC : public ::System::Object
{
public:
	::Class_1_1E1630E070C4D708* CEFLLELKFOP; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Type*, ::RPG::Client::LittleGame::Ability::ILittleGameAbilityValueGetter_1<::Entitas::IEntity*>*>* BKFGHBBALAL; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E59130C10EDDE9BC__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_1_36DE361EB4F54D6D(::Class_0_16E4307DCC419505_255* a1, ::RPG::GameCore::BaseLittleGameAbilityValueGetterConfig* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::Class_0_16E4307DCC419505_255*, ::RPG::GameCore::BaseLittleGameAbilityValueGetterConfig*))((::PBYTE)hIl2Cpp + CLASS_1_E59130C10EDDE9BC_METHOD_1_36DE361EB4F54D6D_OFFSET))(this, a1, a2);
	}

	::RPG::Client::LittleGame::Ability::ILittleGameAbilityValueGetter_1<::Entitas::IEntity*>* Method_1_63981E3F33446912(::RPG::GameCore::BaseLittleGameAbilityValueGetterConfig* a1)
	{
		return ((::RPG::Client::LittleGame::Ability::ILittleGameAbilityValueGetter_1<::Entitas::IEntity*>*(*)(::PVOID, ::RPG::GameCore::BaseLittleGameAbilityValueGetterConfig*))((::PBYTE)hIl2Cpp + CLASS_1_E59130C10EDDE9BC_METHOD_1_63981E3F33446912_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E59130C10EDDE9BC_DISPOSE_OFFSET))(this);
	}
};
