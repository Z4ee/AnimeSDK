#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkCallbackType.h"
#include "unitysdk/System/Object.h"

class AkAmbient;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define AKMULTIPOSEVENT_FINISHEDPLAYING_OFFSET UNITYSDK_OFFSET(0x1C4CB0F0)
#define AKMULTIPOSEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4CB100)

inline static constexpr unsigned int AkMultiPosEvent_TypeDefinitionIndex = 31579;

class AkMultiPosEvent : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::AkAmbient*>* list; // 0x10
	::System::Boolean eventIsPlaying; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMULTIPOSEVENT__CTOR_OFFSET))(this);
	}

	::System::Void FinishedPlaying(::System::Object* in_cookie, ::AkCallbackType in_type, ::System::Object* in_info)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::AkCallbackType, ::System::Object*))((::PBYTE)hIl2Cpp + AKMULTIPOSEVENT_FINISHEDPLAYING_OFFSET))(this, in_cookie, in_type, in_info);
	}
};
