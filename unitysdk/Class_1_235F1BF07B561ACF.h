#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::LittleGame { class PlacementConfig; }

#define CLASS_1_235F1BF07B561ACF__CTOR_OFFSET UNITYSDK_OFFSET(0x1C3AE550)

inline static constexpr unsigned int Class_1_235F1BF07B561ACF_TypeDefinitionIndex = 41057;

class Class_1_235F1BF07B561ACF : public ::System::Object
{
public:
	::RPG::Client::LittleGame::PlacementConfig* EABKOHGCHFP; // 0x10
	::System::Single NJCACLIGLJA; // 0x18
	::System::Int32 KOJFHFAKKFO; // 0x1C
	::System::Single PLHMCJGHFFB; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_235F1BF07B561ACF__CTOR_OFFSET))(this);
	}
};
