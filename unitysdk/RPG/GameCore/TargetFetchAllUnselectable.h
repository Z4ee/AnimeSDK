#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TARGETFETCHALLUNSELECTABLE_METHOD_4_0AC30D39FA8FD377_OFFSET UNITYSDK_OFFSET(0x177B27F0)
#define RPG_GAMECORE_TARGETFETCHALLUNSELECTABLE_METHOD_4_6872DF14EF880888_OFFSET UNITYSDK_OFFSET(0x177BD0A0)
#define RPG_GAMECORE_TARGETFETCHALLUNSELECTABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x177B27A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchAllUnselectable_TypeDefinitionIndex = 22214;

	class TargetFetchAllUnselectable : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::RPG::GameCore::TargetEvaluator* SourceEntity; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHALLUNSELECTABLE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_6872DF14EF880888(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchAllUnselectable*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchAllUnselectable*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHALLUNSELECTABLE_METHOD_4_6872DF14EF880888_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_0AC30D39FA8FD377(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchAllUnselectable* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchAllUnselectable*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHALLUNSELECTABLE_METHOD_4_0AC30D39FA8FD377_OFFSET))(a1, a2);
		}
	};
}
