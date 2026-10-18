#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GCFreeClosure/ClosureEvent_2.h"
#include "unitysdk/System/Object.h"

class Class_1_46AC29DEBE45F8A8_1;
namespace Entitas { class IEntity; }
namespace RPG::GameCore { class LittleGameBaseEventAction; }
namespace System { class String; }

#define CLASS_1_3A66EF8194C962E2_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C8DA750)
#define CLASS_1_3A66EF8194C962E2__CTOR_OFFSET UNITYSDK_OFFSET(0x1C8DA7D0)

inline static constexpr unsigned int Class_1_3A66EF8194C962E2_TypeDefinitionIndex = 42015;

class Class_1_3A66EF8194C962E2 : public ::System::Object
{
public:
	::RPG::GCFreeClosure::ClosureEvent_2<::Entitas::IEntity*, ::Class_1_46AC29DEBE45F8A8_1*> ECIECIEAMOK; // 0x10
	::System::String* OEPLADOIMOC; // 0x20
	::Class_1_46AC29DEBE45F8A8_1* NNACKOBKFGE; // 0x28
	::Il2CppArray<::RPG::GameCore::LittleGameBaseEventAction*>* GGHCKBHGHFC; // 0x30
	::System::Boolean KAGICIAJEEA; // 0x38
	::System::Single PNJEGPAFNCI; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3A66EF8194C962E2__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3A66EF8194C962E2_CLEAR_OFFSET))(this);
	}
};
