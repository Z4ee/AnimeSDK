#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Car;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CARFLOWMANAGER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xA6DDD70)
#define CARFLOWMANAGER___C__CTOR_OFFSET UNITYSDK_OFFSET(0xA6DDDB0)
#define CARFLOWMANAGER___C__GETRANDOMCARPREFAB_B__28_0_OFFSET UNITYSDK_OFFSET(0xA6DDDC0)

inline static constexpr unsigned int CarFlowManager___c_TypeDefinitionIndex = 38001;

class CarFlowManager___c : public ::System::Object
{
public:
	static ::System::Func_2<::Car*, ::System::Single>** StaticGet___9__28_0()
	{
		return (::System::Func_2<::Car*, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(CarFlowManager___c_TypeDefinitionIndex)->GetStaticField(0x48750);
	}
	static ::CarFlowManager___c** StaticGet___9()
	{
		return (::CarFlowManager___c**)Il2CppClass::FromTypeDefinitionIndex(CarFlowManager___c_TypeDefinitionIndex)->GetStaticField(0x48758);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CARFLOWMANAGER___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CARFLOWMANAGER___C__CTOR_OFFSET))(this);
	}

	::System::Single _GetRandomCarPrefab_b__28_0(::Car* c)
	{
		return ((::System::Single(*)(::PVOID, ::Car*))((::PBYTE)hIl2Cpp + CARFLOWMANAGER___C__GETRANDOMCARPREFAB_B__28_0_OFFSET))(this, c);
	}
};
