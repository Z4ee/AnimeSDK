#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_C8EC2537CFD0A41F;
namespace System { template <typename T> class Predicate_1; }

#define CLASS_1_93B622FDBEA47D71___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1620E550)
#define CLASS_1_93B622FDBEA47D71___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1620E590)
#define CLASS_1_93B622FDBEA47D71___C__TRYTRIGGERPAMCHATGREETING_B__2_0_OFFSET UNITYSDK_OFFSET(0x1620E5C0)
#define CLASS_1_93B622FDBEA47D71___C__TRYTRIGGERPAMCHATHUDBUBBLE_B__1_0_OFFSET UNITYSDK_OFFSET(0x1620E5A0)

inline static constexpr unsigned int Class_1_93B622FDBEA47D71___c_TypeDefinitionIndex = 60493;

class Class_1_93B622FDBEA47D71___c : public ::System::Object
{
public:
	static ::System::Predicate_1<::Class_1_C8EC2537CFD0A41F*>** StaticGet___9__2_0()
	{
		return (::System::Predicate_1<::Class_1_C8EC2537CFD0A41F*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_93B622FDBEA47D71___c_TypeDefinitionIndex)->GetStaticField(0x573A0);
	}
	static ::Class_1_93B622FDBEA47D71___c** StaticGet___9()
	{
		return (::Class_1_93B622FDBEA47D71___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_93B622FDBEA47D71___c_TypeDefinitionIndex)->GetStaticField(0x573A8);
	}
	static ::System::Predicate_1<::Class_1_C8EC2537CFD0A41F*>** StaticGet___9__1_0()
	{
		return (::System::Predicate_1<::Class_1_C8EC2537CFD0A41F*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_93B622FDBEA47D71___c_TypeDefinitionIndex)->GetStaticField(0x573B0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_93B622FDBEA47D71___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_93B622FDBEA47D71___C__CTOR_OFFSET))(this);
	}

	::System::Boolean _TryTriggerPamChatHudBubble_b__1_0(::Class_1_C8EC2537CFD0A41F* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_C8EC2537CFD0A41F*))((::PBYTE)hIl2Cpp + CLASS_1_93B622FDBEA47D71___C__TRYTRIGGERPAMCHATHUDBUBBLE_B__1_0_OFFSET))(this, a1);
	}

	::System::Boolean _TryTriggerPamChatGreeting_b__2_0(::Class_1_C8EC2537CFD0A41F* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_C8EC2537CFD0A41F*))((::PBYTE)hIl2Cpp + CLASS_1_93B622FDBEA47D71___C__TRYTRIGGERPAMCHATGREETING_B__2_0_OFFSET))(this, a1);
	}
};
