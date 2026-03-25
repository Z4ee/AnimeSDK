#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TARGETFETCHCAMERAANCHORTARGETLIST_METHOD_4_0DBE86CB96046373_OFFSET UNITYSDK_OFFSET(0x177BD9E0)
#define RPG_GAMECORE_TARGETFETCHCAMERAANCHORTARGETLIST_METHOD_4_5968BAE8F1678565_OFFSET UNITYSDK_OFFSET(0x177B37D0)
#define RPG_GAMECORE_TARGETFETCHCAMERAANCHORTARGETLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x177B3780)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchCameraAnchorTargetList_TypeDefinitionIndex = 22303;

	class TargetFetchCameraAnchorTargetList : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHCAMERAANCHORTARGETLIST__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_0DBE86CB96046373(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchCameraAnchorTargetList*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchCameraAnchorTargetList*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHCAMERAANCHORTARGETLIST_METHOD_4_0DBE86CB96046373_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_5968BAE8F1678565(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchCameraAnchorTargetList* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchCameraAnchorTargetList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHCAMERAANCHORTARGETLIST_METHOD_4_5968BAE8F1678565_OFFSET))(a1, a2);
		}
	};
}
