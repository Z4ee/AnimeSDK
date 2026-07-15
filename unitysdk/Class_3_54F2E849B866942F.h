#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_424581DF7DB1F4F0_Struct_2_74774458D8863C06.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_1_BB62CC0FD1E45ADE_7;
namespace RPG::GameCore { class ShowBattleWhiteboxText; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_54F2E849B866942F_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1797F960)
#define CLASS_3_54F2E849B866942F__CTOR_OFFSET UNITYSDK_OFFSET(0x1797F8A0)

inline static constexpr unsigned int Class_3_54F2E849B866942F_TypeDefinitionIndex = 55989;

class Class_3_54F2E849B866942F : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::ShowBattleWhiteboxText*>
{
public:
	::Class_1_BB62CC0FD1E45ADE_7* Field_3_0; // 0x28
	::System::Collections::Generic::List_1<::Class_1_424581DF7DB1F4F0_Struct_2_74774458D8863C06>* Field_3_1; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowBattleWhiteboxText* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowBattleWhiteboxText*))((::PBYTE)hIl2Cpp + CLASS_3_54F2E849B866942F__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_54F2E849B866942F_ONTASKBEGIN_OFFSET))(this);
	}
};
