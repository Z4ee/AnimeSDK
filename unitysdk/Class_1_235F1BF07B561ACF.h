#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::LittleGame { class PlacementConfig; }

#define CLASS_1_235F1BF07B561ACF__CTOR_OFFSET UNITYSDK_OFFSET(0x180C72A0)

inline static constexpr unsigned int Class_1_235F1BF07B561ACF_TypeDefinitionIndex = 40178;

class Class_1_235F1BF07B561ACF : public ::System::Object
{
public:
	::RPG::Client::LittleGame::PlacementConfig* Field_1_0; // 0x10
	::System::Single Field_1_1; // 0x18
	::System::Int32 Field_1_2; // 0x1C
	::System::Single Field_1_3; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_235F1BF07B561ACF__CTOR_OFFSET))(this);
	}
};
