#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/System/Object.h"

class Class_1_BE94BBD8E05AB4A9;
namespace System { class String; }
namespace UnityEngine { class Object; }
namespace miHoYoEmotion { class SequenceBakeData; }

#define CLASS_1_BE94BBD8E05AB4A9_CLASS_1_F9A22D9850AEA9A2_METHOD_1_1CE351E71251134A_OFFSET UNITYSDK_OFFSET(0xE22CE70)
#define CLASS_1_BE94BBD8E05AB4A9_CLASS_1_F9A22D9850AEA9A2_METHOD_1_5E9AA7BCD6248FB7_OFFSET UNITYSDK_OFFSET(0xE22D080)
#define CLASS_1_BE94BBD8E05AB4A9_CLASS_1_F9A22D9850AEA9A2__CTOR_OFFSET UNITYSDK_OFFSET(0xE22CE60)

inline static constexpr unsigned int Class_1_BE94BBD8E05AB4A9_Class_1_F9A22D9850AEA9A2_TypeDefinitionIndex = 91265;

class Class_1_BE94BBD8E05AB4A9_Class_1_F9A22D9850AEA9A2 : public ::System::Object
{
public:
	::Class_1_BE94BBD8E05AB4A9* Field_1_0; // 0x10
	::System::String* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BE94BBD8E05AB4A9_CLASS_1_F9A22D9850AEA9A2__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_1CE351E71251134A(::System::String* a1, ::miHoYoEmotion::SequenceBakeData* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::miHoYoEmotion::SequenceBakeData*))((::PBYTE)hIl2Cpp + CLASS_1_BE94BBD8E05AB4A9_CLASS_1_F9A22D9850AEA9A2_METHOD_1_1CE351E71251134A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_5E9AA7BCD6248FB7(::UnityEngine::Object* a1, ::Foundation::AssetRequestHandle a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*, ::Foundation::AssetRequestHandle))((::PBYTE)hIl2Cpp + CLASS_1_BE94BBD8E05AB4A9_CLASS_1_F9A22D9850AEA9A2_METHOD_1_5E9AA7BCD6248FB7_OFFSET))(this, a1, a2);
	}
};
