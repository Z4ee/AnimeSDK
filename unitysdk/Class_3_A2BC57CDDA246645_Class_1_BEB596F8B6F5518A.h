#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_3_A2BC57CDDA246645_CLASS_1_BEB596F8B6F5518A__CTOR_OFFSET UNITYSDK_OFFSET(0x183D89D0)

inline static constexpr unsigned int Class_3_A2BC57CDDA246645_Class_1_BEB596F8B6F5518A_TypeDefinitionIndex = 68051;

class Class_3_A2BC57CDDA246645_Class_1_BEB596F8B6F5518A : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* Field_1_0; // 0x10
	::System::Action_1<::System::String*>* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A2BC57CDDA246645_CLASS_1_BEB596F8B6F5518A__CTOR_OFFSET))(this);
	}
};
