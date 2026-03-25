#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_945ACFB1FEBC7A2C_21;
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_BA94109D2F811389__CTOR_OFFSET UNITYSDK_OFFSET(0x8E14280)

inline static constexpr unsigned int Class_1_BA94109D2F811389_TypeDefinitionIndex = 45377;

class Class_1_BA94109D2F811389 : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* Field_1_0; // 0x10
	::System::String* Field_1_1; // 0x18
	::System::Collections::Generic::List_1<::Class_1_945ACFB1FEBC7A2C_21*>* Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BA94109D2F811389__CTOR_OFFSET))(this);
	}
};
