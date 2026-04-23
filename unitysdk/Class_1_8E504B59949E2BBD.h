#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/DiceCombatCore/TacticsCardUseCheckResult.h"
#include "unitysdk/System/Object.h"

class Class_1_0C8F8589C8105F3E;
class Class_1_D2E90365D99FC7E6_6;
class Class_1_DD584E66F5D339D3;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_8E504B59949E2BBD__CTOR_OFFSET UNITYSDK_OFFSET(0x17DD0C50)

inline static constexpr unsigned int Class_1_8E504B59949E2BBD_TypeDefinitionIndex = 34276;

class Class_1_8E504B59949E2BBD : public ::System::Object
{
public:
	::Class_1_DD584E66F5D339D3* Field_1_4; // 0x10
	::Class_1_0C8F8589C8105F3E* Field_1_5; // 0x18
	::System::Collections::Generic::List_1<::Class_1_D2E90365D99FC7E6_6*>* Field_1_3; // 0x20
	::System::UInt32 Field_1_1; // 0x28
	::RPG::LittleGameShare::DiceCombatCore::TacticsCardUseCheckResult Field_1_2; // 0x2C
	::System::UInt32 Field_1_0; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8E504B59949E2BBD__CTOR_OFFSET))(this);
	}
};
