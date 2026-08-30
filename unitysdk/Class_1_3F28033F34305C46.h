#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class HoyoTag; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_3F28033F34305C46_CLEAR_OFFSET UNITYSDK_OFFSET(0xBF8FE60)
#define CLASS_1_3F28033F34305C46__CTOR_OFFSET UNITYSDK_OFFSET(0xBF8FEF0)

inline static constexpr unsigned int Class_1_3F28033F34305C46_TypeDefinitionIndex = 73710;

class Class_1_3F28033F34305C46 : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::RPG::GameCore::HoyoTag*>* MJLOGDAIMFE; // 0x10
	::System::Int32 IFAKHGDKAPI; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3F28033F34305C46__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3F28033F34305C46_CLEAR_OFFSET))(this);
	}
};
