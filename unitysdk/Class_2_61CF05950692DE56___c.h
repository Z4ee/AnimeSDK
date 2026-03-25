#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RPGAnimationEvent_AnimationEventCallBack; }

#define CLASS_2_61CF05950692DE56___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x105FC020)
#define CLASS_2_61CF05950692DE56___C__CTOR_OFFSET UNITYSDK_OFFSET(0x105FC050)
#define CLASS_2_61CF05950692DE56___C___ONBIND_B__0_0_OFFSET UNITYSDK_OFFSET(0x105FC060)

inline static constexpr unsigned int Class_2_61CF05950692DE56___c_TypeDefinitionIndex = 59007;

class Class_2_61CF05950692DE56___c : public ::System::Object
{
public:
	static ::Class_2_61CF05950692DE56___c** StaticGet___9()
	{
		return (::Class_2_61CF05950692DE56___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_61CF05950692DE56___c_TypeDefinitionIndex)->GetStaticField(0x1FEC0);
	}
	static ::RPG::Client::RPGAnimationEvent_AnimationEventCallBack** StaticGet___9__0_0()
	{
		return (::RPG::Client::RPGAnimationEvent_AnimationEventCallBack**)Il2CppClass::FromTypeDefinitionIndex(Class_2_61CF05950692DE56___c_TypeDefinitionIndex)->GetStaticField(0x1FEC8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_61CF05950692DE56___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_61CF05950692DE56___C__CTOR_OFFSET))(this);
	}

	::System::Void __OnBind_b__0_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_61CF05950692DE56___C___ONBIND_B__0_0_OFFSET))(this);
	}
};
