#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_644D771B8B2368F7.h"
#include "unitysdk/RPG/GameCore/CharacterMotionFlag.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_B8A2655E847BD94F_METHOD_3_28F815C49D235C59_OFFSET UNITYSDK_OFFSET(0x134C3CA0)
#define CLASS_3_B8A2655E847BD94F_METHOD_3_391A84BCD9F51317_1_OFFSET UNITYSDK_OFFSET(0x134C4290)
#define CLASS_3_B8A2655E847BD94F_METHOD_3_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x134C4240)
#define CLASS_3_B8A2655E847BD94F_METHOD_3_793A2558AB05F9C8_OFFSET UNITYSDK_OFFSET(0x134C3E70)
#define CLASS_3_B8A2655E847BD94F__CTOR_OFFSET UNITYSDK_OFFSET(0x134C3C00)

inline static constexpr unsigned int Class_3_B8A2655E847BD94F_TypeDefinitionIndex = 52687;

class Class_3_B8A2655E847BD94F : public ::Class_2_644D771B8B2368F7
{
public:
	::System::Single HPGOEGGJOHM; // 0xE0
	::System::Single KJOPNHHEANI; // 0xE4

	::System::Void _ctor(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_B8A2655E847BD94F__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_28F815C49D235C59(::UnityEngine::Vector3& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_3_B8A2655E847BD94F_METHOD_3_28F815C49D235C59_OFFSET))(this, a1);
	}

	::System::Void Method_3_793A2558AB05F9C8(::RPG::GameCore::CharacterMotionFlag a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::RPG::GameCore::TaskContext* a6, ::RPG::GameCore::TaskConfig* a7, ::System::Single a8, ::System::Single a9, ::System::Single a10, ::System::Single a11, ::System::Single a12, ::System::Boolean a13, ::System::Single a14, ::System::Single a15)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterMotionFlag, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TaskConfig*, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Boolean, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_B8A2655E847BD94F_METHOD_3_793A2558AB05F9C8_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15);
	}

	::System::Boolean Method_3_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B8A2655E847BD94F_METHOD_3_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Boolean Method_3_391A84BCD9F51317_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B8A2655E847BD94F_METHOD_3_391A84BCD9F51317_1_OFFSET))(this);
	}
};
