#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHCAMERAANCHORTARGETLIST_METHOD_4_5968BAE8F1678565_OFFSET UNITYSDK_OFFSET(0x1D0B8BD0)
#define RPG_GAMECORE_TARGETFETCHCAMERAANCHORTARGETLIST_METHOD_4_75D40FE85A885BA0_OFFSET UNITYSDK_OFFSET(0x1D0B8B50)
#define RPG_GAMECORE_TARGETFETCHCAMERAANCHORTARGETLIST_METHOD_4_7C9618750B899948_OFFSET UNITYSDK_OFFSET(0x1D0B8C30)
#define RPG_GAMECORE_TARGETFETCHCAMERAANCHORTARGETLIST_METHOD_4_B2B5962AE26E5E95_OFFSET UNITYSDK_OFFSET(0x1D0B8C50)
#define RPG_GAMECORE_TARGETFETCHCAMERAANCHORTARGETLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0B8BC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchCameraAnchorTargetList_TypeDefinitionIndex = 23175;

	class TargetFetchCameraAnchorTargetList : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHCAMERAANCHORTARGETLIST__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_75D40FE85A885BA0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchCameraAnchorTargetList*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchCameraAnchorTargetList*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHCAMERAANCHORTARGETLIST_METHOD_4_75D40FE85A885BA0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_5968BAE8F1678565(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchCameraAnchorTargetList* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchCameraAnchorTargetList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHCAMERAANCHORTARGETLIST_METHOD_4_5968BAE8F1678565_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_7C9618750B899948(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchCameraAnchorTargetList*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchCameraAnchorTargetList*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHCAMERAANCHORTARGETLIST_METHOD_4_7C9618750B899948_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_B2B5962AE26E5E95(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchCameraAnchorTargetList* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchCameraAnchorTargetList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHCAMERAANCHORTARGETLIST_METHOD_4_B2B5962AE26E5E95_OFFSET))(a1, a2);
		}
	};
}
