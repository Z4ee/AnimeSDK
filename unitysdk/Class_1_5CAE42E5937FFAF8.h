#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PingPongDropItemType.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_5CAE42E5937FFAF8__CTOR_OFFSET UNITYSDK_OFFSET(0x1676CBB0)

inline static constexpr unsigned int Class_1_5CAE42E5937FFAF8_TypeDefinitionIndex = 33035;

class Class_1_5CAE42E5937FFAF8 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::RPG::GameCore::PingPongDropItemType>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5CAE42E5937FFAF8__CTOR_OFFSET))(this);
	}
};
