#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RPGAnimationEvent_AnimationEventCallBack; }

#define CLASS_2_97E58BBA90464D2F___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x183DE5A0)
#define CLASS_2_97E58BBA90464D2F___C__CTOR_OFFSET UNITYSDK_OFFSET(0x183DE5D0)
#define CLASS_2_97E58BBA90464D2F___C___ONBIND_B__0_0_OFFSET UNITYSDK_OFFSET(0x183DE5E0)

inline static constexpr unsigned int Class_2_97E58BBA90464D2F___c_TypeDefinitionIndex = 68783;

class Class_2_97E58BBA90464D2F___c : public ::System::Object
{
public:
	static ::RPG::Client::RPGAnimationEvent_AnimationEventCallBack** StaticGet___9__0_0()
	{
		return (::RPG::Client::RPGAnimationEvent_AnimationEventCallBack**)Il2CppClass::FromTypeDefinitionIndex(Class_2_97E58BBA90464D2F___c_TypeDefinitionIndex)->GetStaticField(0x5EFE0);
	}
	static ::Class_2_97E58BBA90464D2F___c** StaticGet___9()
	{
		return (::Class_2_97E58BBA90464D2F___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_97E58BBA90464D2F___c_TypeDefinitionIndex)->GetStaticField(0x5EFE8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_97E58BBA90464D2F___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_97E58BBA90464D2F___C__CTOR_OFFSET))(this);
	}

	::System::Void __OnBind_b__0_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_97E58BBA90464D2F___C___ONBIND_B__0_0_OFFSET))(this);
	}
};
