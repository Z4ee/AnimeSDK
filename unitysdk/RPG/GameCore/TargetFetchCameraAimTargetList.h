#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TARGETFETCHCAMERAAIMTARGETLIST_METHOD_4_9F82A993A8CCA47F_OFFSET UNITYSDK_OFFSET(0x177BD920)
#define RPG_GAMECORE_TARGETFETCHCAMERAAIMTARGETLIST_METHOD_4_F6CD532782A73221_OFFSET UNITYSDK_OFFSET(0x177B3660)
#define RPG_GAMECORE_TARGETFETCHCAMERAAIMTARGETLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x177B3610)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchCameraAimTargetList_TypeDefinitionIndex = 22304;

	class TargetFetchCameraAimTargetList : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHCAMERAAIMTARGETLIST__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_9F82A993A8CCA47F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchCameraAimTargetList*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchCameraAimTargetList*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHCAMERAAIMTARGETLIST_METHOD_4_9F82A993A8CCA47F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_F6CD532782A73221(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchCameraAimTargetList* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchCameraAimTargetList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHCAMERAAIMTARGETLIST_METHOD_4_F6CD532782A73221_OFFSET))(a1, a2);
		}
	};
}
