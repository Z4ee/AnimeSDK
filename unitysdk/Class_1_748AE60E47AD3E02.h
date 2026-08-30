#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/B51RacingTREventType.h"
#include "unitysdk/Struct_2_5B95EFC62CEAE6E1.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_748AE60E47AD3E02__CTOR_OFFSET UNITYSDK_OFFSET(0x1CDF3FE0)

inline static constexpr unsigned int Class_1_748AE60E47AD3E02_TypeDefinitionIndex = 41325;

class Class_1_748AE60E47AD3E02 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* MGPBNDEHHGC; // 0x10
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::B51RacingTREventType, ::System::Single>* KFOOIAGPLAK; // 0x18
	::System::Collections::Generic::List_1<::Struct_2_5B95EFC62CEAE6E1>* PPJCFABBECH; // 0x20
	::System::Single KPKIIGNDMHN; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_748AE60E47AD3E02__CTOR_OFFSET))(this);
	}
};
