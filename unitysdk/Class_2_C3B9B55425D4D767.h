#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/RPG/GameCore/AdvNavigationFailReason.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_A0580152EB393340;
namespace RPG::GameCore { class CharacterNavigateTo; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TransformComponent; }

#define CLASS_2_C3B9B55425D4D767_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1790A930)
#define CLASS_2_C3B9B55425D4D767_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0x1790A970)
#define CLASS_2_C3B9B55425D4D767_METHOD_2_3D8F0F1C6E55B9B6_OFFSET UNITYSDK_OFFSET(0x1790B460)
#define CLASS_2_C3B9B55425D4D767_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1790B410)
#define CLASS_2_C3B9B55425D4D767_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET UNITYSDK_OFFSET(0x1790B540)
#define CLASS_2_C3B9B55425D4D767_ONSKIP_OFFSET UNITYSDK_OFFSET(0x1790B4B0)
#define CLASS_2_C3B9B55425D4D767_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1790A980)
#define CLASS_2_C3B9B55425D4D767_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1790B300)
#define CLASS_2_C3B9B55425D4D767_TICK_OFFSET UNITYSDK_OFFSET(0x1790B3B0)
#define CLASS_2_C3B9B55425D4D767__CTOR_OFFSET UNITYSDK_OFFSET(0x1790A920)

inline static constexpr unsigned int Class_2_C3B9B55425D4D767_TypeDefinitionIndex = 58159;

class Class_2_C3B9B55425D4D767 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::CharacterNavigateTo* OFKGLJOAMLD; // 0x18
	::RPG::GameCore::TransformComponent* NIDHDAOGNKO; // 0x20
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x28
	::Class_2_A0580152EB393340* AGJDABDMMEH; // 0x30
	::UnityEngine::Quaternion MBOJLOPIEEK; // 0x38
	::UnityEngine::Vector3 KOGCFJCMFLD; // 0x48

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CharacterNavigateTo* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CharacterNavigateTo*))((::PBYTE)hIl2Cpp + CLASS_2_C3B9B55425D4D767__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C3B9B55425D4D767_DISPOSE_OFFSET))(this);
	}

	::System::Boolean get_ForceSkip()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C3B9B55425D4D767_GET_FORCESKIP_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C3B9B55425D4D767_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C3B9B55425D4D767_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C3B9B55425D4D767_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C3B9B55425D4D767_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_3D8F0F1C6E55B9B6(::RPG::GameCore::AdvNavigationFailReason a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdvNavigationFailReason))((::PBYTE)hIl2Cpp + CLASS_2_C3B9B55425D4D767_METHOD_2_3D8F0F1C6E55B9B6_OFFSET))(this, a1);
	}

	::System::Void OnSkip()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C3B9B55425D4D767_ONSKIP_OFFSET))(this);
	}

	::System::Void OnFinishImmediatelyInPerformance(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C3B9B55425D4D767_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET))(this, a1);
	}
};
