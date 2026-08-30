#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ChenLingBattle { class Soldier; }
namespace RPG::Client::ChenLingBattle { class SoldierPropertyChangeData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_E8533E8BF8712E1D__CTOR_OFFSET UNITYSDK_OFFSET(0x15B7B580)

inline static constexpr unsigned int Class_1_E8533E8BF8712E1D_TypeDefinitionIndex = 75907;

class Class_1_E8533E8BF8712E1D : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::RPG::Client::ChenLingBattle::SoldierPropertyChangeData*>* NJLINBKDBGI; // 0x10
	::RPG::Client::ChenLingBattle::Soldier* APDOFPIONOB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E8533E8BF8712E1D__CTOR_OFFSET))(this);
	}
};
