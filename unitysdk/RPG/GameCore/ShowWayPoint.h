#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_SHOWWAYPOINT_METHOD_3_9C10471920C4EB3E_OFFSET UNITYSDK_OFFSET(0x18E6B2B0)
#define RPG_GAMECORE_SHOWWAYPOINT_METHOD_3_DB6720C45130C2F4_OFFSET UNITYSDK_OFFSET(0x18E6B1F0)
#define RPG_GAMECORE_SHOWWAYPOINT__CTOR_OFFSET UNITYSDK_OFFSET(0x18E6B260)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowWayPoint_TypeDefinitionIndex = 19855;

	class ShowWayPoint : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Int32 MinRange; // 0x20
		::System::Int32 MaxRange; // 0x24
		::System::String* IconPath; // 0x28
		::System::String* PrefabPath; // 0x30
		::RPG::MVector3 Offset; // 0x38
		::System::Boolean OnNameBoard; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWWAYPOINT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_DB6720C45130C2F4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowWayPoint*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowWayPoint*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWWAYPOINT_METHOD_3_DB6720C45130C2F4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_9C10471920C4EB3E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowWayPoint* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowWayPoint*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWWAYPOINT_METHOD_3_9C10471920C4EB3E_OFFSET))(a1, a2);
		}
	};
}
