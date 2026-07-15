#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::GameCore { class LevelSmartObjectPointInfo; }

#define CLASS_1_2AB9BCA81E3BF60F_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16E347A0)
#define CLASS_1_2AB9BCA81E3BF60F_METHOD_1_0B28C9A2CBDF8E59_OFFSET UNITYSDK_OFFSET(0x16E347E0)
#define CLASS_1_2AB9BCA81E3BF60F_METHOD_1_413F493333BF3391_OFFSET UNITYSDK_OFFSET(0x16E34810)
#define CLASS_1_2AB9BCA81E3BF60F_METHOD_1_D37FAD0A6AA04B25_OFFSET UNITYSDK_OFFSET(0x16E347F0)
#define CLASS_1_2AB9BCA81E3BF60F__CTOR_OFFSET UNITYSDK_OFFSET(0x16E34560)

inline static constexpr unsigned int Class_1_2AB9BCA81E3BF60F_TypeDefinitionIndex = 49741;

class Class_1_2AB9BCA81E3BF60F : public ::System::Object
{
public:
	::RPG::GameCore::LevelSmartObjectPointInfo* Field_1_0; // 0x10
	::UnityEngine::Vector3 Field_1_1; // 0x18
	::UnityEngine::Quaternion Field_1_2; // 0x24

	::System::Void _ctor(::RPG::GameCore::LevelSmartObjectPointInfo* a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelSmartObjectPointInfo*, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_2AB9BCA81E3BF60F__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2AB9BCA81E3BF60F_DISPOSE_OFFSET))(this);
	}

	::RPG::GameCore::LevelSmartObjectPointInfo* Method_1_0B28C9A2CBDF8E59()
	{
		return ((::RPG::GameCore::LevelSmartObjectPointInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2AB9BCA81E3BF60F_METHOD_1_0B28C9A2CBDF8E59_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_D37FAD0A6AA04B25()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2AB9BCA81E3BF60F_METHOD_1_D37FAD0A6AA04B25_OFFSET))(this);
	}

	::UnityEngine::Quaternion Method_1_413F493333BF3391()
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2AB9BCA81E3BF60F_METHOD_1_413F493333BF3391_OFFSET))(this);
	}
};
