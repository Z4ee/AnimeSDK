#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/OpenWorld/VolumeParameter_1.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define CLASS_3_83B88292D834E4BC_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x146AF7D0)
#define CLASS_3_83B88292D834E4BC_INTERP_OFFSET UNITYSDK_OFFSET(0x146AF8E0)
#define CLASS_3_83B88292D834E4BC_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x146AF7E0)
#define CLASS_3_83B88292D834E4BC__CTOR_OFFSET UNITYSDK_OFFSET(0x146AF850)

inline static constexpr unsigned int Class_3_83B88292D834E4BC_TypeDefinitionIndex = 70615;

class Class_3_83B88292D834E4BC : public ::RPG::Client::OpenWorld::VolumeParameter_1<::UnityEngine::Vector2>
{
public:
	::System::Single Field_3_0; // 0x18
	::System::Single Field_3_1; // 0x1C

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
