#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/VCameraState.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_B9C702BA1E12DFA3__CTOR_OFFSET UNITYSDK_OFFSET(0x188C95E0)

inline static constexpr unsigned int Class_1_B9C702BA1E12DFA3_TypeDefinitionIndex = 69585;

class Class_1_B9C702BA1E12DFA3 : public ::System::Object
{
public:
	::RPG::GameCore::VCameraState JBCFGGDEKMH; // 0x10
	::RPG::GameCore::VCameraState NGDOLOLEAPI; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B9C702BA1E12DFA3__CTOR_OFFSET))(this);
	}
};
