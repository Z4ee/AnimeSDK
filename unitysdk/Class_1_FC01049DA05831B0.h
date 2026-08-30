#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ChimeraDuelTalkData; }
namespace RPG::GameCore { class ChimeraDuelBubbleEventListener; }

#define CLASS_1_FC01049DA05831B0__CTOR_OFFSET UNITYSDK_OFFSET(0x155298B0)

inline static constexpr unsigned int Class_1_FC01049DA05831B0_TypeDefinitionIndex = 77807;

class Class_1_FC01049DA05831B0 : public ::System::Object
{
public:
	::RPG::GameCore::ChimeraDuelBubbleEventListener* GFDMIMMOMFI; // 0x10
	::RPG::Client::ChimeraDuelTalkData* PLEMACEKKFL; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FC01049DA05831B0__CTOR_OFFSET))(this);
	}
};
