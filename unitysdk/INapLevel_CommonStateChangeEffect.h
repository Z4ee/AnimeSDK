#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EffectStateType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }

#define INAPLEVEL_COMMONSTATECHANGEEFFECT_GET_STATETYPE_OFFSET UNITYSDK_OFFSET(0x1C3EDEC0)
#define INAPLEVEL_COMMONSTATECHANGEEFFECT_PROCESS_1_OFFSET UNITYSDK_OFFSET(0x1C3EDF60)
#define INAPLEVEL_COMMONSTATECHANGEEFFECT_PROCESS_OFFSET UNITYSDK_OFFSET(0x1C3EDED0)
#define INAPLEVEL_COMMONSTATECHANGEEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1C3EE070)

inline static constexpr unsigned int INapLevel_CommonStateChangeEffect_TypeDefinitionIndex = 27149;

class INapLevel_CommonStateChangeEffect : public ::UnityEngine::MonoBehaviour
{
public:
	::EffectStateType _stateType; // 0x18
	::Il2CppArray<::System::Int32>* _intStates; // 0x20
	::Il2CppArray<::System::String*>* _stringStates; // 0x28
	::System::Int32 _currentIntState; // 0x30
	::System::String* _currentStringState; // 0x38
	::System::Boolean _hasState; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INAPLEVEL_COMMONSTATECHANGEEFFECT__CTOR_OFFSET))(this);
	}

	::EffectStateType get_StateType()
	{
		return ((::EffectStateType(*)(::PVOID))((::PBYTE)hIl2Cpp + INAPLEVEL_COMMONSTATECHANGEEFFECT_GET_STATETYPE_OFFSET))(this);
	}

	::System::Void Process(::System::Int32 state)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + INAPLEVEL_COMMONSTATECHANGEEFFECT_PROCESS_OFFSET))(this, state);
	}

	::System::Void Process_1(::System::String* state)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + INAPLEVEL_COMMONSTATECHANGEEFFECT_PROCESS_1_OFFSET))(this, state);
	}
};
