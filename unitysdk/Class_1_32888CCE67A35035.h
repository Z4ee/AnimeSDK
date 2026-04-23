#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace Cinemachine { class CinemachineBrain; }
namespace Cinemachine { class CinemachineVirtualCamera; }
namespace RPG::GameCore { class GameWorld; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_1_32888CCE67A35035_METHOD_1_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x984E520)
#define CLASS_1_32888CCE67A35035_METHOD_1_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0x984DF70)
#define CLASS_1_32888CCE67A35035_METHOD_1_4A78800DAA72F0F2_OFFSET UNITYSDK_OFFSET(0x984E200)
#define CLASS_1_32888CCE67A35035_METHOD_1_53FE75B00F3A21BF_OFFSET UNITYSDK_OFFSET(0x984DD70)
#define CLASS_1_32888CCE67A35035_METHOD_1_E6F33C37D5337118_1_OFFSET UNITYSDK_OFFSET(0x984E070)
#define CLASS_1_32888CCE67A35035_METHOD_1_E6F33C37D5337118_OFFSET UNITYSDK_OFFSET(0x984DDE0)
#define CLASS_1_32888CCE67A35035_METHOD_1_EAD10B3E55E2C4C5_OFFSET UNITYSDK_OFFSET(0x984E270)
#define CLASS_1_32888CCE67A35035_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x984E670)
#define CLASS_1_32888CCE67A35035_ONPLUGININIT_OFFSET UNITYSDK_OFFSET(0x984DC00)
#define CLASS_1_32888CCE67A35035_ONPLUGINUNINIT_OFFSET UNITYSDK_OFFSET(0x984DC50)
#define CLASS_1_32888CCE67A35035__CTOR_OFFSET UNITYSDK_OFFSET(0x984E680)

inline static constexpr unsigned int Class_1_32888CCE67A35035_TypeDefinitionIndex = 53320;

class Class_1_32888CCE67A35035 : public ::System::Object
{
public:
	::Cinemachine::CinemachineBrain* Field_1_5; // 0x10
	::UnityEngine::Transform* Field_1_2; // 0x18
	::RPG::GameCore::GameWorld* Field_1_0; // 0x20
	::Cinemachine::CinemachineVirtualCamera* Field_1_4; // 0x28
	::UnityEngine::Transform* Field_1_3; // 0x30
	::UnityEngine::GameObject* Field_1_1; // 0x38
	::System::Boolean Field_1_6; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_32888CCE67A35035__CTOR_OFFSET))(this);
	}

	::System::Void OnPluginInit(::RPG::GameCore::GameWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameWorld*))((::PBYTE)hIl2Cpp + CLASS_1_32888CCE67A35035_ONPLUGININIT_OFFSET))(this, a1);
	}

	::System::Void OnPluginUninit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_32888CCE67A35035_ONPLUGINUNINIT_OFFSET))(this);
	}

	::System::Void Method_1_E6F33C37D5337118(::UnityEngine::Transform* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_32888CCE67A35035_METHOD_1_E6F33C37D5337118_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_E6F33C37D5337118_1(::UnityEngine::Transform* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_32888CCE67A35035_METHOD_1_E6F33C37D5337118_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_4A78800DAA72F0F2(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_32888CCE67A35035_METHOD_1_4A78800DAA72F0F2_OFFSET))(this, a1);
	}

	::System::Void Method_1_4307B2A4B4A12C1A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_32888CCE67A35035_METHOD_1_4307B2A4B4A12C1A_OFFSET))(this);
	}

	::System::Void Method_1_EAD10B3E55E2C4C5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_32888CCE67A35035_METHOD_1_EAD10B3E55E2C4C5_OFFSET))(this);
	}

	::System::Void Method_1_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_32888CCE67A35035_METHOD_1_41A074549EF25F63_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_32888CCE67A35035_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_53FE75B00F3A21BF(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_32888CCE67A35035_METHOD_1_53FE75B00F3A21BF_OFFSET))(this, a1);
	}
};
