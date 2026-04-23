#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterAlertLevel.h"
#include "unitysdk/RPG/GameCore/ST_Task_1.h"
#include "unitysdk/RPG/GameCore/StandByStance.h"

namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class ST_Side_OverrideStandByStance; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_3_D51065E8829795C2_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x8FD1110)
#define CLASS_3_D51065E8829795C2_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x8FD1250)
#define CLASS_3_D51065E8829795C2__CCTOR_OFFSET UNITYSDK_OFFSET(0x8FD12E0)
#define CLASS_3_D51065E8829795C2__CTOR_OFFSET UNITYSDK_OFFSET(0x8FD10B0)

inline static constexpr unsigned int Class_3_D51065E8829795C2_TypeDefinitionIndex = 48227;

class Class_3_D51065E8829795C2 : public ::RPG::GameCore::ST_Task_1<::RPG::GameCore::ST_Side_OverrideStandByStance*>
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::StandByStance, ::RPG::GameCore::CharacterAlertLevel>** StaticGet_Field_3_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::StandByStance, ::RPG::GameCore::CharacterAlertLevel>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_D51065E8829795C2_TypeDefinitionIndex)->GetStaticField(0x648F0);
	}
	::RPG::GameCore::AdventureCharacterController* Field_3_1; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Side_OverrideStandByStance* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Side_OverrideStandByStance*))((::PBYTE)hIl2Cpp + CLASS_3_D51065E8829795C2__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_D51065E8829795C2__CCTOR_OFFSET))();
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D51065E8829795C2_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D51065E8829795C2_ONTASKRESET_OFFSET))(this);
	}
};
