#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1499;
namespace System { class Action; }

#define CLASS_1_FD893FD36F6A3A6D_9_GET__FLOWCOORDINATOR_OFFSET UNITYSDK_OFFSET(0xD751C40)
#define CLASS_1_FD893FD36F6A3A6D_9__CTOR_OFFSET UNITYSDK_OFFSET(0xD751C50)

inline static constexpr unsigned int Class_1_FD893FD36F6A3A6D_9_TypeDefinitionIndex = 79705;

class Class_1_FD893FD36F6A3A6D_9 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_1499* __FlowCoordinator_k__BackingField; // 0x10

	::System::Void _ctor(::Class_0_16E4307DCC419505_1499* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_1499*))((::PBYTE)hIl2Cpp + CLASS_1_FD893FD36F6A3A6D_9__CTOR_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_1499* get__FlowCoordinator()
	{
		return ((::Class_0_16E4307DCC419505_1499*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FD893FD36F6A3A6D_9_GET__FLOWCOORDINATOR_OFFSET))(this);
	}
};
