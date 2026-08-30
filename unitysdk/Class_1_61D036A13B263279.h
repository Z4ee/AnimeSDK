#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::GameCore { class LevelSmartObjectCommonPointInfo; }

#define CLASS_1_61D036A13B263279_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1A837FF0)
#define CLASS_1_61D036A13B263279_METHOD_1_413F493333BF3391_OFFSET UNITYSDK_OFFSET(0x1A838020)
#define CLASS_1_61D036A13B263279_METHOD_1_D37FAD0A6AA04B25_OFFSET UNITYSDK_OFFSET(0x1A838000)
#define CLASS_1_61D036A13B263279__CTOR_OFFSET UNITYSDK_OFFSET(0x1A837DB0)

inline static constexpr unsigned int Class_1_61D036A13B263279_TypeDefinitionIndex = 52398;

class Class_1_61D036A13B263279 : public ::System::Object
{
public:
	::System::UInt32 ANOPNMFJLMI; // 0x10
	::UnityEngine::Quaternion NCMEPPHLGEG; // 0x14
	::UnityEngine::Vector3 MIFKHBDOGLN; // 0x24

	::System::Void _ctor(::RPG::GameCore::LevelSmartObjectCommonPointInfo* a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelSmartObjectCommonPointInfo*, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_61D036A13B263279__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_61D036A13B263279_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_D37FAD0A6AA04B25()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_61D036A13B263279_METHOD_1_D37FAD0A6AA04B25_OFFSET))(this);
	}

	::UnityEngine::Quaternion Method_1_413F493333BF3391()
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_61D036A13B263279_METHOD_1_413F493333BF3391_OFFSET))(this);
	}
};
