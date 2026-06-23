#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_7E11ED107CC93DC9_METHOD_1_076F6E91E742A295_OFFSET UNITYSDK_OFFSET(0x11C62510)
#define CLASS_1_7E11ED107CC93DC9_METHOD_1_4F0B3B2282655A11_OFFSET UNITYSDK_OFFSET(0x11C62910)
#define CLASS_1_7E11ED107CC93DC9_METHOD_1_DD1EE3A48E307831_OFFSET UNITYSDK_OFFSET(0x11C626E0)
#define CLASS_1_7E11ED107CC93DC9__CTOR_OFFSET UNITYSDK_OFFSET(0x11C62500)

inline static constexpr unsigned int Class_1_7E11ED107CC93DC9_TypeDefinitionIndex = 54826;

class Class_1_7E11ED107CC93DC9 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7E11ED107CC93DC9__CTOR_OFFSET))(this);
	}

	static ::System::Boolean Method_1_076F6E91E742A295(::MoleMole::EntityHandle a1)
	{
		return ((::System::Boolean(*)(::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + CLASS_1_7E11ED107CC93DC9_METHOD_1_076F6E91E742A295_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_DD1EE3A48E307831()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_7E11ED107CC93DC9_METHOD_1_DD1EE3A48E307831_OFFSET))();
	}

	static ::System::Boolean Method_1_4F0B3B2282655A11(::MoleMole::EntityHandle a1)
	{
		return ((::System::Boolean(*)(::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + CLASS_1_7E11ED107CC93DC9_METHOD_1_4F0B3B2282655A11_OFFSET))(a1);
	}
};
