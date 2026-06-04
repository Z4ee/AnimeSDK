#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/RPG/GameCore/AdvNavigationFailReason.h"
#include "unitysdk/UnityEngine/Quaternion.h"

class Class_2_A0580152EB393340;
namespace RPG::GameCore { class CharacterSteerTo; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TransformComponent; }

#define CLASS_2_B6158E40783E6168_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAC7C520)
#define CLASS_2_B6158E40783E6168_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0xAC7C830)
#define CLASS_2_B6158E40783E6168_METHOD_2_3D8F0F1C6E55B9B6_OFFSET UNITYSDK_OFFSET(0xAC7C670)
#define CLASS_2_B6158E40783E6168_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xAC7C620)
#define CLASS_2_B6158E40783E6168_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET UNITYSDK_OFFSET(0xAC7C750)
#define CLASS_2_B6158E40783E6168_ONSKIP_OFFSET UNITYSDK_OFFSET(0xAC7C6C0)
#define CLASS_2_B6158E40783E6168_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xAC7C010)
#define CLASS_2_B6158E40783E6168_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xAC7C570)
#define CLASS_2_B6158E40783E6168_TICK_OFFSET UNITYSDK_OFFSET(0xAC7C5C0)
#define CLASS_2_B6158E40783E6168__CTOR_OFFSET UNITYSDK_OFFSET(0xAC7C000)

inline static constexpr unsigned int Class_2_B6158E40783E6168_TypeDefinitionIndex = 54206;

class Class_2_B6158E40783E6168 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::RPG::GameCore::CharacterSteerTo* Field_2_1; // 0x20
	::RPG::GameCore::TransformComponent* Field_2_2; // 0x28
	::Class_2_A0580152EB393340* Field_2_3; // 0x30
	::UnityEngine::Quaternion Field_2_4; // 0x38

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CharacterSteerTo* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CharacterSteerTo*))((::PBYTE)hIl2Cpp + CLASS_2_B6158E40783E6168__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B6158E40783E6168_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B6158E40783E6168_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B6158E40783E6168_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_B6158E40783E6168_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B6158E40783E6168_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_3D8F0F1C6E55B9B6(::RPG::GameCore::AdvNavigationFailReason a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdvNavigationFailReason))((::PBYTE)hIl2Cpp + CLASS_2_B6158E40783E6168_METHOD_2_3D8F0F1C6E55B9B6_OFFSET))(this, a1);
	}

	::System::Void OnSkip()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B6158E40783E6168_ONSKIP_OFFSET))(this);
	}

	::System::Void OnFinishImmediatelyInPerformance(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_B6158E40783E6168_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET))(this, a1);
	}

	::System::Boolean get_ForceSkip()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B6158E40783E6168_GET_FORCESKIP_OFFSET))(this);
	}
};
