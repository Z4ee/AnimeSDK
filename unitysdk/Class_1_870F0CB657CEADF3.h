#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelStatusType.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_870F0CB657CEADF3__CTOR_OFFSET UNITYSDK_OFFSET(0x17F979B0)

inline static constexpr unsigned int Class_1_870F0CB657CEADF3_TypeDefinitionIndex = 37954;

class Class_1_870F0CB657CEADF3 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::RPG::GameCore::ChimeraDuelStatusType>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_870F0CB657CEADF3__CTOR_OFFSET))(this);
	}
};
