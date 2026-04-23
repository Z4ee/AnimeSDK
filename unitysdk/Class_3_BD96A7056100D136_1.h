#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/OpenWorld/VolumeParameter_1.h"
#include "unitysdk/UnityEngine/Color.h"

#define CLASS_3_BD96A7056100D136_1__CTOR_1_OFFSET UNITYSDK_OFFSET(0x11AF0120)
#define CLASS_3_BD96A7056100D136_1__CTOR_OFFSET UNITYSDK_OFFSET(0x11AF00C0)

inline static constexpr unsigned int Class_3_BD96A7056100D136_1_TypeDefinitionIndex = 68126;

class Class_3_BD96A7056100D136_1 : public ::RPG::Client::OpenWorld::VolumeParameter_1<::UnityEngine::Color>
{
public:
	::System::Boolean Field_3_2; // 0x20
	::System::Boolean Field_3_0; // 0x21
	::System::Boolean Field_3_1; // 0x22

	::System::Void _ctor(::UnityEngine::Color a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + CLASS_3_BD96A7056100D136_1__CTOR_OFFSET))(this, a1);
	}

	::System::Void _ctor_1(::UnityEngine::Color a1, ::System::Boolean a2, ::System::Boolean a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Color, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_BD96A7056100D136_1__CTOR_1_OFFSET))(this, a1, a2, a3, a4);
	}
};
