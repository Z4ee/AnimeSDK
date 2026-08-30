#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BF7A075734D15E98.h"
#include "unitysdk/RPG/GameCore/EventType.h"

namespace RPG::GameCore { class BaseModifierInstance; }
namespace RPG::GameCore { class BaseModifierInstance_ModifierEffectData; }
namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_ED62AA2F91BC7B79_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0x165DD0C0)
#define CLASS_2_ED62AA2F91BC7B79_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0x165DD070)
#define CLASS_2_ED62AA2F91BC7B79_METHOD_2_68BC90F65C30506D_OFFSET UNITYSDK_OFFSET(0x165DCF90)
#define CLASS_2_ED62AA2F91BC7B79__CTOR_OFFSET UNITYSDK_OFFSET(0x165DD110)

inline static constexpr unsigned int Class_2_ED62AA2F91BC7B79_TypeDefinitionIndex = 56777;

class Class_2_ED62AA2F91BC7B79 : public ::Class_1_BF7A075734D15E98
{
public:
	::RPG::GameCore::GameEntity* MCLLALGABAB; // 0x18
	::System::Collections::Generic::List_1<::RPG::GameCore::BaseModifierInstance_ModifierEffectData*>* MAOOGNLNKIB; // 0x20
	::RPG::GameCore::BaseModifierInstance* CEAGEFBHKDH; // 0x28

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
