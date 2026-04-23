#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class BattleInstance; }
namespace RPG::GameCore { class GameWorld; }
namespace RPG::GameCore { class LevelUIComponent; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_1_F7F129640441419D_METHOD_1_ADF45F4E823CC047_OFFSET UNITYSDK_OFFSET(0xD350D70)
#define CLASS_1_F7F129640441419D_METHOD_1_F4C7C95EC2697696_OFFSET UNITYSDK_OFFSET(0xD350A30)
#define CLASS_1_F7F129640441419D_ONPLUGININIT_OFFSET UNITYSDK_OFFSET(0xD3507C0)
#define CLASS_1_F7F129640441419D_ONPLUGINUNINIT_OFFSET UNITYSDK_OFFSET(0xD350850)
#define CLASS_1_F7F129640441419D__CTOR_OFFSET UNITYSDK_OFFSET(0xD350E50)

inline static constexpr unsigned int Class_1_F7F129640441419D_TypeDefinitionIndex = 66387;

class Class_1_F7F129640441419D : public ::System::Object
{
public:
	::RPG::GameCore::LevelUIComponent* Field_1_0; // 0x10
	::RPG::GameCore::BattleInstance* Field_1_1; // 0x18
	::System::Collections::Generic::HashSet_1<::System::String*>* Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F7F129640441419D__CTOR_OFFSET))(this);
	}

	::System::Void OnPluginInit(::RPG::GameCore::GameWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameWorld*))((::PBYTE)hIl2Cpp + CLASS_1_F7F129640441419D_ONPLUGININIT_OFFSET))(this, a1);
	}

	::System::Void OnPluginUninit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F7F129640441419D_ONPLUGINUNINIT_OFFSET))(this);
	}

	::UnityEngine::GameObject* Method_1_F4C7C95EC2697696(::System::String* a1, ::UnityEngine::Transform* a2)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::String*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_F7F129640441419D_METHOD_1_F4C7C95EC2697696_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_ADF45F4E823CC047(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_F7F129640441419D_METHOD_1_ADF45F4E823CC047_OFFSET))(this, a1);
	}
};
