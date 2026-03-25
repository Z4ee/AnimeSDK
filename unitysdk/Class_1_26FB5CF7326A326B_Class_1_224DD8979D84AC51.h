#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_26FB5CF7326A326B_MeasureAction.h"
#include "unitysdk/Class_1_9F74B70AEC19180E_FailureReason.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_26FB5CF7326A326B_CLASS_1_224DD8979D84AC51__CTOR_OFFSET UNITYSDK_OFFSET(0x89FBCD0)

inline static constexpr unsigned int Class_1_26FB5CF7326A326B_Class_1_224DD8979D84AC51_TypeDefinitionIndex = 50665;

class Class_1_26FB5CF7326A326B_Class_1_224DD8979D84AC51 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>* Field_1_1; // 0x10
	::Class_1_26FB5CF7326A326B_MeasureAction Field_1_0; // 0x18
	::System::Single Field_1_2; // 0x1C
	::Class_1_9F74B70AEC19180E_FailureReason Field_1_3; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_26FB5CF7326A326B_CLASS_1_224DD8979D84AC51__CTOR_OFFSET))(this);
	}
};
