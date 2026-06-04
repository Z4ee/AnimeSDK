#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BF7A075734D15E98.h"
#include "unitysdk/RPG/GameCore/EventType.h"

namespace RPG::GameCore { class BaseModifierInstance; }
namespace RPG::GameCore { class BaseModifierInstance_ModifierEffectData; }
namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_ED62AA2F91BC7B79_1_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0x138BD1A0)
#define CLASS_2_ED62AA2F91BC7B79_1_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0x138BD150)
#define CLASS_2_ED62AA2F91BC7B79_1_METHOD_2_68BC90F65C30506D_OFFSET UNITYSDK_OFFSET(0x138BCF70)
#define CLASS_2_ED62AA2F91BC7B79_1_METHOD_2_911AFE007C1C4454_OFFSET UNITYSDK_OFFSET(0x138BD050)
#define CLASS_2_ED62AA2F91BC7B79_1__CTOR_OFFSET UNITYSDK_OFFSET(0x138BD1F0)

inline static constexpr unsigned int Class_2_ED62AA2F91BC7B79_1_TypeDefinitionIndex = 52845;

class Class_2_ED62AA2F91BC7B79_1 : public ::Class_1_BF7A075734D15E98
{
public:
	::RPG::GameCore::GameEntity* Field_2_0; // 0x18
	::RPG::GameCore::BaseModifierInstance* Field_2_1; // 0x20
	::System::Collections::Generic::List_1<::RPG::GameCore::BaseModifierInstance_ModifierEffectData*>* Field_2_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ED62AA2F91BC7B79_1__CTOR_OFFSET))(this);
	}

	::Class_2_ED62AA2F91BC7B79_1* Method_2_68BC90F65C30506D(::RPG::GameCore::GameEntity* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::BaseModifierInstance_ModifierEffectData*>* a2, ::RPG::GameCore::BaseModifierInstance* a3)
	{
		return ((::Class_2_ED62AA2F91BC7B79_1*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Collections::Generic::List_1<::RPG::GameCore::BaseModifierInstance_ModifierEffectData*>*, ::RPG::GameCore::BaseModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_2_ED62AA2F91BC7B79_1_METHOD_2_68BC90F65C30506D_OFFSET))(this, a1, a2, a3);
	}

	::Class_2_ED62AA2F91BC7B79_1* Method_2_911AFE007C1C4454(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::BaseModifierInstance_ModifierEffectData* a2, ::RPG::GameCore::BaseModifierInstance* a3)
	{
		return ((::Class_2_ED62AA2F91BC7B79_1*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::BaseModifierInstance_ModifierEffectData*, ::RPG::GameCore::BaseModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_2_ED62AA2F91BC7B79_1_METHOD_2_911AFE007C1C4454_OFFSET))(this, a1, a2, a3);
	}

	::System::UInt32 GetSourceRuntimeID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ED62AA2F91BC7B79_1_GETSOURCERUNTIMEID_OFFSET))(this);
	}

	::RPG::GameCore::EventType GetEventType()
	{
		return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ED62AA2F91BC7B79_1_GETEVENTTYPE_OFFSET))(this);
	}
};
