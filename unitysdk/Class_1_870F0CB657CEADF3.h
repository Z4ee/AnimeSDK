#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelStatusType.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_870F0CB657CEADF3__CTOR_OFFSET UNITYSDK_OFFSET(0x1C3A6B80)

inline static constexpr unsigned int Class_1_870F0CB657CEADF3_TypeDefinitionIndex = 40372;

class Class_1_870F0CB657CEADF3 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::RPG::GameCore::ChimeraDuelStatusType>* GFKMCNCDMIE; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_870F0CB657CEADF3__CTOR_OFFSET))(this);
	}
};
