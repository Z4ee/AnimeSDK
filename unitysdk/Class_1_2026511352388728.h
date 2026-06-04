#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_1_2026511352388728_METHOD_1_03E2B9212B4B6EAF_OFFSET UNITYSDK_OFFSET(0xA70BDD0)
#define CLASS_1_2026511352388728_METHOD_1_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0xA70BE10)
#define CLASS_1_2026511352388728_METHOD_1_7DFA56F8BEA34783_OFFSET UNITYSDK_OFFSET(0xA70B860)
#define CLASS_1_2026511352388728_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xA70BD10)
#define CLASS_1_2026511352388728_METHOD_1_E34E0CE2E527F293_OFFSET UNITYSDK_OFFSET(0xA70BD90)
#define CLASS_1_2026511352388728__CTOR_OFFSET UNITYSDK_OFFSET(0xA70BEB0)

inline static constexpr unsigned int Class_1_2026511352388728_TypeDefinitionIndex = 67590;

class Class_1_2026511352388728 : public ::System::Object
{
public:
	::UnityEngine::Animation* Field_1_0; // 0x10
	::UnityEngine::GameObject* Field_1_1; // 0x18
	::RPG::GameCore::TurnBasedModifierInstance* Field_1_2; // 0x20
	::Il2CppArray<::System::String*>* Field_1_3; // 0x28
	::UnityEngine::Transform* Field_1_4; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2026511352388728__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_7DFA56F8BEA34783(::UnityEngine::Transform* a1, ::RPG::GameCore::TurnBasedModifierInstance* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_1_2026511352388728_METHOD_1_7DFA56F8BEA34783_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2026511352388728_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::RPG::GameCore::TurnBasedModifierInstance* Method_1_E34E0CE2E527F293()
	{
		return ((::RPG::GameCore::TurnBasedModifierInstance*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2026511352388728_METHOD_1_E34E0CE2E527F293_OFFSET))(this);
	}

	::UnityEngine::Transform* Method_1_03E2B9212B4B6EAF()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2026511352388728_METHOD_1_03E2B9212B4B6EAF_OFFSET))(this);
	}

	::System::Void Method_1_4307B2A4B4A12C1A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2026511352388728_METHOD_1_4307B2A4B4A12C1A_OFFSET))(this);
	}
};
