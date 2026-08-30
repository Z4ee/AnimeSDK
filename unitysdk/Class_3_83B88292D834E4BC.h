#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/OpenWorld/VolumeParameter_1.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define CLASS_3_83B88292D834E4BC_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x15FFB620)
#define CLASS_3_83B88292D834E4BC_INTERP_OFFSET UNITYSDK_OFFSET(0x15FFB730)
#define CLASS_3_83B88292D834E4BC_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x15FFB630)
#define CLASS_3_83B88292D834E4BC__CTOR_OFFSET UNITYSDK_OFFSET(0x15FFB6A0)

inline static constexpr unsigned int Class_3_83B88292D834E4BC_TypeDefinitionIndex = 73914;

class Class_3_83B88292D834E4BC : public ::RPG::Client::OpenWorld::VolumeParameter_1<::UnityEngine::Vector2>
{
public:
	::System::Single PJKFLONMKED; // 0x18
	::System::Single ENMIPOPKOOL; // 0x1C

	::System::Void _ctor(::UnityEngine::Vector2 a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_83B88292D834E4BC__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::UnityEngine::Vector2 get_value()
	{
		return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_83B88292D834E4BC_GET_VALUE_OFFSET))(this);
	}

	::System::Void set_value(::UnityEngine::Vector2 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_3_83B88292D834E4BC_SET_VALUE_OFFSET))(this, a1);
	}

	::System::Void Interp(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_83B88292D834E4BC_INTERP_OFFSET))(this, a1, a2, a3);
	}
};
