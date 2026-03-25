#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class LittleGameWayPointGraphEdge; }

#define RPG_GAMECORE_LITTLEGAMEWAYPOINTGRAPHCONFIG_METHOD_3_B4BB9CCC6928EBF6_OFFSET UNITYSDK_OFFSET(0x17361580)
#define RPG_GAMECORE_LITTLEGAMEWAYPOINTGRAPHCONFIG_METHOD_3_F1A3FE1C616F18B9_OFFSET UNITYSDK_OFFSET(0x1735B9A0)
#define RPG_GAMECORE_LITTLEGAMEWAYPOINTGRAPHCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1735B970)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameWayPointGraphConfig_TypeDefinitionIndex = 17318;

	class LittleGameWayPointGraphConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::Il2CppArray<::RPG::MVector3>* Points; // 0x10
		::Il2CppArray<::RPG::GameCore::LittleGameWayPointGraphEdge*>* Edges; // 0x18
		::System::Single BezierMaxDistance; // 0x20
		::System::Single BezierContrlRatio; // 0x24
		::System::Single BezierT; // 0x28
		::System::Single BezierMaxAngle; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEWAYPOINTGRAPHCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_B4BB9CCC6928EBF6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameWayPointGraphConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameWayPointGraphConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEWAYPOINTGRAPHCONFIG_METHOD_3_B4BB9CCC6928EBF6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F1A3FE1C616F18B9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameWayPointGraphConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameWayPointGraphConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEWAYPOINTGRAPHCONFIG_METHOD_3_F1A3FE1C616F18B9_OFFSET))(a1, a2);
		}
	};
}
