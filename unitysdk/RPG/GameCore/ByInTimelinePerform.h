#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BYINTIMELINEPERFORM_METHOD_4_30D96221BE09F8C6_OFFSET UNITYSDK_OFFSET(0x1874C860)
#define RPG_GAMECORE_BYINTIMELINEPERFORM_METHOD_4_FE43C45240E2DD98_OFFSET UNITYSDK_OFFSET(0x1874C780)
#define RPG_GAMECORE_BYINTIMELINEPERFORM__CTOR_OFFSET UNITYSDK_OFFSET(0x1874C800)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByInTimelinePerform_TypeDefinitionIndex = 22277;

	class ByInTimelinePerform : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Boolean OnlyCloseupShot; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYINTIMELINEPERFORM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_FE43C45240E2DD98(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByInTimelinePerform*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByInTimelinePerform*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYINTIMELINEPERFORM_METHOD_4_FE43C45240E2DD98_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_30D96221BE09F8C6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByInTimelinePerform* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByInTimelinePerform*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYINTIMELINEPERFORM_METHOD_4_30D96221BE09F8C6_OFFSET))(a1, a2);
		}
	};
}
