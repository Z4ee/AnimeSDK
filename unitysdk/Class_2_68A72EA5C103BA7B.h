#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A4D62D05D5EA8464;
class Class_2_FDFE69FE7B72463B;
class UIControllerExtensionData;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::Playables { class PlayableDirector; }

#define CLASS_2_68A72EA5C103BA7B_METHOD_2_9A4D8B3D924EA81A_OFFSET UNITYSDK_OFFSET(0x1158A3F0)
#define CLASS_2_68A72EA5C103BA7B_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x1158A5A0)
#define CLASS_2_68A72EA5C103BA7B__CTOR_OFFSET UNITYSDK_OFFSET(0x1158A590)

inline static constexpr unsigned int Class_2_68A72EA5C103BA7B_TypeDefinitionIndex = 82520;

class Class_2_68A72EA5C103BA7B : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::GameObject* Field_2_11; // 0x18
	::UnityEngine::GameObject* Field_2_10; // 0x20
	::UnityEngine::GameObject* Field_2_4; // 0x28
	::UnityEngine::GameObject* Field_2_5; // 0x30
	::Class_2_FDFE69FE7B72463B* Field_2_1; // 0x38
	::UnityEngine::Transform* Field_2_0; // 0x40
	::UnityEngine::Camera* Field_2_2; // 0x48
	::UnityEngine::Playables::PlayableDirector* Field_2_6; // 0x50
	::UIControllerExtensionData* Field_2_7; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_68A72EA5C103BA7B__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_9A4D8B3D924EA81A(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_68A72EA5C103BA7B_METHOD_2_9A4D8B3D924EA81A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_68A72EA5C103BA7B_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
