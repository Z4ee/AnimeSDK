#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigNpcPrototype; }
namespace System { class Action; }

#define CLASS_1_C8116EB1F0D068AE_CLASS_1_E1667BA4F69728B6_METHOD_1_BA99DBD4403BA4E9_OFFSET UNITYSDK_OFFSET(0x10A04450)
#define CLASS_1_C8116EB1F0D068AE_CLASS_1_E1667BA4F69728B6__CTOR_OFFSET UNITYSDK_OFFSET(0x10A04440)

inline static constexpr unsigned int Class_1_C8116EB1F0D068AE_Class_1_E1667BA4F69728B6_TypeDefinitionIndex = 72041;

class Class_1_C8116EB1F0D068AE_Class_1_E1667BA4F69728B6 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C8116EB1F0D068AE_CLASS_1_E1667BA4F69728B6__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_BA99DBD4403BA4E9(::MoleMole::ConfigNpcPrototype* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigNpcPrototype*))((::PBYTE)hIl2Cpp + CLASS_1_C8116EB1F0D068AE_CLASS_1_E1667BA4F69728B6_METHOD_1_BA99DBD4403BA4E9_OFFSET))(this, a1);
	}
};
