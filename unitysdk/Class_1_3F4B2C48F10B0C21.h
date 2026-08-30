#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class AnimatorButton; }
namespace RPG::Client { class CustomButton_VoidDelegate; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace UnityEngine { class GameObject; }
template <typename T> class Class_0_16E4307DCC419505_320;

#define CLASS_1_3F4B2C48F10B0C21_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A4334C0)
#define CLASS_1_3F4B2C48F10B0C21_METHOD_1_ADF45F4E823CC047_OFFSET UNITYSDK_OFFSET(0x1A433420)
#define CLASS_1_3F4B2C48F10B0C21__CTOR_OFFSET UNITYSDK_OFFSET(0x1A433370)

inline static constexpr unsigned int Class_1_3F4B2C48F10B0C21_TypeDefinitionIndex = 50243;

class Class_1_3F4B2C48F10B0C21 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_320<::UnityEngine::GameObject*>* MKKLHFCCCNF; // 0x10
	::RPG::Client::AnimatorButton* AAFGIHCCPOP; // 0x18
	::RPG::Client::CustomButton_VoidDelegate* MBOEDFCNCJF; // 0x20
	::System::Action_2<::RPG::Client::AnimatorButton*, ::RPG::Client::CustomButton_VoidDelegate*>* GBMLHDDJMJM; // 0x28

	::System::Void _ctor(::RPG::Client::AnimatorButton* a1, ::Class_0_16E4307DCC419505_320<::UnityEngine::GameObject*>* a2, ::System::Action_2<::RPG::Client::AnimatorButton*, ::RPG::Client::CustomButton_VoidDelegate*>* a3, ::System::Action_2<::RPG::Client::AnimatorButton*, ::RPG::Client::CustomButton_VoidDelegate*>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::AnimatorButton*, ::Class_0_16E4307DCC419505_320<::UnityEngine::GameObject*>*, ::System::Action_2<::RPG::Client::AnimatorButton*, ::RPG::Client::CustomButton_VoidDelegate*>*, ::System::Action_2<::RPG::Client::AnimatorButton*, ::RPG::Client::CustomButton_VoidDelegate*>*))((::PBYTE)hIl2Cpp + CLASS_1_3F4B2C48F10B0C21__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_ADF45F4E823CC047(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_3F4B2C48F10B0C21_METHOD_1_ADF45F4E823CC047_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3F4B2C48F10B0C21_DISPOSE_OFFSET))(this);
	}
};
