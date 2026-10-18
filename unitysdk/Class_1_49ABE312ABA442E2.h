#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftBanCellAxesDirectionType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

#define CLASS_1_49ABE312ABA442E2_METHOD_1_6A7D7B4445BC813E_OFFSET UNITYSDK_OFFSET(0x1C553090)

inline static constexpr unsigned int Class_1_49ABE312ABA442E2_TypeDefinitionIndex = 41646;

class Class_1_49ABE312ABA442E2 : public ::System::Object
{
public:
	static ::System::Boolean Method_1_6A7D7B4445BC813E(::RPG::Client::MechCraft::MechCraftBanCellAxesDirectionType a1, ::UnityEngine::Vector2Int a2, ::UnityEngine::Vector2Int a3, ::UnityEngine::Vector2Int& a4)
	{
		return ((::System::Boolean(*)(::RPG::Client::MechCraft::MechCraftBanCellAxesDirectionType, ::UnityEngine::Vector2Int, ::UnityEngine::Vector2Int, ::UnityEngine::Vector2Int&))((::PBYTE)hIl2Cpp + CLASS_1_49ABE312ABA442E2_METHOD_1_6A7D7B4445BC813E_OFFSET))(a1, a2, a3, a4);
	}
};
