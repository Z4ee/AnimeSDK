#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PingPongDropItemType.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_1C9E8F67531AA60D__CTOR_OFFSET UNITYSDK_OFFSET(0x1C549580)

inline static constexpr unsigned int Class_1_1C9E8F67531AA60D_TypeDefinitionIndex = 41338;

class Class_1_1C9E8F67531AA60D : public ::System::Object
{
public:
	::RPG::GameCore::PingPongDropItemType GMPGDEINODK; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1C9E8F67531AA60D__CTOR_OFFSET))(this);
	}
};
