#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PixAirEventType.h"
#include "unitysdk/System/Object.h"

class Class_1_D2C97E5E9F60802E;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_9D2C9261FC72A271__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA976F0)

inline static constexpr unsigned int Class_1_9D2C9261FC72A271_TypeDefinitionIndex = 42030;

class Class_1_9D2C9261FC72A271 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::PixAirEventType, ::System::Collections::Generic::List_1<::Class_1_D2C97E5E9F60802E*>*>* KHBNAGNKKJL; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9D2C9261FC72A271__CTOR_OFFSET))(this);
	}
};
