#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/PixAir/PixAirEquipInteractionType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/LittleGameAbilityAttributeType.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_260;
namespace Entitas { class IEntity; }
namespace System { class String; }

#define CLASS_1_7CD88BACC194DBA3_METHOD_1_51D3C16C4BD27E12_OFFSET UNITYSDK_OFFSET(0x134DFE30)

inline static constexpr unsigned int Class_1_7CD88BACC194DBA3_TypeDefinitionIndex = 71874;

class Class_1_7CD88BACC194DBA3 : public ::System::Object
{
public:
	static ::System::Void Method_1_51D3C16C4BD27E12(::Class_0_16E4307DCC419505_260* a1, ::Entitas::IEntity* a2, ::RPG::GameCore::LittleGameAbilityAttributeType a3, ::RPG::GameCore::FixPoint a4, ::System::String* a5, ::System::String* a6, ::System::Nullable_1<::RPG::Client::LittleGame::PixAir::PixAirEquipInteractionType> a7)
	{
		return ((::System::Void(*)(::Class_0_16E4307DCC419505_260*, ::Entitas::IEntity*, ::RPG::GameCore::LittleGameAbilityAttributeType, ::RPG::GameCore::FixPoint, ::System::String*, ::System::String*, ::System::Nullable_1<::RPG::Client::LittleGame::PixAir::PixAirEquipInteractionType>))((::PBYTE)hIl2Cpp + CLASS_1_7CD88BACC194DBA3_METHOD_1_51D3C16C4BD27E12_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
	}
};
