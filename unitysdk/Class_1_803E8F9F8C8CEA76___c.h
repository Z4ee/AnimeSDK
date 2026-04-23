#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_C8EC2537CFD0A41F;
namespace System { template <typename T> class Predicate_1; }

#define CLASS_1_803E8F9F8C8CEA76___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x12B03090)
#define CLASS_1_803E8F9F8C8CEA76___C__CTOR_OFFSET UNITYSDK_OFFSET(0x12B030D0)
#define CLASS_1_803E8F9F8C8CEA76___C__TRYTRIGGERPAMCHATGREETING_B__2_0_OFFSET UNITYSDK_OFFSET(0x12B03100)
#define CLASS_1_803E8F9F8C8CEA76___C__TRYTRIGGERPAMCHATHUDBUBBLE_B__1_0_OFFSET UNITYSDK_OFFSET(0x12B030E0)

inline static constexpr unsigned int Class_1_803E8F9F8C8CEA76___c_TypeDefinitionIndex = 58292;

class Class_1_803E8F9F8C8CEA76___c : public ::System::Object
{
public:
	static ::System::Predicate_1<::Class_1_C8EC2537CFD0A41F*>** StaticGet___9__2_0()
	{
		return (::System::Predicate_1<::Class_1_C8EC2537CFD0A41F*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_803E8F9F8C8CEA76___c_TypeDefinitionIndex)->GetStaticField(0x498C0);
	}
	static ::Class_1_803E8F9F8C8CEA76___c** StaticGet___9()
	{
		return (::Class_1_803E8F9F8C8CEA76___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_803E8F9F8C8CEA76___c_TypeDefinitionIndex)->GetStaticField(0x498C8);
	}
	static ::System::Predicate_1<::Class_1_C8EC2537CFD0A41F*>** StaticGet___9__1_0()
	{
		return (::System::Predicate_1<::Class_1_C8EC2537CFD0A41F*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_803E8F9F8C8CEA76___c_TypeDefinitionIndex)->GetStaticField(0x498D0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_803E8F9F8C8CEA76___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_803E8F9F8C8CEA76___C__CTOR_OFFSET))(this);
	}

	::System::Boolean _TryTriggerPamChatHudBubble_b__1_0(::Class_1_C8EC2537CFD0A41F* x)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_C8EC2537CFD0A41F*))((::PBYTE)hIl2Cpp + CLASS_1_803E8F9F8C8CEA76___C__TRYTRIGGERPAMCHATHUDBUBBLE_B__1_0_OFFSET))(this, x);
	}

	::System::Boolean _TryTriggerPamChatGreeting_b__2_0(::Class_1_C8EC2537CFD0A41F* x)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_C8EC2537CFD0A41F*))((::PBYTE)hIl2Cpp + CLASS_1_803E8F9F8C8CEA76___C__TRYTRIGGERPAMCHATGREETING_B__2_0_OFFSET))(this, x);
	}
};
