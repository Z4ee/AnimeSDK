#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::GameCore { class GameEntity; }

#define STRUCT_2_3FE5D7A869A0D526_METHOD_2_7DFB4B9C80198D98_OFFSET UNITYSDK_OFFSET(0x14E6A10)
#define STRUCT_2_3FE5D7A869A0D526_METHOD_2_D7B7C909A67BD350_OFFSET UNITYSDK_OFFSET(0x14E6950)
#define STRUCT_2_3FE5D7A869A0D526__CTOR_1_OFFSET UNITYSDK_OFFSET(0x14E6930)
#define STRUCT_2_3FE5D7A869A0D526__CTOR_OFFSET UNITYSDK_OFFSET(0x14E6910)

inline static constexpr unsigned int Struct_2_3FE5D7A869A0D526_TypeDefinitionIndex = 45852;

struct alignas(8) Struct_2_3FE5D7A869A0D526
{
	::UnityEngine::Vector3 Field_2_0; // 0x10
	::RPG::GameCore::GameEntity* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + STRUCT_2_3FE5D7A869A0D526__CTOR_OFFSET))(this, a1);
	}

	::System::Void _ctor_1(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + STRUCT_2_3FE5D7A869A0D526__CTOR_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_D7B7C909A67BD350()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_3FE5D7A869A0D526_METHOD_2_D7B7C909A67BD350_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_2_7DFB4B9C80198D98()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_3FE5D7A869A0D526_METHOD_2_7DFB4B9C80198D98_OFFSET))(this);
	}
};
