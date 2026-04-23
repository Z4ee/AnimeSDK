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

#define CLASS_2_985C59710F1B6536_DISPOSE_OFFSET UNITYSDK_OFFSET(0x958EB20)
#define CLASS_2_985C59710F1B6536_METHOD_2_3D8F0F1C6E55B9B6_OFFSET UNITYSDK_OFFSET(0x958F6A0)
#define CLASS_2_985C59710F1B6536_METHOD_2_8F5E775A33818F1D_OFFSET UNITYSDK_OFFSET(0x958EEE0)
#define CLASS_2_985C59710F1B6536_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x958F650)
#define CLASS_2_985C59710F1B6536_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET UNITYSDK_OFFSET(0x958F740)
#define CLASS_2_985C59710F1B6536_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x958EBC0)
#define CLASS_2_985C59710F1B6536_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x958F6F0)
#define CLASS_2_985C59710F1B6536_TICK_OFFSET UNITYSDK_OFFSET(0x958EB60)
#define CLASS_2_985C59710F1B6536__CTOR_OFFSET UNITYSDK_OFFSET(0x958EB10)

inline static constexpr unsigned int Class_2_985C59710F1B6536_TypeDefinitionIndex = 48305;

class Class_2_985C59710F1B6536 : public ::Class_1_5F51D4049EA87B7B
{
public:
	// static const ::System::String* Field_2_6; // 0x0
	::RPG::GameCore::TransformComponent* Field_2_3; // 0x18
	::RPG::GameCore::AdvAINavigateTo* Field_2_0; // 0x20
	::Class_2_A0580152EB393340* Field_2_2; // 0x28
	::RPG::GameCore::TaskContext* Field_2_1; // 0x30
	::UnityEngine::Quaternion Field_2_5; // 0x38
	::UnityEngine::Vector3 Field_2_4; // 0x48

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
