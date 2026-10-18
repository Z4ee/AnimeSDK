#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_1_1009A685370873D6_METHOD_1_03E2B9212B4B6EAF_OFFSET UNITYSDK_OFFSET(0xB8BC1E0)
#define CLASS_1_1009A685370873D6_METHOD_1_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0xB8BC220)
#define CLASS_1_1009A685370873D6_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xB8BC120)
#define CLASS_1_1009A685370873D6_METHOD_1_D419F5C983AC8576_OFFSET UNITYSDK_OFFSET(0xB8BBB50)
#define CLASS_1_1009A685370873D6_METHOD_1_E34E0CE2E527F293_OFFSET UNITYSDK_OFFSET(0xB8BC1A0)
#define CLASS_1_1009A685370873D6__CTOR_OFFSET UNITYSDK_OFFSET(0xB8BC2C0)

inline static constexpr unsigned int Class_1_1009A685370873D6_TypeDefinitionIndex = 72346;

class Class_1_1009A685370873D6 : public ::System::Object
{
public:
	::UnityEngine::Transform* PAAPGIOKLKO; // 0x10
	::UnityEngine::GameObject* ODGHHCHLMOP; // 0x18
	::UnityEngine::Animation* NDFKDAAHIBN; // 0x20
	::RPG::GameCore::TurnBasedModifierInstance* KMODPFBDEPE; // 0x28
	::Il2CppArray<::System::String*>* OLNMCMCCNPE; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1009A685370873D6__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_D419F5C983AC8576(::UnityEngine::Transform* a1, ::RPG::GameCore::TurnBasedModifierInstance* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_1_1009A685370873D6_METHOD_1_D419F5C983AC8576_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1009A685370873D6_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::RPG::GameCore::TurnBasedModifierInstance* Method_1_E34E0CE2E527F293()
	{
		return ((::RPG::GameCore::TurnBasedModifierInstance*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1009A685370873D6_METHOD_1_E34E0CE2E527F293_OFFSET))(this);
	}

	::UnityEngine::Transform* Method_1_03E2B9212B4B6EAF()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1009A685370873D6_METHOD_1_03E2B9212B4B6EAF_OFFSET))(this);
	}

	::System::Void Method_1_4307B2A4B4A12C1A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1009A685370873D6_METHOD_1_4307B2A4B4A12C1A_OFFSET))(this);
	}
};
