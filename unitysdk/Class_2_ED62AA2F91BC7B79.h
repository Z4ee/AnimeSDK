#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9988289E7F8AA214.h"
#include "unitysdk/RPG/GameCore/EventType.h"

namespace RPG::GameCore { class BaseModifierInstance; }
namespace RPG::GameCore { class BaseModifierInstance_ModifierEffectData; }
namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_ED62AA2F91BC7B79_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0x8AE9D70)
#define CLASS_2_ED62AA2F91BC7B79_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0x8AE9D20)
#define CLASS_2_ED62AA2F91BC7B79_METHOD_2_68BC90F65C30506D_OFFSET UNITYSDK_OFFSET(0x8AE9C40)
#define CLASS_2_ED62AA2F91BC7B79__CTOR_OFFSET UNITYSDK_OFFSET(0x8AE9DC0)

inline static constexpr unsigned int Class_2_ED62AA2F91BC7B79_TypeDefinitionIndex = 45497;

class Class_2_ED62AA2F91BC7B79 : public ::Class_1_9988289E7F8AA214
{
public:
	::RPG::GameCore::BaseModifierInstance* Field_2_2; // 0x18
	::RPG::GameCore::GameEntity* Field_2_0; // 0x20
	::System::Collections::Generic::List_1<::RPG::GameCore::BaseModifierInstance_ModifierEffectData*>* Field_2_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ED62AA2F91BC7B79__CTOR_OFFSET))(this);
	}

	::Class_2_ED62AA2F91BC7B79* Method_2_68BC90F65C30506D(::RPG::GameCore::GameEntity* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::BaseModifierInstance_ModifierEffectData*>* a2, ::RPG::GameCore::BaseModifierInstance* a3)
	{
		return ((::Class_2_ED62AA2F91BC7B79*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Collections::Generic::List_1<::RPG::GameCore::BaseModifierInstance_ModifierEffectData*>*, ::RPG::GameCore::BaseModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_2_ED62AA2F91BC7B79_METHOD_2_68BC90F65C30506D_OFFSET))(this, a1, a2, a3);
	}

	::System::UInt32 GetSourceRuntimeID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ED62AA2F91BC7B79_GETSOURCERUNTIMEID_OFFSET))(this);
	}

	::RPG::GameCore::EventType GetEventType()
	{
		return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ED62AA2F91BC7B79_GETEVENTTYPE_OFFSET))(this);
	}
};
