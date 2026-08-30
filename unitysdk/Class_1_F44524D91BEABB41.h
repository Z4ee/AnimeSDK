#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }

#define CLASS_1_F44524D91BEABB41_CLEAR_OFFSET UNITYSDK_OFFSET(0x152E66C0)
#define CLASS_1_F44524D91BEABB41__CTOR_OFFSET UNITYSDK_OFFSET(0x152E6710)

inline static constexpr unsigned int Class_1_F44524D91BEABB41_TypeDefinitionIndex = 55710;

class Class_1_F44524D91BEABB41 : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* IEDIIFJOOGF; // 0x10
	::System::UInt32 HCDEOKNIGKG; // 0x18
	::System::UInt32 HOCMHABKLGJ; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F44524D91BEABB41__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F44524D91BEABB41_CLEAR_OFFSET))(this);
	}
};
