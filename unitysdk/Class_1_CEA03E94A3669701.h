#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/MiniGameEventReason.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }

#define CLASS_1_CEA03E94A3669701_CLEAR_OFFSET UNITYSDK_OFFSET(0x1678B4A0)
#define CLASS_1_CEA03E94A3669701__CTOR_OFFSET UNITYSDK_OFFSET(0x1678B4F0)

inline static constexpr unsigned int Class_1_CEA03E94A3669701_TypeDefinitionIndex = 33414;

class Class_1_CEA03E94A3669701 : public ::System::Object
{
public:
	::System::Action_1<::RPG::Client::LittleGame::FiveDim::MiniGameEventReason>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CEA03E94A3669701__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CEA03E94A3669701_CLEAR_OFFSET))(this);
	}
};
