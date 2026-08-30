#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SummonerEnergyBarType.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class DotBarTypeConfig; }
namespace RPG::GameCore { class NumBarTypeConfig; }
namespace RPG::GameCore { class ProgressBarTypeConfig; }

#define CLASS_1_5E580A40620A5711__CTOR_OFFSET UNITYSDK_OFFSET(0x15369DA0)

inline static constexpr unsigned int Class_1_5E580A40620A5711_TypeDefinitionIndex = 55764;

class Class_1_5E580A40620A5711 : public ::System::Object
{
public:
	::RPG::GameCore::ProgressBarTypeConfig* JJOBGHGHNPJ; // 0x10
	::RPG::GameCore::DotBarTypeConfig* CEPLINKFOHN; // 0x18
	::RPG::GameCore::NumBarTypeConfig* HOEEFFGDHOI; // 0x20
	::System::Nullable_1<::System::Int32> JADMAPDKLKL; // 0x28
	::System::Nullable_1<::System::Int32> HOCMHABKLGJ; // 0x30
	::System::Nullable_1<::RPG::GameCore::SummonerEnergyBarType> OPFMFGGBAKC; // 0x38
	::System::Nullable_1<::System::Boolean> CAGCHKJHMPD; // 0x40
	::System::Nullable_1<::System::Int32> KMDEBAKFJML; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5E580A40620A5711__CTOR_OFFSET))(this);
	}
};
