#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ClientSceneObjectStateLooperConfigBase_LoopConditionType.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_CLIENTSCENEOBJECTSTATELOOPERCONFIGBASE_GET_LOOPCONDITIONTYPE_OFFSET UNITYSDK_OFFSET(0x12B982B0)
#define MOLEMOLE_CLIENTSCENEOBJECTSTATELOOPERCONFIGBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x12B982C0)

namespace MoleMole
{
	inline static constexpr unsigned int ClientSceneObjectStateLooperConfigBase_TypeDefinitionIndex = 59722;

	class ClientSceneObjectStateLooperConfigBase : public ::System::Object
	{
	public:
		::System::Int32 stateID; // 0x10
		::MoleMole::ClientSceneObjectStateLooperConfigBase_LoopConditionType _loopConditionType_k__BackingField; // 0x14
		::System::Int32 FuncPoint; // 0x18
		::System::Int32 ObjectID; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CLIENTSCENEOBJECTSTATELOOPERCONFIGBASE__CTOR_OFFSET))(this);
		}

		::MoleMole::ClientSceneObjectStateLooperConfigBase_LoopConditionType get_loopConditionType()
		{
			return ((::MoleMole::ClientSceneObjectStateLooperConfigBase_LoopConditionType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CLIENTSCENEOBJECTSTATELOOPERCONFIGBASE_GET_LOOPCONDITIONTYPE_OFFSET))(this);
		}
	};
}
