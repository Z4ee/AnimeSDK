#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TARGETMAPBETWEENENTITY_METHOD_3_93EC175E71EFBC56_OFFSET UNITYSDK_OFFSET(0x177C2470)
#define RPG_GAMECORE_TARGETMAPBETWEENENTITY_METHOD_3_F0A7C2AA06DC8194_OFFSET UNITYSDK_OFFSET(0x177C2390)
#define RPG_GAMECORE_TARGETMAPBETWEENENTITY__CTOR_OFFSET UNITYSDK_OFFSET(0x177C2450)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetMapBetweenEntity_TypeDefinitionIndex = 22300;

	class TargetMapBetweenEntity : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPBETWEENENTITY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_F0A7C2AA06DC8194(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetMapBetweenEntity*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetMapBetweenEntity*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPBETWEENENTITY_METHOD_3_F0A7C2AA06DC8194_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_93EC175E71EFBC56(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetMapBetweenEntity* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetMapBetweenEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPBETWEENENTITY_METHOD_3_93EC175E71EFBC56_OFFSET))(a1, a2);
		}
	};
}
