#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHCAMERAAIMTARGETLIST_METHOD_4_1A1CD5C15A6FE689_OFFSET UNITYSDK_OFFSET(0x1E16D930)
#define RPG_GAMECORE_TARGETFETCHCAMERAAIMTARGETLIST_METHOD_4_99D75E4291C7528C_OFFSET UNITYSDK_OFFSET(0x1E16D830)
#define RPG_GAMECORE_TARGETFETCHCAMERAAIMTARGETLIST_METHOD_4_AAD384370C0954BC_OFFSET UNITYSDK_OFFSET(0x1E16D910)
#define RPG_GAMECORE_TARGETFETCHCAMERAAIMTARGETLIST_METHOD_4_F6CD532782A73221_OFFSET UNITYSDK_OFFSET(0x1E16D8B0)
#define RPG_GAMECORE_TARGETFETCHCAMERAAIMTARGETLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x1E16D8A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchCameraAimTargetList_TypeDefinitionIndex = 23756;

	class TargetFetchCameraAimTargetList : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHCAMERAAIMTARGETLIST__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_99D75E4291C7528C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchCameraAimTargetList*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchCameraAimTargetList*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHCAMERAAIMTARGETLIST_METHOD_4_99D75E4291C7528C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_F6CD532782A73221(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchCameraAimTargetList* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchCameraAimTargetList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHCAMERAAIMTARGETLIST_METHOD_4_F6CD532782A73221_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_AAD384370C0954BC(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchCameraAimTargetList*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchCameraAimTargetList*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHCAMERAAIMTARGETLIST_METHOD_4_AAD384370C0954BC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_1A1CD5C15A6FE689(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchCameraAimTargetList* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchCameraAimTargetList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHCAMERAAIMTARGETLIST_METHOD_4_1A1CD5C15A6FE689_OFFSET))(a1, a2);
		}
	};
}
