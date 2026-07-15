#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/OpenWorld/VolumeParameter_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_3_B27FAFE88E7ED0ED_INTERP_OFFSET UNITYSDK_OFFSET(0x17DA89F0)
#define CLASS_3_B27FAFE88E7ED0ED__CTOR_OFFSET UNITYSDK_OFFSET(0x17DA8970)

inline static constexpr unsigned int Class_3_B27FAFE88E7ED0ED_TypeDefinitionIndex = 70621;

class Class_3_B27FAFE88E7ED0ED : public ::RPG::Client::OpenWorld::VolumeParameter_1<::UnityEngine::Vector3>
{
public:
	::System::Void _ctor(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_3_B27FAFE88E7ED0ED__CTOR_OFFSET))(this, a1);
	}

	::System::Void Interp(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_B27FAFE88E7ED0ED_INTERP_OFFSET))(this, a1, a2, a3);
	}
};
