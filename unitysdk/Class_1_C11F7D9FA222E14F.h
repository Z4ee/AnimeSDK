#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RPGAnimationEvent; }
namespace RPG::Client { class RPGAnimationEvent_AnimationEventCallBack; }
namespace RPG::Client { class TabContentAnimation; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define CLASS_1_C11F7D9FA222E14F_METHOD_1_03E2B9212B4B6EAF_OFFSET UNITYSDK_OFFSET(0x18E562F0)
#define CLASS_1_C11F7D9FA222E14F_METHOD_1_4E18590033C8C67F_OFFSET UNITYSDK_OFFSET(0x18E56610)
#define CLASS_1_C11F7D9FA222E14F_METHOD_1_5D27658F33DFC619_OFFSET UNITYSDK_OFFSET(0x18E56330)
#define CLASS_1_C11F7D9FA222E14F_METHOD_1_97D83E4CB3B11935_OFFSET UNITYSDK_OFFSET(0x18E56B60)
#define CLASS_1_C11F7D9FA222E14F_METHOD_1_A2DC8E92387F697E_OFFSET UNITYSDK_OFFSET(0x18E56830)
#define CLASS_1_C11F7D9FA222E14F_METHOD_1_A3FAE12D7B6ACD62_OFFSET UNITYSDK_OFFSET(0x18E567C0)
#define CLASS_1_C11F7D9FA222E14F_METHOD_1_E11AC65AA0DC2249_OFFSET UNITYSDK_OFFSET(0x18E56B10)
#define CLASS_1_C11F7D9FA222E14F_METHOD_1_E7EF6BC52B28648C_OFFSET UNITYSDK_OFFSET(0x18E56710)
#define CLASS_1_C11F7D9FA222E14F__CTOR_OFFSET UNITYSDK_OFFSET(0x18E562E0)

inline static constexpr unsigned int Class_1_C11F7D9FA222E14F_TypeDefinitionIndex = 72597;

class Class_1_C11F7D9FA222E14F : public ::System::Object
{
public:
	::UnityEngine::Transform* BKPOHOCNDOL; // 0x10
	::RPG::Client::TabContentAnimation* KCOAILOHDND; // 0x18
	::System::String* KKBNFAICNNG; // 0x20
	::RPG::Client::RPGAnimationEvent* OCJEMLGOFEI; // 0x28
	::System::Boolean AHEHOBIGGLM; // 0x30

	::System::Void _ctor(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_C11F7D9FA222E14F__CTOR_OFFSET))(this, a1);
	}

	::UnityEngine::Transform* Method_1_03E2B9212B4B6EAF()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C11F7D9FA222E14F_METHOD_1_03E2B9212B4B6EAF_OFFSET))(this);
	}

	::System::Void Method_1_5D27658F33DFC619(::System::Boolean a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C11F7D9FA222E14F_METHOD_1_5D27658F33DFC619_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_E11AC65AA0DC2249()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C11F7D9FA222E14F_METHOD_1_E11AC65AA0DC2249_OFFSET))(this);
	}

	::System::Boolean Method_1_A3FAE12D7B6ACD62()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C11F7D9FA222E14F_METHOD_1_A3FAE12D7B6ACD62_OFFSET))(this);
	}

	::RPG::Client::TabContentAnimation* Method_1_4E18590033C8C67F()
	{
		return ((::RPG::Client::TabContentAnimation*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C11F7D9FA222E14F_METHOD_1_4E18590033C8C67F_OFFSET))(this);
	}

	::System::Boolean Method_1_A2DC8E92387F697E(::RPG::Client::TabContentAnimation* a1, ::System::Boolean a2, ::System::Boolean a3, ::RPG::Client::RPGAnimationEvent_AnimationEventCallBack* a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::TabContentAnimation*, ::System::Boolean, ::System::Boolean, ::RPG::Client::RPGAnimationEvent_AnimationEventCallBack*))((::PBYTE)hIl2Cpp + CLASS_1_C11F7D9FA222E14F_METHOD_1_A2DC8E92387F697E_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_97D83E4CB3B11935()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C11F7D9FA222E14F_METHOD_1_97D83E4CB3B11935_OFFSET))(this);
	}

	::System::Void Method_1_E7EF6BC52B28648C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C11F7D9FA222E14F_METHOD_1_E7EF6BC52B28648C_OFFSET))(this);
	}
};
