#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SearchEntityType.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TARGETFETCHLASTSEARCHENTITY_METHOD_4_EB28150427823982_OFFSET UNITYSDK_OFFSET(0x18EE4740)
#define RPG_GAMECORE_TARGETFETCHLASTSEARCHENTITY_METHOD_4_EF51959009FCDFE6_OFFSET UNITYSDK_OFFSET(0x18EDD840)
#define RPG_GAMECORE_TARGETFETCHLASTSEARCHENTITY__CTOR_OFFSET UNITYSDK_OFFSET(0x18EDD7F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchLastSearchEntity_TypeDefinitionIndex = 22871;

	class TargetFetchLastSearchEntity : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::RPG::GameCore::SearchEntityType SearchType; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHLASTSEARCHENTITY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_EB28150427823982(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchLastSearchEntity*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchLastSearchEntity*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHLASTSEARCHENTITY_METHOD_4_EB28150427823982_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_EF51959009FCDFE6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchLastSearchEntity* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchLastSearchEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHLASTSEARCHENTITY_METHOD_4_EF51959009FCDFE6_OFFSET))(a1, a2);
		}
	};
}
