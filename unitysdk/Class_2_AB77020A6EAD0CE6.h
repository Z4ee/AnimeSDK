#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class MarbleDragGuideConfig; }
namespace RPG::GameCore { class MarbleWaitBattleInput; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_AB77020A6EAD0CE6_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15F35FC0)
#define CLASS_2_AB77020A6EAD0CE6_METHOD_2_B00A1D822E6F5C31_OFFSET UNITYSDK_OFFSET(0x15F36B50)
#define CLASS_2_AB77020A6EAD0CE6_METHOD_2_B06F516E4459C742_OFFSET UNITYSDK_OFFSET(0x15F36010)
#define CLASS_2_AB77020A6EAD0CE6_METHOD_2_B2075E9BC242D024_OFFSET UNITYSDK_OFFSET(0x15F36480)
#define CLASS_2_AB77020A6EAD0CE6_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15F36200)
#define CLASS_2_AB77020A6EAD0CE6_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15F36AA0)
#define CLASS_2_AB77020A6EAD0CE6_TICK_OFFSET UNITYSDK_OFFSET(0x15F36AF0)
#define CLASS_2_AB77020A6EAD0CE6__CTOR_OFFSET UNITYSDK_OFFSET(0x15F35FB0)

inline static constexpr unsigned int Class_2_AB77020A6EAD0CE6_TypeDefinitionIndex = 49926;

class Class_2_AB77020A6EAD0CE6 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::RPG::GameCore::MarbleWaitBattleInput* Field_2_1; // 0x20
	::System::Boolean Field_2_2; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::MarbleWaitBattleInput* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::MarbleWaitBattleInput*))((::PBYTE)hIl2Cpp + CLASS_2_AB77020A6EAD0CE6__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AB77020A6EAD0CE6_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AB77020A6EAD0CE6_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AB77020A6EAD0CE6_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_AB77020A6EAD0CE6_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_B00A1D822E6F5C31()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AB77020A6EAD0CE6_METHOD_2_B00A1D822E6F5C31_OFFSET))(this);
	}

	::System::Void Method_2_B06F516E4459C742()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AB77020A6EAD0CE6_METHOD_2_B06F516E4459C742_OFFSET))(this);
	}

	::RPG::GameCore::MarbleDragGuideConfig* Method_2_B2075E9BC242D024()
	{
		return ((::RPG::GameCore::MarbleDragGuideConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AB77020A6EAD0CE6_METHOD_2_B2075E9BC242D024_OFFSET))(this);
	}
};
