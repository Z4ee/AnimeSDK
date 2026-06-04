#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ChenLingBattle { class Soldier; }
namespace RPG::Client::ChenLingBattle { class SoldierPropertyChangeData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_E8533E8BF8712E1D__CTOR_OFFSET UNITYSDK_OFFSET(0x13CFC400)

inline static constexpr unsigned int Class_1_E8533E8BF8712E1D_TypeDefinitionIndex = 70957;

class Class_1_E8533E8BF8712E1D : public ::System::Object
{
public:
	::RPG::Client::ChenLingBattle::Soldier* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::RPG::Client::ChenLingBattle::SoldierPropertyChangeData*>* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E8533E8BF8712E1D__CTOR_OFFSET))(this);
	}
};
