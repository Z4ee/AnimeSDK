#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_LEVELPEDESTRIANV2INTERSECTIONCROWDANCHORINFO_METHOD_2_5A082B1DFD71FE48_OFFSET UNITYSDK_OFFSET(0x1D1E8830)
#define RPG_GAMECORE_LEVELPEDESTRIANV2INTERSECTIONCROWDANCHORINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1E89D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelPedestrianV2IntersectionCrowdAnchorInfo_TypeDefinitionIndex = 17115;

	class LevelPedestrianV2IntersectionCrowdAnchorInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::MVector3 Position; // 0x10
		::RPG::MVector3 Rotation; // 0x1C
		::System::String* AnimName; // 0x28
		::System::String* FeatureID; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPEDESTRIANV2INTERSECTIONCROWDANCHORINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_5A082B1DFD71FE48(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelPedestrianV2IntersectionCrowdAnchorInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelPedestrianV2IntersectionCrowdAnchorInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPEDESTRIANV2INTERSECTIONCROWDANCHORINFO_METHOD_2_5A082B1DFD71FE48_OFFSET))(a1, a2);
		}
	};
}
