#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TARGETFETCHFIGHTMVPENTITY_METHOD_4_930D0B5E7803B3B6_OFFSET UNITYSDK_OFFSET(0x18EE43E0)
#define RPG_GAMECORE_TARGETFETCHFIGHTMVPENTITY_METHOD_4_BDBA263FDA0B1674_OFFSET UNITYSDK_OFFSET(0x18EDD270)
#define RPG_GAMECORE_TARGETFETCHFIGHTMVPENTITY__CTOR_OFFSET UNITYSDK_OFFSET(0x18EDD220)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchFightMVPEntity_TypeDefinitionIndex = 22996;

	class TargetFetchFightMVPEntity : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHFIGHTMVPENTITY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_930D0B5E7803B3B6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchFightMVPEntity*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchFightMVPEntity*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHFIGHTMVPENTITY_METHOD_4_930D0B5E7803B3B6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_BDBA263FDA0B1674(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchFightMVPEntity* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchFightMVPEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHFIGHTMVPENTITY_METHOD_4_BDBA263FDA0B1674_OFFSET))(a1, a2);
		}
	};
}
