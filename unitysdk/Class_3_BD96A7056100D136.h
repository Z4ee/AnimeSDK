#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/OpenWorld/VolumeParameter_1.h"
#include "unitysdk/UnityEngine/Color.h"

#define CLASS_3_BD96A7056100D136_INTERP_OFFSET UNITYSDK_OFFSET(0x1599D360)
#define CLASS_3_BD96A7056100D136__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1599D2E0)
#define CLASS_3_BD96A7056100D136__CTOR_OFFSET UNITYSDK_OFFSET(0x1599D280)

inline static constexpr unsigned int Class_3_BD96A7056100D136_TypeDefinitionIndex = 73917;

class Class_3_BD96A7056100D136 : public ::RPG::Client::OpenWorld::VolumeParameter_1<::UnityEngine::Color>
{
public:
	::System::Boolean MHIPFCLLDLD; // 0x20
	::System::Boolean KFOEFBPENPP; // 0x21
	::System::Boolean CLBCJFLEAMN; // 0x22

	::System::Void _ctor(::UnityEngine::Color a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + CLASS_3_BD96A7056100D136__CTOR_OFFSET))(this, a1);
	}

	::System::Void _ctor_1(::UnityEngine::Color a1, ::System::Boolean a2, ::System::Boolean a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Color, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_BD96A7056100D136__CTOR_1_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Interp(::UnityEngine::Color a1, ::UnityEngine::Color a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Color, ::UnityEngine::Color, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_BD96A7056100D136_INTERP_OFFSET))(this, a1, a2, a3);
	}
};
