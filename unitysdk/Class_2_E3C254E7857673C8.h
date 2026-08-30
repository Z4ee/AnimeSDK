#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_8BDC5FAA8163256A.h"
#include "unitysdk/RPG/GameCore/DiceCombatSkillPreviewInvokeType.h"

class Class_2_3616FDE8A71D0590;
class Class_4_79E380B8FEE3115F;
namespace RPG::GameCore { class DiceCombatNotAvatarPreviewConfig; }

#define CLASS_2_E3C254E7857673C8_METHOD_2_3207497D85D64F9A_OFFSET UNITYSDK_OFFSET(0x1C0B3290)
#define CLASS_2_E3C254E7857673C8__CTOR_OFFSET UNITYSDK_OFFSET(0x1C0B3280)

inline static constexpr unsigned int Class_2_E3C254E7857673C8_TypeDefinitionIndex = 35737;

class Class_2_E3C254E7857673C8 : public ::Class_1_8BDC5FAA8163256A
{
public:
	::System::Void _ctor(::Class_4_79E380B8FEE3115F* a1, ::Class_2_3616FDE8A71D0590* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_4_79E380B8FEE3115F*, ::Class_2_3616FDE8A71D0590*))((::PBYTE)hIl2Cpp + CLASS_2_E3C254E7857673C8__CTOR_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::DiceCombatNotAvatarPreviewConfig* Method_2_3207497D85D64F9A(::System::UInt32 a1, ::RPG::GameCore::DiceCombatSkillPreviewInvokeType a2)
	{
		return ((::RPG::GameCore::DiceCombatNotAvatarPreviewConfig*(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::DiceCombatSkillPreviewInvokeType))((::PBYTE)hIl2Cpp + CLASS_2_E3C254E7857673C8_METHOD_2_3207497D85D64F9A_OFFSET))(this, a1, a2);
	}
};
