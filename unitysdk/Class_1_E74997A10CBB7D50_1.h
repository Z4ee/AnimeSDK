#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_E74997A10CBB7D50_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7DC1A0)

inline static constexpr unsigned int Class_1_E74997A10CBB7D50_1_TypeDefinitionIndex = 73194;

class Class_1_E74997A10CBB7D50_1 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* GKHDCODGAMF; // 0x10
	::System::Boolean GNDCCBNILML; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E74997A10CBB7D50_1__CTOR_OFFSET))(this);
	}
};
