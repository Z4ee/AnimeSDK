#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class BattleInstance; }
namespace RPG::GameCore { class LevelUIComponent; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_1_1EDFFB645AFD9A3E_METHOD_1_6747250BC2D13457_OFFSET UNITYSDK_OFFSET(0xDE324A0)
#define CLASS_1_1EDFFB645AFD9A3E_METHOD_1_A8B5DD81FACB4C81_OFFSET UNITYSDK_OFFSET(0xDE32690)
#define CLASS_1_1EDFFB645AFD9A3E_METHOD_1_ADF45F4E823CC047_OFFSET UNITYSDK_OFFSET(0xDE329A0)
#define CLASS_1_1EDFFB645AFD9A3E_METHOD_1_F8BFB17B3DD6568D_OFFSET UNITYSDK_OFFSET(0xDE32440)
#define CLASS_1_1EDFFB645AFD9A3E__CTOR_OFFSET UNITYSDK_OFFSET(0xDE32A80)

inline static constexpr unsigned int Class_1_1EDFFB645AFD9A3E_TypeDefinitionIndex = 59016;

class Class_1_1EDFFB645AFD9A3E : public ::System::Object
{
public:
	::RPG::GameCore::LevelUIComponent* Field_1_0; // 0x10
	::System::Collections::Generic::HashSet_1<::System::String*>* Field_1_2; // 0x18
	::RPG::GameCore::BattleInstance* Field_1_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1EDFFB645AFD9A3E__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_F8BFB17B3DD6568D(::RPG::GameCore::BattleInstance* a1, ::RPG::GameCore::LevelUIComponent* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleInstance*, ::RPG::GameCore::LevelUIComponent*))((::PBYTE)hIl2Cpp + CLASS_1_1EDFFB645AFD9A3E_METHOD_1_F8BFB17B3DD6568D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_6747250BC2D13457()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1EDFFB645AFD9A3E_METHOD_1_6747250BC2D13457_OFFSET))(this);
	}

	::UnityEngine::GameObject* Method_1_A8B5DD81FACB4C81(::System::String* a1, ::UnityEngine::Transform* a2)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::String*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_1EDFFB645AFD9A3E_METHOD_1_A8B5DD81FACB4C81_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_ADF45F4E823CC047(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_1EDFFB645AFD9A3E_METHOD_1_ADF45F4E823CC047_OFFSET))(this, a1);
	}
};
