#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterAlertLevel.h"
#include "unitysdk/RPG/GameCore/ST_Task_1.h"
#include "unitysdk/RPG/GameCore/StandByStance.h"

namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class ST_Side_OverrideStandByStance; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_3_A8BAFE4A769F67D5_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x176E5150)
#define CLASS_3_A8BAFE4A769F67D5_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x176E5290)
#define CLASS_3_A8BAFE4A769F67D5__CCTOR_OFFSET UNITYSDK_OFFSET(0x176E5320)
#define CLASS_3_A8BAFE4A769F67D5__CTOR_OFFSET UNITYSDK_OFFSET(0x176E5090)

inline static constexpr unsigned int Class_3_A8BAFE4A769F67D5_TypeDefinitionIndex = 52525;

class Class_3_A8BAFE4A769F67D5 : public ::RPG::GameCore::ST_Task_1<::RPG::GameCore::ST_Side_OverrideStandByStance*>
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::StandByStance, ::RPG::GameCore::CharacterAlertLevel>** StaticGet_IAAMIFJFLBA()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::StandByStance, ::RPG::GameCore::CharacterAlertLevel>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_A8BAFE4A769F67D5_TypeDefinitionIndex)->GetStaticField(0x65380);
	}
	::RPG::GameCore::AdventureCharacterController* CPIIOIPAAKK; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Side_OverrideStandByStance* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Side_OverrideStandByStance*))((::PBYTE)hIl2Cpp + CLASS_3_A8BAFE4A769F67D5__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_A8BAFE4A769F67D5__CCTOR_OFFSET))();
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A8BAFE4A769F67D5_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A8BAFE4A769F67D5_ONTASKRESET_OFFSET))(this);
	}
};
