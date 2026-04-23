#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TARGETFETCHALLUNSELECTABLE_METHOD_4_2473FFD13E617822_OFFSET UNITYSDK_OFFSET(0x18EE2F90)
#define RPG_GAMECORE_TARGETFETCHALLUNSELECTABLE_METHOD_4_3B632F7263A2ADEE_OFFSET UNITYSDK_OFFSET(0x18EDACD0)
#define RPG_GAMECORE_TARGETFETCHALLUNSELECTABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x18EDAC80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchAllUnselectable_TypeDefinitionIndex = 22928;

	class TargetFetchAllUnselectable : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::RPG::GameCore::TargetEvaluator* SourceEntity; // 0x10
		::System::Boolean RemoveForceUnselectable; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHALLUNSELECTABLE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_2473FFD13E617822(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchAllUnselectable*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchAllUnselectable*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHALLUNSELECTABLE_METHOD_4_2473FFD13E617822_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_3B632F7263A2ADEE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchAllUnselectable* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchAllUnselectable*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHALLUNSELECTABLE_METHOD_4_3B632F7263A2ADEE_OFFSET))(a1, a2);
		}
	};
}
