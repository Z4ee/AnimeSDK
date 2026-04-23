#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TARGETFETCHPARAMENTITY_METHOD_4_5BF02158D87A5956_OFFSET UNITYSDK_OFFSET(0x18EE52E0)
#define RPG_GAMECORE_TARGETFETCHPARAMENTITY_METHOD_4_B8ABCCA46D671E94_OFFSET UNITYSDK_OFFSET(0x18EDEDB0)
#define RPG_GAMECORE_TARGETFETCHPARAMENTITY__CTOR_OFFSET UNITYSDK_OFFSET(0x18EDED60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchParamEntity_TypeDefinitionIndex = 22905;

	class TargetFetchParamEntity : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHPARAMENTITY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_5BF02158D87A5956(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchParamEntity*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchParamEntity*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHPARAMENTITY_METHOD_4_5BF02158D87A5956_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_B8ABCCA46D671E94(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchParamEntity* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchParamEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHPARAMENTITY_METHOD_4_B8ABCCA46D671E94_OFFSET))(a1, a2);
		}
	};
}
