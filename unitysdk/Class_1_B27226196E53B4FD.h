#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

inline static constexpr unsigned int Class_1_B27226196E53B4FD_TypeDefinitionIndex = 41471;

template <typename T>
class Class_1_B27226196E53B4FD : public ::System::Object
{
public:
	::System::Object* _Sender_k__BackingField; // 0x0
	::System::String* _PropertyName_k__BackingField; // 0x0
	T _OldValue_k__BackingField; // 0x0
	T _NewValue_k__BackingField; // 0x0
};
