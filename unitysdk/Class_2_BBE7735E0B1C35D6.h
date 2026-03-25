#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9988289E7F8AA214.h"
#include "unitysdk/RPG/GameCore/EventType.h"

namespace RPG::GameCore { class BaseModifierInstance; }
namespace RPG::GameCore { class BaseModifierInstance_ModifierEffectData; }
namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_BBE7735E0B1C35D6_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0x1185A590)
#define CLASS_2_BBE7735E0B1C35D6_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0x1185A540)
#define CLASS_2_BBE7735E0B1C35D6_METHOD_2_222579E08E05A543_OFFSET UNITYSDK_OFFSET(0x1185A480)
#define CLASS_2_BBE7735E0B1C35D6_METHOD_2_68BC90F65C30506D_OFFSET UNITYSDK_OFFSET(0x1185A3A0)
#define CLASS_2_BBE7735E0B1C35D6__CTOR_OFFSET UNITYSDK_OFFSET(0x1185A5E0)

inline static constexpr unsigned int Class_2_BBE7735E0B1C35D6_TypeDefinitionIndex = 45498;

class Class_2_BBE7735E0B1C35D6 : public ::Class_1_9988289E7F8AA214
{
public:
	::RPG::GameCore::BaseModifierInstance* Field_2_2; // 0x18
	::System::Collections::Generic::List_1<::RPG::GameCore::BaseModifierInstance_ModifierEffectData*>* Field_2_1; // 0x20
	::RPG::GameCore::GameEntity* Field_2_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BBE7735E0B1C35D6__CTOR_OFFSET))(this);
	}

	::Class_2_BBE7735E0B1C35D6* Method_2_68BC90F65C30506D(::RPG::GameCore::GameEntity* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::BaseModifierInstance_ModifierEffectData*>* a2, ::RPG::GameCore::BaseModifierInstance* a3)
	{
		return ((::Class_2_BBE7735E0B1C35D6*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Collections::Generic::List_1<::RPG::GameCore::BaseModifierInstance_ModifierEffectData*>*, ::RPG::GameCore::BaseModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_2_BBE7735E0B1C35D6_METHOD_2_68BC90F65C30506D_OFFSET))(this, a1, a2, a3);
	}

	::Class_2_BBE7735E0B1C35D6* Method_2_222579E08E05A543(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::BaseModifierInstance_ModifierEffectData* a2, ::RPG::GameCore::BaseModifierInstance* a3)
	{
		return ((::Class_2_BBE7735E0B1C35D6*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::BaseModifierInstance_ModifierEffectData*, ::RPG::GameCore::BaseModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_2_BBE7735E0B1C35D6_METHOD_2_222579E08E05A543_OFFSET))(this, a1, a2, a3);
	}

	::System::UInt32 GetSourceRuntimeID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BBE7735E0B1C35D6_GETSOURCERUNTIMEID_OFFSET))(this);
	}

	::RPG::GameCore::EventType GetEventType()
	{
		return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BBE7735E0B1C35D6_GETEVENTTYPE_OFFSET))(this);
	}
};
