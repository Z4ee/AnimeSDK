#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_SHOWWAYPOINTBYPROP_METHOD_3_838CD773E264A718_OFFSET UNITYSDK_OFFSET(0x1D533920)
#define RPG_GAMECORE_SHOWWAYPOINTBYPROP_METHOD_3_F62CCBBED8F88C0C_OFFSET UNITYSDK_OFFSET(0x1D533990)
#define RPG_GAMECORE_SHOWWAYPOINTBYPROP__CTOR_OFFSET UNITYSDK_OFFSET(0x1D533970)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowWaypointByProp_TypeDefinitionIndex = 20635;

	class ShowWaypointByProp : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean UseOwnerEntity; // 0x20
		::RPG::GameCore::DynamicFloat* GroupID; // 0x28
		::RPG::GameCore::DynamicFloat* InstanceID; // 0x30
		::RPG::GameCore::DynamicString* PropKey; // 0x38
		::System::Int32 MinRange; // 0x40
		::System::Int32 MaxRange; // 0x44
		::System::String* IconPath; // 0x48
		::RPG::MVector3 Offset; // 0x50
		::System::Boolean OnNameBoard; // 0x5C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWWAYPOINTBYPROP__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_838CD773E264A718(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowWaypointByProp*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowWaypointByProp*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWWAYPOINTBYPROP_METHOD_3_838CD773E264A718_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F62CCBBED8F88C0C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowWaypointByProp* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowWaypointByProp*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWWAYPOINTBYPROP_METHOD_3_F62CCBBED8F88C0C_OFFSET))(a1, a2);
		}
	};
}
