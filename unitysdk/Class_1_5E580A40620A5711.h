#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SummonerEnergyBarType.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class DotBarTypeConfig; }
namespace RPG::GameCore { class NumBarTypeConfig; }
namespace RPG::GameCore { class ProgressBarTypeConfig; }

#define CLASS_1_5E580A40620A5711__CTOR_OFFSET UNITYSDK_OFFSET(0x12ACC910)

inline static constexpr unsigned int Class_1_5E580A40620A5711_TypeDefinitionIndex = 51904;

class Class_1_5E580A40620A5711 : public ::System::Object
{
public:
	::RPG::GameCore::NumBarTypeConfig* Field_1_0; // 0x10
	::RPG::GameCore::DotBarTypeConfig* Field_1_1; // 0x18
	::RPG::GameCore::ProgressBarTypeConfig* Field_1_2; // 0x20
	::System::Nullable_1<::System::Int32> Field_1_3; // 0x28
	::System::Nullable_1<::RPG::GameCore::SummonerEnergyBarType> Field_1_4; // 0x30
	::System::Nullable_1<::System::Boolean> Field_1_5; // 0x38
	::System::Nullable_1<::System::Int32> Field_1_6; // 0x3C
	::System::Nullable_1<::System::Int32> Field_1_7; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5E580A40620A5711__CTOR_OFFSET))(this);
	}
};
