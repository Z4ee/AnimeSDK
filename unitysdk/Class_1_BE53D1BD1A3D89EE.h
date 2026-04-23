#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/NotifyType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1008;
namespace System::Reflection { class MethodInfo; }

#define CLASS_1_BE53D1BD1A3D89EE_CREATE_OFFSET UNITYSDK_OFFSET(0x939B540)
#define CLASS_1_BE53D1BD1A3D89EE__CTOR_OFFSET UNITYSDK_OFFSET(0x939B630)

inline static constexpr unsigned int Class_1_BE53D1BD1A3D89EE_TypeDefinitionIndex = 67357;

class Class_1_BE53D1BD1A3D89EE : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BE53D1BD1A3D89EE__CTOR_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_1008* Create(::System::Object* a1, ::System::Reflection::MethodInfo* a2, ::RPG::Client::NotifyType a3)
	{
		return ((::Class_0_16E4307DCC419505_1008*(*)(::PVOID, ::System::Object*, ::System::Reflection::MethodInfo*, ::RPG::Client::NotifyType))((::PBYTE)hIl2Cpp + CLASS_1_BE53D1BD1A3D89EE_CREATE_OFFSET))(this, a1, a2, a3);
	}
};
