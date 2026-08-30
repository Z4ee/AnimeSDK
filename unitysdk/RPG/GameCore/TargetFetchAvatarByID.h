#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHAVATARBYID_METHOD_4_1CFA028F233AF154_OFFSET UNITYSDK_OFFSET(0x1E16CC10)
#define RPG_GAMECORE_TARGETFETCHAVATARBYID_METHOD_4_3E7C531D3F0077A0_OFFSET UNITYSDK_OFFSET(0x1E16CBC0)
#define RPG_GAMECORE_TARGETFETCHAVATARBYID_METHOD_4_88963003C2500C51_OFFSET UNITYSDK_OFFSET(0x1E16CA60)
#define RPG_GAMECORE_TARGETFETCHAVATARBYID_METHOD_4_939DA2276DAB0093_OFFSET UNITYSDK_OFFSET(0x1E16CAC0)
#define RPG_GAMECORE_TARGETFETCHAVATARBYID__CTOR_OFFSET UNITYSDK_OFFSET(0x1E16CAB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchAvatarByID_TypeDefinitionIndex = 23688;

	class TargetFetchAvatarByID : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::UInt32 AvatarID; // 0x10
		::RPG::GameCore::DynamicFloat* EnhancedID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHAVATARBYID__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_88963003C2500C51(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchAvatarByID*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchAvatarByID*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHAVATARBYID_METHOD_4_88963003C2500C51_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_939DA2276DAB0093(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchAvatarByID* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchAvatarByID*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHAVATARBYID_METHOD_4_939DA2276DAB0093_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_3E7C531D3F0077A0(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAvatarByID*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAvatarByID*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHAVATARBYID_METHOD_4_3E7C531D3F0077A0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_1CFA028F233AF154(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAvatarByID* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAvatarByID*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHAVATARBYID_METHOD_4_1CFA028F233AF154_OFFSET))(a1, a2);
		}
	};
}
