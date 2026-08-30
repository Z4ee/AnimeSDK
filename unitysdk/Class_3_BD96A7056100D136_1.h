#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/OpenWorld/VolumeParameter_1.h"
#include "unitysdk/UnityEngine/Color.h"

#define CLASS_3_BD96A7056100D136_1__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17D4DDC0)
#define CLASS_3_BD96A7056100D136_1__CTOR_OFFSET UNITYSDK_OFFSET(0x17D4DD60)

inline static constexpr unsigned int Class_3_BD96A7056100D136_1_TypeDefinitionIndex = 73917;

class Class_3_BD96A7056100D136_1 : public ::RPG::Client::OpenWorld::VolumeParameter_1<::UnityEngine::Color>
{
public:
	::System::Boolean MHIPFCLLDLD; // 0x20
	::System::Boolean KFOEFBPENPP; // 0x21
	::System::Boolean CLBCJFLEAMN; // 0x22

	::System::Void _ctor(::UnityEngine::Color a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + CLASS_3_BD96A7056100D136_1__CTOR_OFFSET))(this, a1);
	}

	::System::Void _ctor_1(::UnityEngine::Color a1, ::System::Boolean a2, ::System::Boolean a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Color, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_BD96A7056100D136_1__CTOR_1_OFFSET))(this, a1, a2, a3, a4);
	}
};
