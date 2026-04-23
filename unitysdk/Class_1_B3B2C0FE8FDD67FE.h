#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_B3B2C0FE8FDD67FE__CTOR_OFFSET UNITYSDK_OFFSET(0xAA3B670)

inline static constexpr unsigned int Class_1_B3B2C0FE8FDD67FE_TypeDefinitionIndex = 54039;

class Class_1_B3B2C0FE8FDD67FE : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Field_1_0; // 0x10
	::System::Boolean Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B3B2C0FE8FDD67FE__CTOR_OFFSET))(this);
	}
};
