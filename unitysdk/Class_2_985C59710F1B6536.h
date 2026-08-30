#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/RPG/GameCore/AdvNavigationFailReason.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_A0580152EB393340;
namespace RPG::GameCore { class AdvAINavigateTo; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TransformComponent; }
namespace System { class String; }

#define CLASS_2_985C59710F1B6536_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB8F3F30)
#define CLASS_2_985C59710F1B6536_METHOD_2_3D8F0F1C6E55B9B6_OFFSET UNITYSDK_OFFSET(0xB8F4AB0)
#define CLASS_2_985C59710F1B6536_METHOD_2_8F5E775A33818F1D_OFFSET UNITYSDK_OFFSET(0xB8F4310)
#define CLASS_2_985C59710F1B6536_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xB8F4A60)
#define CLASS_2_985C59710F1B6536_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET UNITYSDK_OFFSET(0xB8F4B50)
#define CLASS_2_985C59710F1B6536_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB8F3FD0)
#define CLASS_2_985C59710F1B6536_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB8F4B00)
#define CLASS_2_985C59710F1B6536_TICK_OFFSET UNITYSDK_OFFSET(0xB8F3F70)
#define CLASS_2_985C59710F1B6536__CTOR_OFFSET UNITYSDK_OFFSET(0xB8F3F20)

inline static constexpr unsigned int Class_2_985C59710F1B6536_TypeDefinitionIndex = 52605;

class Class_2_985C59710F1B6536 : public ::Class_1_5F51D4049EA87B7B
{
public:
	// static const ::System::String* KCPEIIACMHC; // 0x0
	::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x18
	::RPG::GameCore::AdvAINavigateTo* IGHAHBNLIJA; // 0x20
	::RPG::GameCore::TransformComponent* NIDHDAOGNKO; // 0x28
	::Class_2_A0580152EB393340* AGJDABDMMEH; // 0x30
	::UnityEngine::Quaternion MBOJLOPIEEK; // 0x38
	::UnityEngine::Vector3 KOGCFJCMFLD; // 0x48

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvAINavigateTo* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvAINavigateTo*))((::PBYTE)hIl2Cpp + CLASS_2_985C59710F1B6536__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_985C59710F1B6536_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_985C59710F1B6536_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_985C59710F1B6536_ONTASKBEGIN_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_2_8F5E775A33818F1D(::RPG::GameCore::GameEntity* a1, ::UnityEngine::Quaternion& a2)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + CLASS_2_985C59710F1B6536_METHOD_2_8F5E775A33818F1D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_985C59710F1B6536_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_3D8F0F1C6E55B9B6(::RPG::GameCore::AdvNavigationFailReason a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdvNavigationFailReason))((::PBYTE)hIl2Cpp + CLASS_2_985C59710F1B6536_METHOD_2_3D8F0F1C6E55B9B6_OFFSET))(this, a1);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_985C59710F1B6536_ONTASKRESET_OFFSET))(this);
	}

	::System::Void OnFinishImmediatelyInPerformance(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_985C59710F1B6536_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET))(this, a1);
	}
};
