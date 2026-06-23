#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define BLACKCURTAINMANAGER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15D53560)
#define BLACKCURTAINMANAGER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15D535A0)
#define BLACKCURTAINMANAGER___C__SUSPENDCURRENTMATPROPERTYMODIFIERS_B__25_0_OFFSET UNITYSDK_OFFSET(0x15D535B0)

inline static constexpr unsigned int BlackCurtainManager___c_TypeDefinitionIndex = 48457;

class BlackCurtainManager___c : public ::System::Object
{
public:
	static ::BlackCurtainManager___c** StaticGet___9()
	{
		return (::BlackCurtainManager___c**)Il2CppClass::FromTypeDefinitionIndex(BlackCurtainManager___c_TypeDefinitionIndex)->GetStaticField(0x36270);
	}
	static ::System::Func_2<::System::String*, ::System::Boolean>** StaticGet___9__25_0()
	{
		return (::System::Func_2<::System::String*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(BlackCurtainManager___c_TypeDefinitionIndex)->GetStaticField(0x36278);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BLACKCURTAINMANAGER___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLACKCURTAINMANAGER___C__CTOR_OFFSET))(this);
	}

	::System::Boolean _SuspendCurrentMatPropertyModifiers_b__25_0(::System::String* modifierKey)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BLACKCURTAINMANAGER___C__SUSPENDCURRENTMATPROPERTYMODIFIERS_B__25_0_OFFSET))(this, modifierKey);
	}
};
