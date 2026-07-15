#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkCallbackType.h"
#include "unitysdk/System/Object.h"

class AkAmbient;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define AKMULTIPOSEVENT_FINISHEDPLAYING_OFFSET UNITYSDK_OFFSET(0x1BD67950)
#define AKMULTIPOSEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD679B0)

inline static constexpr unsigned int AkMultiPosEvent_TypeDefinitionIndex = 42105;

class AkMultiPosEvent : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::AkAmbient*>* list; // 0x10
	::System::Boolean eventIsPlaying; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMULTIPOSEVENT__CTOR_OFFSET))(this);
	}

	::System::Void FinishedPlaying(::System::Object* a1, ::AkCallbackType a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::AkCallbackType, ::System::Object*))((::PBYTE)hIl2Cpp + AKMULTIPOSEVENT_FINISHEDPLAYING_OFFSET))(this, a1, a2, a3);
	}
};
