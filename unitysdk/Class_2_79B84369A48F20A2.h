#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PriorityQueue_1.h"

namespace RPG::GameCore { class CharacterInputData; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define CLASS_2_79B84369A48F20A2__CTOR_OFFSET UNITYSDK_OFFSET(0x11930060)

inline static constexpr unsigned int Class_2_79B84369A48F20A2_TypeDefinitionIndex = 45881;

class Class_2_79B84369A48F20A2 : public ::RPG::GameCore::PriorityQueue_1<::System::Action_2<::RPG::GameCore::CharacterInputData*, ::System::Single>*>
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_79B84369A48F20A2__CTOR_OFFSET))(this);
	}
};
