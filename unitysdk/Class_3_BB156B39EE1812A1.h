#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvNavigationFailReason.h"
#include "unitysdk/RPG/GameCore/CharacterMotionFlag.h"
#include "unitysdk/RPG/GameCore/ECharacterNavSteerMode.h"
#include "unitysdk/RPG/GameCore/ST_Task_1.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_A0580152EB393340;
namespace RPG::GameCore { class AdventureAbilityComponent; }
namespace RPG::GameCore { class ST_Main_MoveToPosition; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_BB156B39EE1812A1_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17F27A10)
#define CLASS_3_BB156B39EE1812A1_METHOD_3_3D8F0F1C6E55B9B6_OFFSET UNITYSDK_OFFSET(0x17F28A10)
#define CLASS_3_BB156B39EE1812A1_METHOD_3_5F8970945F558C42_OFFSET UNITYSDK_OFFSET(0x17F286E0)
#define CLASS_3_BB156B39EE1812A1_METHOD_3_767EB8290F622299_OFFSET UNITYSDK_OFFSET(0x17F281C0)
#define CLASS_3_BB156B39EE1812A1_METHOD_3_A58C6FE876BCB0BF_OFFSET UNITYSDK_OFFSET(0x17F28680)
#define CLASS_3_BB156B39EE1812A1_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x17F289B0)
#define CLASS_3_BB156B39EE1812A1_METHOD_3_E460F04F840ABD8A_OFFSET UNITYSDK_OFFSET(0x17F285C0)
#define CLASS_3_BB156B39EE1812A1_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17F27A60)
#define CLASS_3_BB156B39EE1812A1_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x17F28A70)
#define CLASS_3_BB156B39EE1812A1_TICK_OFFSET UNITYSDK_OFFSET(0x17F287F0)
#define CLASS_3_BB156B39EE1812A1__CTOR_OFFSET UNITYSDK_OFFSET(0x17F27950)

inline static constexpr unsigned int Class_3_BB156B39EE1812A1_TypeDefinitionIndex = 49835;

class Class_3_BB156B39EE1812A1 : public ::RPG::GameCore::ST_Task_1<::RPG::GameCore::ST_Main_MoveToPosition*>
{
public:
	::RPG::GameCore::AdventureAbilityComponent* Field_3_0; // 0x28
	::Class_2_A0580152EB393340* Field_3_1; // 0x30
	::UnityEngine::Quaternion Field_3_2; // 0x38
	::System::Single Field_3_3; // 0x48
	::System::Single Field_3_4; // 0x4C
	::UnityEngine::Vector3 Field_3_5; // 0x50

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Main_MoveToPosition* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Main_MoveToPosition*))((::PBYTE)hIl2Cpp + CLASS_3_BB156B39EE1812A1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BB156B39EE1812A1_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BB156B39EE1812A1_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_BB156B39EE1812A1_TICK_OFFSET))(this, a1);
	}

	::System::Nullable_1<::RPG::GameCore::ECharacterNavSteerMode> Method_3_A58C6FE876BCB0BF()
	{
		return ((::System::Nullable_1<::RPG::GameCore::ECharacterNavSteerMode>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BB156B39EE1812A1_METHOD_3_A58C6FE876BCB0BF_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BB156B39EE1812A1_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_3_3D8F0F1C6E55B9B6(::RPG::GameCore::AdvNavigationFailReason a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdvNavigationFailReason))((::PBYTE)hIl2Cpp + CLASS_3_BB156B39EE1812A1_METHOD_3_3D8F0F1C6E55B9B6_OFFSET))(this, a1);
	}

	::System::Void Method_3_5F8970945F558C42(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_BB156B39EE1812A1_METHOD_3_5F8970945F558C42_OFFSET))(this, a1);
	}

	::RPG::GameCore::CharacterMotionFlag Method_3_E460F04F840ABD8A()
	{
		return ((::RPG::GameCore::CharacterMotionFlag(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BB156B39EE1812A1_METHOD_3_E460F04F840ABD8A_OFFSET))(this);
	}

	::System::Boolean Method_3_767EB8290F622299(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_3_BB156B39EE1812A1_METHOD_3_767EB8290F622299_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BB156B39EE1812A1_ONTASKRESET_OFFSET))(this);
	}
};
