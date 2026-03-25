#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class PingPongEnemyGroupEventBase; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_32735CBB5E620D2D__CTOR_OFFSET UNITYSDK_OFFSET(0x1678B490)

inline static constexpr unsigned int Class_1_32735CBB5E620D2D_TypeDefinitionIndex = 33048;

class Class_1_32735CBB5E620D2D : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::RPG::GameCore::PingPongEnemyGroupEventBase*>* Field_1_2; // 0x10
	::System::UInt32 Field_1_0; // 0x18
	::System::UInt32 Field_1_1; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_32735CBB5E620D2D__CTOR_OFFSET))(this);
	}
};
