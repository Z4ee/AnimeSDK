#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/PedestrianNode.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LEVELPEDESTRIANNODEINFO_METHOD_2_7245DFC047598AC7_OFFSET UNITYSDK_OFFSET(0x173459A0)
#define RPG_GAMECORE_LEVELPEDESTRIANNODEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x17345AF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelPedestrianNodeInfo_TypeDefinitionIndex = 15877;

	class LevelPedestrianNodeInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::MVector3 LocalPosition; // 0x10
		::System::Single Width; // 0x1C
		::System::Single LocalRotationY; // 0x20
		::RPG::GameCore::PedestrianNode NodeType; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPEDESTRIANNODEINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_7245DFC047598AC7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelPedestrianNodeInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelPedestrianNodeInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPEDESTRIANNODEINFO_METHOD_2_7245DFC047598AC7_OFFSET))(a1, a2);
		}
	};
}
