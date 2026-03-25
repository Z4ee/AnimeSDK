#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_3F75F8CAAFB46C9E;
namespace System { template <typename T> class Predicate_1; }

#define CLASS_1_803E8F9F8C8CEA76___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xE467750)
#define CLASS_1_803E8F9F8C8CEA76___C__CTOR_OFFSET UNITYSDK_OFFSET(0xE467790)
#define CLASS_1_803E8F9F8C8CEA76___C__TRYTRIGGERPAMCHATGREETING_B__2_0_OFFSET UNITYSDK_OFFSET(0xE4677C0)
#define CLASS_1_803E8F9F8C8CEA76___C__TRYTRIGGERPAMCHATHUDBUBBLE_B__1_0_OFFSET UNITYSDK_OFFSET(0xE4677A0)

inline static constexpr unsigned int Class_1_803E8F9F8C8CEA76___c_TypeDefinitionIndex = 51357;

class Class_1_803E8F9F8C8CEA76___c : public ::System::Object
{
public:
	static ::Class_1_803E8F9F8C8CEA76___c** StaticGet___9()
	{
		return (::Class_1_803E8F9F8C8CEA76___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_803E8F9F8C8CEA76___c_TypeDefinitionIndex)->GetStaticField(0x47DA0);
	}
	static ::System::Predicate_1<::Class_1_3F75F8CAAFB46C9E*>** StaticGet___9__2_0()
	{
		return (::System::Predicate_1<::Class_1_3F75F8CAAFB46C9E*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_803E8F9F8C8CEA76___c_TypeDefinitionIndex)->GetStaticField(0x47DA8);
	}
	static ::System::Predicate_1<::Class_1_3F75F8CAAFB46C9E*>** StaticGet___9__1_0()
	{
		return (::System::Predicate_1<::Class_1_3F75F8CAAFB46C9E*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_803E8F9F8C8CEA76___c_TypeDefinitionIndex)->GetStaticField(0x47DB0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_803E8F9F8C8CEA76___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_803E8F9F8C8CEA76___C__CTOR_OFFSET))(this);
	}

	::System::Boolean _TryTriggerPamChatHudBubble_b__1_0(::Class_1_3F75F8CAAFB46C9E* x)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_3F75F8CAAFB46C9E*))((::PBYTE)hIl2Cpp + CLASS_1_803E8F9F8C8CEA76___C__TRYTRIGGERPAMCHATHUDBUBBLE_B__1_0_OFFSET))(this, x);
	}

	::System::Boolean _TryTriggerPamChatGreeting_b__2_0(::Class_1_3F75F8CAAFB46C9E* x)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_3F75F8CAAFB46C9E*))((::PBYTE)hIl2Cpp + CLASS_1_803E8F9F8C8CEA76___C__TRYTRIGGERPAMCHATGREETING_B__2_0_OFFSET))(this, x);
	}
};
