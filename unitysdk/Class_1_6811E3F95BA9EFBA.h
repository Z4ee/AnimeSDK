#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntityList; }
namespace System { class String; }

#define CLASS_1_6811E3F95BA9EFBA__CTOR_OFFSET UNITYSDK_OFFSET(0xA544900)

inline static constexpr unsigned int Class_1_6811E3F95BA9EFBA_TypeDefinitionIndex = 65890;

class Class_1_6811E3F95BA9EFBA : public ::System::Object
{
public:
	::System::String* Field_1_1; // 0x10
	::RPG::GameCore::GameEntityList* Field_1_0; // 0x18
	::System::String* Field_1_2; // 0x20
	::System::Boolean Field_1_3; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6811E3F95BA9EFBA__CTOR_OFFSET))(this);
	}
};
