#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_A48F3719AA1CF200_3.h"

class Class_1_43BD383C98B4C0C5_25;
class Class_1_C376DB68B1C74261;
namespace MoleMole::Config { class ConfigUIActionSoundIntendingNode; }
namespace MoleMole::Config { class ConfigUIBaseScriptableAnimationNode; }
namespace MoleMole::Config { class UISpecialNumGroup; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define CLASS_3_64F433498033C706_GET_SOUNDACTIONSOURCEHINT_OFFSET UNITYSDK_OFFSET(0xFE32190)
#define CLASS_3_64F433498033C706_GET_SOUNDGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0xFE32180)
#define CLASS_3_64F433498033C706_METHOD_3_1C1D8F032CA6010E_OFFSET UNITYSDK_OFFSET(0xFE32530)
#define CLASS_3_64F433498033C706_METHOD_3_6CB77B844294EB6C_OFFSET UNITYSDK_OFFSET(0xFE32320)
#define CLASS_3_64F433498033C706_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xFE324A0)
#define CLASS_3_64F433498033C706_METHOD_3_DA75C361EBED2E92_OFFSET UNITYSDK_OFFSET(0xFE321D0)
#define CLASS_3_64F433498033C706__CTOR_OFFSET UNITYSDK_OFFSET(0xFE32490)

inline static constexpr unsigned int Class_3_64F433498033C706_TypeDefinitionIndex = 46780;

class Class_3_64F433498033C706 : public ::Class_2_A48F3719AA1CF200_3
{
public:
	::MoleMole::Config::ConfigUIActionSoundIntendingNode* Field_3_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_64F433498033C706__CTOR_OFFSET))(this);
	}

	::UnityEngine::GameObject* get_soundGameObject()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_64F433498033C706_GET_SOUNDGAMEOBJECT_OFFSET))(this);
	}

	::System::String* get_soundActionSourceHint()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_64F433498033C706_GET_SOUNDACTIONSOURCEHINT_OFFSET))(this);
	}

	::System::Void Method_3_DA75C361EBED2E92(::MoleMole::Config::ConfigUIBaseScriptableAnimationNode* a1, ::Class_1_43BD383C98B4C0C5_25* a2, ::MoleMole::Config::UISpecialNumGroup* a3, ::Class_1_C376DB68B1C74261* a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIBaseScriptableAnimationNode*, ::Class_1_43BD383C98B4C0C5_25*, ::MoleMole::Config::UISpecialNumGroup*, ::Class_1_C376DB68B1C74261*))((::PBYTE)hIl2Cpp + CLASS_3_64F433498033C706_METHOD_3_DA75C361EBED2E92_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_3_6CB77B844294EB6C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_64F433498033C706_METHOD_3_6CB77B844294EB6C_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_64F433498033C706_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_3_1C1D8F032CA6010E(::MoleMole::Config::ConfigUIBaseScriptableAnimationNode* a1, ::Class_1_43BD383C98B4C0C5_25* a2, ::MoleMole::Config::UISpecialNumGroup* a3, ::Class_1_C376DB68B1C74261* a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIBaseScriptableAnimationNode*, ::Class_1_43BD383C98B4C0C5_25*, ::MoleMole::Config::UISpecialNumGroup*, ::Class_1_C376DB68B1C74261*))((::PBYTE)hIl2Cpp + CLASS_3_64F433498033C706_METHOD_3_1C1D8F032CA6010E_OFFSET))(this, a1, a2, a3, a4);
	}
};
