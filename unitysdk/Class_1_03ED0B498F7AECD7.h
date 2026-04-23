#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ChimeraDuelMarkerType.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_03ED0B498F7AECD7__CTOR_OFFSET UNITYSDK_OFFSET(0x17F2A790)

inline static constexpr unsigned int Class_1_03ED0B498F7AECD7_TypeDefinitionIndex = 37950;

class Class_1_03ED0B498F7AECD7 : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::RPG::Client::LittleGame::ChimeraDuelMarkerType>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_03ED0B498F7AECD7__CTOR_OFFSET))(this);
	}
};
