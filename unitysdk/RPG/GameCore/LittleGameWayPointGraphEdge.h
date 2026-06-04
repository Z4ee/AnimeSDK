#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LITTLEGAMEWAYPOINTGRAPHEDGE_METHOD_2_B46D092D17357DDA_OFFSET UNITYSDK_OFFSET(0x198A2BF0)
#define RPG_GAMECORE_LITTLEGAMEWAYPOINTGRAPHEDGE__CTOR_OFFSET UNITYSDK_OFFSET(0x198A2D10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameWayPointGraphEdge_TypeDefinitionIndex = 17952;

	class LittleGameWayPointGraphEdge : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 PointIndexA; // 0x10
		::System::UInt32 PointIndexB; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEWAYPOINTGRAPHEDGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_B46D092D17357DDA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameWayPointGraphEdge*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameWayPointGraphEdge*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEWAYPOINTGRAPHEDGE_METHOD_2_B46D092D17357DDA_OFFSET))(a1, a2);
		}
	};
}
