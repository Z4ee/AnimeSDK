#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntityList; }
namespace System { class String; }

#define CLASS_1_6811E3F95BA9EFBA__CTOR_OFFSET UNITYSDK_OFFSET(0x156AE950)

inline static constexpr unsigned int Class_1_6811E3F95BA9EFBA_TypeDefinitionIndex = 71488;

class Class_1_6811E3F95BA9EFBA : public ::System::Object
{
public:
	::System::String* PHAJKALJLFP; // 0x10
	::RPG::GameCore::GameEntityList* GKHDCODGAMF; // 0x18
	::System::String* BDACPPLKLGL; // 0x20
	::System::Boolean CAGCHKJHMPD; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6811E3F95BA9EFBA__CTOR_OFFSET))(this);
	}
};
