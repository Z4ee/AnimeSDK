#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9559E21A832A9D56_FailureReason.h"
#include "unitysdk/Class_1_C16080C084A20369_MeasureAction.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_C16080C084A20369_CLASS_1_224DD8979D84AC51__CTOR_OFFSET UNITYSDK_OFFSET(0xA798660)

inline static constexpr unsigned int Class_1_C16080C084A20369_Class_1_224DD8979D84AC51_TypeDefinitionIndex = 58340;

class Class_1_C16080C084A20369_Class_1_224DD8979D84AC51 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>* Field_1_0; // 0x10
	::System::Single Field_1_1; // 0x18
	::Class_1_9559E21A832A9D56_FailureReason Field_1_2; // 0x1C
	::Class_1_C16080C084A20369_MeasureAction Field_1_3; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C16080C084A20369_CLASS_1_224DD8979D84AC51__CTOR_OFFSET))(this);
	}
};
