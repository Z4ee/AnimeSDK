#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class LevelTriggerInfo; }
namespace RPG::GameCore { class PropButtonConfig; }
namespace System { class String; }

#define CLASS_1_599BC2E3D56B5130__CTOR_OFFSET UNITYSDK_OFFSET(0x1CBB8150)

inline static constexpr unsigned int Class_1_599BC2E3D56B5130_TypeDefinitionIndex = 43201;

class Class_1_599BC2E3D56B5130 : public ::System::Object
{
public:
	::RPG::GameCore::PropButtonConfig* MMGFJOCJGDE; // 0x10
	::System::String* BOJDIGAHJPL; // 0x18
	::RPG::GameCore::LevelTriggerInfo* BIBDONOMAHG; // 0x20
	::System::Boolean HHOGEGIGHPM; // 0x28
	::System::Boolean CKECINOEDKI; // 0x29
	::System::Boolean POHEIGDPBBO; // 0x2A
	::System::UInt32 IGFOEDHAHNM; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_599BC2E3D56B5130__CTOR_OFFSET))(this);
	}
};
