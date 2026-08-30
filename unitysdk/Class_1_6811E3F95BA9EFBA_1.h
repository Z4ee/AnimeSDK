#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntityList; }
namespace System { class String; }

#define CLASS_1_6811E3F95BA9EFBA_1__CTOR_OFFSET UNITYSDK_OFFSET(0xBB8EEE0)

inline static constexpr unsigned int Class_1_6811E3F95BA9EFBA_1_TypeDefinitionIndex = 71744;

class Class_1_6811E3F95BA9EFBA_1 : public ::System::Object
{
public:
	::System::String* PHAJKALJLFP; // 0x10
	::System::String* BDACPPLKLGL; // 0x18
	::RPG::GameCore::GameEntityList* GKHDCODGAMF; // 0x20
	::System::Boolean CAGCHKJHMPD; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6811E3F95BA9EFBA_1__CTOR_OFFSET))(this);
	}
};
