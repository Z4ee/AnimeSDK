#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }

#define CLASS_1_DF1515922C696B5D_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x19196B30)
#define CLASS_1_DF1515922C696B5D_METHOD_1_8C1B8B814E2198DA_OFFSET UNITYSDK_OFFSET(0x191969E0)
#define CLASS_1_DF1515922C696B5D_UNITYENGINE_EVENTSYSTEMS_IEXECUTEEVENTBLOCKER_ISEVENTBLOCK_OFFSET UNITYSDK_OFFSET(0x19196BB0)
#define CLASS_1_DF1515922C696B5D__CTOR_OFFSET UNITYSDK_OFFSET(0x191969A0)

inline static constexpr unsigned int Class_1_DF1515922C696B5D_TypeDefinitionIndex = 68233;

class Class_1_DF1515922C696B5D : public ::System::Object
{
public:
	::System::Type* CDACBNBEHNL; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DF1515922C696B5D__CTOR_OFFSET))(this);
	}

	static ::Class_1_DF1515922C696B5D* Method_1_8C1B8B814E2198DA()
	{
		return ((::Class_1_DF1515922C696B5D*(*)())((::PBYTE)hIl2Cpp + CLASS_1_DF1515922C696B5D_METHOD_1_8C1B8B814E2198DA_OFFSET))();
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DF1515922C696B5D_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Boolean UnityEngine_EventSystems_IExecuteEventBlocker_IsEventBlock(::System::Type* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + CLASS_1_DF1515922C696B5D_UNITYENGINE_EVENTSYSTEMS_IEXECUTEEVENTBLOCKER_ISEVENTBLOCK_OFFSET))(this, a1);
	}
};
