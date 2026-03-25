#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvNavigationFailReason.h"
#include "unitysdk/RPG/GameCore/CharacterMotionFlag.h"
#include "unitysdk/RPG/GameCore/ST_Task_1.h"

class Class_2_19E76B515E7B257C;
class Class_2_A0580152EB393340;
namespace RPG::GameCore { class AdventureAbilityComponent; }
namespace RPG::GameCore { class ST_Main_MoveAlongPath; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_F3BF0D520A566B80_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10B74650)
#define CLASS_3_F3BF0D520A566B80_METHOD_3_3D8F0F1C6E55B9B6_OFFSET UNITYSDK_OFFSET(0x10B74AD0)
#define CLASS_3_F3BF0D520A566B80_METHOD_3_455E250D679F9642_OFFSET UNITYSDK_OFFSET(0x10B74910)
#define CLASS_3_F3BF0D520A566B80_METHOD_3_7AFDBF811FBF265E_OFFSET UNITYSDK_OFFSET(0x10B74850)
#define CLASS_3_F3BF0D520A566B80_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x10B746A0)
#define CLASS_3_F3BF0D520A566B80_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x10B74B20)
#define CLASS_3_F3BF0D520A566B80__CTOR_OFFSET UNITYSDK_OFFSET(0x10B74580)
#define CLASS_3_F3BF0D520A566B80___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10B74BC0)

inline static constexpr unsigned int Class_3_F3BF0D520A566B80_TypeDefinitionIndex = 42237;

class Class_3_F3BF0D520A566B80 : public ::RPG::GameCore::ST_Task_1<::RPG::GameCore::ST_Main_MoveAlongPath*>
{
public:
	::Class_2_19E76B515E7B257C* Field_3_0; // 0x28
	::RPG::GameCore::AdventureAbilityComponent* Field_3_2; // 0x30
	::Class_2_A0580152EB393340* Field_3_1; // 0x38

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Main_MoveAlongPath* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Main_MoveAlongPath*))((::PBYTE)hIl2Cpp + CLASS_3_F3BF0D520A566B80__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F3BF0D520A566B80_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F3BF0D520A566B80_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_3_455E250D679F9642()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F3BF0D520A566B80_METHOD_3_455E250D679F9642_OFFSET))(this);
	}

	::System::Void Method_3_3D8F0F1C6E55B9B6(::RPG::GameCore::AdvNavigationFailReason a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdvNavigationFailReason))((::PBYTE)hIl2Cpp + CLASS_3_F3BF0D520A566B80_METHOD_3_3D8F0F1C6E55B9B6_OFFSET))(this, a1);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F3BF0D520A566B80_ONTASKRESET_OFFSET))(this);
	}

	::RPG::GameCore::CharacterMotionFlag Method_3_7AFDBF811FBF265E()
	{
		return ((::RPG::GameCore::CharacterMotionFlag(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F3BF0D520A566B80_METHOD_3_7AFDBF811FBF265E_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F3BF0D520A566B80___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
