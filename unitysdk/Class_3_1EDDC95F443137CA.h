#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_1_BB62CC0FD1E45ADE_8;
namespace RPG::GameCore { class ShowBattleWhiteboxImage; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_1EDDC95F443137CA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x162CEA50)
#define CLASS_3_1EDDC95F443137CA__CTOR_OFFSET UNITYSDK_OFFSET(0x162CEA20)

inline static constexpr unsigned int Class_3_1EDDC95F443137CA_TypeDefinitionIndex = 55991;

class Class_3_1EDDC95F443137CA : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::ShowBattleWhiteboxImage*>
{
public:
	::Class_1_BB62CC0FD1E45ADE_8* Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowBattleWhiteboxImage* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowBattleWhiteboxImage*))((::PBYTE)hIl2Cpp + CLASS_3_1EDDC95F443137CA__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1EDDC95F443137CA_ONTASKBEGIN_OFFSET))(this);
	}
};
