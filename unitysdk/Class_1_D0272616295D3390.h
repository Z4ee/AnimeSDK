#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define CLASS_1_D0272616295D3390__CTOR_OFFSET UNITYSDK_OFFSET(0x156D7B70)

inline static constexpr unsigned int Class_1_D0272616295D3390_TypeDefinitionIndex = 57846;

class Class_1_D0272616295D3390 : public ::System::Object
{
public:
	::System::String* LBFLPOJHJIG; // 0x10
	::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x18
	::RPG::GameCore::GameEntity* MCLLALGABAB; // 0x20
	::RPG::GameCore::TaskContext* BKIFMPHBIAK; // 0x28
	::System::Boolean MOKNCFJICIC; // 0x30
	::System::Boolean BPCINCEKHLN; // 0x31

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D0272616295D3390__CTOR_OFFSET))(this);
	}
};
