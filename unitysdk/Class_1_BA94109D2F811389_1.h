#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_BA94109D2F811389_1__CTOR_OFFSET UNITYSDK_OFFSET(0xA5D1730)

inline static constexpr unsigned int Class_1_BA94109D2F811389_1_TypeDefinitionIndex = 67387;

class Class_1_BA94109D2F811389_1 : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BA94109D2F811389_1__CTOR_OFFSET))(this);
	}
};
